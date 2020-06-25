#include "binary_trees.h"

/**
 * binary_tree_leaves - count number of leaves on Binary treeT.
 * @tree: tree to measure.
 *
 * Return: number of leaves, 0 on failure.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (binary_tree_leaves(tree->left) +
				binary_tree_leaves(tree->right));
}
