# Makefile leaning is not particularly fun

CC := gcc
CFLAGS := -O0 -Wall -std=c99 -D_DEFAULT_SOURCE

# Build final target program
decr : decrement.o sub_one.o add_one.o
	$(CC) $^ -o $@

# Define rule to compile every .c into an object file (.o)
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

# NOTES:
# $@ refers to all targets (part of rule before colon)
# $^ refers to all pre-reqs (part of rule after colon)
# $< refers to the first pre-req

# Clean-up
clean:
	@rm *.o decr
