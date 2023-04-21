/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeneshb <tkeneshb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:56:55 by tkeneshb          #+#    #+#             */
/*   Updated: 2023/03/24 15:00:46 by tkeneshb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	p = ((unsigned char *)s);
	while (n-- > 0)
	{
		if (*p == (unsigned char)c)
			return (p);
		p++;
	}
	return (NULL);
}

// // Функция ft_memchr() должна находить первое вхождение байта c
// в первых n байтах
// // области памяти, на которую указывает s. Однако в данном коде происходит
// // нечто иное - в цикле происходит запись значения переменной
// // c в каждый байт первых n байт области памяти, на которую указывает s.