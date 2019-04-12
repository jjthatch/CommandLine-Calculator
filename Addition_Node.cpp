#include "Binary_Node.h"

void Addition_Node::Accept(Visitor & v)
{
	v.visitAddition(this);
}
