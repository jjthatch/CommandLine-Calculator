#include "Expr_Visitor.h"
#include "Multiplication_Node.h"

Multiplication_Node::Multiplication_Node()
{
	this->precedence = 1;
}
void Multiplication_Node::accept(Expr_Visitor & v)
{
	v.visitMultiplication(*this);
}
