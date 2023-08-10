/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 22:09:01 by macarval          #+#    #+#             */
/*   Updated: 2022/03/27 22:24:26 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;

	if (min >= max)
		return (0);
	result = (int *)malloc(sizeof(*result) * (max - min));
	i = 0;
	while (min < max)
	{
		result[i] = min;
		i++;
		min++;
	}
	return (result);
}

/* #include <stdio.h>

int	main(void)
{
	int max = 18;
	int min = 9;
	int i = -1;
	int *result;
	
	result = ft_range(min, max);

	while (++i < max - min)
	{
		printf("%d\n", result[i]);
	}
	
	return (0);
} */