# dlltest
Minimal dll test for OS X

* main.c provides function util(), loads dll.dylib, retrieves symbol "dllmain" and calls it
* dllmain() located in dll.dylib prints some stuff and calls util(), which must be provided by host program
* build.sh builds all the things as simply as possible

