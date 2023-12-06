function save(){
    if(!window.sessionStorage){
        alert("이 브라우저는 세션 스토리지를 지원하지 않습니다!");
        return ;
    }
    let name = document.getElementById("name").value;
    let num = document.getElementById("num").value;
    sessionStorage.setItem(num, name);
}

function show(){
    if(!window.sessionStorage){
        alert("이 브라우저는 세션 스토리지를 지원하지 않습니다!");
        return ;
    }
    let head = document.getElementById("num").value;
    let archive = sessionStorage.getItem(head);
    if(num == null){
        alert(head+"값이 없습니다!");
        return ;
    } 
    alert("검색결과 :"+archive);
}