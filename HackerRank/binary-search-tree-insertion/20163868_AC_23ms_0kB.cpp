/* you only have to complete the function given below.  
Node is defined as  

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/



    Node * insert(Node * root, int data) {
        if (root == NULL) {
            Node *nw = new Node(data);
            nw->data = data;
            nw->left = NULL;
            nw->right = NULL;
            root = nw;
        }
        else if (root->data > data) root->left = insert(root->left, data);
        else if (root->data < data) root->right = insert(root->right, data);
        return root;
    }