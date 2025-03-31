#Names: Jordan Sowell and Diego Masella
#Date: 4/6/22025
#Section: CPSC 1021
#Description: The Makefile
OPTIONS = -Wall
PROGRAM = main.out

all: $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): main.cpp Rectangle.cpp Square.cpp Circle.cpp Trapezoid.cpp
	$(CXX) $(OPTIONS) main.cpp Rectangle.cpp Square.cpp Circle.cpp Trapezoid.cpp -o $(PROGRAM) 

clean:
	rm -f $(PROGRAM)

