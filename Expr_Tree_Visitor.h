#ifndef EXPRESSION_TREE_VISITOR
#define EXPRESSION_TREE_VISITOR

#include "Stack.h"

/* STRATEGY:
 * Visitor called on first node, 
 * Visit algorithm applies first order to node tree
 * Operand pushes number on stack, operator pops two, calculates, then pushes
 * in this way, it is similar to assignment 3
 */

// Links in all concrete node files here
// Node file will forward declare visitor to prevent circular dependencies
#include "Addition_Node.h"
#include "Subtraction_Node.h"
#include "Multiplication_Node.h"
#include "Division_Node.h"
#include "Modulus_Node.h"
#include "Number_Node.h"

#include "Expr_Visitor.h"

class Expr_Node;

class Expr_Tree_Visitor : public Expr_Visitor
{
public:
	// Construction
	Expr_Tree_Visitor();
	~Expr_Tree_Visitor();

	// Methods
	void visitAddition(const Expr_Node & node);
	void visitSubtraction(const Expr_Node & node);
	void visitMultiplication(const Expr_Node & node);
	void visitDivision(const Expr_Node & node);
	void visitModulus(const Expr_Node & node);
	void visitNumber(const Expr_Node & node);	

private:
	Stack<int> result;
};


#endif
