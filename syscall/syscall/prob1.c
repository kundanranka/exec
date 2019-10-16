#include<unistd.h>
#include<stdio.h>



void noprime()
{
  int count=0;
  int flag=0;
  for(int i=3;count<=20;i++)
  {
    flag=0;
    for(int j=2;j<i;j++)
      if(i%j==0)
      {
        flag=1;
        break;
      }
      if(flag==1)
      {
        count++;
        printf("%d\n",i);
      }
  }
}




void prime()
{
  int count=0;
  int flag=0;
  for(int i=3;count<=20;i++)
  {
    flag=0;
    for(int j=2;j<i;j++)
      if(i%j==0)
      {
        flag=1;
        break;
      }
    if(flag==0)
    {
      count++;
      printf("%d\n",i);
    }
  }
}

int main()
{
  int pid=fork();
  if(pid>0){
    sleep(3);
    printf("Parent process\n");
    noprime();
  }
  else if(pid==0){
    printf("Child Process\n");
    prime();
  }
  return 0;
}


