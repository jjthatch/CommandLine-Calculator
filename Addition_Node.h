#ifndef ADDITION_NODE
#define ADDITION_NODE

#include "Binary_Node"

class Expr_Visitor;

class Addition_Node : public Binary_Node
{
public:
	// Construction
	Addition_Node();
	virtual ~Addition_Node();

	// Methods
	virtual void Accept(Expr_Visitor & v);			
}

#endif
