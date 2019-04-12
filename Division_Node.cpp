#include "Division_Node.h"
#include "Expr_Visitor.h"

void Division_Node::accept(Expr_Visitor & v)
{
	v.visitDivision(*this);
} 
