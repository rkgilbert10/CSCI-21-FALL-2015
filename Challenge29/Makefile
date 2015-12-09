challenge29: challenge-29-unittest.o 
	g++ -o challenge29 $(FLAGS) challenge-29-unittest.o 

challenge-29-unittest.o: challenge-29-unittest.cpp
	g++ $(FLAGS) -c challenge-29-unittest.cpp

clean:
	rm -f *.o
	
cleanall: clean
	rm -f challenge29
	
	
FLAGS = -Wall -Wextra -pedantic -std=c++11	