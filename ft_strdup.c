/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alozen <alozen@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 14:56:20 by alozen            #+#    #+#             */
/*   Updated: 2023/01/31 16:42:26 by alozen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	char	*temp;
	size_t	coun;

	coun = 0;
	temp = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (temp == NULL)
		return (NULL);
	while (*s1)
	{
		temp[coun] = *s1;
		s1++;
		coun++;
	}
	temp[coun] = '\0';
	return (temp);
}

/*int main()
{
	char s1[] = "Galatasaray Sampiyon Bro";
	printf("%s", ft_strdup(s1));
}*/
