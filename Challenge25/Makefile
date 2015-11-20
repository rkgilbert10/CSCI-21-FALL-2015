challenge25: challenge-25-unittest.o BSTNode.o BSTree.o
	g++ -o challenge25 $(FLAGS) challenge-25-unittest.o BSTNode.o BSTree.o

challenge-25-unittest.o: challenge-25-unittest.cpp
	g++ $(FLAGS) -c challenge-25-unittest.cpp

BSTNode.o: BSTNode.cpp
	g++ $(FLAGS) -c BSTNode.cpp

BSTree.o: BSTree.cpp
	g++ $(FLAGS) -c BSTree.cpp
	
clean:
	rm -f *.o
	
cleanall: clean
	rm -f challenge25
	
	
FLAGS = -Wall -Wextra -pedantic	