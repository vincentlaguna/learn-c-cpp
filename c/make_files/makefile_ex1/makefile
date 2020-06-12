# Basic Example

# .PHONY: all say_hello generate clean

# all: say_hello generate

# say_hello:
# 	@echo "Hello World!"
	
# generate:
# 	@echo "Creating empty text files..."
# 	touch file-{1..10}.txt

# clean:
# 	@echo "Cleaning up..."
# 	rm *.txt
  
# Advanced example

# Usage:
# make		# compile all binary
# make clean		# remove ALL binaries and objects

.PHONY = all clean

LINKERFLAG = -lm

SRCS := $(wildcard *.c)
BINS := $(SRCS:%.c=%)

all: ${BINS}

%: %.o
		@echo "Checking..."
		${CC} ${LINKERFLAG} $< -o $@
		
%.o: %.c
		@echo "Creating object..."
		${CC} -c $<

clean:
		@echo "Cleaning up.."
		rm -rvf *.o ${BINS}