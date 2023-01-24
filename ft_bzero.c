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

/*int main()    //ft_memset(s, '0', n); olsa çıktı 00092 olur. Burda {\0\0\092} oluyor.
{
	char test[] = "12392";
	ft_bzero(test, 3);
	printf("%s", test);
}*/
