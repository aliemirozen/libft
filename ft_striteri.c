/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliemirozen <alozen@student.42istanbul.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 22:17:15 by aliemirozen       #+#    #+#             */
/*   Updated: 2023/01/18 22:18:16 by aliemirozen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "stdio.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (i < ft_strlen(s))
	{
		f(i, &s[i]);
		i++;
	}
}

/*void print_index_and_char(unsigned int index, char* c) {
    printf("Index: %d, Character: %c\n", index, *c);
}

int main() {
    char test_string[] = "Hello, World!";
    ft_striteri(test_string, &print_index_and_char);
    return 0;
}*/
