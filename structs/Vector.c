#include <stdlib.h>
#include "Vector.h"

//TYPE nodes[SIZE] = {0};

Vector VectorInit(TYPE* nodes){
  Vector vector;

  vector.head = (TYPE*)malloc(SIZE*sizeof(TYPE));
  if (!vector.head) {
    exit(0);
  }

  vector.head = nodes;

  vector.size = SIZE;
  vector.capacity = SIZE;


  return vector;
}

int VectorList(Vector v, int (*echo)(TYPE node)){
  for (int i = 0; i < SIZE; i++) {
    echo(v.head[i]);
  }
  return 0;
}

int VectorAppend(Vector v, TYPE node){
  if (v.size >= SIZE) {
    
  }
  return 0;
}
