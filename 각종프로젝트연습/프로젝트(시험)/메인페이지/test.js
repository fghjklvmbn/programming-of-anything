let image = document.getElementsByTagName("img");
let count = 0;
let storage = window.localStorage;

if(!window.localStorage){
    alert("브라우저에서 세션 스토리지를 지원하지 않습니다.");
}

if(storage["count"] == null){
    storage["count"] = 0;
} else {
    count = storage.getItem("count");
}

function img_click(e){
    let txt = document.getElementById("txt_output");
    count++;
    storage.setItem("count", count);
    if( (count / 2) == 0){
        return txt.innerHTML = "사진입니다." ;
    } else {
        return txt.innerHTML = "";
    }
    
};