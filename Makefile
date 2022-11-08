all: archive

archive: temperature.o strcmp.o
	@ar -r lib.a temperature.o strcmp.o

temperature.o: temperature.c temperature.h
	@gcc -c temperature.c

strcmp.o: strcmp.c strcmp.h
	@gcc -c strcmp.c
