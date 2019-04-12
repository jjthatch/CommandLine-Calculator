#include "Modulus_Code.h"

void Modulus_Node::accept(Expr_Visitor & v);
{
	v.visitModulus(this);
{
