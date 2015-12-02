challenge27: challenge-27-unittest.o BSTNode.o BSTree.o utility.o
	g++ -o challenge27 $(FLAGS) challenge-27-unittest.o BSTNode.o BSTree.o utility.o

challenge-27-unittest.o: challenge-27-unittest.cpp
	g++ $(FLAGS) -c challenge-27-unittest.cpp

Utility.o: utility.cpp
	g++ $(FLAGS) -c utility.cpp

BSTNode.o: BSTNode.cpp
	g++ $(FLAGS) -c BSTNode.cpp

BSTree.o: BSTree.cpp
	g++ $(FLAGS) -c BSTree.cpp
	
clean:
	rm -f *.o
	
cleanall: clean
	rm -f challenge27
	
	
FLAGS = -Wall -Wextra -pedantic	