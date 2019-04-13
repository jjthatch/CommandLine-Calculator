#ifndef EXPR_BUILDER
#define EXPR_BUILDER

class Expr_Builder
{
public:
	void buildAddition() = 0;
	void buildSubtraction() = 0;
	void buildMultiplication() = 0;
	void buildDivision() = 0;
	void buildModulus() = 0;
	void buildNumber() = 0;	
private:
}

#endif
