#include<unistd.h>
#include<stdio.h>
#include<string.h>

int vowels(char *s)
{
  int count=0;
  for(int i=0;i<strlen(s);i++)
  {
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
      count++;
  }
  return count;
}

int main()
{
  int pid=fork();
  if(pid>0){
    sleep(5);
    printf("Parent process\n");
    char s[50];
    scanf("%s",s);
    int len=strlen(s);
    printf("\nNo of ! vowels:%d\n",len-vowels(s));
  }
  else if(pid==0){
    printf("Child Process\n");
    char s[50];
    scanf("%s",s);
    printf("\nNo of vowels:%d\n",vowels(s));
  }
  return 0;
}
