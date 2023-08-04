#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of a node
 * @node: node to find the sibling of
 * Return: Pointer to sibling node, or null
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
	{
		return (NULL);
	}

	if (node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->left == node)
	{
		return (node->parent->right);
	}

	return (node->parent->left);
}
