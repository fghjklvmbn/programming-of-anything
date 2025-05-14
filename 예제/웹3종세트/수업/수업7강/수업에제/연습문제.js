let canvas = document.getElementById("mycanvas");
let context = canvas.getContext("2d");

let x1=50;
let y1=50;

let x = 0;
let y = 0;
for(let i = 0; i < 3; i++){
    context.beginPath();
    context.moveTo(x1,y1);
    context.arc(x,y, 5,0,2*Math.PI);
    context.stroke();
    x1 += 50;
    y1 += 50;
}

for(let i = 0; i < 2; i++){
    
}