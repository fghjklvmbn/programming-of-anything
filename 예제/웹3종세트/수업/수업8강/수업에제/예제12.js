function whatkeydown(e){
    let str = "";
    let div = document.getElementById("div");
    div.innerHTML = "";
    str += "e.key = " + e.key + "<br>";
    str += "e.code = " + e.code + "<br>";
    div.innerHTML = str;
}