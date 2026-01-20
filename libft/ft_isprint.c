/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicaza- <apicaza-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 14:54:49 by apicaza-          #+#    #+#             */
/*   Updated: 2026/01/20 15:05:51 by apicaza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 132)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	c = 140;
	int		result;

	result = ft_isprint(c);
	printf("%d", result);
	return (0);
}*/
