/*
** allum.h for  in /home/thomas/Documents/epitech/CPE_2020_Allum1
**
** Made by Thomas HENON
** Login   <thomas.henon@epitech.net>
**
** Started on  Mon Feb  8 10:48:33 2016 Thomas HENON
** Last update Sun Feb 21 12:17:34 2016 thomas
*/

#ifndef __ALLUM_H__
# define __ALLUM_H__

#include <unistd.h>
#include <stdlib.h>

# include "my.h"
# include "get_next_line.h"

# define NBR_LINES 4
# define USER_INPUT_BUFFER_SIZE 10

enum turn
{
  MY_TURN,
  AI_TURN
};

/*
** display.c
*/
void	print_x_chars(char c, int count);
int	left_spaces(int *width, int *nbr_allums);
int	right_spaces(int *width, int *nbr_allums);
void	display(int nbr_lines, int *allums);

/*
** user_input.c
*/
int	line_user_input(int nbr_lines, int *allums);
int	matches_user_input(int nbr_lines, int *allums, int line);

/*
** game.c
*/
char	win(int nbr_lines, int *allums);
void	init_allums(int nbr_lines, int *allums);
char	my_turn(int nbr_lines, int *allums, int *turn);
char	ai_turn(int nbr_lines, int *allums, int *turn);

/*
** ai.c
*/
char	is_pair(int *allums, int nbr_lines);
char	ai(int *allums, int nbr_lines, int *line, int *matches);

#endif
