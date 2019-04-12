#ifndef MODULUS_NODE
#define MODULUS_NODE

#include "Binary_Node"

class Expr_Visitor;

class Modulus_Node : public Binary_Node
{
	void accept(Expr_Visitor & v);
}

#endif
