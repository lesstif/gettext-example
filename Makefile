INC_DIR=include
CC=gcc
CFLAGS=-I$(INC_DIR)

SRCS=hello.c
HEADERS=hello.h

OBJS=$(SRCS:.o=.c)

LIBS=-lm

POT=hello.pot

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

hello: $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f *.o *~ core *~ a.out hello

hello.pot: $(SRCS) $(HEADERS)
	xgettext -c $(SRCS) $(HEADERS) -o $(POT)

