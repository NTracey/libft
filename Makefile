# the name of the target program
TARGET = libft.a

# other source files and the associated object files
# Libc functions
SRC	=	
OBJ	=	

# select the compiler and flags
CC	=	gcc
CFLAGS	=	-Wall -Wextra -Werror

# specify how to compile the .c files into .o files
%.o : %.c
	$(CC)	$(CFLAGS)	-c $<

# if you type 'make' without arguments, this is the default
all:	$(TARGET)

# specify how to compile the target
$(TARGET):	$(OBJ)	$(TARGET).c
	$(CC)	$(CFLAGS)	$(TARGET).c	$(OBJ)	-o $(TARGET)

# remove binaries
clean:
	rm -f $(OBJ)	$(TARGET).o	$(TARGET)

# remove binaries and other junk
clobber:
	make clean
	rm -f core *~




