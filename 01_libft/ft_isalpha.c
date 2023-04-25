/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva-o <asilva-o@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 20:27:39 by asilva-o          #+#    #+#             */
/*   Updated: 2023/04/24 20:27:39 by asilva-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	char a = c;
	if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
	
		return (1);

	return (0);

}

int	main(void)
{
	printf("%d", ft_isalpha('64'));
	return (0);
}

	/*ctype.h es la biblioteca para las funciones con rutinas de caracteres ejemplo: isalnum,
	isalpha, isascii, isblank, iscntrl, isdigit, isgraph, islower, isprint, ispunct, isspace, isupper, isxdigit
	L 23 si no devuelve 0 que es falso, L 21 devuele 1 que es verdadero, L 19 mientras mi char es alfabetico */