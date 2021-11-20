
main: main.o Map.o
	g++ main.o Map.o -o main

main.o: main.cpp
	g++ -c main.cpp

Map.o: ./include/Map.cpp ./include/Map.h
	g++ -c ./include/Map.cpp

clean:
	rm *.o *.exe
