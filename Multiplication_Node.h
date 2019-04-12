#ifndef MULTINODE
#define MULTINODE

#include "Binary_Node.h"

class Expr_Visitor;

class Multiplication_Node : public Binary_Node
{
public:
	void accept(Expr_Visitor & v);
};

#endif
