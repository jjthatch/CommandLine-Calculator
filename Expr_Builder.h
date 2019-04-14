#ifndef EXPR_BUILDER
#define EXPR_BUILDER

class Expr_Builder
{
public:
	virtual void buildAddition() = 0;
	virtual void buildSubtraction() = 0;
	virtual void buildMultiplication() = 0;
	virtual void buildDivision() = 0;
	virtual void buildModulus() = 0;
	virtual void buildNumber() = 0;	
private:
};

#endif
