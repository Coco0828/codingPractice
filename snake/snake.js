const canvas = document.getElementById("canvas");
const ctx = canvas.getContext("2d");
const num = 32;
let apple = new Image();
let background = new Image();
apple.src = "img/food.png";
background.src = "img/ground.png";
let deadSound = new Audio();
deadSound.src = "./audio/dead.mp3";
deadSound.play();
var snake = [];
snake[0] = { x: 9 * num, y: 10 * num };
snake[1] = { x: 10 * num, y: 10 * num };
snake[2] = { x: 11 * num, y: 10 * num };

for (var j = 0; j < 20; j++) {
    console.log(Math.floor(Math.random() * 17 + 1));
    console.log(Math.floor(Math.random() * 15 + 3));
}
function draw() {
    ctx.drawImage(background, 0, 0);
    for (var i = 0; i < snake.length; i++) {
        ctx.fillStyle = (i == 0) ? "white" : "green";
        ctx.fillRect(snake[i].x, snake[i].y, num, num);
        ctx.stokeStyle = "white";
        ctx.strokeRect(snake[i].x, snake[i].y, num, num);
    }
}

ctx.fillStyle = "#921AFF";
ctx.fillRect(5 * num, 5 * num, num, num);

var game = setInterval(draw, 100);

//console.log(apple);