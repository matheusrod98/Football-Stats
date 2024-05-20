//TODO: research in how to improve the makefile, using .phony, for example
CC = clang++

ifeq ($(cc), gcc)
CC = g++
endif

ifeq ($(cc), clang)
CC = clang++
endif

CCFLAGS = -Wall -std=c++11

OBJECTS = movingAverage.o

EXEC = football_stats

all: $(EXEC)

$(EXEC): $(OBJECTS)
	$(CC) $(CCFLAGS) $(OBJECTS) -o $(EXEC) 

.cpp.o:
	$(CC) $(CCFLAGS) -c $<

clean:
	rm -f *.o

clean-all:
	rm -f *.o $(EXEC)
