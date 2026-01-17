CC = gcc
# Compilation only
CFLAGS = -I./lib -Wall -g -MMD -MP -ffunction-sections
# Linking only
LDFLAGS = -Wl,--gc-sections

# 1. Library Logic
LIB_SRCS = $(wildcard lib/*.c)
LIB_OBJS = $(LIB_SRCS:.c=.o)
STATIC_LIB = lib/mylib.a

# 2. Application Logic
SRC_FILES = $(wildcard src/*.c)
TARGETS = $(patsubst src/%.c, build/%, $(SRC_FILES))

# 3. All Dependency files (.d)
DEPS = $(LIB_OBJS:.o=.d) $(patsubst src/%.c, build/%.d, $(SRC_FILES))

.PHONY: all clean

all: build $(STATIC_LIB) $(TARGETS)

build:
	mkdir -p build

# Rule to bundle .o files into a .a suitcase
$(STATIC_LIB): $(LIB_OBJS)
	ar rcs $@ $^

# Rule to compile .c into .o (Standard)
lib/%.o: lib/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to link the final binary using the .a
build/%: src/%.c $(STATIC_LIB) | build
	$(CC) $(CFLAGS) $< $(STATIC_LIB) $(LDFLAGS) -o $@

-include $(DEPS)

clean:
	rm -rf build lib/*.o lib/*.d lib/*.a