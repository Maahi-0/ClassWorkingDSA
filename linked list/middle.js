class Node {
  constructor(data) {
    this.data = data;
    this.next = null;
  }
}
class LinkedList {
  constructor() {
    this.head = null;
    // this.tail = null;
  }

  addfirst(data) {
    let newNode = new Node(data);
    if (this.head === null) {
      this.head = newNode;
      return;
    } else {
      newNode.next = this.head;
      this.head = newNode;
    }
  }

  print() {
    let temp = this.head;
    while (temp !== null) {
      console.log(temp.data);
      temp = temp.next;
    }
  }

  findMiddle() {
    let slow = this.head;
    let fast = this.head;

    while (fast !== null && fast.next !== null) {
      slow = slow.next;
      fast = fast.next.next;
    }
    return slow.data;
  }
}

const List = new LinkedList();
List.addfirst(5);
List.addfirst(4);
List.addfirst(3);
List.addfirst(2);
List.addfirst(1);
console.log("the original list:");
List.print();
console.log("the middle of the list: ");
console.log(List.findMiddle());
