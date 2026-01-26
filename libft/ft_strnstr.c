/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicaza <apicaza@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 14:12:36 by apicaza           #+#    #+#             */
/*   Updated: 2026/01/26 16:30:23 by apicaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while ((big[i] != '\0') && (i < len))
	{
		j = 0;
		while ((little[j] != '\0') && ((i + j) < len)
			&& (big[i + j] == little[j]))
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*big = "El Athletic es el mejor";
	char *little = "es el mejor";

	printf("Texto entero es %s\n", big);
	printf("texto buscado es %s\n", little);
	printf("test 1 se puede entero %s\n", ft_strnstr(big, little, 24));
	printf("test 2 (No encontrado): %s\n", ft_strnstr(big, little, 8));
	printf("test 2 (No suficiente espacio): %s\n", ft_strnstr(big, little, 17));
	return (0);
}*/
