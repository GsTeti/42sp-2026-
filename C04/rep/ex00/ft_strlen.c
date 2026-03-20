/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstefani <gstefani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 20:17:59 by gstefani          #+#    #+#             */
/*   Updated: 2026/03/19 21:57:37 by gstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>
// int	main()
// {
// 	char	*frase;
// 	int	contagem;

// 	frase = "Ola";
// 	contagem = ft_strlen(frase);
// 	printf("\nA quantidade de caracteres é: %d\n\n", contagem);
// 	return (0);
// }
