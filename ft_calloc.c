/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alozen <alozen@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:59:07 by alozen            #+#    #+#             */
/*   Updated: 2023/01/04 13:59:11 by alozen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "stdio.h"
void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(size * count);
	if (!p)
		return (p);
	ft_bzero(p, (count * size));
	return (p);
}

int main(void)
 {
    int *a;
    int  b;
	a = (int *) ft_calloc(10, sizeof(int));
		printf("a = %d\n", *a);
	    for (b=0; b<10; b++) {
         *(a+b) = (b+1) * 5;
        printf("%p adresindeki değer: %d\n", (a+b), *(a+b));
		}
		free(a);
}
