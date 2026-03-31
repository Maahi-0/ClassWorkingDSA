class Stack {
  constructor() {
    this.items = [];
  }

  // CREATE (Push)
  push(element) {
    this.items.push(element);
    return element;
  }

  // READ (Peek)
  peek() {
    if (this.isEmpty()) return "Stack is empty";
    return this.items[this.items.length - 1];
  }

  // READ (Get all elements)
  getAll() {
    return [...this.items];
  }

  // UPDATE (Update element at index)
  update(index, newValue) {
    if (index < 0 || index >= this.items.length) {
      return "Invalid index";
    }
    this.items[index] = newValue;
    return this.items;
  }

  // DELETE (Pop)
  pop() {
    if (this.isEmpty()) return "Stack is empty";
    return this.items.pop();
  }

  // Utility
  isEmpty() {
    return this.items.length === 0;
  }

  size() {
    return this.items.length;
  }
}
