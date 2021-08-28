all: animal cat dog catdog imain
	g++ *.o -o main.exe

imain: main.cpp
	g++ -c main.cpp -o main.o

animal: animal.cpp
	g++ -c animal.cpp -o animal.o

cat: cat.cpp
	g++ -c cat.cpp -o cat.o

dog: dog.cpp
	g++ -c dog.cpp -o dog.o

catdog: catdog.cpp
	g++ -c catdog.cpp -o catdog.o

clear:
	rm *.o *.exe