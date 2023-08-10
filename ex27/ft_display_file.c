/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 01:07:32 by macarval          #+#    #+#             */
/*   Updated: 2022/04/02 04:05:04 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);

int	main(int argc, char *argv[])
{
	int		file;
	char	buff;

	if (argc == 1)
	{
		ft_putstr("File name missing.");
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.");
	}
	if (argc == 2)
	{
		file = open(argv[1], O_RDONLY);
		if (file != -1)
		{
			while (read(file, &buff, 1) != 0)
				write(1, &buff, 1);
		}
		close (file);
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}
