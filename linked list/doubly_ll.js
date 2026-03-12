class Node {
  constructor(data) {
    this.data = data;
    this.next = null;
    this.prev = null;
  }
}
class DoublyList {
  constructor() {
    this.head = null;
    this.tail = null;
  }

  addFirst(data) {
    let newNode = new Node(data);
    if (this.head === null) {
      newNode.next = this.head;
      this.head = this.tail = newNode;
    } else {
      newNode.next = this.head;
      this.head.prev = newNode;
      this.head = newNode;
    }
  }
  print() {
    let temp = this.head;
    let arr = [];

    while (temp !== null) {
      arr.push(temp.data);
      temp = temp.next;
    }

    console.log(arr.join(" <-> ") + " <-> NULL");
  }
}

let dll = new DoublyList();
dll.addFirst(1);
dll.addFirst(2);
dll.addFirst(3);
dll.print();
