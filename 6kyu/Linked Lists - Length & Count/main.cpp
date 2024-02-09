/*
    https://www.codewars.com/kata/55beec7dd347078289000021/cpp
*/
/* Node Definition
struct Node {
  Node * next;
  int data;
}
*/
int Length(Node *head) {
    int num = 0;
    while(head != NULL) {
        num++;
        head = head->next;
    }
    return num;
}

int Count(Node *head, int data) {
    int num1 = 0;
    while(head != NULL){
        if(head->data == data){
            num1++;
        }
        head = head->next;
    }
    return num1;
}