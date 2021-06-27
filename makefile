BUILD = build
EXE = $(BUILD)/programmatic

CXX = g++
CXXFLAGS = -Wall -std=c++2a -g -Iinclude -I/usr/include -I/usr/local/include

LIBS = -lGL -lGLEW -lGLU -lglfw -lX11 -ldl -lpthread
LDFLAGS = -L/usr/lib -L/usr/local/lib

SRC = $(wildcard src/*.cpp)
OBJ = $(SRC:src/%.cpp=$(BUILD)/%.o)

.PHONY: all clean

all: clean $(BUILD) $(EXE)

$(EXE): $(OBJ)
	$(CXX) $(LDFLAGS) $^ $(LIBS) -o $@

$(BUILD)/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILD):
	mkdir -p build

clean:
	rm -rf $(BUILD)