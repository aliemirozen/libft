/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alozen <alozen@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 09:43:14 by alozen            #+#    #+#             */
/*   Updated: 2022/12/07 09:43:21 by alozen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "stdio.h"

int	ft_isdigit (int c)
{
	if (c >= 48 && c <= 57)
		return(1);
	else
		return(0);
}

/*int main()
{
	printf("%d", ft_isdigit('5'));
}*/