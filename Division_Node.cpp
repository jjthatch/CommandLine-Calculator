#include "Division_Node.h"

void Division_Node::accept(Expr_Visitor & v)
{
	v.visitDivision(this);
} 
