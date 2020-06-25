#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node as right child of parent.
 * @parent: parent node.
 * @value: value of new node.
 *
 * Return: newly created node, NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newn;


	if (parent == NULL)
		return (NULL);

	newn = malloc(sizeof(binary_tree_t));
	if (newn == NULL)
		return (NULL);

	newn->n = value;
	newn->left = NULL;
	newn->right = NULL;
	newn->parent = parent;

	if (parent->right != NULL)
	{
		newn->right = parent->right;
		newn->right->parent = newn;
	}

	parent->right = newn;

	return (newn);

}
