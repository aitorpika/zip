/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicaza <apicaza@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 10:50:32 by apicaza           #+#    #+#             */
/*   Updated: 2026/01/28 12:21:33 by apicaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ts1;
	unsigned char	*ts2;

	ts1 = (unsigned char *) s1;
	ts2 = (unsigned char *) s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((ts1[i] && ts2[i]) && (ts1[i] == ts2[i]) && (i < n - 1))
		i++;
	return (ts1[i] - ts2[i]);
}
/*
int	main(void)
{
	char *s1 = "Pikaca";
	char *s2 = "Pikaxu";

	printf("diferencia es con ft es: %d\n", ft_strncmp(s1, s2, 5));
	printf("diferencia es con org es: %d\n", strncmp(s1, s2, 5));
	return (0);
}*/
