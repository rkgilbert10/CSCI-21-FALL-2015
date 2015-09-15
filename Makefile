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
	g++ -o pcl pcl.cpp

pc2: pc2.cpp
	g++ -o pc2 pc2.cpp

pc3: pc3.cpp
	g++ -o pc3 pc3.cpp
	
pc4: pc4.cpp
	g++ -o pc4 pc4.cpp
	
lecture: lecture.cpp
	g++ -o lecture lecture.cpp
	
pc5: pc5.cpp
	g++ -o pc5 pc5.cpp
	
challenge6: challenge6.cpp
	g++ -o challenge6 challenge6.cpp
	
challenge7: challenge7.cpp
	g++ -o challenge7 challenge7.cpp
	
ProgrammingProject1: ProgrammingProject1.cpp
	g++ -o ProgrammingProject1 ProgrammingProject1.cpp