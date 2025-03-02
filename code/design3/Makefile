CXX = clang++
CXXFLAGS = -std=c++11 -Wall -g -Wno-sometimes-uninitialized -Wno-return-type

all: main.o iresume.o rresume.o resume.o
	$(CXX) $(CXXFLAGS) -o main main.o iresume.o rresume.o resume.o

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

resume.o: resume.cpp resume.hpp
	$(CXX) $(CXXFLAGS) -c resume.cpp

iresume.o: iresume.cpp iresume.hpp
	$(CXX) $(CXXFLAGS) -c iresume.cpp

rresume.o: rresume.cpp rresume.hpp
	$(CXX) $(CXXFLAGS) -c rresume.cpp

clean:
	rm -f *.o main
