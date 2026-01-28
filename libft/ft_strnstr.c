/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicaza <apicaza@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 14:12:36 by apicaza           #+#    #+#             */
/*   Updated: 2026/01/28 12:35:49 by apicaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

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
int	main(void)
{
	char	*big = "El Athletic es el mejor";
	char *little = "es el";

	printf("Texto entero es %s\n", big);
	printf("texto buscado es: %s\n", little);
	printf("test 1 con ft (se puede entero) %s\n", ft_strnstr(big, little, 24));
	printf("test 2 con ft(No encontrado): %s\n", ft_strnstr(big, little, 8));
	printf("test 2 con ft(No suficiente espacio):
		%s\n", ft_strnstr(big, little, 14));

	printf("test 1 con org (se puede entero) %s\n", strnstr(big, little, 24));
	printf("test 2 con org(No encontrado): %s\n", strnstr(big, little, 8));
	printf("test 2 con org(No suficiente espacio):
		%s\n", strnstr(big, little, 14));
	return (0);
}*/
