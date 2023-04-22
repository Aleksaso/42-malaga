/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 10:49:32 by asilva-o          #+#    #+#             */
/*   Updated: 2023/04/22 10:49:32 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isascii(char *str)

{
	int	i;

	i = 0;
	while ((str[i] != '\0'))
	{
		if ((str[i] >= 48 && str[i] <= 127))
			i++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	printf("%i", ft_isascii("38"));
	return (0);
}
