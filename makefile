converter: main.o bton.o ntob.o
	g++ -Wall -pedantic -g -o converter main.o bton.o ntob.o

bton.o: bton.cpp main.h
	g++ -Wall -pedantic -g -o bton.o -std=c++11 -c bton.cpp

ntob.o: ntob.cpp main.h
	g++ -Wall -pedantic -g -o ntob.o -std=c++11 -c ntob.cpp

main.o: main.cpp main.h
	g++ -Wall -pedantic -g -std=c++11 -c main.cpp

clean:
	rm -f converter converter.exe bton.o ntob.o main.o
