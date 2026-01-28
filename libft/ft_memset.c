/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicaza <apicaza@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:02:06 by apicaza-          #+#    #+#             */
/*   Updated: 2026/01/28 11:43:50 by apicaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	temp = (unsigned char *) str;
	i = 0;
	while (i < n)
	{
		temp[i] = (unsigned char) c;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	size_t n = 3;
	int	c = 'A';
	char	str[] = "Aupa Athletic";
	char	str1[] = "Aupa Athletic";

	printf("antes del cambio %s\n", str);
	ft_memset(str, c, n);
	printf("despues del cambio con ft %s\n", str);
	memset(str1, c, n);
	printf("despues del cambio con orig %s\n", str1);
	return (0);
}*/
