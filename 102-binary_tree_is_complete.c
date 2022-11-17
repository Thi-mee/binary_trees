#include "binary_trees.h"


/**
 * print_level - print a level of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * @level: level to print
 * @size: size of the tree
 * Return: integer
 */



/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if complete, 0 if not or if tree is NULL
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
  int height, i, size;

  if (tree == NULL)
    return (0);

  height = binary_tree_height(tree);
  size = binary_tree_size(tree);

  for (i = 0; i <= height; i++)
    if (print_level(tree, i, size) == 0)
      return (0);

  return (1);
}