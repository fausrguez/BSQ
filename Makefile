NAME = BSQ
OBJS = `find . -name "*.o"`
LIBS = `find ./libs -name "*.c"`

$(NAME): objects
	@gcc -Wall -Wextra -Wall main.c $(OBJS) -o $(NAME)

objects: clean
	@gcc -c -Wall -Wextra -Wall $(LIBS)
	@mv *.o ./dist/

clean:
	@find ./dist -name "*.o" -delete

