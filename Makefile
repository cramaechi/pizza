pizza: main.o pizza.o
	g++ main.o pizza.o -o pizza

main.o: main.cpp
	g++ -c main.cpp

pizza.o: pizza.cpp
	g++ -c pizza.cpp

clean:
	rm *.o pizza
