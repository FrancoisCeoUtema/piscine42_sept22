/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:44:09 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/18 23:35:47 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	index;
	char	result;

	index = 0;
	result = str[index];
	while (result != '\0')
	{
		write(1, &result, 1);
		index++;
		result = str[index];
	}
}

int	main(void)

{
	char	*hello;

	hello = "Hello World!";
	ft_putstr(hello);
}
