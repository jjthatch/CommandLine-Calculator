#include "Addition_Node.h"
#include "Expr_Visitor.h"


Addition_Node::Addition_Node()
{
	this->precedence = 0;
}

void Addition_Node::accept(Expr_Visitor & v)
{
	v.visitAddition(*this);
}
