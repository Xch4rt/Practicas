'''
An XOR linked list is a more memory efficient doubly linked list. Instead of each node holding next and prev fields, it holds a field named both, which is an XOR of the next node and the previous node. Implement an XOR linked list; it has an add(element) which adds the element to the end, and a get(index) which returns the node at index.

If using a language that has no pointers (such as Python), you can assume you have access to get_pointer and dereference_pointer functions that converts between nodes and memory addresses
'''
import ctypes

def _get_obj(id):
    return ctypes.cast(id, ctypes.py_object).value

class Node:
    def __init__(self, value):
        self.value = value
        self.both = 0

class XORLinkedList:
    def __init__(self):
        self.head = self.tail = None
        self.__nodes = []

    def add(self, element):
        node = Node(element)
        if self.head is None:
            self.head = self.tail = node
        else:
            node.both = id(self.tail)
            self.tail.both = id(node) ^ self.tail.both
            self.tail = node
    
    def get(self, index):
        head = self.head
        prev = 0
        for i in range(index):
            next = head.both ^ prev
            if next:
                prev = id(head)
                head = _get_obj(next)
        return head.value

xor_ll = XORLinkedList()
xor_ll.add('1')
xor_ll.add('2')
xor_ll.add('3')

print(xor_ll.get(1))

