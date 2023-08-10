/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 21:21:44 by macarval          #+#    #+#             */
/*   Updated: 2022/03/27 22:04:42 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*cop;
	char	*src_len;
	int		len;
	int		i;

	src_len = src;
	len = 0;
	while (*src_len != '\0')
	{
		len++;
		src_len++;
	}
	cop = (char *) malloc(len + 1);
	i = 0;
	while (src[i] != '\0')
	{
		cop[i] = src[i];
		i++;
	}
	return (cop + '\0');
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s1 = "Basecamp Reloaded - 42Sp";
	char	*s2 = ft_strdup(s1);
	char	*s3 = strdup(s1);

	printf ("My function: %s\n", s2);
	printf ("Original function: %s\n\n", s3);
	return (0);
} */
