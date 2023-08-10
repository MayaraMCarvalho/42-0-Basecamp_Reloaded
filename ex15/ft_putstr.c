/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 03:11:20 by macarval          #+#    #+#             */
/*   Updated: 2022/03/27 03:19:34 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

/* #include <unistd.h>

int main(void)
{
	char *str;

	str = "Basecamp Reloaded - 42Sp!!!! \n";
	ft_putstr(str);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
} */