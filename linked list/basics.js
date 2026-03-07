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

  //inserat data into the linked LinkedLis
  addfirst(data) {
    const newNode = new Node(data);
    newNode.next = this.head;
    this.head = newNode;
  }

  display() {
    let currunt = this.head;
    const res = [];
    while (currunt !== null) {
      res.push(currunt.data);
      currunt = currunt.next;
    }
    // console.log(res.join("->"));
    return res;
  }
}

const List = new LinkedList();
List.addfirst(3);
List.addfirst(2);
List.addfirst(1);
List.display();
