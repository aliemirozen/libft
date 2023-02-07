/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alozen <alozen@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:46:09 by alozen            #+#    #+#             */
/*   Updated: 2023/01/31 16:35:13 by alozen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*src2;
	size_t	i;

	i = 0;
	dest = (char *)dst;
	src2 = (char *)src;
	if (!dst && !src)
		return (NULL);
	if (src2 < dest)
	{
		while (++i <= len)
			dest[len - i] = src2[len - i];
	}
	else
		return (ft_memcpy(dst, src, len));
	return (dst);
}

/*int main()
{
	char a[] = "Galatasaray";
	printf("%s\n", a+1);
	printf("%s\n", a);
	printf("%s",(char *) ft_memmove(a+1, a, 4));
}*/

/*int main()
{
    char dst[] = "ILEANNAN";
    printf("%s", ft_memmove(dst+1, dst, 6));
}*/
