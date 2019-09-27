#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc,char*argv[])
{
	printf("I am %s, my PID is : %d and my PPID is:%d\n",argv[0],getpid(),getppid());	
	int i=fork();
	if(i>0)
	{
		sleep(2);
	}
	if(i==0)
	{
		printf("I am %s, my PID is : %d and my PPID is:%d\n",argv[0],getpid(),getppid());	
	}
	return 0;
}