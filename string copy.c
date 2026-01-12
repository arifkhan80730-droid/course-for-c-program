#include <stdio.h>
#include <string.h>

int main()
{
  char source[]="welcome";
  char destination [20];
  strcpy (destination,source);
  printf("copied string:%s",destination);

}
