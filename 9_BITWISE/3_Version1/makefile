run:
	gcc -c  main.c -o main.o
	gcc -c setbit.c -o setbit.o
	gcc -c clearbit.c -o clearbit.o
	gcc -c setclearbit.c -o setclearbit.o
	gcc -c display.c -o display.o
all:
	gcc  main.o setbit.o clearbit.o setclearbit.o  display.o -o main
	./main
clean:
	rm *.o	
