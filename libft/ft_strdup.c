/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicaza <apicaza@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:06:12 by apicaza           #+#    #+#             */
/*   Updated: 2026/01/28 11:51:03 by apicaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	char	*dest;
	size_t	i;

	dest = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	*str = "Aupa Athletic";
	char	*dest;

	dest = ft_strdup(str);
	printf("str= %s y, la memoria es %p\n", str, (void*) str);
	printf("dest= %s y la memoria es %p\n", dest, (void*) dest);
	free(dest);
	return (0);
}*/
