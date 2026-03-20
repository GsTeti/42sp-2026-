/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstefani <gstefani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 18:38:09 by gstefani          #+#    #+#             */
/*   Updated: 2026/03/09 18:54:03 by gstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

// int	main(void)
// {
// 	char	*frase;

// 	frase = "\nOi, tudo bem?\n\n";

// 	ft_putstr(frase);
// 	return (0);
// }
