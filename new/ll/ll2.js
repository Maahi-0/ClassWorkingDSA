class Node {
  constructor(data) {
    this.data = data;
    this.next = null;
  }
}

class LinkedList {
  constructor() {
    this.head = null;
    this.tail = null;
  }

  addfirst(data) {
    let newNode = new Node(data);
    if (this.head === null) {
      this.head = this.tail = newNode;
      return;
    } else {
      newNode.next = this.head;
      this.head = newNode;
    }
  }
  printLL() {
    let temp = this.head;

    while (temp !== null) {
      console.log(temp.data, "->");
      temp = temp.next;
    }
  }

  reverseLinkedList(head) {
    if (head === null || head.next === null) {
      return head;
    }

    let newNode = this.reverseLinkedList(head.next);

    head.next.next = head;
    head.next = null;

    return newNode;
  }
}

const List = new LinkedList();

List.addfirst(3);
List.addfirst(2);
List.addfirst(1);

List.printLL();

List.head = List.reverseLinkedList(List.head);

List.printLL();
