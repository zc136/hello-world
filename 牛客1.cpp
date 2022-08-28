//二维数组的查找 
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
 *数组中的重复的数字 
 * 
 * @param numbers int整型一维数组 
 * @param numbersLen int numbers数组长度
 * @return int整型
 *
 * C语言声明定义全局变量请加上static，防止重复定义
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
    请实现一个函数，将一个字符串s中的每个空格替换成“%20”。
例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。

数据范围:0 \le len(s) \le 1000 \0≤len(s)≤1000 。保证字符串中的字符为大写英文字母、小写英文字母和空格中的一种。

    class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param s string字符串 
     * @return string字符串//          STL
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
*        int val;从尾到头打印链表
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
        return A;//元素反转
    }
  
};
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
