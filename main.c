#include <stdio.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <pthread.h>
#include "CSI.h"
#include "utilities.h"
#include "objects.h"

#define WIDTH 20
#define HEIGHT 20


// TODO debug()函数，宏控制，测试时打印，不测试不打印。
// TODO 多界面，清理界面函数复用，每个界面都继承父界面
// TODO FrameBuffer试用你好

void printBackground() {
  int background[WIDTH][HEIGHT];
  for (int i = 0; i < HEIGHT; i++) {
    for (int j = 0; j < WIDTH; j++) {
      if (i == 0 || j == 0 || i == WIDTH - 1 || j == HEIGHT - 1) {
        printf(GREEN_FG "□");
      } else {
        printf(GREEN_FG "■");
      }
    }
    printf("\n");
  }
}

void* qThreadRun(void* arg){
  while(1){
    if(_kbhit()){
      if(getch() == 'q')qExit(0);
    }
  }
}

int main(int argc, char const *argv[]) {
  printf(ED(2) CUP(1,1));
  printBackground();

  Node Foods[10];
  Snake snake;

  int res;
  pthread_t qThread;

  res = pthread_create(&qThread, NULL, qThreadRun, NULL);
  if(res != 0) {
    printf("Thread created failed!");
    return 0;
  }
  

  while (1) {
    if (_kbhit()) {
      if(getch() == 'w')break;
    }
    time_t result = time(NULL);
    printf("%s"CPL(1) EL(2) CHA(1), asctime(gmtime(&result)));
    usleep(1e5);
  }

  return 0;
}
