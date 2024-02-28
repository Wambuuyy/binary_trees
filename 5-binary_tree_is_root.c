#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root
 * @node: Pointer to the node to check
 * Description: node is root means ite the upmost node in the binary tree
 *
 * Return: 1 if node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return (node->parent == NULL);
}
