#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<time.h>

int main()
{
  int pid=fork();
  if(pid>0){
    sleep(1);
    printf("Parent process\n");
  }
  else if(pid==0){
    struct tm t;
    printf("Child Process\n%s\n",asctime(&t));
  }
  return 0;
}
