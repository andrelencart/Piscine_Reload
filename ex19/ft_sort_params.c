/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:28:53 by andcarva          #+#    #+#             */
/*   Updated: 2024/10/23 12:58:35 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
/* {
	write(1, &c, 1);
} */

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_swap(char **a, char **b)
{
	char	*swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(int ac, char **av)
{
	int	j;
	int	k;

	j = 1;
	while (ac - 1 > j)
	{
		k = 1;
		while (ac - 1 > k)
		{
			if (ft_strcmp(av[k], av[k + 1]) > 0)
				ft_swap(&av[k], &av[k + 1]);
			k++;
		}
		j++;
	}
	k = 1;
	while (ac > k)
	{
		ft_putstr(av[k]);
		ft_putstr("\n");
		k++;
	}
	return (0);
}
