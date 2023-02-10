/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   practice.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:19:20 by vlenard           #+#    #+#             */
/*   Updated: 2023/02/10 18:50:56 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/time.h>
#include <stdio.h>
#include <pthread.h>

typedef struct s_struct
{
	int count;
	int	*fork;
	int	*philo_id;
	
}				t_struct;

void *thread1(void *lala)
{
	t_struct *s;
	s = (struct s_struct *)lala;
	printf("PHILO   %d, %d\n", s->count, s->philo_id[s->count]);
	s->count += 1;
	return (NULL);
}

void 	ft_initfork(int	*fork)
{
	int	i = 0;
	while (fork[i])
	{
		fork[i] = 0;
		i++;
	}
}
void ft_initstruct(t_struct *s, int *fork, pthread_t *philo_id)
{
	s->fork = fork;
	s->philo_id = (int *)philo_id;
	s->count = 0;
}

int main ()
{
	// struct timeval time;
	// gettimeofday(&time, NULL);
	// printf("seconds : %ld\nmicro seconds : %d\n",
    // time.tv_sec, time.tv_usec);

	pthread_t philo_id[4];
	t_struct s;
	int id = 6;
	
	int	fork[4];
	ft_initfork(fork);
	ft_initstruct(&s, fork, philo_id);
	int	i = 0;
	while (i < 5)
	{
		id = pthread_create(&philo_id[i], NULL, thread1, &s);
		printf("philo   %d: %d\n", i, (int)philo_id[i]);
		printf("philo   %d: %d\n", i, (int)philo_id[i]);
		//printf("s.philo %d: %d\n", i, s.philo_id[i]);
		i++;
	}
	i = 0;
	while (i < 5)
	{
		pthread_join(philo_id[i], NULL);
		i++;
	}
	return (0);
}