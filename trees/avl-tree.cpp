#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    int height;

    Node(int data){
        this->data = data;
        left = nullptr;
        right = nullptr;
        height = 1;
    }
};

// height check
int height(Node *node){
    if(node == nullptr){
        return 0;
    }
    return node->height;
}

// balance factor
int getBalance(Node *node){
    if(node == nullptr) return 0;
    return height(node->left) - height(node->right);
}

// RR rotation
Node* right_rotate(Node* node){
    Node* left_node = node->left;
    Node* new_node = left_node->right;

    // update
    // now the leftnode becomes the middle
    left_node->right = node;
    node->left = new_node;

    // now update the heights of the new middle(left_node) and right(actal node)
    node->height = 1 + max(height(node->left), height(node->right));
    left_node->height = 1 + max(height(left_node->left), height(left_node->right));

    return left_node;
}

Node* left_rotate(Node* node){
    Node* right_node = node->right;
    Node* new_node = right_node->left;

    // update here.
    right_node->left = node;
    node->right = new_node;

    // updating the heights of the new nodes we updates, middle and left subtree added nodes.
    node->height = 1 + max(height(node->left), height(node->right));
    right_node->height = 1 + max(height(right_node->left), height(right_node->right));

    return right_node;
}

// insert node
Node* insertNode(Node* node, int key){
    //after entering node then check the height like backtracking
    if(node == nullptr){
        // created a new node here after reaching to the end.
        return new Node(key);
    }

    if(key > node->data){
        // take right side
        node->right = insertNode(node->right, key);
    }else if(key < node->data){
        // take the left side.
        node->left = insertNode(node->left, key);
    }else{
        return node;
    }

    // update height too
    node->height = 1 + max(height(node->left), height(node->right));

    // root added now, check its height in all levels of ancestors
    int balance = getBalance(node);

    // left skewed -> needed a right rotation
    if(balance > 1 && key < node->left->data){
        return right_rotate(node);
    }

    // right skewed -> here needed a left rotation
    if(balance < -1 && key > node->right->data){
        return left_rotate(node);
    }

    // left-right
    if(balance > 1 && key > node->left->data){
        node->left = left_rotate(node->left);
        return right_rotate(node);
    }

    // right-left, here indirectly covered and checking the 3 levels .
    if(balance < -1 && key < node->right->data){
        node->right = right_rotate(node->right);
        return left_rotate(node);
    }

    return node;
}

Node* minValue(Node* cur){
    // smallest at the left most
    while(cur->left!= nullptr){
        cur= cur-> left;
    }
    return cur;
}

Node* deleteNode(Node* root, int key){
    // if no tree case
    if(root == nullptr){
        return root;
    }
    cout << "getting error here after the root !!!" << endl;
    // if smaller goes to left
    if(key < root->data){
        root->left = deleteNode(root->left, key);
    }else if(key > root-> data){ // if bigger goes to right.
        root->right= deleteNode(root->right, key);
    }else{ // equals case
        // deletion takes place, so use the deletion cases
        // delete at the leaves
        if(root->left == nullptr && root->right == nullptr){
            // so make root null
            root = nullptr;
        }// any side is null
        else if(root->left == nullptr && root->right == nullptr){
            // delete it and left or right should join to the parent. delete node and return its child to the parent.
            Node* child = root->left ? root->left : root->right;
            root = nullptr;
            return child;
        }// deleting in the middle somewhere
        else{
            // updates with smallest in right subtree with root value and delete the inorder successor or min of right subtree
            Node *temp = minValue(root-> right);
            root->data = temp->data;
            // delete the temp
            deleteNode(root, temp->data);
        }
    }
    if(root == nullptr) return root;

        // now we need to check the tree balance
        root-> height = 1+ max(height(root->left), height(root->right));

        int balance = getBalance(root);
        // existing the left subtrees and right subtrees now root is fixed.
        // left left case
        if(balance > 1 && getBalance(root->left)>=0){
            root->left = right_rotate(root->left);
            return root->left;
        }
        // left right case
        if(balance >1 && getBalance(root->left)<0){
            root->left = left_rotate(root->left);
            return right_rotate(root->right);
        }

        // right right case
        if(balance <-1 && getBalance(root->right)<=0){
            root->right = left_rotate(root->right);
            return root->right;
        }

        // right left case
        if(balance <-1 && getBalance(root->right)>0){
            root->right = right_rotate(root->right);
            left_rotate(root->right);
        }
        return root;
    }


// traversal in onrder ->  Root L R
void preorder(Node* root){
    if(root == nullptr){
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    vector<int> nums = {50, 30, 70, 20, 40, 60, 80, 10, 5, 15};
    // 25, 27, 26, 65, 62, 64, 90, 100, 95

    Node* root = nullptr;
    cout << "printing the root " << root << endl;

    for(int num : nums){
        root = insertNode(root, num);
    }
    preorder(root);
    root = deleteNode(root, 70);
    // preorder(root);

    cout << endl;

    return 0;
}