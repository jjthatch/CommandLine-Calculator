#ifndef EXPRESSION_NODE
#define EXPRESSION_NODE

class Expr_Visitor;

class Expr_Node
{
public:
	// Construction
	Expr_Node();
	virtual ~Expr_Node();
	// Methods
	virtual void accept(Expr_Visitor & v) = 0;
	
	// Allows visitor to have access to Node pointers
	Expr_Node * getLeft();
	Expr_Node * getRight();	
protected:
	// Data
	Expr_Node * left;
	Expr_Node * right;
	int precedence;
};


#endif 
