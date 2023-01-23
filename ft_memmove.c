/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alozen <alozen@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:46:09 by alozen            #+#    #+#             */
/*   Updated: 2023/01/18 15:46:13 by alozen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "stdio.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    char    *str;
    char    *src2;
    size_t    i;

    i = 0;
    str = (char *)dst;
    src2 = (char *)src;
    if (dst == NULL && src == NULL)
        return (NULL);
    while (i < n)
    {
        str[i] = src2[i];
        i++;
    }
    return (dst);
}

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    char    *dest;
    char    *src2;
    size_t    i;

    i = 0;
    dest = (char *)dst;
    src2 = (char *)src;
    if (!dst && !src)
        return (NULL);
    if (src2 < dest)
        while (++i <= len)
        //++i i yi bir arttır ve öyle devam et demek.
            dest[len - i] = src2[len - i];
    else
        return (ft_memcpy(dst, src, len));
    return (dst);
}

/*int main()
{
  char knks[] = "aliemirozen";
  char kirve[] = "cancazimknksbro";
  char *a = ft_memmove(knks, kirve, 4);
  printf("%s\n", a);
}*/
