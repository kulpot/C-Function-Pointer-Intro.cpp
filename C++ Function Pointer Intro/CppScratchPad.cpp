#include <iostream>
using std::cout;
using std::endl;

//C++ Function Pointer Intro   //ref link:https://www.youtube.com/watch?v=y5BT3Wp5ETI&list=PLRwVmtr-pp05fEuxbVLY4HY8K1wMPo1ut

void foo()		// an address 
{
	cout << "foo()" << endl;
}

void goo(int) {}

void main()
{
	void (*myFunctionPtr) () = goo;		//error: Signature not matching  
	myFunctionPtr();



	//void (*myFunctionPtr) () = foo;
	//myFunctionPtr();		//output: foo()
	//foo();


	
	//int myInt;		// 4 bytes
	//int* myPrt = &myInt;
}