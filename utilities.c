#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <stdbool.h>
#include <sys/ioctl.h>
#include "CSI.h"
// #include <sys/syscall.h>

#include "utilities.h"

int getch(void) {
  struct termios tm, tm_old;
  int fd = 0, ch;

  if (tcgetattr(fd, &tm) < 0) { //保存现在的终端设置
    return -1;
  }

  tm_old = tm;
  cfmakeraw(&tm); //更改终端设置为原始模式，该模式下所有的输入数据以字节为单位被处理
  // tm.c_cflag &= ~ICANON;
  if (tcsetattr(fd, TCSANOW, &tm) < 0) { //设置上更改之后的设置
    return -1;
  }

  ch = getchar();
  if (tcsetattr(fd, TCSANOW, &tm_old) < 0) { //更改设置为最初的样子
    return -1;
  }

  return ch;
}

int _kbhit() {
    static const int STDIN = 0;
    static bool initialized = false;

    if (! initialized) {
        // Use termios to turn off line buffering
        struct termios term;
        tcgetattr(STDIN, &term);
        term.c_lflag &= ~ICANON;
        term.c_lflag &= ~ECHO;
        tcsetattr(STDIN, TCSANOW, &term);
        setbuf(stdin, NULL);
        initialized = true;
    }

    int bytesWaiting;
    ioctl(STDIN, FIONREAD, &bytesWaiting);
    return bytesWaiting;
}

void qExit(int i){
  printf(ED(2) CUP(1,1));
  exit(0);
}
