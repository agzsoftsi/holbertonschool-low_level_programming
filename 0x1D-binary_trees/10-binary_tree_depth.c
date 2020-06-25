#include "binary_trees.h"

/**
 * binary_tree_depth - find depth of given node.
 * @tree: node to measure.
 *
 * Return: depth of node, 0 on failure.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int con = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	con = binary_tree_depth(tree->parent);
	return (con + 1);
}
