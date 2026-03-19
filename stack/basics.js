class Node{
  constructor(data) {
    this.data = data;
    this.next = null;
  }
}
class LinkedList{
  constructor() {
    this.head = null;
    this.tail = null;
  }

  addfirst(data) {
    let temp = this.head;
    let NewNOde = new Node(data);
    if (temp === null) {
      temp = NewNOde;
    } else {

    }
  }
}
