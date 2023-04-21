/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeneshb <tkeneshb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:40:21 by tkeneshb          #+#    #+#             */
/*   Updated: 2023/03/23 18:51:51 by tkeneshb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && haystack[i + j] && needle[j] == haystack[i + j] \
		&& i + j < len)
		j++;
		if (!needle[j])
			return ((char *)&haystack[i]);
		if (!haystack[i + j] || (i + j) >= len)
			return ((char *)(void *)0);
		i++;
	}
	return ((char *)(void *)0);
}
