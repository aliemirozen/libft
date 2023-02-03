/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alozen <alozen@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 17:36:23 by alozen            #+#    #+#             */
/*   Updated: 2022/12/10 18:04:39 by alozen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "stdio.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = s;
	while (n-- != 0)
	{
		if ((unsigned char)c == *p)
			return ((void *)p);
		p++;
	}
	return (NULL);
}

/*int main()
{
	char s[] = "Galatasaray";
	printf("%s", (char *)ft_memchr(s, 't', 5));
}*/
