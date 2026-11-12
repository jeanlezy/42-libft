/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:28:31 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/11/08 19:31:37 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*byte;

	byte = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		byte[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
