CREATE DATABASE db20201692;
CREATE USER 'dbuser20201692'@'localhost' IDENTIFIED BY "db20201692";
GRANT ALL ON db20201692.* TO 'dbuser20201692'@'dsapoi881.duckdns.org' WITH GRANT OPTION;
CREATE TABLE book {
    id INTEGER,
    name CHAR(30),
    publisher CHAR(30)
}

INSERT INTO book (id, name, publisher) values (1, "데이터베이스 배움터", "생능출판");
INSERT INTO book (id, name, publisher) values (2, "headfirstSQL", "한빛미디어");

SELECT * from book;