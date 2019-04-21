#ifndef BINARY_NODE
#define BINARY_NODE

#include "Expr_Node.h"

class Expr_Visitor;

class Binary_Node : public Expr_Node
{
public:		
	// Methods
	Binary_Node();
	virtual ~Binary_Node();

	virtual void accept(Expr_Visitor & v) = 0;
	int getPrecedence();
};

#endif
