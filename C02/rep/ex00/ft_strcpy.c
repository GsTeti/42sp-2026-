/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstefani <gstefani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 16:57:06 by gstefani          #+#    #+#             */
/*   Updated: 2026/03/19 15:45:49 by gstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char origem[] = ("ola, tudo bem avaliador?");
// 	char destino[30];

// 	ft_strcpy(destino, origem);

// 	printf("Origem: %s\n", origem);
// 	printf("Destino: %s\n", destino);
// 	return (0);
// }
