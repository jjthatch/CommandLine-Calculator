#include "Modulus_Node.h"
#include "Expr_Visitor.h"

Modulus_Node::Modulus_Node()
{
	this->precedence = 1;
}

void Modulus_Node::accept(Expr_Visitor & v)
{
	v.visitModulus(*this);
}
