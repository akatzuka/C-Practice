/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    /*
    ListNode* middleNode(ListNode* head)    //Algorithm Solution
    {
        vector<ListNode*> A = {head};   //create new vector to order original
        while (A.back()->next != NULL)  //while traversing list
        {
            A.push_back(A.back()->next);    //push next element to vector
        }
        return A[A.size() / 2];         //return middle node
    }   */
    ListNode* middleNode(ListNode* head)    //Double Pointer Solution
    {
        //Create two pointers that traverse the linked list, the fast pointer traverses twice as fast as the slow
        //When fast reaches the end of the list, slow must be in the middle
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;              //slow pointer traversal, one node at a time
            fast = fast->next->next;        //fast pointer traversal, two nodes at a time
        }
        return slow;
    }
};
