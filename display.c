/*
** display.c for  in /home/thomas/Documents/epitech/CPE_2015_Allum1
**
** Made by Thomas HENON
** Login   <thomas.henon@epitech.net>
**
** Started on  Tue Feb  9 13:03:45 2016 Thomas HENON
** Last update Sun Feb 21 12:16:08 2016 thomas
*/

#include "allum.h"

void	print_x_chars(char c, int count)
{
  int	i;

  i = 0;
  while (i < count)
    {
      my_putchar(c);
      i++;
    }
}

int	left_spaces(int *width, int *nbr_allums)
{
  return ((*width - 2 - *nbr_allums) / 2);
}

int	right_spaces(int *width, int *nbr_allums)
{
  return (((*width - 2 - *nbr_allums) / 2) + ((*width - 2 - *nbr_allums) % 2));
}

void	display(int nbr_lines, int *allums)
{
  int	i;
  int	nbr_allums;
  int	width;

  i = 0;
  width = nbr_lines * 2 + 1;
  print_x_chars('*', width);
  print_x_chars('\n', 1);
  while (i < nbr_lines)
    {
      nbr_allums = allums[i];
      print_x_chars('*', 1);
      print_x_chars(' ', left_spaces(&width, &nbr_allums));
      print_x_chars('|', nbr_allums);
      print_x_chars(' ', right_spaces(&width, &nbr_allums));
      print_x_chars('*', 1);
      print_x_chars('\n', 1);
      i++;
    }
  print_x_chars('*', width);
  print_x_chars('\n', 2);
}
