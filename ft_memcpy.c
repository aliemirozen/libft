/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alozen <alozen@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 10:17:44 by alozen            #+#    #+#             */
/*   Updated: 2022/12/14 10:17:51 by alozen           ###   ########.fr       */
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

/*int main()
{
  char ali[] = "aliemirozen";
  char emir[] = "cancazimknksbro";
  char *a = ft_memcpy(ali, emir, 13);
  printf("%s", a);
}*/
