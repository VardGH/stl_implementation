# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++17 -Wall -Wextra

# Source files
SRCS = main.cpp test.cpp

# Header files
HEADERS = is_same.hpp enable_if.hpp remove_reference.hpp move.hpp forward.hpp test.hpp

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
