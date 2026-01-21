/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicaza- <apicaza-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:26:11 by apicaza-          #+#    #+#             */
/*   Updated: 2026/01/21 11:51:16 by apicaza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	temp = (unsigned char *) str;
	i = 0;
	while (i < n)
	{
		temp[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	size_t	n = 6;
	char	str[] = "Aupa Athletic";

	printf("Antes del cambio %s\n", str);
	ft_bzero(str, n);
	printf("Despues del cambio %s\n", str);
	return (0);
}*/
