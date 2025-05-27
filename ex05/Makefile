.PHONY: all clean fclean

all: do-op

clean: delobj

fclean: delobj
	rm do-op *.a

ft_putnbr.o: ft_putnbr.c
	gcc -c ft_putnbr.c -o ft_putnbr.o

ft_atoi.o: ft_atoi.c
	gcc -c ft_atoi.c -o ft_atoi.o

libmy.a: ft_atoi.o ft_putnbr.o
	ar rcs libmy.a ft_atoi.o ft_putnbr.o

delobj:
	rm *.o

do-op.o: do-op.c
	gcc -c do-op.c -o do-op.o

do-op: do-op.o libmy.a
	gcc -o do-op do-op.o -L. libmy.a
