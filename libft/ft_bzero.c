/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicaza <apicaza@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:26:11 by apicaza-          #+#    #+#             */
/*   Updated: 2026/01/28 11:36:20 by apicaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	temp = (unsigned char *) str;
	i = 0;
	while (i < n)
	{
		temp[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	size_t	n = 3;
	char	str[] = "Orozko";
	char	str1[] = "Orozko";

	printf("Antes del cambio %s\n", str);
	ft_bzero(str, n);
	printf("Despues del cambio %s\n", str);
	printf("\nResultado: %c %c %c %c %c %c \n",
		str[0], str[1], str[2], str[3], str[4], str[5]);
	bzero(str1, n);
	printf("Despues del cambio %s\n", str1);
	printf("\nResultado: %c %c %c %c %c %c \n",
		str1[0], str1[1], str1[2], str1[3], str1[4], str1[5]);
	return (0);
}*/
