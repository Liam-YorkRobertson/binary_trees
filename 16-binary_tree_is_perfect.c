#include "binary_trees.h"

/**
 * binary_tree_height - measures height of binary tree
 * @tree: root node of the tree to measure the height
 * Return: height or 0 if tree is null
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left != NULL)
		{
			left_height = 1 + binary_tree_height(tree->left);
		}

		if (tree->right != NULL)
		{
			right_height = 1 + binary_tree_height(tree->right);
		}

		if (left_height > right_height)
		{
			return (left_height);
		}
		else
		{
			return (right_height);
		}
	}
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: root node of the tree to check
 * Return: 1 if tree is full, 0 otherwise or if null
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}

	return (0);
}

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: root node of the tree to check
 * Return: 1 if tree is perfect, 0 otherwise or if is null
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = binary_tree_height(tree);

	if (tree == NULL || !binary_tree_is_full(tree))
	{
		return (0);
	}

	return (binary_tree_nodes(tree) == (size_t)(1 << height) - 1);
}
