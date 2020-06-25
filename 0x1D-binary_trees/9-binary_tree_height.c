#include "binary_trees.h"

/**
 * binary_tree_height - measure height of BT.
 * @tree: root of tree.
 *
 * Return: height of tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int right, left;


	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
