CC := gcc
CFLAGS := -Wall -Wextra -pedantic -std=c11
TARGET := main
SRCS := main.c soma.c subtrai.c multiplica.c divide.c absoluto.c fatorial.c
OBJS := $(SRCS:.c=.o)

.PHONY: all clean run
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $@

main.o: main.c soma.h subtrai.h
soma.o: soma.c soma.h
subtrai.o: subtrai.c subtrai.h
multiplica.o: multiplica.c multiplica.h
divide.o: divide.c divide.h
absoluto.o: absoluto.c absoluto.h
fatorial.o: fatorial.c fatorial.h

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
