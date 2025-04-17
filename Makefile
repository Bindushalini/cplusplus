CC = g++

CFLAGS = -g -Wall -O0 

object = sample.o file.o strutures.o 

edit: $(object)
	$(CC) -o edit $(object)

sample.o : sample.cpp
	$(CC) $(CFLAGS) -c sample.cpp -lstdc++

strutures.o : strutures.cpp strutures.h
	$(CC) $(CFLAGS) -c strutures.cpp -lstdc++

file.o : file.cpp
	$(CC) $(CFLAGS) -c file.cpp -lstdc++

.PHONY: clean

clean: 
	rm -f $(object)