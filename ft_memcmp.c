/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliemirozen <alozen@student.42istanbul.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 12:29:59 by aliemirozen       #+#    #+#             */
/*   Updated: 2023/01/22 12:30:04 by aliemirozen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int    ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char    *str1;
    unsigned char    *str2;
    size_t            i;

    i = 0;
    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    while (i < n)
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (0);
}

/*int main()
{
  char s1[] = "aliemirozen";
  char s2[] = "ali";
  
  printf("%d", ft_memcmp(s1, s2, 10));
}*/
