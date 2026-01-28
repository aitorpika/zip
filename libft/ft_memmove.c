/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicaza <apicaza@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 14:38:15 by apicaza-          #+#    #+#             */
/*   Updated: 2026/01/28 11:32:17 by apicaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
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
int	main(void)
{
	char	src[15] = "123456789";
	char	src1[15] = "123456789";

	printf("antes del cambio  %s\n", src);
	ft_memmove(src + 2, src, 5);
	printf("Despues primer cambio con ft %s\n", src);
	ft_memmove(src, src + 2, 5);
	printf("Despues segundo cambio con ft %s\n", src);

	printf("antes del cambio %s\n", src1);
	memmove(src1 + 2, src1, 5);
	printf("Despues primer cambio con orig %s\n", src1);
	memmove(src1, src1 + 2, 5);
	printf("Despues segundo cambio con orig %s\n", src1);
	return (0);
}*/
