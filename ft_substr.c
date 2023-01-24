/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alozen <alozen@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 15:53:20 by alozen            #+#    #+#             */
/*   Updated: 2023/01/04 15:53:28 by alozen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "stdio.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
		//bura mesela 5. elemandan sonra 2 eleman var ama len=3 burası len i kalan elemana eşitliyor.
	dest = malloc(len + 1);
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s + start, len);
	dest[len] = '\0';
	return (dest);
}

/*int main()
{
	char* str;
	str = ft_substr("Hello, 42Seoul!", 7, 2);
	printf("%s\n", str);
	return 0;
}*/
