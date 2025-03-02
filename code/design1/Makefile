CXX = clang++
CXXFLAGS = -std=c++11 -Wall -g -Wno-sometimes-uninitialized -Wno-return-type

all: main.o resume.o
	$(CXX) $(CXXFLAGS) -o main main.o resume.o

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

resume.o: resume.cpp resume.hpp
	$(CXX) $(CXXFLAGS) -c resume.cpp

clean:
	rm -f *.o main
