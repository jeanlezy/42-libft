/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 21:41:52 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/11/08 18:53:09 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*total;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	total = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!total)
		return (NULL);
	while (s1[i])
	{
		total[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		total[i + j] = s2[j];
		j++;
	}
	total[i + j] = '\0';
	return (total);
}
