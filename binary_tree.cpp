#include <iostream>
using namespace std;
const int node = 16;

void preorder(char tree[], int root)
{
    if (tree[root] == -1 || root >= node)
        return;
    cout << tree[root] << " ";
    preorder(tree, 2 * root + 1); // Left child;
    preorder(tree, 2 * root + 2); // Right child;
}

void inorder(char tree[], int root)
{
    if (tree[root] == -1 || root >= node)
        return;

    preorder(tree, 2 * root + 1); // Left child;
    cout << tree[root] << " ";
    preorder(tree, 2 * root + 2); // Right child;
}

void postorder(char tree[], int root)
{
    if (tree[root] == -1 || root >= node)
        return;

    preorder(tree, 2 * root + 1); // Left child;
    preorder(tree, 2 * root + 2); // Right child;
    cout << tree[root] << " ";
}

int main()
{
    char tree[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p'};

    preorder(tree, 0);
    cout<<endl;
    inorder(tree, 0);
    cout<<endl;
    postorder(tree, 0);


    return 0;
}