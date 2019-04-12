#ifndef EXPRESSION_VISITOR
#define EXPRESSION_VISITOR

class Expr_Node;

class Expr_Visitor
{
public:
	// Construction
	Expr_Visitor() {}
	~Expr_Visitor() {}

	// Methods
	virtual void visitAddition(const Expr_Node & node) = 0;
	virtual void visitSubtraction(const Expr_Node & node) = 0;
	virtual void visitMultiplication(const Expr_Node & node) = 0;
	virtual void visitDivision(const Expr_Node & node) = 0;
	virtual void visitModulus(const Expr_Node & node) = 0;
	virtual void visitNumber(const Expr_Node & node) = 0;

};

#endif
