/*
** EPITECH PROJECT, 2017
** my_amazing_sorter
** File description:
** my_amazing_sorter
*/

#include <stdio.h>

int is_sorted(int *array, int size)
{
  int	i;
	
  for (i = 0 ; i < size; i++) {
    if (array[i + 1] && array[i] > array[i + 1])
      return (0);
  }
  return (1);
}

void	swap_elem(int *array)
{
  int	tmp;

  tmp = array[0];
  array[0] = array[1];
  array[1] = tmp;
}

void	rotate_left(int *array, int size)
{
  int	tmp;
  int	i;

  if (size <= 1)
    return;
  tmp = array[0];
  for (i = 0 ; i < size - 1 ; i++)
    array[i] = array[i + 1];
  array[size - 1] = tmp;	
}

void	rotate_right(int *array, int size)
{
  int	i;
  int	tmp;

  if (size <= 1)
    return ;
  tmp = array[size -1];
  for (i = size - 1 ; i >= 0 ; i--) {
    array[i] = array[i - 1];
  }
  array[0] = tmp;
}

void print_array(int *array, int size)
{
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i] + 1);
  }
  printf("\n");
}

int get_pos(int *array, int size) {
  for(int i = 0; i < size; i++) {
    if (array[i] > array[i + 1]) {
      //printf("%d %d %d\n", array[i], array[i + 1], i);
      return i;
    }
  }
  return 0;
}

void	my_amazing_sorter(int *array, int size)
{
  int next;
  int prev;
  
  while (!is_sorted(array, size)) {
    next = get_pos(array, size);
    prev = next;
    while (next) {
      rotate_left(array, size);
      next--;
    }
    print_array(array, size);
    if (array[0] > array[1])
      swap_elem(array);
    while (prev) {
      rotate_right(array, size);
      prev--;
    }
  }
}

int	main()
{
  int	array[5] = {39, 1, 91, 51};

  my_amazing_sorter(array, 4);
  print_array(array, 4);
  return (0);
}
