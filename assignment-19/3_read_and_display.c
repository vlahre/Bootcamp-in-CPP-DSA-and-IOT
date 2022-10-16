#include<stdio.h>
int main()
{  
  char language[5][10] = {"Java", "Python", "C++", "HTML", "SQL"};
  
  printf("Languages are:\n");
  for(int i=0;i<5;i++)
  puts(language[i]);

  return 0;
}