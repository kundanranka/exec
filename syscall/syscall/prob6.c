#include<unistd.h>
#include<stdio.h>
#include<string.h>

int main()
{
  int pid=fork();
  if(pid>0){
    sleep(5);
    printf("Parent process\n");
  }
  else if(pid==0){
    printf("Child Process\n");
  }
  return 0;
}
