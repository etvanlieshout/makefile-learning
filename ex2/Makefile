# Makefile leaning is not particularly fun

CC := gcc
CFLAGS := -O0 -Wall -std=c99

BUILD_DIR := ./build
SRC_DIR := ./src
INCL_DIR := ./include
INCL_FLAG := $(addprefix -I, $(INCL_DIR))

SRCS := $(wildcard $(SRC_DIR)/*.c)
OBJS := $(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)

# Build final target program
$(BUILD_DIR)/decr : $(OBJS)
#$(BUILD_DIR)/decr : $(BUILD_DIR)/%.o
	$(CC) $^ -o $@

# Define rule to compile every .c into an object file (.o)
$(BUILD_DIR)/%.o : $(SRC_DIR)/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCL_FLAG) -c $< -o $@

# NOTES:
# $@ refers to all targets (part of rule before colon)
# $^ refers to all pre-reqs (part of rule after colon)
# $< refers to the first pre-req

# Clean-up
clean:
	@rm -r build
