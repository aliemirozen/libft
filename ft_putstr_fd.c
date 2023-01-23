/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliemirozen <alozen@student.42istanbul.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:43:16 by aliemirozen       #+#    #+#             */
/*   Updated: 2023/01/18 18:46:15 by aliemirozen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putstr_fd(char const *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}

/*void	test_ft_putstr_fd(void)
{
    int fd;
    char const *s = "GALATASARAY SAMPIYON BABA";
    
    fd = open("test.txt", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
    ft_putstr_fd(s, fd);
    close(fd);
    
    printf("Test passed.\n");
}

int main(void)
{
    test_ft_putstr_fd();
    return (0);
}*/
