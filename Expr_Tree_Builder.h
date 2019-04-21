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
	void complete();
	Expr_Node & getRoot();
	void resetTree();
private:
	Stack<Expr_Node *> postfix;
	Stack<Expr_Node *> tempStack;
	Expr_Node * inboundNode;
	Expr_Node * swap;		
};

#endif
