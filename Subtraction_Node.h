#ifndef SUB_NODE
#define SUB_NODE

#include "Binary_Node.h"

class Expr_Visitor;

class Subtraction_Node : public Binary_Node
{
public:
	Subtraction_Node();
	void accept(Expr_Visitor & v);
};

#endif
