/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicaza <apicaza@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 14:08:39 by apicaza           #+#    #+#             */
/*   Updated: 2026/01/28 13:05:17 by apicaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>
#include <stdint.h>

void	*ft_calloc(size_t num, size_t size)
{
	void	*str;

	if (num != 0 && size > SIZE_MAX / num)
		return (NULL);
	str = malloc(num * size);
	if (str != NULL)
		ft_bzero(str, num * size);
	return (str);
}
/*
int	main(void)
{
	char	*str = "kaixo";
	char	*str1 = "kaixo";
	int		i;

	printf("Antes de la funcion str es %s\n", str);
	printf("Antes de la funcion str1 es %s\n", str1);
	str = (char *)ft_calloc(6, sizeof(char));
	str1 = (char *)calloc(6, sizeof(char));
	i = 0;
	while (i < 6)
	{
		printf("posicion del str %d = %d\n", i, str[i]);
		printf("posicion del str1 %d = %d\n", i, str1[i]);
		i++;
	}
	free(str);
	free(str1);
	return (0);
}*/
