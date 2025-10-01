AMLIB_DIR = $(HOME)/workspace/amlib

CC = gcc
CFLAGS = -g -Wall -Wextra -Werror -fsanitize=undefined,address, -I$(AMLIB_DIR)
LDFLAGS = -L$(AMLIB_DIR) -lamlib

LIB_SRCS := $(wildcard $(AMLIB_DIR)/*.c)
LIB_OBJS := $(patsubst $(AMLIB_DIR)/%.c, $(AMLIB_DIR)/%.o, $(LIB_SRCS))
LIB = $(AMLIB_DIR)/libamlib.a

SRC = 01
TARGET = a.out

all: run clean

$(LIB): $(LIB_OBJS)
	ar rcs $@ $^

$(AMLIB_DIR)/%.o: $(AMLIB_DIR)/%.c
	$(CC) -c $< -o $@

$(TARGET): $(SRC).c $(LIB)
	$(CC) $(SRC).c -o $@ $(CFLAGS) $(LDFLAGS)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET) $(LIB_OBJS) $(LIB)

