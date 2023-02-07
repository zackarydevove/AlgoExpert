using namespace std;

// This is an input struct. Do not edit.
class LinkedList {
public:
  int value;
  LinkedList *next = nullptr;

  LinkedList(int value) { this->value = value; }
};

// O(n) time | O(1) space
LinkedList *removeDuplicatesFromLinkedList(LinkedList *linkedList) {
  
  LinkedList *head = linkedList;
  while (head)
  {
    LinkedList *tmp = head->next;
    while (tmp && tmp->value == head->value)
      tmp = tmp->next;
    head->next = tmp;
    head = tmp;
  }
  return linkedList;
}