
#include <stdio.h>
int main()
{

  int fd[2],child; char a[10];
  printf("\nEnter the string : ");
  scanf("%s",a);
  pipe(fd);
  child=fork();
  if(!child)
{
    close(fd[0]);
    write(fd[1],a,5); wait(0);
}

  else

{
   close(fd[1]);
    read(fd[0],a,5); printf("The string received from pipe is : %s",a);
}

return 0;
}