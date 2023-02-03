/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alozen <alozen@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:49:20 by alozen            #+#    #+#             */
/*   Updated: 2023/01/31 16:44:04 by alozen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	coun;

	if (!dstsize && !dst)
		return (0);
	if (dstsize <= (size_t)ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	i = ft_strlen(dst);
	coun = 0;
	while ((i + 1 < dstsize) && (src[coun] != '\0'))
	{
		dst[i] = src[coun];
		i++;
		coun++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[coun]));
}

/*int main()
{
	char dst[] = "Galatasaray";
	char src[] = "bumbum";
	printf("%zu", ft_strlcat(dst, src, 5));
}*/