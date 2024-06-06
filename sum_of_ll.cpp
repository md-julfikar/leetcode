#include<iostream>
using namespace std;
class ListNode
{
    public:
        int val;
        ListNode* next;
        ListNode(int data)
        {
            val=data;
            next=nullptr;
        }
};
int length(ListNode* head)
{
    int length=0;
    while (head!=nullptr)
    {
        length++;
        head=head->next;
    }
    return length;
}
void insert(ListNode* head, ListNode* &newHead)
{
    ListNode* newnode=new ListNode(head->val);
    if(newHead==nullptr)
    {
        newHead=newnode;
        return;
    }
    ListNode* temp=newHead;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    return;
}
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=length(head);
        ListNode* temp=head;
        ListNode* nh=nullptr;
        for(int i=0; i<len-n; i++)
        {
            insert(temp,nh);
            temp=temp->next;
        }
        ListNode* temp2=temp->next;
        for(int i=len-n+1; i<len; i++)
        {
            insert(temp2,nh);
            temp2=temp2->next;
        }
        return nh;
    }
};
void print(ListNode *head)
{
    ListNode *temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    Solution ans;
    print(head);
    ListNode* ank=ans.removeNthFromEnd(head,2);
    print(ank);

}