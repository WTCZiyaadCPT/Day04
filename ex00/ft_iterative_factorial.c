/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdecaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 13:28:19 by zdecaire          #+#    #+#             */
/*   Updated: 2020/07/13 13:44:14 by zdecaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c) {
	write (1, &c, 1);
}

void ft_putnbr(int nb) {
	if (nb < 10 && nb >= 0) {
	   ft_putchar(nb + '0');
	}
	else if (nb >= 10) {
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else {
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
}
int ft_iterative_factorial(int nb) {
	int z;
	z = 1;

	if (nb<0) {
		return (0);
	}
	else if (nb>12) {
		return (0);
	}
	while (nb >= 1) {
		z= z*nb;
		nb -=1;
	}
	return (z);
}
int main () {
	ft_putnbr(ft_iterative_factorial(5));
	return(0);
}
