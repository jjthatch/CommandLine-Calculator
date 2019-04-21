#include "Number_Node.h"
#include "Expr_Visitor.h"

Number_Node::Number_Node(int number)
{
	this->right = nullptr;
	this->left = nullptr;
	num = number;
}
void Number_Node::accept(Expr_Visitor & v)
{
	v.visitNumber(*this);	
}

int Number_Node::getNum() const
{
	return num;
}
