CFLAGS = -std=c++11 -g 

all: Addition_Node.o Subtraction_Node.o Division_Node.o Multiplication_Node.o Modulus_Node.o Expr_Tree_Visitor.o Expr_Tree_Builder.o driver.o
	g++ Addition_Node.o Subtraction_Node.o Division_Node.o Multiplication_Node.o Modulus_Node.o Expr_Tree_Visitor.o Expr_Tree_Builder.o driver.o -o Assignment4
Addition_Node.o: Addition_Node.h Addition_Node.cpp
	g++ $(CFLAGS) -c Addition_Node.h Addition_Node.cpp 
Subtraction_Node.o: Subtraction_Node.h Subtraction_Node.cpp
	g++ $(CFLAGS) -c Subtraction_Node.h Subtraction_Node.cpp
Division_Node.o: Division_Node.h Division_Node.cpp
	g++ $(CFLAGS) -c Division_Node.h Division_Node.cpp
Multiplication_Node.o: Multiplication_Node.h Multiplication_Node.cpp
	g++ $(CFLAGS) -c Multiplication_Node.h Multiplication_Node.cpp
Modulus_Node.o: Modulus_Node.h Modulus_Node.cpp
	g++ $(CFLAGS) -c Modulus_Node.h Modulus_Node.cpp
Expr_Tree_Visitor.o: Expr_Tree_Visitor.h Expr_Tree_Visitor.cpp Expr_Visitor.h 
	g++ $(CFLAGS) -c Expr_Tree_Visitor.h Expr_Tree_Visitor.cpp
Expr_Tree_Builder.o: Expr_Tree_Builder.h Expr_Tree_Builder.cpp Expr_Builder.h
	g++ $(CFLAGS) -c Expr_Tree_Builder.h Expr_Tree_Builder.cpp
driver.o: driver.cpp Array_Base.h Array_Base.cpp Array.h Array.cpp Stack.h Stack.cpp
	g++ -std=c++11 -g -c driver.cpp
clean:
	rm *.o
