/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeneshb <tkeneshb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 16:44:23 by tkeneshb          #+#    #+#             */
/*   Updated: 2023/04/06 20:15:31 by tkeneshb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	const char	*str;
	size_t		len;
	char		*dup;
	char		*p;

	str = s1;
	while (*str)
		str++;
	len = str - s1;
	dup = (char *) malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	p = dup;
	while (*s1)
		*p++ = *s1++;
	*p = '\0';
	return (dup);
}
