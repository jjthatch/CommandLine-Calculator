#include "Number_Node.h"
#include "Expr_Visitor.h"

void Number_Node::accept(Expr_Visitor & v)
{
	v.visitNumber(*this);	
}
