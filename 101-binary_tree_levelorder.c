#include "binary_trees.h"




/**
 * print_level - print a level of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * @level: level to print
 * @func: pointer to a function to call for each node. The value in the node
 * must be passed as a parameter to this function.
 * Return: nothing
 */

void print_level(const binary_tree_t *tree, int level, void (*func)(int))
{
  if (tree == NULL)
    return;

  if (level == 0)
    func(tree->n);
  else
    {
      print_level(tree->left, level - 1, func);
      print_level(tree->right, level - 1, func);
    }
}

/**
 * binary_tree_levelorder - goes through a binary tree using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node. The value in the node
 * must be passed as a parameter to this function.
 * Return: nothing
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
  int height, i;

  if (tree == NULL || func == NULL)
    return;

  height = binary_tree_height(tree);

  for (i = 0; i <= height; i++)
    print_level(tree, i, func);
}