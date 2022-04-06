typedef struct Node Node;
typedef struct SnakeNode SnakeNode;
typedef struct Snake Snake;

struct Node{
	int x;
	int y;
};

struct SnakeNode{
	SnakeNode* prev;
  SnakeNode* next;
  Node node;
};

struct Snake{
	SnakeNode* head;
	int length;
};

int echoNode(Node node);
int echoSnake(Snake snake);

// 考虑使用原型模式，Propertype有echo()
