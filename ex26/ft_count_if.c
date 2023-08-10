/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 19:55:21 by macarval          #+#    #+#             */
/*   Updated: 2022/04/02 02:38:04 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			result++;
		i++;
	}
	return (result);
}

/* #include <stdio.h>

int ft_islower(char *str)
{
  if(str)
      return (1);
  return (1);
}

int main(void)
{
  char *arr[3] = {"one", "two", "D"};
  char **tab;
  
  tab = arr;
  printf("ft_any: %d", ft_count_if(tab, ft_islower));
  return 0;
} */
