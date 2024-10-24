/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:20:01 by andcarva          #+#    #+#             */
/*   Updated: 2024/10/24 14:05:46 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	count;
	int	j;

	count = 0;
	j = 0;
	while (tab[j] != NULL)
	{
		if (f(tab[j]) == 1)
			count++;
		j++;
	}
	return (count);
}

/* int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (!(str[i] >= 'a' && str[i] <= 'z'))
			{
				return(0);
			}
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char	*arr[] = {"0a", "AC", "ASD", NULL};
	int	result;

	result = ft_count_if(arr, ft_str_is_alpha);
	printf("%d\n", result);
} */