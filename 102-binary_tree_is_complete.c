#include "binary_trees.h"


/**
 * _print_level - print a level of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * @level: level to print
 * @size: size of the tree
 * Return: integer
 */

int _print_level(const binary_tree_t *tree, int level, int size)
{
  if (tree == NULL)
    return (0);
  if (level == 1)
  {
    if (tree->left == NULL && tree->right != NULL)
      return (0);
    if (tree->left == NULL || tree->right == NULL)
      return (1);
    return (2);
  }
  else if (level > 1)
  {
    if (_print_level(tree->left, level - 1, size) == 0)
      return (0);
    if (_print_level(tree->right, level - 1, size) == 0)
      return (0);
    return (2);
  }
  return (0);
}


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
    if (_print_level(tree, i, size) == 0)
      return (0);

  return (1);
}