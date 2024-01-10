//Name : Kyle Bautista
//October 2023
//2. Add Two Numbers
//Medium
//https://leetcode.com/problems/add-two-numbers/description/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr && l2 == nullptr) return nullptr;
        else if((l1 == nullptr || l2 == nullptr))
        {
            ListNode * newNode = new ListNode();
            ListNode * continuedNode = l1;

            if(continuedNode == nullptr) continuedNode = l2;

            newNode->val += continuedNode->val;

            int temp = newNode->val / 10;
            newNode->val = newNode->val % 10;

            //cout<< continuedNode->val << " : "<<newNode->val << endl;

            if(temp > 0)
            {
                if(continuedNode->next != nullptr) continuedNode->next->val += temp;
                else continuedNode->next = new ListNode(temp);
            }
            //cout<<" waaa"<< newNode->val << endl;
            newNode->next = addTwoNumbers(continuedNode->next, nullptr);

            return newNode;
        }
        else
        {
            ListNode * newNode = new ListNode(l1->val + l2->val);

            //cout << newNode ->val << endl;
            int temp = newNode->val / 10;
            //cout << temp << endl;
            newNode->val = newNode->val % 10;
            
            if(temp > 0)
            {
                if(l1->next != nullptr) l1->next->val +=temp;
                else if(l2->next != nullptr) l2->next->val +=temp;
                else
                {
                    cout<< l1->val << " + " << l2->val << " : "<<newNode->val << endl;
                    ListNode * continuedNode = new ListNode(temp);
                    newNode->next = addTwoNumbers(continuedNode, nullptr);
                    return newNode;
                }
            }
            //cout<< l1->val << " + " << l2->val << " : "<<newNode->val << endl;
            newNode->next = addTwoNumbers(l1->next, l2->next);
            
            return newNode;
        }
    }
};