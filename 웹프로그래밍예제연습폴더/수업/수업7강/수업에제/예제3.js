let canvas = document.getElementById("myCanvas");
let context = canvas.getContext("2d");

// context.beginPath();
// context.strokeStyle = "blue";
// context.moveTo(120, 20);
// context.lineTo(20,50);
// context.lineTo(150,120);
// context.lineTo(120, 20);
// context.stroke();

//
context.beginPath();
context.strokeStyle = "blue";
context.moveTo(120, 20);
context.lineTo(20,50);
context.lineTo(150,120);
context.closePath();
context.stroke();