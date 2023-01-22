/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alozen <alozen@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:03:55 by alozen            #+#    #+#             */
/*   Updated: 2022/12/14 11:04:04 by alozen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int        i;
    char    *ptr;

    i = 0;
    ptr = 0;
    while (s[i])
    {
        if (s[i] == c)
            ptr = (char *)(s + i);
        i++;
    }
    if (s[i] == c)
        ptr = (char *)(s + i);
    return (ptr);
}
/*int main()
{
  char dest[] = "aliemiroz";
  printf("%s \n", ft_strrchr(dest, 'e'));
}*/
