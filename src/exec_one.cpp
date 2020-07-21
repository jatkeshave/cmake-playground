// CMakePlayground.cpp : Defines the entry point for the application.
//

#include "one/exec_one.h"
#include "libone/lib_one.h"

void sayExecOneHello() {
	std::cout << "Hello from executable one" << std::endl;
}

int main(int argc, char **argv)
{
	sayExecOneHello();
	sayLibHello();
	return 0;
}
