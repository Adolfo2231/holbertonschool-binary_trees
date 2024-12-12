#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree using pre-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node. The value in the node
 *        is passed as a parameter to this function.
 *
 * Description: Pre-order traversal visits nodes in the order:
 *              Root -> Left -> Right.
 *              If tree or func is NULL, the function does nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);  /* Call the function for the current node */
	binary_tree_preorder(tree->left, func);  /* Traverse the left subtree */
	binary_tree_preorder(tree->right, func); /* Traverse the right subtree */
}
