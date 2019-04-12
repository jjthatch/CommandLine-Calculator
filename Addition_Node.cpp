
#include "Expr_Visitor.h"
#include "Addition_Node.h"

void Addition_Node::accept(Expr_Visitor & v)
{
	v.visitAddition(*this);
}
