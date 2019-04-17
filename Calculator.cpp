// They looked upon his magnificent presence, their hearts cried out for peace as they became stone
#include "Calculator.h"

Calculator::Calculator()
{
	treeBuilder = new Expr_Tree_Builder();
	treeVisitor = new Expr_Tree_Visitor();	
}
