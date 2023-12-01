let canvas = null;
let context = null;

window.onload = init();

function init(){
    canvas = document.getElementById("mycanvas");
    context = canvas.getContext("2d");
}

function draw(){
    let x = document.getElementById("x").value;
    let y = document.getElementById("y").value;
    let r = document.getElementById("r").value;
    let trueorfalse = document.getElementById("trueorfalse").value;
    trueorfalse = (trueorfalse.value = "true")?true:false;
    let start = document.getElementById("start").value;
    start = parseInt(start)*Math.PI/180;
    let end = document.getElementById("end").value;
    end = parseInt(end)*Math.PI/180;
    let lineWidth = document.getElementById("lineWidth").value;
    let color = document.getElementById("color").value;


    context.beginPath();
    context.strokeStyle = "blue";
    context.arc(x,y,r,start,end, trueorfalse);
    context.lineWidth = lineWidth;
    context.color = color;
    context.stroke();
}

function clear(){
    if(canvas == null || context == null){
        return;
    }
    context.clearRect(0,0, canvas.width, canvas.height);
}
