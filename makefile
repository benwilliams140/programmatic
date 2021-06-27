BUILD = build
EXE = $(BUILD)/programmatic

CXX = g++
CXXFLAGS = -Wall -std=c++2a -g -Iinclude -I/usr/include -I/usr/local/include

LIBS = -lglfw3
LFLAGS = -L/usr/lib -L/usr/local/lib

SRC = $(wildcard src/*.cpp)
OBJ = $(SRC:src/%.cpp=$(BUILD)/%.o)

.PHONY: all clean

all: $(BUILD) $(EXE)

$(EXE): $(OBJ)
	$(CXX) $(LFLAGS) $(LIBS) $^ -o $@

$(BUILD)/%.o: $(SRC)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILD):
	mkdir -p build

clean:
	rm -rf $(BUILD)