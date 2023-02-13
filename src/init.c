/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 22:40:49 by karllenard        #+#    #+#             */
/*   Updated: 2023/02/13 18:19:45 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "existentialism.h"

t_philo	*initphilo(t_struct *s)
{
	int	i;
	
	s->philo = malloc(s->number * sizeof(t_struct));
	i = 0;
	while (++i <= s->number)
		s->philo[i].id = i;
	return (s->philo);
}

t_struct	*initstruct(char **argv)
{
	t_struct	*s;
	pthread_mutex_t	lock;
	int			number;
	
	number = ft_atoi(argv[1]);
	if (pthread_mutex_init(&lock, NULL) != 0)
	{
		printf("\n mutex init failed\n");
		return (0);
	}
	s = malloc(sizeof(t_struct));
	s->number = number;
	s->t_die = ft_atoi(argv[2]);
	s->t_eat = ft_atoi(argv[3]);
	s->t_sleep = ft_atoi(argv[4]);
	s->count = 0;
	s->lock = lock;
	s->philo = initphilo(s);
	return (s);
}
