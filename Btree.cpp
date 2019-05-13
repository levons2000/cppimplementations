#include <stdio.h>
#include <cstdlib>

class BTree {

private:
	struct Node {
		int value;
		Node* left;
		Node* right;
	};

	void insert(Node* node, int value) {
		if (value < node->value) {
			if (node->left != NULL) {
				insert(node->left, value);
			} else {
				node->left = new Node();
				node->left->value = value;
			}
		} else {
			if (node->right != NULL) {
				insert(node->right, value);
			} else {
				node->right = new Node();
				node->right->value = value;
			}
		}
	}

	Node* root = NULL;

public: 
	void insert(int value) {
		if (root == NULL) {
			root = new Node();
			root->value = value;
			return;
		}
		insert(root, value);
	}

	void drop(int value) {
		if () {

		}
	}

};

int main() {
	BTree* tree = new BTree();
	tree->insert(5);
	tree->insert(2);
	tree->insert(3);
	tree->insert(6);
	tree->insert(7);
	tree->printAll();
	system("pause");
	return 0;
}