����
����һ���������ͷ���pHead(��ͷ�ڵ�����ֵ�ģ���������ͼ������val��1)������Ϊn����ת������󣬷���������ı�ͷ��

���ݷ�Χ�� 0\leq n\leq10000��n��1000
Ҫ�󣺿ռ临�Ӷ� O(1)O(1) ��ʱ�临�Ӷ� O(n)O(n) ��

�統��������{1,2,3}ʱ��
����ת��ԭ�����Ϊ{3,2,1}�����Զ�Ӧ�����Ϊ{3,2,1}��
/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
if(!pHead)
    return NULL;
        ListNode*pre=NULL;
         ListNode*cur=pHead;
        while(cur)
        {
            ListNode*temp=cur->next;
            cur->next=pre;
            pre=cur;
            cur=temp;
        }
        
    return pre;
    }
};
��������������������������ĳ���Ϊn���ϲ�����������ʹ�������еĽڵ���Ȼ�ǵ�������ġ�
���ݷ�Χ�� 0 \le n \le 10000��n��1000��-1000 \le �ڵ�ֵ \le 1000?1000�ܽڵ�ֵ��1000
Ҫ�󣺿ռ临�Ӷ� O(1)O(1)��ʱ�临�Ӷ� O(n)O(n)  //˫ָ�������� 
/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2) {
        //˫ָ��
        if(pHead1==NULL)
        {
            return pHead2;
        }
        if(pHead2==NULL)
        {
            return pHead1;
        }
        ListNode*head=new ListNode(0);
        ListNode*cur=head;
        while(pHead1&&pHead2)
        {
            if(pHead1->val<=pHead2->val)
            {
                cur->next=pHead1;
                pHead1=pHead1->next;
            }
            else{
                 cur->next=pHead2;
                pHead2=pHead2->next;
            }
            cur=cur->next;
        }
        if(pHead1)
        {
            cur->next=pHead1;
        }
        else{
            cur->next=pHead2;
        }
        return head->next;
    }
};




















