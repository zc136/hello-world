描述
给定一个单链表的头结点pHead(该头节点是有值的，比如在下图，它的val是1)，长度为n，反转该链表后，返回新链表的表头。

数据范围： 0\leq n\leq10000≤n≤1000
要求：空间复杂度 O(1)O(1) ，时间复杂度 O(n)O(n) 。

如当输入链表{1,2,3}时，
经反转后，原链表变为{3,2,1}，所以对应的输出为{3,2,1}。
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
输入两个递增的链表，单个链表的长度为n，合并这两个链表并使新链表中的节点仍然是递增排序的。
数据范围： 0 \le n \le 10000≤n≤1000，-1000 \le 节点值 \le 1000?1000≤节点值≤1000
要求：空间复杂度 O(1)O(1)，时间复杂度 O(n)O(n)  //双指针问题解决 
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
        //双指针
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




















