class Node {
  constructor(data) {
    this.data = data;
    this.next = null;
  }
}
class LInkedLIst {
  constructor() {
    this.head = null;
    this.tail = null;
  }

  //insert data at the first of the linked List
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

  //insert the data at the end of the linked List
  addAtLast(data) {
    let newNode = new Node(data);
    if (this.head === null) {
      this.head = this.tail = newNode;
      return;
    }
    this.tail.next = newNode;
    this.tail = newNode;
  }

  //remove from the first of the linked List
  removeFirst() {
    let temp = this.head;
    if (this.head === null) {
      return;
    } else {
      this.head = temp.next;
      temp.next = null;
    }
  }
  print() {
    let temp = this.head;

    while (temp !== null) {
      console.log(temp.data, "->");
      temp = temp.next;
    }
  }
}

const List = new LInkedLIst();
List.addfirst(1);
List.addAtLast(5);
List.addfirst(2);
List.addfirst(3);
List.removeFirst();
List.print();
