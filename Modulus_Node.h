#ifndef MODULUS_NODE
#define MODULUS_NODE

#include "Binary_Node.h"

class Expr_Visitor;

class Modulus_Node : public Binary_Node
{
public:
	Modulus_Node();
	void accept(Expr_Visitor & v);
};

#endif
