app	:main.o
	g++ -o app main.o

main.o	:main.cpp

clean	:
	rm *.o
	rm app

install	:
	./app
	
