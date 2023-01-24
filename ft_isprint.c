/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alozen <alozen@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 09:52:08 by alozen            #+#    #+#             */
/*   Updated: 2022/12/07 09:54:22 by alozen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "stdio.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return(1);
	else
		return(0);
}

/*int main()
{
	printf("%d", ft_isprint('G'));
}*/