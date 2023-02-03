/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alozen <alozen@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 16:50:20 by alozen            #+#    #+#             */
/*   Updated: 2023/01/04 16:50:24 by alozen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "stdio.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	tempsize;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	tempsize = (ft_strlen(s1) + ft_strlen(s2));
	str = malloc(sizeof(char) * tempsize + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}

/*int main()
{
	char s1[] = "Galatasaray ";
	char s2[] = "Sampiyon";
	printf("%s", ft_strjoin(s1,s2));
}*/
