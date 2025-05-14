let canvas = document.getElementById("myCanvas");
let context = canvas.getContext("2d");

context.beginPath();
context.strokeStyle = "blue";
context.arc(100,75, 20, 0, 1.5*Math.PI, false);
context.stroke();

context.beginPath();
context.strokeStyle = "blue";
context.arc(100,75, 50, Math.PI/2, 1.5 * Math.PI, true);
context.closePath();
context.stroke();