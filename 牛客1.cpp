//��ά����Ĳ��� 
bool Find(int target, int** array, int arrayRowLen, int* arrayColLen ) {
    int row=0;
    int col=*arrayColLen-1;
    while(row<arrayRowLen&&col>=0)
    {
        if(target==array[row][col])
        {
            return 1;
        }
        if(target<array[row][col])
        {
            col--;
        }
        else
        {
            row++;
        }
        
    }
    return 0;
}
 *�����е��ظ������� 
 * 
 * @param numbers int����һά���� 
 * @param numbersLen int numbers���鳤��
 * @return int����
 *
 * C������������ȫ�ֱ��������static����ֹ�ظ�����
 */
int duplicate(int* numbers, int numbersLen ) {
    int i=0;
    int j=0;
    int count=0;
    int arr[]={0};
    for(i=0;i<numbersLen;i++)
    {
        arr[i]=0;
        
    }
    for(i=0;i<numbersLen;i++)
    {
        for(j=i+1;j<numbersLen;j++)
        {
            if(numbers[i]==numbers[j])
            {
                count++;
             arr[i]=numbers[i] ;  
            }
        }
    }
    if(count==0)
    {
        return -1;
    }
    else
    {
        return arr[0];
    }
    // write
    ��ʵ��һ����������һ���ַ���s�е�ÿ���ո��滻�ɡ�%20����
���磬���ַ���ΪWe Are Happy.�򾭹��滻֮����ַ���ΪWe%20Are%20Happy��

���ݷ�Χ:0 \le len(s) \le 1000 \0��len(s)��1000 ����֤�ַ����е��ַ�Ϊ��дӢ����ĸ��СдӢ����ĸ�Ϳո��е�һ�֡�

    class Solution {
public:
    /**
     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
     *
     * 
     * @param s string�ַ��� 
     * @return string�ַ���//          STL
     */
    string replaceSpace(string s) {
     for(int i=0;i<s.size();i++)
     {
         if(s[i]==' ')
         {
             s.replace(i,1,"%20");
         }
     }
        return s;
    }
};
    /**
*  struct ListNode {
*        int val;��β��ͷ��ӡ����
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> value;
        ListNode*p=NULL;
        p=head;
        stack<int> stk;
        while(p!=NULL)
        {
            stk.push(p->val);
            p=p->next;
            
        }
        while(!stk.empty())
        {
            value.push_back(stk.top());
            stk.pop();
        }
        return value;
        
        
    }
};

/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> A;
        while(head)
        {
            A.push_back(head->val);
            head=head->next;
        }
        reverse(A.begin(),A.end());
        return A;//Ԫ�ط�ת
    }
  
};
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
