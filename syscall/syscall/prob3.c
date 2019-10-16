#include<unistd.h>
#include<stdio.h>

int main()
{
  int pid=fork();
  int pid1=fork();
  if(pid>0&&pid1>0)
  {
    sleep(6);
    printf("Parent Process\n");
  }
  else if(pid==0 && pid1>0)
  {
    sleep(5);
    printf("Child 1\n");
  }
  else if(pid1==0 && pid>0)
  {
    sleep(3);
    printf("Child 2\n");
  }
  else
  {
    sleep(1);
    printf("Child 3\n");
  }
  return 0;
}