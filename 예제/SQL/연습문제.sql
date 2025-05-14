#1번
select title, author from book;

#2번
select title from book where price >=10000 ;

#3번
select title from book where price between 10000 and 30000; 

#4번(중복제거)
#4-1번
select author from book group by author ;
#4-2번
select distinct author from book;

#5번 
select title from book where author like "%스티븐%";

#6번
select title as 책제목, pubyear as 최근년도순 from book where publication = '한빛미디어' order by pubyear desc ;