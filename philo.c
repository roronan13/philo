/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpothier <rpothier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 19:46:57 by rpothier          #+#    #+#             */
/*   Updated: 2024/07/11 21:44:48 by rpothier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*hello(void *arg)
{
	int *arg2;
	arg2 = (int *)arg;
	
	printf("Hello %d\n", *arg2);
}

int	main(int argc, char **argv)
{
	pthread_t id;
	int		a;
	a = 4;
	
	pthread_create(&id, NULL, hello, &a);
	printf("id : %ld\n", id);
}
