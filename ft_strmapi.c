/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliemirozen <alozen@student.42istanbul.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 21:20:34 by aliemirozen       #+#    #+#             */
/*   Updated: 2023/01/18 21:21:02 by aliemirozen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "stdio.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *new_str;
    size_t    i;

    if (!s)
        return (0);
    new_str = (char *)malloc (ft_strlen(s) + 1);
    if (!new_str)
        return (0);
    i = 0;
    while (i < ft_strlen(s))
    {
        new_str[i] = f(i, s[i]);
        i++;
    }
    new_str[i] = '\0';
    return (new_str);
}

/*char test_func(unsigned int i, char c) {
    // this function will increment each character in the string by i
    return c + i;
}

int main() {
    char *test_str = "Hello World";
    char *new_str = ft_strmapi(test_str, test_func);

    if (new_str) {
        printf("Original string: %s\n", test_str);
        printf("Modified string: %s\n", new_str);
        free(new_str);
    } else {
        printf("Error: ft_strmapi returned NULL\n");
    }
    return 0;
}*/
