let canvas = document.getElementById("mycanvas");
let context = canvas.getContext("2d");

context.fillStyle = "violet";
context.fillRect(20,20,100,100);

context.beginPath();
context.rect(20,150,100,100);
context.fillStyle = "violet";
context.fill();

context.strokeStyle = "grey";
context.lineWidth = 10;
context.stroke();

context.beginPath();
context.moveTo(80,340);
context.arc(80,340,50,0, 1.5*Math.PI);
context.closePath();

context.fillStyle = "yellowgreen";
context.fill();

context.strokeStyle = "grey";
context.lineWidth = 20;
context.stroke();
