#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <dlfcn.h>

typedef void(*sfunc)(void);

int main()
{
  printf("++ in main, loading dll\n");

  const char* libname = "dll.dylib";
  void* dll = dlopen(libname, RTLD_GLOBAL);
  assert(dll);
  printf("found lib\n");

  sfunc dllmain = dlsym(dll, "dllmain");
  printf("++ in main, calling dllmain func\n");
  dllmain();
  printf("++ in main, done, closing dll\n");
  dlclose(dll);
  printf("++ done\n");
}

void util()
{
  printf("from util\n");
}