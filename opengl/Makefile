CC=g++ 

all: HelloWorld

HelloWorld: HelloWorld.o
	$(CC) -o HelloWorld HelloWorld.o -lglut -lGL -lGLU

HelloWorld.o: HelloWorld.cpp 
	$(CC) -o HelloWorld.o -c HelloWorld.cpp

clean:
	rm HelloWorld *.o
