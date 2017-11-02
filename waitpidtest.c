#include "types.h"
#include "stat.h"
#include "user.h"

void waittest()
{
  int pid = fork();
  printf(1, "child is %d\n", pid);
  printf(1, "\n Got to the if statement \n");
  if(pid == 0)
  {
    printf(1, "\n Got inside the if statement \n");
    exit(0);
   // printf(1, "\n child exited \n");
  }
  printf(1, "\n Got out of the if statement");

  int trash;
  trash = waitpid(pid, 0, 0);
  printf(1, "\n waitpid returned: %d\n", trash);
  if(trash == pid)
  {
    printf(1, "\n ayy it worked lmao \n");
  }
  else
  {
    printf(1, "\n It dun work \n");
  }
}

int main(int argc, char *argv[])
{
  printf(1, "\n got into the main of waitpidtest \n");
  waittest();
  printf(1, "\n finished the waittest \n");
  exit(0);
}
