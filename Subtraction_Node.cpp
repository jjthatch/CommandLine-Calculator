#include "Subtraction_Node.h"
#include "Expr_Visitor.h"

Subtraction_Node::Subtraction_Node()
{
	this->right = nullptr;
	this->left = nullptr;
	this->precedence = 0;	
}

void Subtraction_Node::accept(Expr_Visitor & v)
{
	v.visitSubtraction(*this);	
}
