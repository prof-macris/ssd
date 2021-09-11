/*
  file: access.c - windows version
  objective: access test
  author: Prof. Macris, set-2021, tch.macris@gmail.com
*/
#include <stdio.h>
#include <string.h>

int main()
{
  char input[5];
  int ok = 0;

  system("cls");
  printf("\nEnter admin password: ");
  gets(input);

  if (strcmp(input, "toor") != 0)
  {
    printf("\nPassword error\n");
  }
  else
  {
    printf("\nPassword ok\n");
    ok = 1;
  }

  if (ok)
  {
    printf("\n**Administrator privileges**\n\n");
    //program detais
  }

  return 0;
}