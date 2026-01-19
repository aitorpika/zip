/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicaza- <apicaza-@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 13:17:14 by apicaza-          #+#    #+#             */
/*   Updated: 2026/01/15 13:38:56 by apicaza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(char c)
{
	if (c >= '0' && c >= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{

	int	result;

	result = ft_isdigit(2);
	printf ("%d", result);
	return (0);
}*/
