let canvas = document.getElementById("mycanvas");
let context = canvas.getContext("2d");

context.beginPath();
context.moveTo(120,20);
context.lineTo(150,50);
context.strokeStyle = "blue";
context.stroke();

context.beginPath();
context.rect(20,80,120,50);
context.lineWidth = 10;
context.strokeStyle = "yellow";
context.stroke();

context.beginPath();
context.arc(80,220,50,0,1.5*Math.PI);
context.lineWidth = 20;
context.strokeStyle = "violet";
context.stroke();