#ifndef DIVISION_NODE
#define DIVISION_NODE

#include "Binary_Node.h"

class Expr_Visitor;

class Division_Node : public Binary_Node
{
	void accept(Expr_Visitor & v);
}

#endif
