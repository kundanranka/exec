#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc,char*argv[])
{
	printf("I am %s and my PID is : %d and my PPID is:%d\n",argv[0],getpid(),getppid());
	execlp("./exec_demo","./exec_demo",NULL);
	return 0;
}