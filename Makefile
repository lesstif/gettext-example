INC_DIR=include
CC=gcc
CFLAGS=-I$(INC_DIR)

SRCS=hello.c
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

hello.pot: $(SRCS)
	xgettext -c $(SRCS) -o $(POT)

