class Solution{
    public:
    struct Node* modifyTheList(struct Node *head)
    {
        //add code here..
        Node *ans=NULL;
        int len=0;
        vector<int>v;
        Node *temp=head;
        while(temp)
        {
            v.push_back(temp->data);
            temp=temp->next;
        }
        while(head!=NULL)
        {
            Node *temp1=head->next;
            head->next=ans;
            ans=head;
            head=temp1;
            len++;
        }
        int m=len/2;
        Node *temp2=ans;
        for(int i=0;i<m;i++)
        {
            temp2->data=temp2->data-v[i];
            temp2=temp2->next;
        }
        return ans;
    }
};
