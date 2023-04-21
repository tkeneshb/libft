/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkeneshb <tkeneshb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:03:48 by tkeneshb          #+#    #+#             */
/*   Updated: 2023/04/06 20:16:42 by tkeneshb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	i = 0;
	while (src[i] && (dst_len + i + 1) < dstsize)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// Функция сначала вычисляет длину строк dst и src, затем проверяет,
// достаточно ли места в буфере dst для добавления строки src.
// Если размер dst меньше или равен длине dst,
// то весь массив src добавляется в dst.

// Затем функция добавляет каждый символ из src в dst до тех пор,
// пока не встретит символ конца строки '\0' или пока не заполнит
// весь буфер dst размера dstsize - 1. В конце функция добавляет
// нулевой символ в конец строки dst.