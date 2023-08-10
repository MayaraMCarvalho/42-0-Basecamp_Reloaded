# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 03:49:17 by macarval          #+#    #+#              #
#    Updated: 2022/04/02 03:50:56 by macarval         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE		= ft_display_file

EXE			= ft_display_file.c

all:		$(FILE)

$(FILE):	
			gcc -c -Wall -Wextra -Werror $(EXE)
			gcc -o $(FILE) ft_display_file.o

clean:
			rm -f ft_display_file.o

fclean:		clean
			rm -f $(FILE)

re:			fclean all
