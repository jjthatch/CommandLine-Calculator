#ifndef NUMBER_NODE
#define NUMBER_NODE

#include "Binary_Node.h"

class Expr_Visitor;

class Number_Node : public Binary_Node
{
public:
	void accept(Expr_Visitor & v);
};

#endif
