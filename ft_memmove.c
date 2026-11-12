/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 16:12:20 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/11/08 19:31:54 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pd;
	const unsigned char	*ps;

	if (!dest && !src)
		return (NULL);
	pd = (unsigned char *)dest;
	ps = (const unsigned char *)src;
	if (pd > ps)
	{
		while (n > 0)
		{
			n--;
			pd[n] = ps[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
