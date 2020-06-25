#include "binary_trees.h"

/**
 * binary_tree_inorder - go through BT using inorder depth-first search..
 * @tree: root of tree.
 * @func: function to call.
 *
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
