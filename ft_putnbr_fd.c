/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alozen <alozen@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:52:42 by alozen            #+#    #+#             */
/*   Updated: 2023/01/18 16:52:45 by alozen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "stdio.h"
#include <fcntl.h>
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			n = n * -1;
			ft_putchar_fd('-', fd);
		}
		if (n > 9)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}

/*int		main(void)
{
	int fd;

	fd = open("output.txt", O_WRONLY | O_CREAT, 0644);
	ft_putnbr_fd(42, fd);
	ft_putnbr_fd(-42, fd);
	ft_putnbr_fd(0, fd);
	ft_putnbr_fd(2147483647, fd);
	ft_putnbr_fd(-2147483648, fd);
	close(fd);
	return (0);
}*/