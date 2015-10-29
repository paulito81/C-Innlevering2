CC = gcc

CFLAGS = -g -Wall -Wextra -03

TARGET = Innlevering2

all: $(TARGET)

$(TARGET) : Innlevering2.o global.o
	$(CC) $(CFLAGS) -o $(TARGET) global.o Innlevering2.o
Innlevering2.o: innlevering2.c
	$(CC) $(CFLAGS) -c -o Innlevering2.o Innlevering2.c
global.o: global.c
	$(CC) $(CFLAGS) -c -o global.o global.c
clean:
	$(RM) $(TARGET) *.o
