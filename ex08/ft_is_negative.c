/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 01:29:48 by macarval          #+#    #+#             */
/*   Updated: 2022/03/25 01:35:40 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

// #include <unistd.h>

// int	main(void)
// {
// 	int	num;

// 	num = 86484181;
// 	ft_is_negative(num);
// 	return (0);
// }

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }
