#include <stdio.h>

void util(); 

void dllmain(void)
{
  printf("!! now in dll\n");
  printf("hello from dllmain!\n");
  printf("!! calling util() which must be defined in host program\n");
  util();
  printf("!! done calling util\n");
}

