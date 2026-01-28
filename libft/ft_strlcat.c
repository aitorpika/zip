/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicaza <apicaza@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 16:12:16 by apicaza-          #+#    #+#             */
/*   Updated: 2026/01/28 11:54:56 by apicaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	lendest;
	size_t	lensrc;
	size_t	i;
	size_t	j;

	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	if (size <= lendest)
		return (size + lensrc);
	i = lendest;
	j = 0;
	while (src[j] != '\0' && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (lendest + lensrc);
}
/*
int	main(void)
{
	char	src[] = "Athletic";
	char	dest[15] = "Aupa";
	char	dest1[15] = "Aupa";
	size_t	len;
	size_t	lenorigin;

	len = ft_strlcat(dest, src, 14);
	printf("despues de la union dest= %s\n y len= %zu\n", dest, len);
	lenorigin = strlcat(dest1,src, 14);
	printf("con la original des1= %s\n y lenorigin= %zu", dest1, lenorigin);
	return (0);
}*/
