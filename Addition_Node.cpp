#include "Addition_Node.h"
#include "Expr_Visitor.h"


Addition_Node::~Addition_Node()
{}
Addition_Node::Addition_Node()
{	
	this->left = nullptr;
	this->right = nullptr;
	this->precedence = 0;
}

void Addition_Node::accept(Expr_Visitor & v)
{
	v.visitAddition(*this);
}
