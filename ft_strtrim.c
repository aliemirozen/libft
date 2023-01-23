/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliemirozen <alozen@student.42istanbul.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 12:37:20 by aliemirozen       #+#    #+#             */
/*   Updated: 2023/01/22 12:37:56 by aliemirozen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checker(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
		if (set[i++] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	if (s1 == 0 || set == 0)
		return (NULL);
	j = ft_strlen(s1);
	while (s1[i] && checker(s1[i], set))
		i++;
	while (j > i && checker(s1[j - 1], set))
		j--;
	str = (char *)malloc(sizeof (char) * (j - i + 1));
	if (!str)
		return (NULL);
	while (i < j)
		str[k++] = s1[i++];
	str[k] = '\0';
	return (str);
}

/*int main()
{
 	printf("%s\n", ft_strtrim("abqbc", "abc")); ///q
 	printf("%s\n", ft_strtrim("xavocadoyz", "xyz")); //avocado
 	return 0;
}*/
