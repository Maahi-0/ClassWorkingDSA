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

  insertAtFirst(data) {
    const newNode = new Node(data);
    if (this.head === null) {
      this.head = this.tail = newNode;
      return;
    } else {
      newNode.next = this.head;
      this.head = newNode;
    }
  }

  printAllList() {
    let temp = this.head;

    while (temp !== null) {
      console.log(temp.data, "->");
      temp = temp.next;
    }
  }
}

const List = new LInkedLIst();
List.insertAtFirst(1);
List.insertAtFirst(2);
List.insertAtFirst(3);
List.printAllList();
