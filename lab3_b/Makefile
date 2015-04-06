lab3_b: lab3_b.o Clock.o
	g++ -o clock lab3_b.o Clock.o
Clock.o: Clock.cpp Clock.h
	g++ -c Clock.cpp
lab3_b.o: lab3_b.cpp Clock.h
	g++ -c lab3_b.cpp
clean:
	rm Clock*.o