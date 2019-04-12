#ifndef BINARY_NODE
#define BINARY_NODE

#include "Expr_Node.h"

class Expr_Visitor;

class Binary_Node : public Expr_Node
{
public:
	// Construction
	Binary_Node();
	virtual ~Binary_Node();
	// Methods
	virtual void accept(Expr_Visitor & v) = 0;
	Expr_Node * getLeft();
};

#endif
