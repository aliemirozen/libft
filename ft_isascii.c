/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alozen <alozen@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 09:45:32 by alozen            #+#    #+#             */
/*   Updated: 2022/12/07 09:46:33 by alozen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "stdio.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return(1);
	else
		return(0);
}

/*int main()
{
	printf("%d", ft_isascii('G'));
}*/
