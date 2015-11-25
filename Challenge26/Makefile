challenge26: challenge-26-unittest.o BSTNode.o BSTree.o
	g++ -o challenge26 $(FLAGS) challenge-26-unittest.o BSTNode.o BSTree.o

challenge-26-unittest.o: challenge-26-unittest.cpp
	g++ $(FLAGS) -c challenge-26-unittest.cpp

BSTNode.o: BSTNode.cpp
	g++ $(FLAGS) -c BSTNode.cpp

BSTree.o: BSTree.cpp
	g++ $(FLAGS) -c BSTree.cpp
	
clean:
	rm -f *.o
	
cleanall: clean
	rm -f challenge26
	
	
FLAGS = -Wall -Wextra -pedantic	