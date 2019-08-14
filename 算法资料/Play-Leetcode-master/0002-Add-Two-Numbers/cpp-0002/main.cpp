/// Source : https://leetcode.com/problems/add-two-numbers/description/
/// Author : liuyubobobo
/// Time   : 2018-08-09

#include <iostream>

using namespace std;

/// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next; // 数据结构
    ListNode(int x) : val(x), next(NULL) {} // 构造函数
};


/// Create new LinkedList for result
/// Time Complexity: O(n)
/// Space Complexity: O(n)
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode *p1 = l1, *p2 = l2;
         // 初始的值为-1
        ListNode *dummyHead = new ListNode(-1);
        // 设置当前的节点为-1
        ListNode* cur = dummyHead;
        // 记录进位的信息
        int carried = 0;
        while(p1 || p2 ){ //  循环两个列表
            int a = p1 ? p1->val : 0; //取出链表中的值
            int b = p2 ? p2->val : 0; // 取出链表2中的值
            cur->next = new ListNode((a + b + carried) % 10);
            carried = (a + b + carried) / 10;

            cur = cur->next;
            p1 = p1 ? p1->next : NULL;
            p2 = p2 ? p2->next : NULL;
        }

        cur->next = carried ? new ListNode(1) : NULL;
        ListNode* ret = dummyHead->next;
        delete dummyHead;
        return ret;
    }
};


int main() {

    return 0;
}
