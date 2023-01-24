/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliemirozen <alozen@student.42istanbul.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 12:19:01 by aliemirozen       #+#    #+#             */
/*   Updated: 2023/01/21 12:22:42 by aliemirozen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hayint;
	size_t	needint;

	hayint = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (haystack[hayint] != 0 && hayint < len)
	{
		needint = 0;
		while (haystack[hayint + needint] == needle[needint]
			&& needle[needint] != 0 && needint + hayint < len)
			needint++;
		if (!needle[needint])
			return ((char *)&haystack[hayint]);
		hayint++;
	}
	return (NULL);
}

/*int main() {
    const char *haystack = "This is a test string";
    const char *needle = "test";
    size_t len = ft_strlen(haystack);
    char *result = ft_strnstr(haystack, needle, len);
    if (result != NULL) {
        printf("The needle was found in the haystack at position: %ld\n", result - haystack);
    } else {
        printf("The needle was not found in the haystack.\n");
    }
    return 0;
}*/
