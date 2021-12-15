/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-oliv <hde-oliv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 19:53:10 by hde-oliv          #+#    #+#             */
/*   Updated: 2021/12/14 19:54:26 by hde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "builtins.h"

extern char **environ;

void	env(void)
{
	int i;

	i = 0;
	while(environ[i])
		printf("%s\n", environ[i++]);
}
