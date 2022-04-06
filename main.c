#define WIDTH 20
#define HEIGHT 20

#define TYPE int
#define SIZE 15

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <pthread.h>
#include "CSI.h"
#include "utilities.h"
#include "objects.h"
#include "structs/Vector.h"




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

int echoElement(TYPE node){
  printf("%d\n", node);
  return 0;
}

int main(int argc, char const *argv[]) {

  int res;
  pthread_t qThread;

  res = pthread_create(&qThread, NULL, qThreadRun, NULL);
  if(res != 0) {
    printf("Thread created failed!");
    return 0;
  }

  // printf(ED(2) CUP(1,1));
  // printBackground();

  //lcrud abstract to operation
  //first step: list, before list, you should var them.

  // Node Foods[10];
  // Snake snake;
  // SnakeNode snakeHead;
  //
  // snake.length = 3;
  // snakeHead.node.x = 5;
  // snakeHead.node.y = 5;
  // snake.head = &snakeHead;


  int test[10] = {1,2,3,4,5,10,5,6,6,6};
  int num = 0;

  Vector v = VectorInit(test);
  VectorList(v, echoElement);

  while (1) {
    if (_kbhit()) {
      char ch = getch();
      switch (ch) {
        case 'c':
          scanf("%2d", &num);
          VectorAppend(num);
          break;
        default:
          continue;
      }
    }

    time_t result = time(NULL);
    printf("%s"CPL(1) EL(2) CHA(1), asctime(gmtime(&result)));
    usleep(1e5);
  }

  return 0;
}
