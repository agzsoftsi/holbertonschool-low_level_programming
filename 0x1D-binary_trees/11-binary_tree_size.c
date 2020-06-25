#include "binary_trees.h"

/**
 * binary_tree_size - measure size of tree from given root.
 * @tree: root given to measure from.
 *
 * Return: size of tree, 0 on failure.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_size(tree->left) +
				binary_tree_size(tree->right) + 1);
}
