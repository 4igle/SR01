#include <stdio.h>


int main(){
  printf("pid = %ld\nppid = %ld\n", getpid(), getppid());
  printf("uid = %ld\ngid = %ld\n", getuid(), getgid());
  return 0;
}