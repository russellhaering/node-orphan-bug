#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

main(int argc, char **argv)
{
  char *args[] = {"./die", NULL};
  pid_t pid = fork();
  if (pid == 0) {
    execvp("./die", args);
  }
  else {
    waitpid(pid, NULL, 0);
    printf("die exited\n");
  }
}
