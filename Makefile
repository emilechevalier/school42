# define the C compiler to use
CC 		= gcc

# define compiler flags
CFLAGS		= -std=c11 -Wall -Wextra -fmax-errors=10

# define library paths in addition to /usr./lib
LFLAGS		= -L.

# define libraries to use
LIBS		= -lweather

# define the object files that this project needs
OBJFILES	= program.o weatherstats.o

# define the name of the executable file
MAIN		= program

all: $(MAIN)

$(MAIN): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(MAIN) $(OBJFILES) $(LFLAGS) $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

launch: $(MAIN)
	./$(MAIN)

clean:
	rm -f $(OBJFILES) $(MAIN)
