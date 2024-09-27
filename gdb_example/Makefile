######################
#### flag setting ####
debug = 1
######################

CC = g++ 
CFLAGS = -O2
TARGET = example
OBJS = example.cc

ifeq ($(debug), 1)
	CFAGS += -g 
endif

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean: 
	rm -f *.o example 
