QueueDemo: main.o Queue.o testSuite.o
	g++ -g -Wall -std=c++11 main.o Queue.o testSuite.o -o QueueDemo

main.o: main.cpp testSuite.o
	g++ -g -std=c++11 -c main.cpp

testSuite.o: testSuite.h testSuite.cpp
	g++ -g -std=c++11 -c testSuite.cpp

clean:
	rm main.o QueueDemo *~
