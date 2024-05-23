#TODO: research in how to improve the makefile, using .phony, for example
CPP = clang++

ifeq ($(cc), gcc)
CPP = g++
endif

ifeq ($(cc), clang)
CPP = clang++
endif

CPPFLAGS = -Wall -std=c++11

OBJECTS = championship.o main.o movingAverage.o team.o test.o

EXEC = football_stats

all: $(EXEC)

$(EXEC): $(OBJECTS)
	$(CPP) $(CPPFLAGS) $(OBJECTS) -o $(EXEC) 

.cpp.o:
	$(CPP) $(MODE) $(CPPFLAGS) -c $<

clean:
	rm -f *.o

clean-all:
	rm -f *.o $(EXEC)
