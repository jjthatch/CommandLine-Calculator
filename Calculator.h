#ifndef CALCULATOR
#define CALCULATOR

// GOD CLASS
// ALL THAT EXISTS AGGREGATES INTO ME. MUAHAHAHAHA

#include <string>
#include <map>

#include "Expr_Tree_Builder.h"
#include "Expr_Tree_Visitor.h"


class Calculator
{
public:
	Calculator();
	void inputInfix();
	void parseVariables(std::string infix);
	std::string parseInfix(std::string infix);
	bool isInt(std::string possibleInt);
	bool isMyAlpha(std::string possibleVariable);
	std::string isPossibleVar(std::string possibleVariable);
private:
	Expr_Tree_Builder * treeBuilder;
	Expr_Tree_Visitor * treeVisitor;
	Expr_Node * rootTreeNode;
	std::map<std::string, int> variables; 
};

#endif
