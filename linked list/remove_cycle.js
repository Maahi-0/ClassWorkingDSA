class Node {
  constructor(data) {
    this.data = data;
    this.next = null;
  }
}
class LinkedList {
  constructor() {
    this.head = null;
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

  removeCycle() {
    let slow = this.head;
    let fast = this.head;

    while (fast !== null && fast.next !== null) {
      slow = slow.next;
      fast = fast.next.next;
      if (fast === slow) {
        return true;
      }
    }
    return false;
  }
}

const List = new LinkedList();
List.addfirst(1);
List.addfirst(2);
List.addfirst(3);
List.addfirst(4);
List.addfirst(5);
List.head.next.next.next.next.next = List.head.next.next;
console.log(List.removeCycle());
