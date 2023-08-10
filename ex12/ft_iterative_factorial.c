/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 14:52:25 by macarval          #+#    #+#             */
/*   Updated: 2022/03/26 15:27:31 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0 || nb == 1)
		result = 1;
	else if (nb > 1 && nb < 13)
	{
		while (nb > 1)
		{
			result *= nb;
			nb--;
		}
	}
	else
		return (0);
	return (result);
}

/* #include <stdio.h>

int main (void)
{
	printf("O fatorial é: %d\n", ft_iterative_factorial(3));
	printf("O fatorial é: %d\n", ft_iterative_factorial(0));
	printf("O fatorial é: %d\n", ft_iterative_factorial(4));
	printf("O fatorial é: %d\n", ft_iterative_factorial(-8));
	printf("O fatorial é: %d\n", ft_iterative_factorial('a'));
	printf("O fatorial é: %d\n", ft_iterative_factorial(1));
	return (0);
} */