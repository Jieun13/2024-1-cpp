#include<iostream>
#include "DoWhileLoopAdder.h"
#include "WhileLoopAdder.h"

using namespace std;

int main() {
	WhileLoopAdder whileLoop("While Loop");
	DoWhileLoopAdder doWhileLoop("Do while Loop");

	whileLoop.run();
	doWhileLoop.run();
}