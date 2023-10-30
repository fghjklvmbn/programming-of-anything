let div = document.getElementById("div");

function where (e){
    let text = "버튼 = " + e.button + "<br>";
    text += "(Scrrenx, Scrreny) = " + e.screenX + "," + e.screenY + "<br>";
    text += "(cilentx, cilenty) = " + e.clientX + "," + e.clientY + "<br>";
    text += "(offsetx, offsety) = " + e.offsetX + "," + e.offsetY + "<br>";
    text += "(x, y) = " + e.x + "," + e.y + "\n";
    div.innerHTML = text;
}

function out(e){
    let text = "대기";
    div.innerHTML = text;
}
