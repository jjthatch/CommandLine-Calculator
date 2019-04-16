#include "Expr_Node.h"
#include "Expr_Visitor.h"

Expr_Node::Expr_Node()
{}
Expr_Node::~Expr_Node()
{}


Expr_Node & Expr_Node::getLeft() const
{
	return *left;
}

Expr_Node & Expr_Node::getRight() const
{
	return *right;
}
void Expr_Node::setLeft(Expr_Node * node)
{
	left = node;
}

void Expr_Node::setRight(Expr_Node * node)
{
	right = node;
}
