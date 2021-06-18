const canvas = document.getElementById("canvas");
const ctx = canvas.getContext("2d");
const num = 32;
var score = 0;
let apple = new Image();
let background = new Image();
apple.src = "img/food.png";
background.src = "img/ground.png";
let deadSound = new Audio();
deadSound.src = "./audio/dead.mp3";
deadSound.play();
var snake = [];
snake[0] = { x: 9 * num, y: 10 * num };
var food = {
    x: Math.floor(Math.random() * 17 + 1) * num,
    y: Math.floor(Math.random() * 15 + 3) * num
}

var a = [1, 2, 3]
a.unshift(9);
a.pop();
a.push(5);
a.pop();
a.push(4);
console.log(a);

function draw() {
    ctx.drawImage(background, 0, 0);
    for (var i = 0; i < snake.length; i++) {
        ctx.fillStyle = (i == 0) ? "white" : "green";
        ctx.fillRect(snake[i].x, snake[i].y, num, num);
        ctx.stokeStyle = "white";
        ctx.strokeRect(snake[i].x, snake[i].y, num, num);

    }

    ctx.drawImage(apple, food.x, food.y);
    ctx.font = "45px Arial";
    ctx.fillStyle = "white";
    ctx.fillText(score, 2 * num, 1.6 * num);

    var snakeX = snake[0].x;
    var snakeY = snake[0].y;

    if(d == "left")snakeX -= num;
    if(d == "up")snakeY -= num;
    if(d == "right")snakeX += num;
    if(d == "down")snakeY += num;

    if(snakeX == food.x && snakeY == food.y){
        score ++;
        food = {
            x: Math.floor(Math.random() * 17 + 1) * num,
            y: Math.floor(Math.random() * 15 + 3) * num
        }
    }else{
        snake.pop();
    }

    if(snakeX < num || snakeY > 17 * num || snakeY < 3 * num || snakeY > 17 * num){
        clearInterval(game);
    }

    var newHead = {
        x:snakeX,
        y:snakeY
    };
    snake.unshift(newHead);
}



var d;
document.addEventListener("keydown", CTRL);
function CTRL(event) {
    if (event.keyCode == 37 && d != "right") {       //left
        d = "left";
    }
    if (event.keyCode == 38 && d != "down") {       //up
        d = "up";
    }
    if (event.keyCode == 39 && d != "left") {       //right
        d = "right";
    }
    if (event.keyCode == 40 && d != "up") {       //down
        d = "down";
    }
}

function collision(newHead, snake){
    for(var j = 0; j < snake.length; j++){
        if(newHead.x == snake[j].x && newHead.y == snake[j].y){
            return true;
        }
    }
    return false;
}

ctx.fillStyle = "#921AFF";
ctx.fillRect(5 * num, 5 * num, num, num);

var game = setInterval(draw, 100);

//console.log(apple);