// // 모니터 큐 구조(자바)

// package c언어_폴더.운영체제코드;

// class con {
//     private boolean con = false; 
// }

// class status extends con {
//     this.con = con;
//     private int balance = 10;
//     private boolean busy = false;
//     private boolean condition = con;
//     public void increse(int a){
//         if(busy == true){
//                 mon.wait();
//         }
//         busy = true;
//         balance += amount;
//         mon.signal();
//     }
// }

// class monitor extends status {
//     boolean busy = this.busy;
//     boolean balance = this.balance;
//     boolean condition = this.condition;
//     public void increse(int a){    
//         if(busy == true){
//                 mon.wait();
//         }
//         busy = true;
//         balance += amount;
//         mon.signal();        
//     }
// //    ...
// }

// class 모니터 {
//     public static void main(String []args){

//     }
// }