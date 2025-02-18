CC = gcc
CFLAGS = -Wall -Wextra -Werror
DEPS = user.h service.h sparepart.h order.h
OBJ = main.o user.o service.o sparepart.o order.o

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

main: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY: clean

clean:
	rm -f *.o main
