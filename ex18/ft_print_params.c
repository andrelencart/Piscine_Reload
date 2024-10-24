/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:12:51 by andcarva          #+#    #+#             */
/*   Updated: 2024/10/23 12:57:58 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
/* {
	write(1, &c, 1);
} */

int	main(int ac, char **av)
{
	int	i;
	int	n;

	i = 1;
	while (ac > i)
	{
		n = 0;
		while (av[i][n] != '\0')
		{
			ft_putchar(av[i][n]);
			n++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
