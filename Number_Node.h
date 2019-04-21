#ifndef NUMBER_NODE
#define NUMBER_NODE

#include "Binary_Node.h"

class Expr_Visitor;

class Number_Node : public Binary_Node
{
public:
	Number_Node(int number);
	void accept(Expr_Visitor & v);
	int getNum() const;
private:
	int num;
};

#endif
