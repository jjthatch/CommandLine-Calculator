#include "Multiplication_Node.h"

void Multiplication_Node::accept(Expr_Visitor & v)
{
	v.visitMultiplication(this);
}
