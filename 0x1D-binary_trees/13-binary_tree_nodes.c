#include "binary_trees.h"

/**
 * binary_tree_nodes - count nodes with at least one child.
 * @tree: root node.
 *
 * Return: number of non-leaves, 0 on failure
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t con = 0;


	if (tree == NULL)
		return (0);

	con = binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		con++;

	return (con);
}
