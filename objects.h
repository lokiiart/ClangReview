typedef struct Node{
	int x;
	int y;
}Node;

typedef struct SnakeNode{
	struct SnakeNode* prev;
  Node node;
}SnakeNode;

typedef struct Snake{
	struct SnakeNode* head;
	int length;
}Snake;

int echoNode(Node node);
int echoSnake(Snake snake);

// 考虑使用原型模式，Propertype有echo()
