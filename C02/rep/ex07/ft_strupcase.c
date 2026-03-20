/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstefani <gstefani@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 22:04:03 by gstefani          #+#    #+#             */
/*   Updated: 2026/03/18 22:04:03 by gstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	if (str == 0)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int main()
{
    char frase[] = "giovana";
    char *frase_nula = 0;

    printf("Resultado maiusculo: %s\n", ft_strupcase(frase));
    printf("Resultado nulo: %p", ft_strupcase(frase_nula));
}
*/
