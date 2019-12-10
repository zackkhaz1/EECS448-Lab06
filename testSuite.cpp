#include "testSuite.h"



void testSuite::runTests()
  {
    cout << "Test 1: isEmpty returns false on filled queue: "; if(isEmptyT1()) {cout << "PASSED" << endl;} else {cout << "FAILED" << endl;}
    cout << "Test 2: isEmpty returns true on empty queue: "; if(isEmptyT2()) {cout << "PASSED" << endl;} else {cout << "FAILED" << endl;}

    cout << "Test 3: enqueuing 1 makes queue nonempty and peekFront returns 1: "; if(enqueueT1()) {cout << "PASSED" << endl;} else {cout << "FAILED" << endl;}
    cout << "Test 4: Queue enqueues to the back of the list: "; if(enqueueT2()) {cout << "PASSED" << endl;} else {cout << "FAILED" << endl;}

    cout << "Test 5: Constructor creates an empty queue: "; if(constructTest()) {cout << "PASSED" << endl;} else {cout << "FAILED" << endl;}

    cout << "Test 6: peekFront returns front of list: "; if(peekFrontT1()) {cout << "PASSED" << endl;} else {cout << "FAILED" << endl;}
    cout << "Test 7: peekFront throws an exception on empty Queue: "; if(peekFrontT2()) {cout << "PASSED" << endl;} else {cout << "FAILED" << endl;}

    cout << "Test 8: Dequeuing an empty queue throws an exception: "; if(dequeueT1())  {cout << "PASSED" << endl;} else {cout << "FAILED" << endl;}
    cout << "Test 9: Dequeing removes from front of queue: "; if(dequeueT2()) {cout << "PASSED" << endl;} else {cout << "FAILED" << endl;}
    
    cout << "Test 10: Destructor removes all entries from queue: "; if(destructorTest())  {cout << "PASSED" << endl;} else {cout << "FAILED" << endl;}

}




bool testSuite::isEmptyT1()
  {
    Queue q;
    q.enqueue(1);
    if(q.isEmpty())
      {
        return false;
      }
    else
    {
      return true;
    }

  }

bool testSuite::isEmptyT2()
  {
    Queue q;

    if(q.isEmpty())
      {
        return true;
      }
    else
    {
      return false;
    }

  }

bool testSuite::enqueueT1()
  {
    Queue q;
    q.enqueue(1);

    if(q.isEmpty())
      {
        return false;
      }

    else if(q.isEmpty() == false && q.peekFront() == 1)
      {
        return true;
      }

  }

bool testSuite::enqueueT2()
  {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    if(q.peekFront() == 1)
    {
      return true;
    }
    else
    {
      return false;
    }

  }

bool testSuite::constructTest()
  {
    Queue q;
    if(q.isEmpty())
      {
        return true;
      }
    else
      {
        return false;
      }
  }



bool testSuite::peekFrontT1()
  {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    if(q.peekFront() == 1)
      {
        return true;
      }
    else
      {
        return false;
      }
  }

bool testSuite::peekFrontT2()
    {
      Queue q;
      try{
        q.peekFront();
      }catch(...){return true;}

      return false;
    }

bool testSuite::dequeueT1()
{
    Queue q;
    try
    {
      q.dequeue();

    }catch(...){return true;}

  return false;

}

bool testSuite::dequeueT2()
  {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.dequeue();
    if(q.peekFront() == 2)
      {
        return true;
      }
    else
      {
        return false;
      }
  }

bool testSuite::destructorTest()
  {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.~Queue();
    if(q.isEmpty())
      {
        return true;
      }
    else
      {
        return false;
      }
  }
