Challenge20: SList.o unit_test_challenge_20.o SLNode.o 
	g++ -o Challenge20 $(FLAGS) SList.o unit_test_challenge_20.o SLNode.o

SList.o: SList.h SList.cpp
	g++ $(FLAGS) -c SList.cpp
	
SLNode.o: SLNode.h SLNode.cpp
	g++ $(FLAGS) -c SLNode.cpp
	
unit_test_challenge_20.o: unit_test_challenge_20.cpp
	g++ $(FLAGS) -c unit_test_challenge_20.cpp

clean:
	rm -f *.o
	
cleanall: clean
	rm -f Challenge20
	
	
FLAGS = -Wall -Wextra -pedantic	