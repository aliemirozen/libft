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
#include "stdio.h"

char	*ft_strrchr(const char *s, int c)
{
	int	coun;

	coun = 0;
	while (s[coun])
		coun++;
	while (coun >= 0)
	{
		if (s[coun] == (char)c)
			return ((char *)(s + coun));
		coun--;
	}
	return (NULL);
}

/*int main()
{
	char s[] = "Galatasaray Sampiyon";
	printf("%s", ft_strrchr(s, 'a'));
}*/
