/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstefani <gstefani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 10:34:28 by gstefani          #+#    #+#             */
/*   Updated: 2026/03/17 11:21:54 by gstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int main()
// {
// 	char origem[] = "Giovana";
// 	char destino[10];

// 	ft_strncpy(destino, origem, 2);
// 	printf("Origem: %s\n", origem);
// 	printf("Destino: %s\n", destino);
// 	return 0;
// }
