/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 14:08:54 by macarval          #+#    #+#             */
/*   Updated: 2022/03/26 14:48:02 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* #include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int *div;
	int *mod;
	
	a = 42;
	b = 4;
	
	mod = &a;
	div = &b;
	
	printf("Value of a: %d\nValue of b: %d\n", a, b);
	ft_div_mod(a, b, div, mod);
	printf("\nValue of division of a and b: %d\n", *div);
	printf("Value of module of a and b: %d\n", *mod);
	
	return (0);
} */
