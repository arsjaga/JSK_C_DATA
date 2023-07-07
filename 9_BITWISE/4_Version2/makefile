run:
	gcc -c  main.c -o main.o
	gcc -c togglebit.c -o togglebit.o
	gcc -c display.c -o display.o
	gcc -c reversebit.c -o reversebit.o
	gcc -c rotatebit.c -o rotatebit.o
all:
	gcc  main.o togglebit.o display.o reversebit.o rotatebit.o -o main
	./main
clean:
	rm *.o	
