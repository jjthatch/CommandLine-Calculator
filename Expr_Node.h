#ifndef EXPRESSION_NODE
#define EXPRESSION_NODE

class Expr_Visitor;

class Expr_Node
{
public:
	// Construction
	Expr_Node();
	// Destructor is virtual as the C++ compiler needs to be told that there is subclass data that it needs to find and destruct!
	virtual ~ Expr_Node();
	// Methods
	virtual void accept(Expr_Visitor & v) = 0;
	virtual int getPrecedence() = 0; 
	
	// Allows visitor to have access to Node pointers
	void setLeft(Expr_Node * node);
	void setRight(Expr_Node * node);
	Expr_Node * getLeft() const;
	Expr_Node * getRight() const;	
protected:
	// Data
	int precedence;
	Expr_Node * left;
	Expr_Node * right;
};

#endif 
