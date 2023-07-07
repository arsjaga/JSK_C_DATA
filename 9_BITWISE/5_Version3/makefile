run:
	gcc -c  main.c -o main.o
	gcc -c calcbitlength.c -o calcbitlength.o
	gcc -c display.c -o display.o
	gcc -c countbit.c -o countbit.o
	gcc -c calcparity.c -o calcparity.o
all:
	gcc  main.o calcbitlength.o display.o countbit.o calcparity.o -o main
	./main
clean:
	rm *.o	
