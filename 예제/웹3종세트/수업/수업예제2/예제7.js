let files = ["apple.jpeg", "banana.jpeg"];
let imgs = new Array();
for(let i = 0; i<files.length; i++){
    imgs[i] = new Image();
    imgs[i].src = files[i];
}

let next = 1;
function change(img){
    img.src = imgs[next].src;
    next++;
    next %= imgs.length;
}