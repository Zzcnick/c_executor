GCC = gcc -g

all: executor.o
	$(GCC) -o executor.out executor.o

executor.o: executor.c
	$(GCC) -c executor.c

run: executor.out
	./executor.out

clean:
	rm -f *~ *.out *.o *.txt
