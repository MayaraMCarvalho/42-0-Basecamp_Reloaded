/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 01:25:54 by macarval          #+#    #+#             */
/*   Updated: 2022/03/25 01:29:10 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	num;

	num = '0';
	while (num <= '9')
	{
		ft_putchar(num);
		num++;
	}
}

// #include <unistd.h>

// int main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }