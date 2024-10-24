/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:27:53 by andcarva          #+#    #+#             */
/*   Updated: 2024/10/23 12:58:50 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	size;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
/* int main(void) 
{
    int min = 3;
    int max = 10;
    int *range;
    int i;
    int size;

    range = ft_range(min, max);

    if (range == NULL) {
        printf("Failed.\n");
        return 1;
    }

    size = max - min;
    for (i = 0; i < size; i++) {
        printf("%d ", range[i]);
    }
    printf("\n");

    return 0;
} */
