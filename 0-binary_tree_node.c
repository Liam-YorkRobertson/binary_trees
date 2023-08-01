#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_node - create binary tree node
 *@parent: node parent
 *@value: value of node
 *Return: the node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}