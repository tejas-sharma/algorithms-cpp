OBJS = main.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -std=c++14 -stdlib=libc++ -c $(DEBUG)
LFLAGS = -Wall -o binary_search

scratch: $(OBJS)
	$(CC) $(OBJS) $(LFLAGS)

main.o: main.cpp binary_search.h binary_search.tpp
	$(CC) $(CFLAGS) main.cpp

clean:
	\rm *.o binary_search
