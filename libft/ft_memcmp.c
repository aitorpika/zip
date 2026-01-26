/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicaza <apicaza@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 13:24:50 by apicaza           #+#    #+#             */
/*   Updated: 2026/01/26 14:06:41 by apicaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ts1;
	unsigned char	*ts2;
	size_t			i;

	ts1 = (unsigned char *)s1;
	ts2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ts1[i] != ts2[i])
		{
			return (ts1[i] - ts2[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *s1 = "zyxbcde";
	char *s2 = "zyxabcd";
	int res_ft;
	int res_orig;

	printf("--- Test 1: Cadenas diferentes ---\n");
	// Comparamos los primeros 4 bytes ("zyxb" vs "zyxa")
	res_ft = ft_memcmp(s1, s2, 4);
	res_orig = memcmp(s1, s2, 4);
	printf("ft_memcmp: %d\n", res_ft);
	printf("Original : %d\n", res_orig);

	printf("\n--- Test 2: Cadenas iguales (n limitado) ---\n");
	// Comparamos solo los primeros 3 bytes ("zyx" vs "zyx")
	res_ft = ft_memcmp(s1, s2, 3);
	res_orig = memcmp(s1, s2, 3);
	printf("ft_memcmp: %d\n", res_ft);
	printf("Original : %d\n", res_orig);

	printf("\n--- Test 3: Comparación con caracteres nulos ---\n");
	// memcmp no se detiene en \0, a diferencia de strcmp
	char data1[] = {0, 0, 127, 0};
	char data2[] = {0, 0, 42, 0};
	res_ft = ft_memcmp(data1, data2, 4);
	res_orig = memcmp(data1, data2, 4);
	printf("ft_memcmp: %d\n", res_ft);
	printf("Original : %d\n", res_orig);

	printf("\n--- Test 4: n = 0 ---\n");
	res_ft = ft_memcmp(s1, s2, 0);
	res_orig = memcmp(s1, s2, 0);
	printf("ft_memcmp: %d (debe ser 0)\n", res_ft);
	printf("Original : %d (debe ser 0)\n", res_orig);

	return (0);
}*/
