
SLNode: SLNode.o unit_test_challenge_17.o
	g++ -o SLNode $(FLAGS) SLNode.o unit_test_challenge_17.o
	
SLNode.o: SLNode.h SLNode.cpp
	g++ $(FLAGS) -c SLNode.cpp
	
main.o: unit_test_challenge_17.cpp
	g++ $(FLAGS) -c unit_test_challenge_17.cpp

clean:
	rm -f *.o
	
cleanall: clean
	rm -f SLNode
	
	
FLAGS = -Wall -Wextra -pedantic	