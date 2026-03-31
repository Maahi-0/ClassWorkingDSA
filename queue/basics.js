class Queue {
  constructor() {
    this.items = [];
  }

  // CREATE → Enqueue (add element)
  enqueue(element) {
    this.items.push(element);
    return element;
  }

  // READ → Front element
  peek() {
    if (this.isEmpty()) return "Queue is empty";
    return this.items[0];
  }

  // READ → Get all elements
  getAll() {
    return [...this.items];
  }

  // UPDATE → Update element by index
  update(index, newValue) {
    if (index < 0 || index >= this.items.length) {
      return "Invalid index";
    }
    this.items[index] = newValue;
    return this.items;
  }

  // DELETE → Dequeue (remove front)
  dequeue() {
    if (this.isEmpty()) return "Queue is empty";
    return this.items.shift();
  }

  // Utility
  isEmpty() {
    return this.items.length === 0;
  }

  size() {
    return this.items.length;
  }
}
