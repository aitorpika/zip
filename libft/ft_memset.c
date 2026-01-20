/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicaza- <apicaza-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:02:06 by apicaza-          #+#    #+#             */
/*   Updated: 2026/01/20 17:22:50 by apicaza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	temp = (unsigned char *) str;
	i = 0;
	while (i < n)
	{
		temp[i] = (unsigned char) c;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	size_t n = 5;
	int	c='A';
	char	str[] = "Aupa Athletic";

	printf("antes del cambio %s\n", str);
	ft_memset(str, c, n);
	printf("despues del cambio %s\n", str);
	return (0);
}*/
