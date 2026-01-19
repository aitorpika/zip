/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicaza- <apicaza-@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:46:44 by apicaza-          #+#    #+#             */
/*   Updated: 2026/01/19 17:36:47 by apicaza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_isascii(char c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int		main(void)
{
	char	c = 't';
	int		result;

	result = ft_isascii(c);
	printf("%d", result);
	return (0);
}
