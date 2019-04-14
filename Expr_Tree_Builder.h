#ifndef EXPR_TREE_BUILDER
#define EXPR_TREE_BUILDER

#include "Expr_Builder.h"
#include "Stack.h"

class Expr_Node;

class Expr_Tree_Builder : public Expr_Builder
{
public:
	void buildAddition();
	void buildSubtraction();
	void buildMultiplication();
	void buildDivision();
	void buildModulus();
	void buildNumber(int num);
private:
	Stack<Expr_Node *> postfix;
	Stack<Expr_Node *> tempSwap;		
};

#endif
