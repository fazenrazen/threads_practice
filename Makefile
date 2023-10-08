CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -pthread
SRC = threads.cpp
TARGET = threads

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $@ $<

.PHONY: clean

clean:
	rm -f $(TARGET)