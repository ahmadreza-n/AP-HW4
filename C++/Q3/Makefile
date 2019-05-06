CXX = g++
CXXFLAGS = -std=c++17 -Wall -c
LXXFLAGS = -std=c++17
OBJECTS = main.o shape.o twoDimensionalShape.o threeDimensionalShape.o square.o circle.o cube.o sphere.o point.o
TARGET = main


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
main.o: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp
shape.o: shape.h shape.cpp
	$(CXX) $(CXXFLAGS) shape.cpp
twoDimensionalShape.o: twoDimensionalShape.h twoDimensionalShape.cpp shape.h shape.cpp
	$(CXX) $(CXXFLAGS) twoDimensionalShape.cpp
threeDimensionalShape.o: threeDimensionalShape.h threeDimensionalShape.cpp shape.h shape.cpp
	$(CXX) $(CXXFLAGS) threeDimensionalShape.cpp
square.o: square.h square.cpp twoDimensionalShape.h twoDimensionalShape.cpp shape.h shape.cpp
	$(CXX) $(CXXFLAGS) square.cpp
circle.o: circle.h circle.cpp twoDimensionalShape.h twoDimensionalShape.cpp shape.h shape.cpp
	$(CXX) $(CXXFLAGS) circle.cpp
cube.o: cube.h cube.cpp threeDimensionalShape.h threeDimensionalShape.cpp shape.h shape.cpp
	$(CXX) $(CXXFLAGS) cube.cpp
sphere.o: sphere.h sphere.cpp threeDimensionalShape.h threeDimensionalShape.cpp shape.h shape.cpp
	$(CXX) $(CXXFLAGS) sphere.cpp
point.o: point.h point.cpp
	$(CXX) $(CXXFLAGS) point.cpp
clean:
	rm -f $(TARGET) $(OBJECTS)
