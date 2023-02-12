/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   existentialism.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karllenard <karllenard@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:17:27 by karllenard        #+#    #+#             */
/*   Updated: 2023/02/12 22:43:19 by karllenard       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef EXISTENTIALISM_H
# define EXISTENTIALISM_H

#include <sys/time.h>
#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

typedef struct s_philo
{
    int id;
}       t_philo;

typedef struct s_struct
{
    int number;
	int t_die;
    int t_eat;
    int t_sleep;
    pthread_t thread_id;
    t_philo *philo;
}				t_struct;

t_struct *initstruct(char **argv, int number);
int	ft_atoi(const char *str);
int cometothetable(t_struct *s);
int agreement(t_struct *s);

#endif