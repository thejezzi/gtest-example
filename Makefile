CFLAGS = -Wall -g -lgtest

as: $(wildcard *.cpp)
	$(CXX) $(CFLAGS) $^ -o $@
