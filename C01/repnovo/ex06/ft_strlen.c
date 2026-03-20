/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstefani <gstefani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 18:57:21 by gstefani          #+#    #+#             */
/*   Updated: 2026/03/10 17:19:21 by gstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

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

int	main()
{
	char	*frase;
	int	contagem;

	frase = "Ola";

	contagem = ft_strlen(frase);
	printf("\nA quantidade de caracteres e: %d\n\n", contagem);
	return (0);
}
