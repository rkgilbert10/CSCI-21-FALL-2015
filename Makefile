# Makefile for programming challenges
#
# CSCI 21, Fall 2015
#
# Programmer: Rachel Gilbert
#

# Target for programming challenges 
# Date completed: 9-8-2015

# Commands: make pc1
# ./pc1 (to run the program)
 
pcl: pcl.cpp
	g++ $(FLAGS) -o pcl pcl.cpp

pc2: pc2.cpp
	g++ $(FLAGS) -o pc2 pc2.cpp

pc3: pc3.cpp
	g++ $(FLAGS) -o pc3 pc3.cpp
	
pc4: pc4.cpp
	g++ $(FLAGS) -o pc4 pc4.cpp
	
lecture: lecture.cpp
	g++ $(FLAGS) -o lecture lecture.cpp
	
pc5: pc5.cpp
	g++ $(FLAGS) -o pc5 pc5.cpp
	
challenge6: challenge6.cpp
	g++ $(FLAGS) -o challenge6 challenge6.cpp
	
challenge7: challenge7.cpp
	g++ $(FLAGS) -o challenge7 challenge7.cpp

challenge8: challenge8.cpp
	g++ $(FLAGS) -o challenge8 challenge8.cpp

Challenge9: Challenge9.cpp
	g++ $(FLAGS) -o Challenge9 Challenge9.cpp
	
Challenge10: Challenge10.cpp
	g++ $(FLAGS) -o Challenge10 Challenge10.cpp

Challenge11: Challenge11.cpp
	g++ $(FLAGS) -o Challenge11 Challenge11.cpp
	
Challenge12: Challenge12.cpp
	g++ $(FLAGS) -o Challenge12 Challenge12.cpp
	
Challenge13: Challenge13.cpp
	g++ $(FLAGS) -o Challenge13 Challenge13.cpp

Challenge14: Challenge14.cpp
	g++ $(FLAGS) -o Challenge14 Challenge14.cpp
	
Challenge15: Challenge15.cpp
	g++ $(FLAGS) -o Challenge15 Challenge15.cpp
	
Challenge16: Challenge16.cpp
	g++ $(FLAGS) -o Challenge16 Challenge16.cpp
	
ProgrammingProject1: ProgrammingProject1.cpp
	g++ $(FLAGS) -o ProgrammingProject1 ProgrammingProject1.cpp
	
ProgProject2: ProgProject2.cpp
	g++ -o ProgProject2 ProgProject2.cpp


FLAGS = -Wall -Wextra -pedantic

	
