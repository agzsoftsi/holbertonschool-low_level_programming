#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse BT using postorder depth-first search.
 * @tree: root of tree.
 * @func: function to call (print function).
 *
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
