##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC		=		src/game.c 				\
				src/sprite.c 			\
				src/convector_vect.c 	\
				src/main.c 				\
				src/shoot.c 			\
				src/manage_mouse.c 		\
				src/show.c 				\
				src/sprite_2.c 			\
				src/destroy_all.c 		\
				src/sprite_3.c


OBJ		=		$(SRC:.c=.o)

CFLAGS	=		-l csfml-graphics -l csfml-window -l csfml-system 		\
				-L lib/my -lmy -I include/

NAME	=		my_hunter

all:		$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm	-f 	$(OBJ)
	make clean -C lib/my

fclean: clean
	rm 	-f 	$(NAME)
	make fclean -C lib/my

re:	fclean	all