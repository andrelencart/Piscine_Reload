/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:27:51 by andcarva          #+#    #+#             */
/*   Updated: 2024/10/22 15:33:27 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

/* int main()
{
	int a, b, c, d;

	a = 42;
	b = 10;
	ft_div_mod(a, b, &c, &d);
	printf("c: %d\n", c);
	printf("d: %d\n", d);
} */