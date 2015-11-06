Project3: DLNode.o DLList.o Driver.o
	g++ -o Project3 $(FLAGS) DLNode.o DLList.o Driver.o
	
DLNode.o: DLNode.h DLNode.cpp
	g++ $(FLAGS) -c DLNode.cpp
	
DLList.o: DLList.h DLList.cpp
	g++ $(FLAGS) -c DLList.cpp
	
Driver.o: Driver.cpp
	g++ $(FLAGS) -c Driver.cpp
	
clean:
	rm -f *.o

cleanall:
	rm -f Project3
	
FLAGS = -Wall -Wextra -pedantic