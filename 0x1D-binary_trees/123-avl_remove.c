#include "binary_trees.h"
/**
 * avl_remove - removes a node from an AVL tree
 * @root: root of AVL tree
 * @value: value n at node to be removed
 * Return: pointer to the new root node of the tree
 */
avl_t *avl_remove(avl_t *root, int value);
struct Node* deleteNode(struct Node* root, int key)
{
	if (root == NULL)
		return root;
	if (value < root->n)
		root->left = deleteNode(root->left, value);
	else if(value > root->n)
		root->right = deleteNode(root->right, value);
	else
	{
		if((root->left == NULL) || (root->right == NULL))
		{
			struct avl_t *temp = root->left ? root->left
				: root->right;
			if (temp == NULL)
			{
				temp = root;
				root = NULL;
			}
			else
				*root = *temp;
			free(temp);
		}
		else
		{

			struct Node* temp = minValueNode(root->right);
			root->key = temp->key;
			root->right = deleteNode(root->right, temp->key);
		}
	}
	if (root == NULL)
		return root;
	root->height = 1 + max(height(root->left),
			       height(root->right));

	int balance = getBalance(root);
	if (balance > 1 && getBalance(root->left) >= 0)
		return rightRotate(root);
	if (balance > 1 && getBalance(root->left) < 0)
	{
		root->left =  leftRotate(root->left);
		return rightRotate(root);
	}
	if (balance < -1 && getBalance(root->right) <= 0)
		return leftRotate(root);
	if (balance < -1 && getBalance(root->right) > 0)
	{
		root->right = rightRotate(root->right);
		return leftRotate(root);
	}
	return root;
}
