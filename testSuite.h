#ifndef TESTSUITE_H
#define TESTSUITE_H

#include "Queue.h"
#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

class testSuite
{
public:

  void runTests();

  bool isEmptyT1();
  bool isEmptyT2();

  bool enqueueT1();
  bool enqueueT2();
  bool constructTest();

  bool peekFrontT1();
  bool peekFrontT2();

  bool dequeueT1();
  bool dequeueT2();

  bool destructorTest();
};
#endif
