/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicaza <apicaza@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 16:21:26 by apicaza           #+#    #+#             */
/*   Updated: 2026/01/23 16:59:01 by apicaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == (char) c)
		{
			return ((char *)&str[len]);
		}
		len--;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	const char str[15] = "Gora Athletic";

	printf("el resultado es %s\n", ft_strrchr(str, 'A'));
	return (0);
}*/
