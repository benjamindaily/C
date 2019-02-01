/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bassad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 00:50:24 by bassad            #+#    #+#             */
/*   Updated: 2019/01/31 19:48:15 by bassad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}



int ft_nputchar(char c, int n){
	int i;
	int = 0;
	while (i < n)
	{
		ft_putchar(c);
		i = i + 1;
	}
	return (0);
}

int main(void){
	
	ft_nputchar('@', 42);
	ft_putchar('\n');
	return (0);

}
