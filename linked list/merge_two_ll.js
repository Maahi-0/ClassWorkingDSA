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

  addfirst(data) {
    let newNode = new Node(data);
    if (this.head === null) {
      this.head = this.tail = newNode;
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

  merge_two_sorted_ll(l1, l2) {
    if (!l1) return l2;
    if (!l2) return l1;

    if (l1.data < l2.data) {
      l1.next = merge_two_sorted_ll(l1.next, l2);
      return l1;
    } else {
      l2.next = merge_two_sorted_ll(l1, l2.next);
      return l2;
    }
  }
}
const List = new LInkedLIst();
List.addfirst(3);
List.addfirst(2);
List.addfirst(1);
const List2 = new LInkedLIst();
List2.addfirst(6);
List2.addfirst(5);
List2.addfirst(4);
console.log("the first list:");
List.print();
console.log("the second list:");
List2.print();
console.log("the merged list: ");
console.log(merge_two_sorted_ll(List, List2));
