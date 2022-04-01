CC=g++
CFLAGS=-std=c++11 -g -Wall 

all: playerlookup person

hashable.o: hashable.cpp hashable.h
	$(CC) $(CFLAGS) -c hashable.cpp 

linkedmap.o: linkedmap.h linkedmap.cpp hashable.o map.h
	$(CC) $(CFLAGS) -c linkedmap.cpp 

player.o: hashable.o linkedmap.o player.cpp player.h
	$(CC) $(CFLAGS) -c player.cpp

playerlookup: hashable.o linkedmap.o player.o playerlookup.cpp
	$(CC) $(CFLAGS) -o playerlookup hashable.o linkedmap.o player.o playerlookup.cpp

person: hashable.o linkedmap.o person.cpp
	$(CC) $(CFLAGS) -o person hashable.o linkedmap.o person.cpp

clean:
	rm *.o playerlookup person