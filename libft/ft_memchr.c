/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apicaza <apicaza@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 12:17:12 by apicaza           #+#    #+#             */
/*   Updated: 2026/01/26 13:16:09 by apicaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ts;
	unsigned char	tc;

	ts = (unsigned char *) s;
	tc = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (ts[i] == (unsigned char) tc)
			return ((void *)&ts[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char *s = "Aupa Athletic";
	char c = 'h';

	printf("%s\n", (char *)ft_memchr(s, c, 12));
	return (0);
}*/
