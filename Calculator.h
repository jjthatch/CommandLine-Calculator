#ifndef CALCULATOR
#define CALCULATOR

// GOD CLASS
// ALL THAT EXISTS AGGREGATES INTO ME. MUAHAHAHAHA

#include <string>

#include "Expr_Tree_Builder.h"
#include "Expr_Tree_Visitor.h"

class Calculator
{
public:
	Calculator();
	void inputInfix();
	std::string parseInfix(std::string infix);
	bool isInt(std::string possibleInt);
private:
	Expr_Tree_Builder * treeBuilder;
	Expr_Tree_Visitor * treeVisitor;
	Expr_Node * rootTreeNode;
};

#endif
