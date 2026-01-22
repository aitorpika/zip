/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicaza- <apicaza-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 15:06:55 by apicaza-          #+#    #+#             */
/*   Updated: 2026/01/22 16:04:20 by apicaza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
#include <stdio.h>

int	main(void)
{
	char	src[] ="Aupa Athletic";
	char	dest[7];
	size_t	len;

	len = ft_strlcpy(dest, src, 7);
	printf("Texto en destino: %s\n", dest);
	printf("Valor devuelto: %zu\n", len);
	return (0);
}*/
