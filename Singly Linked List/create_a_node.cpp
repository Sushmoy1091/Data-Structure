#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
       int val;
       Node* next;
    //    Node(int val)
    //    {
    //     this->val=val;
    //     this->next=NULL;
    //    }
};
int main()
{
    Node a,b;
    a.val=10;
    b.val=20;

    a.next=&b;
    b.next=NULL;

    cout<<a.val<<endl;
    //cout<<b.val<<endl; b.val=a.next
    cout<<a.next->val<<endl;
    return 0;
}