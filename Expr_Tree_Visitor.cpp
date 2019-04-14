#include "Expr_Tree_Visitor.h"


void Expr_Tree_Visitor::visitAddition(const Expr_Node & node)
{
	node.getLeft()->accept(*this);
	node.getRight()->accept(*this);

	// Take two and call me in the morning
	int right = result.top();
	result.pop();
	int left = result.top();
	result.pop();

	// Math and push to top of stack
	result.push(left + right);	
}
void Expr_Tree_Visitor::visitSubtraction(const Expr_Node & node)
{
	node.getLeft()->accept(*this);
	node.getRight()->accept(*this);
	
	int right = result.top();
	result.pop();
	int left = result.top();
	result.pop();

	result.push(left - right);
}
void Expr_Tree_Visitor::visitMultiplication(const Expr_Node & node)
{

	node.getLeft()->accept(*this);
	node.getRight()->accept(*this);
	
	int right = result.top();
	result.pop();
	int left = result.top();
	result.pop();

	result.push(left * right);
}
void Expr_Tree_Visitor::visitDivision(const Expr_Node & node)
{

	node.getLeft()->accept(*this);
	node.getRight()->accept(*this);
	
	int right = result.top();
	result.pop();
	int left = result.top();
	result.pop();

	result.push(left / right);
}
void Expr_Tree_Visitor::visitModulus(const Expr_Node & node)
{

	node.getLeft()->accept(*this);
	node.getRight()->accept(*this);
	
	int right = result.top();
	result.pop();
	int left = result.top();
	result.pop();

	result.push(left % right);
}
void Expr_Tree_Visitor::visitNumber(const Number_Node & node)
{
	node.getLeft()->accept(*this);
	node.getRight()->accept(*this);
	
	result.push(node.getNum());
}
