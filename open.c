#include<stdio.h>
#include<fcntl.h>
int  main()
  {
  int fd;
  fd=open("temp",O_WRONLY|O_CREAT|O_TRUNC,0644);
  printf("fd:%d\n",fd);
  if(fd<0)
  {
  perror("open");
  return;
  }
  }
