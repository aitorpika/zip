/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicaza <apicaza@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 15:06:55 by apicaza-          #+#    #+#             */
/*   Updated: 2026/01/28 12:08:12 by apicaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	if (size == 0)
		return (len);
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
/*
int	main(void)
{
	char	src[] ="Aupa Athletic";
	char	dest[7];
	size_t	len;
	char	destorg[7];
	size_t	lenorg;

	len = ft_strlcpy(dest, src, 7);
	printf("Texto en destino con ft: %s\n", dest);
	printf("Valor devuelto con ft: %zu\n", len);

	lenorg = strlcpy(destorg, src, 7);
	printf("Texto en destino con orig: %s\n", destorg);
	printf("Valor devuelto con orig: %zu\n", lenorg);
	return (0);
}*/
