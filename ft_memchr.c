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
void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char    *str;
    int                i;

    i = 0;
    str = (unsigned char *)s;
    if (n == 0)
        return (0);
    while (n-- > 0)
    {
        if (str[i] == (unsigned char)c)
            return ((void *)s + i);
        i++;
    }
    if (c == '\0')
        return ((void *)s + i);
    return (NULL);
}

/*int main()
{
  char b[] = "Ali Emir Özen";
  char *a = ft_memchr(b ,'m' ,6);
  printf("%s", a);
}*/