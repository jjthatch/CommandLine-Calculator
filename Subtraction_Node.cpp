#include "Subtraction_Node.h"
#include "Expr_Visitor.h"

Subtraction_Node::Subtraction_Node()
{
	this->precedence = 0;	
}

void Subtraction_Node::accept(Expr_Visitor & v)
{
	v.visitSubtraction(*this);	
}
