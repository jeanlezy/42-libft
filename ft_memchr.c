/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 19:08:26 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/11/08 18:36:26 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ps;

	i = 0;
	ps = (const unsigned char *)s;
	while (i < n)
	{
		if (ps[i] == (unsigned char)c)
			return ((void *)&ps[i]);
		i++;
	}
	return (NULL);
}
