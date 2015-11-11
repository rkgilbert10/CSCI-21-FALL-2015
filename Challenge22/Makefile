Challenge22: challenge-22-unittest.o 
	g++ -o Challenge22 $(FLAGS) challenge-22-unittest.o 
	
challenge-22-unittest.o: challenge-22-unittest.cpp
	g++ $(FLAGS) -c challenge-22-unittest.cpp

clean:
	rm -f *.o *.gch
	
cleanall: clean
	rm -f Challenge22
	
	
FLAGS = -Wall -Wextra -pedantic	