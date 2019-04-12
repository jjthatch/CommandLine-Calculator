#include "Number_Node.h"

void Number_Node::accept(Expr_Visitor & v)
{
	v.visitNumber(this);	
}
