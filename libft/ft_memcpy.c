/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicaza- <apicaza-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 12:12:22 by apicaza-          #+#    #+#             */
/*   Updated: 2026/01/21 13:43:18 by apicaza-         ###   ########.fr       */
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

int	main(void)
{
	char	str[] = "Aupa Athletic";
	char	dest[] = "Gora Euskadi";

	printf("Antes del cambio %s\n", dest);
	ft_memcpy(dest, str, 7);
	printf("Despues del cambio %s\n", dest);
	return (0);
}*/
