#include <iostream>
#include <unordered_set>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

bool hasCycle(ListNode* head) {
    std::unordered_set<ListNode*> nodeSet;
    while (head != nullptr) {
        if (nodeSet.find(head) != nodeSet.end()) {
            return true;
        }
        nodeSet.insert(head);
        head = head->next;
    }
    return false;
}

int main() {
    // Create nodes
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = head; // Create a cycle for testing

    // Check for cycle
    if (hasCycle(head)) {
        std::cout << "Cycle detected in the linked list." << std::endl;
    } else {
        std::cout << "No cycle detected in the linked list." << std::endl;
    }

    // Note: Memory cleanup is required to avoid memory leaks in real scenarios.
    return 0;
}
