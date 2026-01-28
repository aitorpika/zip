/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicaza <apicaza@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 12:12:22 by apicaza-          #+#    #+#             */
/*   Updated: 2026/01/28 11:20:56 by apicaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *str, size_t n)
{
	size_t			i;
	unsigned char	*tempd;
	unsigned char	*temps;

	if (!dest && !str)
		return (0);
	tempd = (unsigned char *) dest;
	temps = (unsigned char *) str;
	i = 0;
	while (i < n)
	{
		tempd[i] = temps[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "Aupa Athletic";
	char	dest[] = "Gora Euskadi";
	char	dest1[] = "Gora Euskadi";

	printf("Antes del cambio dest= %s\n", dest);
	ft_memcpy(dest, str, 7);
	printf("Despues del cambio dest= %s\n", dest);
	printf("Antes del cambio dest1= %s\n", dest1);
	memcpy(dest1, str, 7);
	printf("Despues del cambio dest1= %s\n", dest1);
	return (0);
}*/
