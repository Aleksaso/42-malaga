/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 10:35:39 by asilva-o          #+#    #+#             */
/*   Updated: 2023/04/22 10:35:39 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isalnum(char *str)

{
	int	i;

	i = 0;
	while ((str[i] != '\0'))
	{
		if ((str[i] >= 32 && str[i] <= 126))
			i++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	printf("%i", ft_isalnum("mlg"));
	return (0);
}
