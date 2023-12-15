all: do

do: sandra.c jessica.c ava.c
	gcc -o do sandra.c jessica.c ava.c

sandra.o: sandra.c
	gcc -o sandra.o -c sandra.c -W -ansi -pedantic

jessica.o: jessica.c
	gcc -o jessica.o -c jessica.c -W -ansi -pedantic

ava.o: ava.c
	gcc -o ava.o -c ava.c -W -ansi -pedantic

clean:
	rm -rf *.o

mrproper: clean
	rm -rf do