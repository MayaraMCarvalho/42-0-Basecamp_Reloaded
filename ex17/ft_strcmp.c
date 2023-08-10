/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 03:28:53 by macarval          #+#    #+#             */
/*   Updated: 2022/03/27 03:49:28 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char *s1 = "Basecamp";
	char *s2 = "BaseCamp";

	printf("My function: %i\n", ft_strcmp(s1, s2));
    printf ("Original function: %d\n\n", strcmp(s1, s2));

	return (0);	
} */