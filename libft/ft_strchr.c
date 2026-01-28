/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicaza <apicaza@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 14:51:04 by apicaza           #+#    #+#             */
/*   Updated: 2026/01/28 11:48:19 by apicaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char) c)
			return ((char *)&str[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&str[i]);
	return (0);
}
/*
int	main(void)
{
	const char str[15] = "Gora Athletic";
	const char str1[15] = "Gora Athletic";

	printf("el resultado con ft es %s\n", ft_strchr(str, 'A'));
	printf("el resultado con orig es %s\n", strchr(str1, 'A'));
	return (0);
}*/
