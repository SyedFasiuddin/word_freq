
CC=g++

main: ./bin/main.o ./bin/Map.o
	@$(CC) ./bin/main.o ./bin/Map.o -o main
	@echo "Build Successful!"

./bin/main.o: main.cpp
	@$(CC) -c main.cpp && mv main.o ./bin

./bin/Map.o: ./include/Map.cpp ./include/Map.h
	@$(CC) -c ./include/Map.cpp && mv Map.o ./bin

clean:
	@rm ./bin/*.o main out.txt
	@echo "Directories cleaned"
