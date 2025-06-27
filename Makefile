ritchie-1-24: ritchie-1-24.c chrstk.o
	cc ritchie-1-24.c chrstk.o -o ritchie-1-24

chrstk.o: chrstk.c
	cc -c chrstk.c -o chrstk.o

clean:
	rm chrstk.o ritchie-1-24
