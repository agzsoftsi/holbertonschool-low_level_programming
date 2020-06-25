#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node as left child of parent.
 * @parent: parent node.
 * @value: value to give new node.
 *
 * Return: newly created node, NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newn, *old;


	if (parent == NULL)
		return (NULL);

	newn = malloc(sizeof(binary_tree_t));
	if (newn == NULL)
		return (NULL);

	newn->n = value;
	newn->parent = parent;
	newn->left = NULL;
	newn->right = NULL;

	if (parent->left != NULL)
	{
		old = parent->left;
		newn->left = old;
		old->parent = newn;
	}

	parent->left = newn;

	return (newn);
}
