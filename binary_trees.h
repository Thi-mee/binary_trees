#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/* == == == Data Structures == == == */
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s
{
  int n;
  struct binary_tree_s *parent;
  struct binary_tree_s *left;
  struct binary_tree_s *right;
} binary_tree_t, heap_t, avl_t, bst_t;

/* == == == Prototypes == == == */

/* 0. Create New node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* 1. Insert left */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* 2. Insert right */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* 3. Delete */
void binary_tree_delete(binary_tree_t *tree);

/* 4. Is leaf */
int binary_tree_is_leaf(const binary_tree_t *node);

/* 5. Is root */
int binary_tree_is_root(const binary_tree_t *node);

/* 6. Pre-order traversal */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/* 7. In-order traversal */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/* 8. Post-order traversal */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/* 9. Height */
size_t binary_tree_height(const binary_tree_t *tree);

/* 10. Depth */
size_t binary_tree_depth(const binary_tree_t *tree);

/* 11. Size */
size_t binary_tree_size(const binary_tree_t *tree);

/* 12. Leaves */
size_t binary_tree_leaves(const binary_tree_t *tree);

/* 13. Nodes */
size_t binary_tree_nodes(const binary_tree_t *tree);

/* 14. Balance factor */
int binary_tree_balance(const binary_tree_t *tree);

/* 15. Is full */
int binary_tree_is_full(const binary_tree_t *tree);

/* 16. Is perfect */
int binary_tree_is_perfect(const binary_tree_t *tree);

/* 17. Sibling */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/* 18. Uncle */
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

/* 19. Lowest common ancestor */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);

/* 20. Level-order traversal */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));

/* 21. Is complete */
int binary_tree_is_complete(const binary_tree_t *tree);

/* 22. Rotate left */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);

/* 23. Rotate right */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);

/* 24. Is BST */
int binary_tree_is_bst(const binary_tree_t *tree);

/* 25. BST - Insert */
bst_t *bst_insert(bst_t **tree, int value);

/* 26. BST - Array to BST */
bst_t *array_to_bst(int *array, size_t size);

/* 27. BST - Search */
bst_t *bst_search(const bst_t *tree, int value);

/* 28. BST - Remove */
bst_t *bst_remove(bst_t *root, int value);

/* 29. BST - Sorted array */
int *bst_to_array(const bst_t *tree, size_t *size);

/* 30. BST - Min */
bst_t *bst_min(const bst_t *tree);

/* 31. BST - Max */
bst_t *bst_max(const bst_t *tree);

/* 32. BST - Level-order traversal */
void bst_levelorder(const bst_t *tree, void (*func)(int));

/* 33. AVL - Insert */
avl_t *avl_insert(avl_t **tree, int value);

/* 34. AVL - Array to AVL */
avl_t *array_to_avl(int *array, size_t size);

/* 35. AVL - Remove */
avl_t *avl_remove(avl_t *root, int value);

/* 36. AVL - Sorted array */
int *avl_to_array(const avl_t *tree, size_t *size);

/* 37. AVL - Min */
avl_t *avl_min(const avl_t *tree);

/* 38. AVL - Max */
avl_t *avl_max(const avl_t *tree);  

/* 39. AVL - Level-order traversal */
void avl_levelorder(const avl_t *tree, void (*func)(int));

/* 40. Heap - Insert */
heap_t *heap_insert(heap_t **root, int value);

/* 41. Heap - Array to Heap */
heap_t *array_to_heap(int *array, size_t size);

/* 42. Heap - Extract */
int heap_extract(heap_t **root);

/* 43. Heap - Sort */
void heap_sort(int *array, size_t size);

/* 44. Heap - Level-order traversal */
void heap_levelorder(const heap_t *tree, void (*func)(int));

/* 45. Heap - Size */
size_t heap_size(const heap_t *tree);

/* 46. Heap - Depth */
size_t heap_depth(const heap_t *tree);

/* 47. Heap - Leaves */
size_t heap_leaves(const heap_t *tree);

/* 48. Heap - Nodes */
size_t heap_nodes(const heap_t *tree);

/* 49. Heap - Is full */
int heap_is_full(const heap_t *tree);

/* 50. Heap - Is perfect */
int heap_is_perfect(const heap_t *tree);

/* 51. Heap - Sibling */
heap_t *heap_sibling(heap_t *node);

/* 52. Heap - Uncle */
heap_t *heap_uncle(heap_t *node);

/* 53. Heap - Lowest common ancestor */
heap_t *heap_lca(const heap_t *first, const heap_t *second);

/* 54. Big O #Binary trees */






#endif