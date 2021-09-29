INC_DIR=include
CC=gcc
CFLAGS=-I$(INC_DIR)

OBJ_DIR=obj
LIB_DIR=lib

LIBS=-lm

$(OBJ_DIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

hello: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
