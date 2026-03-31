class Node {
  constructor(data) {
    this.data = data;
    this.next = null;
  }
}

class CircularLinkedList {
  constructor() {
    this.head = null;
  }

  // CREATE → Insert at end
  insert(data) {
    const newNode = new Node(data);

    if (!this.head) {
      this.head = newNode;
      newNode.next = this.head;
      return;
    }

    let temp = this.head;
    while (temp.next !== this.head) {
      temp = temp.next;
    }

    temp.next = newNode;
    newNode.next = this.head;
  }

  // READ → Display list
  display() {
    if (!this.head) return "List is empty";

    let result = [];
    let temp = this.head;

    do {
      result.push(temp.data);
      temp = temp.next;
    } while (temp !== this.head);

    return result;
  }

  // UPDATE → Update by value
  update(oldValue, newValue) {
    if (!this.head) return "List is empty";

    let temp = this.head;

    do {
      if (temp.data === oldValue) {
        temp.data = newValue;
        return "Updated";
      }
      temp = temp.next;
    } while (temp !== this.head);

    return "Value not found";
  }

  // DELETE → Delete node by value
  delete(value) {
    if (!this.head) return "List is empty";

    let curr = this.head;
    let prev = null;

    // Case: only one node
    if (curr.next === this.head && curr.data === value) {
      this.head = null;
      return;
    }

    // Case: delete head
    if (curr.data === value) {
      let last = this.head;
      while (last.next !== this.head) {
        last = last.next;
      }

      this.head = curr.next;
      last.next = this.head;
      return;
    }

    // General case
    do {
      prev = curr;
      curr = curr.next;

      if (curr.data === value) {
        prev.next = curr.next;
        return;
      }
    } while (curr !== this.head);

    return "Value not found";
  }
}
