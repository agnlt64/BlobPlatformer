# compiler
CC := g++

# flags
CFLAGS := `pkg-config --libs --cflags raylib` -std=c++20 -o platform2

# headers
HDRS := headers/*.h

# sources files
SRCS := src/*.cpp

# objects files
OBJS := $(SRCS:.c=.o)

# executable
EXEC := game

# default config
all: $(EXEC)

# build
$(EXEC): $(OBJS) $(HDRS) Makefile
	$(CC) -o $@ $(OBJS) $(CFLAGS)

#build objects files
# $(OBJS): $(@:.o=.c) $(HDRS) Makefile
# 	$(CC) -o $@ $(@:.o=.c) -c $(CFLAGS)

 # clean the workspace
clean:
	echo Dangerous command. Has been disabled forever.

.PHONY: all clean