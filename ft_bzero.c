/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alozen <alozen@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 17:00:03 by alozen            #+#    #+#             */
/*   Updated: 2022/12/10 17:06:19 by alozen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "stdio.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int main()
{
	char s[] = "Galatasaray";
	ft_bzero(s, 7);
	printf("%s\n", s);

	size_t i = 7;
	while (i < ft_strlen("Galatasaray"))
	{
		printf("%c", s[i]);
		i++;
	}
}*/

/*int main()
{
	char test[] = "12392";
	ft_bzero(test, 3);
	printf("%s", test);
}*/

/*int main()
{
    char s[] = "Galatasaray";
    ft_bzero(s, 5);
    printf("%s\n", s);
    int m = 0;
    while(m < 11)
    {
        printf("%c", s[m++]);
    }
}*/
