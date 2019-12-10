/**
*	@file main.cpp
*	@author John Gibbons
*	@date 2014.04.02
*/

#include <iostream>
#include <stdexcept>
#include "Queue.h"
#include "testSuite.h"
using namespace std;

int main()
{
	testSuite t;

	t.runTests();
	return(0);
}
