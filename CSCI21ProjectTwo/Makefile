FLAGS = -Wall -Wextra -pedantic

Project2Main: Project2Main.o box.o prize.o CinReader.o
	g++ -o Project2Main $(FLAGS) Project2Main.o box.o prize.o CinReader.o
	
Project2Main.o: Project2Main.cpp
	g++ $(FLAGS) -c Project2Main.cpp
	
box.o: box.h box.cpp
	g++ $(FLAGS) -c box.cpp
	
prize.o: prize.h prize.cpp
	g++ $(FLAGS) -c prize.cpp

CinReader.o: CinReader.h CinReader.cpp
	g++ $(FLAGS) -c CinReader.cpp

clean:
	rm -f *.o
	
cleanall: clean
	rm -f Project2Main