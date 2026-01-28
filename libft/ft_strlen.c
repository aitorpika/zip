/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicaza <apicaza@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 11:25:50 by apicaza-          #+#    #+#             */
/*   Updated: 2026/01/28 12:15:42 by apicaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (*str != 0)
	{
		count++;
		str++;
	}
	return (count);
}
/*
int	main(void)
{
	char	*texto;
	int		numft;
	int		numorg;

	texto = "Aupa Athletic";
	numft = ft_strlen(texto);
	printf ("Con ft %d\n", numft);

	texto = "Aupa Athletic";
	numorg = strlen(texto);
	printf ("Con orig %d\n", numorg);

	return (0);
}*/
