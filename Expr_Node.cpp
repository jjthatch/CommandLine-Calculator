#include "Expr_Node.h"
#include "Expr_Visitor.h"

Expr_Node * Expr_Node::getLeft() const
{
	return left;
}

Expr_Node * Expr_Node::getRight() const
{
	return right;
}
