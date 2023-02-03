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

/*int main()
{
	char b[] = "Galatasaray";
	ft_memset(&b[1], '4', 1);
	ft_memset(&b[3], '4', 1);
	ft_memset(&b[5], '4', 1);
	ft_memset(&b[7], '4', 1);
	ft_memset(&b[9], '4', 1);
	printf("%s", b);
}*/

/*int main()
{
	char b[] = "Galatasaray";
	printf("%s", (char *)ft_memset(b, '*', 6));
}*/

/*int main()
{
	int b[] = {3,13,34,98,9};
	ft_memset(&b[0], 14, 1);
	ft_memset(&b[1], 14, 1);
	int i = 0;
	while (i < 5)
	{
		printf("%d\n", b[i++]);
	}	
}*/
