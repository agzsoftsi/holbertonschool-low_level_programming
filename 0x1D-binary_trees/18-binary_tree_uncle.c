#include "binary_trees.h"

/**
 * binary_tree_uncle - find sibling of parent node.
 * @node: given node.
 *
 * Return: pointer to sibling of parent.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL
			|| node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left !=
			node->parent)
		return (node->parent->parent->left);
	return (node->parent->parent->right);

}
