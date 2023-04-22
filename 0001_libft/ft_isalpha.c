/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 21:47:51 by asilva-o          #+#    #+#             */
/*   Updated: 2023/04/20 21:47:51 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_isalpha(char c)
{
	char i;
	i = c;
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && 'z')) //mientras mi char es alfabetico
		return (1); //devuele 1 que es verdadero
	return (0); // si no devuelve 0 que es falso
}

int main(void)
{
	printf("%d", ft_isalpha, ('1'));
	return(0);
}
