// document.write("<ul>");
// let itemlist = ["라면", "계란", "물", "파"];
// for(let i = 0; i<itemlist.length; i++){
//     document.write("<li>" + itemlist[i] + "</li>");
// }
// document.write("</ul>");
// function Account(owner, code, balance){
//     this.owner = owner; // function에서 불러올때 객체를 그대로 끌어 쓸수 있음
//     this.code = code;
//     this.balance = balance;

//     this.inqury = function(){return this.balance};
//     this.despoit = function(money){return this.balance += money};
//     this.withdraw = function(money){
//         this.balance -= money;
//         return money;
//     }
// }

function Book(bookname, name, value){
    this.bookname = bookname;
    this.name = name;
    this.value = value;
}