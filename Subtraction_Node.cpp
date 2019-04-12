#include "Subtraction_Node.cpp"

void Subtraction_Node::accept(Expr_Visitor & v)
{
	v.visitSubtraction(this);	
}
