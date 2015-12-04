# Makefile for Project4

FLAGS = -Wall -Wextra -pedantic

Project4: driver.o Word.o
	g++ -o Project4 $(FLAGS) driver.o Word.o
	
driver.o: driver.cpp
	g++ $(FLAGS) -c driver.cpp

Word.o: Word.cpp
	g++ $(FLAGS) -c Word.cpp
	
clean: 
	rm -f *.o
cleanall: clean
	rm -f Project4
	
# Don't compile template files. 