/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alozen <alozen@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 17:26:04 by alozen            #+#    #+#             */
/*   Updated: 2022/12/10 17:27:27 by alozen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "stdio.h"
#include "string.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)b;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}

/*int main() {
    char test_str[20] = "Hello, World!";
    char check_str[20] = "Hello, World!";

    printf("Original string: %s\n", test_str);
    ft_memset(test_str, 'A', 5);
    printf("Modified string: %s\n", test_str);
    memset(check_str, 'A', 5);
    if (strcmp(test_str, check_str) == 0) {
        printf("ft_memset is working correctly!\n");
    } else {
        printf("ft_memset is not working correctly.\n");
    }
    return 0;
}*/
