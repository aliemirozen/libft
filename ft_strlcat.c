/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alozen <alozen@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:49:20 by alozen            #+#    #+#             */
/*   Updated: 2022/12/08 13:26:44 by alozen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t    ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t  i;
    size_t  dsize;

    dsize = 0;
    while (dest[dsize] != '\0' && dsize < size)
        dsize++;
    i = dsize;
    while (src[dsize - i] && dsize + 1 < size)
    {
        dest[dsize] = src[dsize - i];
        dsize++;
    }
    if (i < size)
        dest[dsize] = '\0';
     return (i + ft_strlen(src));
}

/*int main (void)
{
    char src[] = "ali emir";
        char dest [] = "Ozens 42";
    printf("%zu \n", ft_strlcat(dest, src, 10));
        printf("%s \n", dest);
}*/

/*int main(void)
{
    char dest[20] = "Hello";
    char src[] = " World";
    size_t size = sizeof(dest);
    size_t result = ft_strlcat(dest, src, size);
    printf("Result: %s\n", dest);
    printf("Size: %zu\n", result);
    return 0;
}*/
