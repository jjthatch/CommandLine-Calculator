#include "Division_Node.h"
#include "Expr_Visitor.h"

Division_Node::Division_Node()
{
	this->precedence = 1;
}
void Division_Node::accept(Expr_Visitor & v)
{
	v.visitDivision(*this);
} 
