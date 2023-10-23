#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
    int fd;
    char buf[5];

    fd = open("com.txt", O_RDWR);
    read(fd, buf, 5);

    close(fd);
    exit(0);
}