#include "Subtraction_Node.h"
#include "Expr_Visitor.h"

void Subtraction_Node::accept(Expr_Visitor & v)
{
	v.visitSubtraction(*this);	
}
