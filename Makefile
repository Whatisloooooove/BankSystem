CXX = g++
CXXFLAGS = -Werror -Wall
LDFLAGS = 

DEBUG_FLAGS = -g
RELEASE_FLAGS = -O2

SRC_DIR = src
BUILD_DIR = build

SRCS = $(shell find $(SRC_DIR) -name '*.cpp')
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SRCS))
DEPS = $(OBJS:.o=.d)

TARGET = SVBank

BUILD_TYPE ?= Release

# Можно явно указывать флаг BUILD_TYPE при вызове cmake - Release/Debug
ifeq ($(BUILD_TYPE), Debug)
    CXXFLAGS += $(DEBUG_FLAGS)
else
    CXXFLAGS += $(RELEASE_FLAGS)
endif

all: $(TARGET)

$(TARGET) : $(OBJS)
	$(CXX) $(LDFLAGS) $^ -o $@

$(BUILD_DIR)/%.o : $(SRC_DIR)/%.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -MMD -c $< -o $@

-include $(DEPS)

clean:
	rm -rf $(BUILD_DIR) $(TARGET)

.PHONY: all clean
