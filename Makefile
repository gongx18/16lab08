CXX=clang++
CXXFLAGS=-Wall -Wextra -std=c++11
LD=$(CXX)
LDFLAGS=$(CXXFLAGS)

.PHONY: all
all: testFile

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $^

testFile: testFile.o strFuncs.o tddFuncs.o
	$(LD) $(LDFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm -rf *.o testFile

