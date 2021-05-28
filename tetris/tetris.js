const canvas = document.getElementById("tetris");
const ctx = canvas.getContext("2d");
const SQ = 20;
const ROW = 20;
const COLUMN = 10;
const VACANT = "white";
const PIECES = [
    [I, "green"],           //I --> [0,0]
    [L, "yellow"],          //yellow --> [1,1]
    [T, "blue"],            //T --> [2,0]
    [J, "red"],
    [O, "brown"],
    [Z, "pink"],
    [S, "orange"]
];
var gameOver = false;
var score = 0;

function randomPiece() {
    var randomN = Math.floor(Math.random() * PIECES.length);    //1-6(Integer)
    return new Piece(PIECES[randomN][0], PIECES[randomN][1]);
}

var b = randomPiece();
function drawSquare(squareX, squareY, squareColor) {
    ctx.fillStyle = squareColor;
    ctx.fillRect(squareX * SQ, squareY * SQ, SQ, SQ);
    ctx.stokeStyle = "black";
    ctx.strokeRect(squareX * SQ, squareY * SQ, SQ, SQ);
}

var board = [];
for (var r = 0; r < ROW; r++) {
    board[r] = [];
    for (var c = 0; c < COLUMN; c++) {
        board[r][c] = VACANT;
    }
}
function drawBoard() {
    for (var r = 0; r < ROW; r++) {
        for (var c = 0; c < COLUMN; c++) {
            drawSquare(c, r, board[r][c]);
        }
    }
}
drawBoard();

function Piece(block, color) {
    this.block = block;
    this.color = color;
    this.blockN = 0;
    this.activeBlock = this.block[this.blockN];
    this.x = 3;
    this.y = -2;
}
Piece.prototype.fill = function (color) {
    for (var r = 0; r < this.activeBlock.length; r++) {
        for (var c = 0; c < this.activeBlock.length; c++) {
            if (this.activeBlock[r][c])
                drawSquare(this.x + c, this.y + r, color);

        }
    }

}

Piece.prototype.undraw = function () {
    this.fill(VACANT);
}

Piece.prototype.draw = function () {
    this.fill(this.color);
}

Piece.prototype.collision = function (x, y, piece) {
    for (var r = 0; r < piece.length; r++) {
        for (var c = 0; c < piece.length; c++) {
            if (!piece[r][c]) {
                continue;
            }
            var newY = this.y + r + y;
            var newX = this.x + c + x;
            //condition
            if (newX < 0 || newX > COLUMN || newY >= ROW) {
                return true;
            }
            //skip
            if (newY < 0) {
                continue;
            }
            //check around is not vacant
            if (board[newY][newX] != VACANT) {
                return true;
            }
        }
    }
    return false;
}
Piece.prototype.moveRight = function () {
    if (!this.collision(1, 0, this.activeBlock)) {
        this.undraw();
        this.x++;
        this.draw();
    }
}
Piece.prototype.moveLeft = function () {
    if (!this.collision(-1, 0, this.activeBlock)) {
        this.undraw();
        this.x--;
        this.draw();
    }
}
Piece.prototype.moveDown = function () {
    if (!this.collision(0, 1, this.activeBlock)) {
        this.undraw();
        this.y++;
        this.draw();
    }
    else{
        this.stop();
        b = randomPiece();          //2nd piece
    }
}

Piece.prototype.rotate = function () {
    var move = 0;
    var blockRotate = this.block[(this.blockN + 1) % this.block.length];    //1,2,3,0,1,2...
    if (this.collision(0, 0, blockRotate)) {
        if (this.x > COLUMN / 2) {
            move = -1;
        }
        else {
            move = 1;
        }
    }
    if (!this.collision(move, 0, blockRotate)) {
        this.undraw();
        this.x += move;
        this.blockN = (this.blockN + 1) % this.block.length;
        this.activeBlock = this.block[this.blockN];
        this.draw();
    }
}

Piece.prototype.stop = function () {
    for (var r = 0; r < this.activeBlock.length; r++) {
        for (var c = 0; c < this.activeBlock.length; c++) {
            if (!this.activeBlock[r][c])
                continue;
            
            if (this.y + r < 0){                //full
                gameOver = true;
                alert("GAME OVER");
                break;
            }
            board[this.y + r][this.x + c] = this.color;
        }
    }
    for (var r = 0; r < ROW; r++) {
        var rowFull = true;
        for (var c = 0; c < COLUMN; c++) {
            rowFull = rowFull && (board[r][c] != VACANT);
        }
        if (rowFull){
            for (var y = r; y > 1; y--) {
                for (var c = 0; c < COLUMN; c++) {
                    board[y][c] = board[y-1][c];
                }
            }
            for (var c = 0; c < COLUMN; c++){
                board[0][c] = VACANT;
            }
            score += 10;
        }
    }
    drawBoard();
    document.getElementById("score").innerHTML = score;
}

document.addEventListener("keydown", CTRL);
function CTRL(event) {
    if (event.keyCode == 37) {       //left
        b.moveLeft();
        dropStart = Date.now();
    }
    if (event.keyCode == 38) {       //up
        b.rotate();
        dropStart = Date.now();
    }
    if (event.keyCode == 39) {       //right
        b.moveRight();
        dropStart = Date.now();
    }
    if (event.keyCode == 40) {       //down
        b.moveDown();
    }
}

/*let IBlock = new Piece(I, "green");
let TBlock = new Piece(T, "blue");
let JBlock = new Piece(J, "red");
let OBlock = new Piece(O, "brown");
let LBlock = new Piece(L, "yellow");
let ZBlock = new Piece(Z, "pink");
let SBlock = new Piece(S, "orange");*/
//TBlock.draw();
var dropStart = Date.now();
var gameOver = false;
function drop() {
    var now = Date.now();
    var delta = now - dropStart;
    if (delta > 1000) {             //1 sec
        b.moveDown();
        dropStart = Date.now();
    }
    if (!gameOver) {
        requestAnimationFrame(drop);
    }
}
drop();