function findchecked() {
    let found = null;
    let kcity = document.getElementsByName("city");
    for(let i = 0; i<kcity.length; i++){
        if(kcity[i].checked == true){
            found = kcity[i];
        }
    }
    if(found != null){
        alert(found.value + "이 선택되었음");
    } else {
        alert("선택된 것이 없음");
    }
}