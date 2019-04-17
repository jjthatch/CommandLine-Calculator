// GOD CLASS
// ALL THAT EXISTS AGGREGATES INTO ME. MUAHAHAHAHA

class Expr_Tree_Builder;
class Expr_Tree_Visitor;

class Calculator
{
public:
	Calculator();
	void inputInfix();
	int parseInfix();
	
private:
	Expr_Tree_Builder * treeBuilder;
	Expr_Tree_Visitor * treeVisitor;
}
