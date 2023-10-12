CC = gcc

CFLAGS = -g -Wall -O0 

sample: sample.cpp 
	$(CC) $(CFLAGS) -o sample sample.cpp -lstdc++

.PHONY: clean

clean: rm -f *.o