#include<unistd.h>
#include<stdio.h>
#include<string.h>

int main()
{
  int pid=fork();
  if(pid>0){
    sleep(5);
    printf("Parent process\n");
    int i=1;
    int i1=1;
    int temp;
    for(int j=0;j<10;j++)
    {
      //printf("%d\n",i1);
      temp=i1;
      i1+=i;
      i=temp;
    }
    for(int j=0;j<10;j++)
    {
      printf("%d\n",i1);
      temp=i1;
      i1+=i;
      i=temp;
    }
  }
  else if(pid==0){
    printf("Child Process\n");
    int i=1;
    int i1=1;
    int temp;
    for(int j=0;j<10;j++)
    {
      printf("%d\n",i1);
      temp=i1;
      i1+=i;
      i=temp;
    }
  }
  return 0;
}
