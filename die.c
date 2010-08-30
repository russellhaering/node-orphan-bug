#include <unistd.h>

main(int argc, char **argv)
{
  if (fork() == 0) {
    pause();
  }
}
