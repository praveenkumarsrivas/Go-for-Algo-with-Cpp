#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    Node *next;
    int data;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
void create_list(Node *&head, int d)
{
    if(head == NULL)
    {
        head=new Node(d);
    }
    else
    {
        Node *n = new Node(d);
        n->next = head;
        head = n;
    }
}
bool 
int main()
{

    return 0;
}