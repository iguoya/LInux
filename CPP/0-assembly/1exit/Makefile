objects = main.o
app:$(objects)
	ld -o app $(objects)
	./app
main.o: main.s
	as main.s -o main.o

