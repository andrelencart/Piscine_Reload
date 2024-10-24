/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:38:22 by andcarva          #+#    #+#             */
/*   Updated: 2024/10/23 13:57:03 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 12)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}

/* int	main(void)
{
	int number = 5;
	int factorial = ft_recursive_factorial(number);
	printf("Factorial of %d is: %d\n", number, factorial);

	return (0);
} */