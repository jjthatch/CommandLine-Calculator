#ifndef ADDITION_NODE
#define ADDITION_NODE

#include "Binary_Node.h"

class Expr_Visitor;

class Addition_Node : public Binary_Node
{
public:

	// Methods
	Addition_Node();
	virtual void accept(Expr_Visitor & v);			
};

#endif
