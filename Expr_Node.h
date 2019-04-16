#ifndef EXPRESSION_NODE
#define EXPRESSION_NODE

class Expr_Visitor;

class Expr_Node
{
public:
	// Construction
	Expr_Node();	
	virtual ~ Expr_Node();
	// Methods
	virtual void accept(Expr_Visitor & v) = 0;
	virtual int getPrecedence() = 0; 
	
	// Allows visitor to have access to Node pointers
	void setLeft(Expr_Node * node);
	void setRight(Expr_Node * node);
	Expr_Node & getLeft() const;
	Expr_Node & getRight() const;	
protected:
	// Data
	int precedence;  // THIS IS ALL THAT MAKES SENSE TO ME :( 
	Expr_Node * left;
	Expr_Node * right;
};

#endif 
