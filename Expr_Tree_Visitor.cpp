// Node file will forward declare visitor to prevent circular dependencies
#include "Addition_Node.h"
#include "Subtraction_Node.h"
#include "Multiplication_Node.h"
#include "Division_Node.h"
#include "Modulus_Node.h"
#include "Number_Node.h"

#include "Expr_Tree_Visitor.h"

Expr_Tree_Visitor::Expr_Tree_Visitor() {}
Expr_Tree_Visitor::~Expr_Tree_Visitor() {}

int Expr_Tree_Visitor::getResult()
{
	return result.top();
}
void Expr_Tree_Visitor::visitAddition(const Expr_Node & node)
{
	if (&node.getLeft() != nullptr)
		node.getLeft().accept(*this);
	if (&node.getRight() != nullptr)
		node.getRight().accept(*this);

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
	if (&node.getLeft() != nullptr)
		node.getLeft().accept(*this);
	if (&node.getRight() != nullptr)
		node.getRight().accept(*this);
	
	int right = result.top();
	result.pop();
	int left = result.top();
	result.pop();

	result.push(left - right);
}
void Expr_Tree_Visitor::visitMultiplication(const Expr_Node & node)
{
	if (&node.getLeft() != nullptr)
		node.getLeft().accept(*this);
	if (&node.getRight()!= nullptr)
		node.getRight().accept(*this);
	
	int right = result.top();
	result.pop();
	int left = result.top();
	result.pop();

	result.push(left * right);
}
void Expr_Tree_Visitor::visitDivision(const Expr_Node & node)
{
	if (&node.getLeft() != nullptr)
		node.getLeft().accept(*this);
	if (&node.getRight() != nullptr)
		node.getRight().accept(*this);
	
	int right = result.top();
	result.pop();
	int left = result.top();
	result.pop();

	result.push(left / right);
}
void Expr_Tree_Visitor::visitModulus(const Expr_Node & node)
{
	if (&node.getLeft() != nullptr)
		node.getLeft().accept(*this);
	if (&node.getRight() != nullptr)
		node.getRight().accept(*this);
	
	int right = result.top();
	result.pop();
	int left = result.top();
	result.pop();

	result.push(left % right);
}
void Expr_Tree_Visitor::visitNumber(const Number_Node & node)
{
	if (&node.getLeft() != nullptr)
		node.getLeft().accept(*this);
	if (&node.getRight() != nullptr)
		node.getRight().accept(*this);
	
	result.push(node.getNum());
}
