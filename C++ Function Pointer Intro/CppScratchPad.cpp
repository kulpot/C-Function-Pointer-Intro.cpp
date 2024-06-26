#include <iostream>
using std::cout;
using std::endl;

//C++ Function Pointer Intro   //ref link:https://www.youtube.com/watch?v=y5BT3Wp5ETI&list=PLRwVmtr-pp05fEuxbVLY4HY8K1wMPo1ut

void foo()		// an address 
{
	cout << "foo()" << endl;
}

void main()
{
	void (*myFunctionPtr) () = foo;
	myFunctionPtr();
	foo();


	
	//int myInt;		// 4 bytes
	//int* myPrt = &myInt;
}