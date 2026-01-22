/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicaza- <apicaza-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 14:38:15 by apicaza-          #+#    #+#             */
/*   Updated: 2026/01/22 12:58:13 by apicaza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*tempd;
	const unsigned char	*temps;
	size_t				i;

	tempd = (unsigned char *) dest;
	temps = (const unsigned char *) src;
	if (!dest && !src)
		return (0);
	i = 0;
	if (tempd > temps)
	{
		while (n-- > 0)
			tempd[n] = temps[n];
	}
	else
	{
		while (i < n)
		{
			tempd[i] = temps[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[15] = "123456789";

	printf("antes del cambio %s\n", src);
	ft_memmove(src + 2, src, 5);
	printf("Despues del cambio %s\n", src);
	ft_memmove(src, src + 2, 5);
	printf("%s\n", src);
	return (0);
}*/
