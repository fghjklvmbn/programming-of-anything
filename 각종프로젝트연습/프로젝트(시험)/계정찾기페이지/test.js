function pass(){
    // 기존값 + 페이지 값
    let id = document.getElementById("id");
    let email = document.getElementById("email");
    
    // 둘중에 하나가 null 값이면 빈값 리턴
    if(id == null && email == null){
        return ;
    } else {
        id.value;
        email.value;
    }   

    // 로컬스토리지에서 id값과 이메일 값 가져옴
    let id1 = localStorage.getItem("ID");
    let email1 = localStorage.getItem("email");

    // 이메일 및 아이디 체크
    if(id.value != id1 || email.value != email1){
        alert("이메일 주소 혹은 ID가 틀렸습니다.");
    } else {
        //메일 전송 및 새창 오픈
        alert("이메일 주소로 전송되었습니다.확인해주세요");
        
    }
}