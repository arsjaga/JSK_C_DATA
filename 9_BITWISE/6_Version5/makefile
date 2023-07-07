objs = main.o display.o ntombit.o searchbit.o bulkset.o
 
files:$(objs)
	gcc  $(objs) -o main
%.o:%.c
	gcc -c $^
clean:
	rm *.o files
