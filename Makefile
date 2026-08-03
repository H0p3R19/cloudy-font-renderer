# Compiler and flags
CC = g++
CFLAGS = -Wall -O2

# Source files
SRCS = src/main.cpp src/input.cpp src/PixelData.cpp	src/DrawObject.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Target executable
TARGET = cloudy

# Default target
all: $(TARGET)

# Rule to build the target executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Rule to build object files from source files
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule to remove generated files
clean:
	rm -f $(OBJS) $(TARGET)