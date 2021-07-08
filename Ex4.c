#include<stdio.h>
#include<stdlib.h>
#include <time.h>


int Dice(int);
int main()
{
  srand((unsigned int)time(NULL));
  int n=0;
  int i;
  char name[20];

    
  printf("What is your name?\n");
  printf(">");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
    

 
  printf("Rolling the dice...\n");

  for(i=0;i<2;i++)
    n=n+Dice(i+1);

  
  printf("Total value:%d\n",n);
  
  if(n>=7) printf("%s won!\n",name);
  else printf("%s lost!\n",name);
  
  return 0;
}

int Dice(int i)
{
  int m;
  m=rand()%6+1;
  printf("Die %d:%d\n",i,m);
  return m;
}
