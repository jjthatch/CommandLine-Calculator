#include "Modulus_Node.h"
#include "Expr_Visitor.h"

void Modulus_Node::accept(Expr_Visitor & v)
{
	v.visitModulus(*this);
}
