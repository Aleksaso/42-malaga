/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 10:47:13 by asilva-o          #+#    #+#             */
/*   Updated: 2023/04/22 10:47:13 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isprint(char *str)

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
	printf("%i", ft_isprint(" 55445"));
	return (0);
}
