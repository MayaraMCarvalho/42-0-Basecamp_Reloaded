# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/27 23:56:20 by macarval          #+#    #+#              #
#    Updated: 2022/04/01 18:57:22 by macarval         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES		= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
# Declara todos os arquivos que serão utilizados

DIRF		= ./srcs/
# Declara o diretório dos arquivos a serem utilizados

WAY		= ${addprefix $(DIRF), $(FILES)}
# Declara o caminho completo dos arquivos. 
# Concatenando DIR com FILES.

EXE		= $(WAY:.c=.o)
# Cria lista de nomes de arquivos executáveis.
# Substituindo a extenção .c por .o

DIRH		= ./includes/
# Declara o diretório dos arquivos de cabeçalho a serem utilizados.

HEAD		= libft.a
# Declara nome da biblioteca a ser gerada.

AR			= ar cr
# Declara comando ar.
# Cria o repositório (mesmo que já exista).
# Substitui ou adiciona arquivo ao repositório (r).

LIB			= ranlib
# Declara o comando ranlib.
# Usado para gerar o índice para o arquivo.

GCC			= gcc
# Declara o nome do programa compilador que será 
# usado no processo de compilação.

CFLAGS		= -Wall -Wextra -Werror
# Declara as flags que serão usadas pelo compilador.

.c.o:
			$(GCC) $(CFLAGS) -c -I $(DIRH) $< -o $(<:.c=.o)
# Declara regra.
# gcc -Wall -Wextra -Werror -c -I ./includes/ ...
# ... srcs/ft_putchar.c -o srcs/ft_putchar.o 
# -c: compila e converte para a linguagem de máquina sem linkar 
# (não cria o programa executável).
# -I diretório: adiciona a biblioteca durante a linkedição.
# -o arquivo: nome do arquivo de saída (.out).
# $<: armazena o nome do primeiro pré-requisito da regra.
# <:.c=.o: modifica a extensão do nome do primeiro pré-requisito
# da regra para tornar .o

$(HEAD):	$(EXE)
			$(AR) $(HEAD) $(EXE)
			$(LIB) $(HEAD)
# $(HEAD): Nome do arquivo (biblioteca) que será gerado pelo programa.
# $(EXE) : Arquivo que será usado como entrada na criação da bibioteca.
# Restante: Ações que o make executará.

# libft.a:	srcs/ft_putchar.o ./srcs/ft_swap.o ./srcs/ft_putstr.o ...
#			ar cr libft.a ./srcs/ft_putchar.o ./srcs/ft_swap.o ...
#			ranlib libft.a	

all:		$(HEAD)
# Executa libft.a (ver acima)

clean:
			rm -f $(EXE)
# Remove sem confirmação todos os executáveis.

fclean:		clean
			rm -f $(HEAD)
# Executa clean (ver acima)
# Remove sem confirmação o arquivo de biblioteca

re:			fclean all
# Executa fclean (ver acima)
# Executa all (ver acima)