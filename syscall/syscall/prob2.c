#include<unistd.h>
#include<stdio.h>

int main()
{
  int pid=fork();
  if(pid>0){
    sleep(3);
    printf("Parent process\n");
    int a,b;
    scanf("%d",&a);
    printf("\n");
    scanf("%d",&b);
    a^=b;
    b^=a;
    a^=b;
    printf("P:%d %d",b,a);
  }
  else if(pid==0){
    printf("Child Process\n");
    int a,b;
    scanf("%d",&a);
    printf("\n");
    scanf("%d",&b);
    int c;
    c=a;
    a=b;
    b=c;
    printf("C:%d %d\n",b,a);
  }
  return 0;
}
