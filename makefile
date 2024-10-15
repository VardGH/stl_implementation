# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++17 -Wall -Wextra

# Source files
SRCS = main.cpp

# Header files
HEADERS = is_same.hpp

# Executable
TARGET = main

# Default rule to build the executable
all: $(TARGET)

# Link the object files and create the executable
$(TARGET): $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

# Clean the generated files
clean:
	rm -f $(TARGET)
