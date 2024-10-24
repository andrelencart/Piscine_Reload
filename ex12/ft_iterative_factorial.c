/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:32:40 by andcarva          #+#    #+#             */
/*   Updated: 2024/10/23 13:59:53 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	result = 1;
	i = 2;
	if (nb < 0)
		return (0);
	if (nb > 12)
		return (0);
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}

/* int	main(void)
{
	int number;
	int factorial;

	number = 13;
	factorial = ft_iterative_factorial(number);
	printf("factorial of %d is: %d\n", number, factorial);
} */