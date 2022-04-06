#if (!defined TYPE && !defined SIZE)
#define TYPE int
#define SIZE 10
#endif

typedef struct Vector Vector;

struct Vector{
  TYPE* head;
  int size;
  int capacity;
};

Vector VectorInit(TYPE* nodes);
int VectorList(Vector v, int (*echo)(TYPE node));
int VectorAppend(Vector v, TYPE node);
