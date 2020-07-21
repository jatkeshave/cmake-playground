#include "two/exec_two.h"
#include "libone/lib_one.h"

void sayExecTwoHello() {
	std::cout << "Hello from Exec Two" << std::endl;
}

int main(int argc, char** argv) {
	sayExecTwoHello();
	sayLibHello();
	return 0;
}
