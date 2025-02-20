#OBJS = main.o EkinCoolFunction.o EkinCoolerFunction.o
SOURCES := $(wildcard *.c)
OBJS := $(SOURCES:.c=.o)
TARGET := main

CC = gcc
CFLAGS = -Wall -Werror -std=c11
LDFLAGS = -lm

.PHONY : all
all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY : clean
clean : 
	rm -rf $(TARGET) $(OBJS)


#a.out : main.o EkinCoolFunction.o EkinCoolerFunction.o
#	gcc main.o EkinCoolFunction.o EkinCoolerFunction.o -o a.out

#%.o : %.c
#	$(CC) $(CFLAGS) $^

#a.out : $(OBJS)
# this will use the target name for the executable image
#	$(CC) $^ $(LDFLAGS) -o $@	
#	$(CC) $(OBJS) $(LDFLAGS) -o a.out


#main.o : main.c
#	gcc -c -g -Wall -Werror -lm -std=c11 main.c

#main.o : main.c
#	$(CC) $(CFLAGS) $<


#EkinCoolFunction.o : EkinCoolFunction.c
#	gcc -c -g -Wall -Werror -lm -std=c11 EkinCoolFunction.c

#EkinCoolFunction.o : EkinCoolFunction.c
#	$(CC) $(CFLAGS) $<

#EkinCoolerFunction.o : EkinCoolerFunction.c
#	gcc -c -g -Wall -Werror -lm -std=c11 EkinCoolerFunction.c

#EkinCoolerFunction.o : EkinCoolerFunction.c
#	$(CC) $(CFLAGS) $^

#clean:
#	rm -f a.out
#	rm -f $(OBJS)