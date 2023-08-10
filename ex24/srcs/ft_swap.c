/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 01:51:59 by macarval          #+#    #+#             */
/*   Updated: 2022/04/02 15:22:23 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	turn;

	turn = *a;
	*a = *b;
	*b = turn;
}

/* #include <stdio.h>

int	main(void)
{
	int	*a;
	int	*b;
	int c;
	int d;
	
	c = 42;
	d = 54;
	
	a = &c;
	b = &d;
	
	printf("Before: \na:%d\nb:%d\n", *a, *b);
	ft_swap(a, b);
	printf("After: \na:%d\nb:%d\n", *a, *b);
	return (0);
} */
