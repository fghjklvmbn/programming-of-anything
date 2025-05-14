function chk_idx(idx){
    if(idx == 0 && idx == null){
        alert('값이 존재하지 않습니다 장바구니에 담아주세요!');
        document.location.href='/로그인페이지/login_ok.php';
    } 
}