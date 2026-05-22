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

  addAtLst(data) {
    let newNode = new Node(data);
    if (this.head === null) {
      this.head = this.tail = newNode;
      return;
    } else {
      this.tail.next = newNode;
      this.tail = newNode;
    }
  }

  popFirst(data) {
    let temp = this.head;
    if (this.head === null) {
      return;
    } else {
      this.head = temp.next;
      temp = null;
    }
  }

  insearAtMId(val, pos) {
    if (pos < 0) {
      console.log("invalid case");
      return;
    }
    if (pos === 0) {
      addfirst(val);
      return;
    }

    let temp = this.head;

    for (let i = 0; i < pos - 1; i++) {
      temp = temp.next;
    }

    let newNode = new Node(val);
    newNode.next = temp.next;
    temp.next = newNode;
  }

  search(key) {
    let temp = this.head;
    let ind = 0;

    while (temp.next !== null) {
      if (temp.data === key) {
        return ind;
      }

      temp = temp.next;
      ind++;
    }

    return -1;
  }

  printLL() {
    let temp = this.head;

    while (temp !== null) {
      console.log(temp.data, "->");
      temp = temp.next;
    }
  }
}

const List = new LinkedList();
List.addfirst(3);
List.addfirst(2);
List.addfirst(1);
List.insearAtMId(4, 1);
console.log(List.search(2));
List.printLL();
