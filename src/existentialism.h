/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   existentialism.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:17:27 by karllenard        #+#    #+#             */
/*   Updated: 2023/02/13 16:27:55 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef EXISTENTIALISM_H
# define EXISTENTIALISM_H

#include <sys/time.h>
#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

pthread_mutex_t	lock;

typedef struct s_philo
{
	int	id;
	pthread_t tid;
}		t_philo;

typedef struct s_struct
{
	int			number;
	int			t_die;
	int			t_eat;
	int			t_sleep;
	pthread_t	tid;
	t_philo		*philo;
	int			count;
	int			id;
	pthread_mutex_t	lock;
}				t_struct;

t_struct	*initstruct(char **argv, int number);
int			ft_atoi(const char *str);
int			cometothetable(t_struct *s);
int			agreement(t_struct *s);

#endif