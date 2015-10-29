
SList: SList.o unit_test_challenge_19.o SLNode.o
	g++ -o SList $(FLAGS) SList.o unit_test_challenge_19.o SLNode.o
	
SList.o: SList.h SList.cpp
	g++ $(FLAGS) -c SList.cpp
	
SLNode.o: SLNode.h SLNode.cpp
	g++ $(FLAGS) -c SLNode.cpp
	
unit_test_challenge_19.o: unit_test_challenge_19.cpp
	g++ $(FLAGS) -c unit_test_challenge_19.cpp

clean:
	rm -f *.o
	
cleanall: clean
	rm -f SLNode
	
	
FLAGS = -Wall -Wextra -pedantic	