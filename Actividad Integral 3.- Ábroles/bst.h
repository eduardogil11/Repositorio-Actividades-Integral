 /*
 * bst.h
 *
 *  Created on: 02/11/2020
 *      Author: Eduardo Rodríguez Gil
 */
#ifndef BST_H_
#define BST_H_

#include <string>
#include <sstream>
#include <iostream>

using namespace std;

template <class T> class BST;

template <class T>
class Node {
    private:
	    T value;
	    Node *left, *right;
	    Node<T>* succesor();

    public:
	    Node(T);
	    Node(T, Node<T>*, Node<T>*);
      void add(T);
	    int height();
	    bool find(T); 
	    void inorder(stringstream&);
	    void preorder(stringstream&);
	    void postorder(stringstream&);
	    void levelorder(stringstream&);
	    void printlevel(stringstream&, int);
	
	    friend class BST<T>;
};

template <class T>
Node<T>::Node(T val) : value(val), left(0), right(0) {}

template <class T>
Node<T>::Node(T val, Node<T> *le, Node<T> *ri)
	: value(val), left(le), right(ri) {}

template <class T>
Node<T>* Node<T>::succesor() {
	Node<T> *l, *r;

	l = left;
	r = right;

	if (left == 0) {
		if (right != 0) {
			right = 0;
		}
		return r;
	}

	if (left->right == 0) {
		left = left->left;
		l->left = 0;
		return l;
	}

	Node<T> *parent, *child;
	parent = left;
	child = left->right;
	while (child->right != 0) {
		parent = child;
		child = child->right;
	}
	parent->right = child->left;
	child->left = 0;
	return child;
}

template <class T>
void Node<T>::add(T val) {
	if (val < value) {
		if (left != 0) {
			left->add(val);
		} else {
			left = new Node<T>(val);
		}
	} else {
		if (right != 0) {
			right->add(val);
		} else {
			right = new Node<T>(val);
		}
	}
}

template <class T>
int Node<T>::height() {

	int level_left = 0;
	int level_right = 0;

	if (left != 0) {
		level_left = left->height() + 1;
	}
	if (right != 0) {
		level_right= right->height() +1;
	}
	if (level_left == 0 && level_right == 0)
		return 1;

	return (level_right > level_left) ? level_right : level_left;
}

template <class T>
bool Node<T>::find(T val) {
	if (val == value) {
		return true;
	} else if (val < value) {
		return (left != 0 && left->find(val));
	} else if (val > value) {
		return (right != 0 && right->find(val));
	}
}

template <class T>
void Node<T>::inorder(stringstream &aux) {
	if (left != 0) {
		left->inorder(aux);
	}
	if (aux.tellp() != 1) {
		aux << " ";
	}
	aux << value;
	if (right != 0) {
		right->inorder(aux);
	}
}

template <class T>
void Node<T>::preorder(stringstream &aux) {
	aux << value;
	if (left != 0) {
		aux << " ";
		left->preorder(aux);
	}
	if (right != 0) {
		aux << " ";
		right->preorder(aux);
	}
}

template <class T>
void Node<T>::postorder(stringstream &aux) {
	if (left != 0) {
		left->postorder(aux);
	}

	if (right != 0) {
		right->postorder(aux);
	}
	if (aux.tellp() != 1) {
			aux << " ";
	}
	aux << value;
}

template <class T>
void Node<T>::levelorder(stringstream &aux) {
	int level = height();
	for(int i = 0; i < level; i++){
			printlevel(aux, i);
	}
}

template <class T>
void Node<T>::printlevel(stringstream &aux, int level) {

	if(level == 0){
		if (aux.tellp() != 1) {
				aux << " ";
		}
		aux << value;
	}
	if (left != 0) {
		left->printlevel(aux, level -1);
	}
	if (right != 0) {
		right->printlevel(aux, level -1);
	}

}

template <class T>
class BST {
private:
	Node<T> *root;

public:
	BST();
  bool empty();
  int height();
  void add(T);
	bool find(T);	
	string inorder();
	string preorder();
	string postorder();
	string levelorder();	
  string visit();	
};

template <class T>
BST<T>::BST() : root(0) {}

template <class T>
bool BST<T>::empty() {
	return (root == 0);
}

template <class T>
int BST<T>::height() {
	return root->height();
}

template<class T>
void BST<T>::add(T val) {
	if (root != 0) {
		if (!root->find(val)) {
			root->add(val);
		}
	} else {
		root = new Node<T>(val);
	}
}

template <class T>
bool BST<T>::find(T val) {
	if (root != 0) {
		return root->find(val);
	}
	else {
		return false;
	}
}

template <class T>
string BST<T>::inorder() {
	stringstream aux;

	aux << "(";
	if (!empty()) {
		root->inorder(aux);
	}
	aux << ")";
	return aux.str();
}

template <class T>
string BST<T>::preorder() {
	stringstream aux;

	aux << "(";
	if (!empty()) {
		root->preorder(aux);
	}
	aux << ")";
	return aux.str();
}

template <class T>
string BST<T>::postorder() {
	stringstream aux;

	aux << "(";
	if (!empty()) {
		root->postorder(aux);
	}
	aux << ")";
	return aux.str();
}

template <class T>
string BST<T>::levelorder() {
	stringstream aux;

	aux << "(";
	if (!empty()) {
		root->levelorder(aux);
	}
	aux << ")";
	return aux.str();
}

template <class T>
string BST<T>::visit() {
	stringstream aux;
	aux << preorder() << "\n";
	aux << inorder() << "\n";
	aux << postorder() << "\n";
	aux << levelorder() << "\n";
	return aux.str();
}

#endif /*BST_H_*/