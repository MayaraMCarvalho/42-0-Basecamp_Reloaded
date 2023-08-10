/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 01:27:37 by macarval          #+#    #+#             */
/*   Updated: 2022/03/27 03:06:21 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	control;

	control = 2;
	while (control < nb)
	{
		if (nb / control == control && nb % control == 0)
			return (control);
		control++;
	}
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	printf("Result: %i\n", ft_sqrt(1764));
	printf("Result: %i\n", ft_sqrt(2147395600));
	return (0);
} */
