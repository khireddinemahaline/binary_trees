#include "binary_trees.h"

/**
 * binary_tree_node - first function creat first node
 * @parent: pointer of the parent node
 * @value: value stored in the node
 * Return: new is the node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
