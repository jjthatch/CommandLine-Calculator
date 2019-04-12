#ifndef EXPRESSION_NODE
#define EXPRESSION_NODE

class Expr_Node
{
public:
	// Construction
	Expr_Node();
	virtual ~Expr_Node();
	// Methods
	virtual void Accept() = 0;
protected:
	// Data
	Expr_Node * left;
	Expr_Node * right;
}


#endif 
