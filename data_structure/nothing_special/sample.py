#[6.4]

class DNode:
    def __init__(self, elem, prev = None, next = None):
        self.data = elem
        self.prev = prev
        self.next = next

class DoublyLinkedQueue:
    def __init__(self):
        self.front = None
        self.rear = None
    
    def isEmpty(self):
        return self.front == None
    
    def clear(self):
        self.front = self.rear = None
    
    def size(self):
        node = self.front
        cnt = 0
        
        while node is not None:
            node = node.next
            cnt+=1
            
        return cnt
    
    def display(self):
        node = self.front
        cnt = 0
        
        while node is not None:
            if node.data is not None:
                cnt+=1
                print(node.data, end=' ')
                node = node.next
        print()
    
    def getNode(self, pos):
        node = self.front
        if pos < 0: return None
        
        while pos > 0 and not node == None:
            node = node.next
            pos -= 1
        
        return node
    
    def addFront(self, item):
        first = self.getNode(0)
        if first is None:
            node = DNode(item, self.front, self.rear)
            self.front = node
            self.rear = node
        else:
            node = DNode(item, self.front, first)
            first.prev = node
            self.front = node
            self.front.prev = None
            
    def addRear(self, item):
        last = self.getNode(self.size()-1)
        if last is None:
            node = DNode(item, self.front, self.rear)
            self.front = node
            self.rear = node
        else:
            node = DNode(item, last, self.rear)
            last.next = node
            self.rear = node
            self.rear.next = None
    
    def deleteFront(self):
        first = self.getNode(0)
        if first is not None:
            first.next.prev = self.front
            self.front = first.next
    
    def deleteRear(self):
        last = self.getNode(self.size()-1)
        if last is not None:
            self.rear = last.prev
            last.prev.next = self.rear
            self.rear.next = None
        

One = DoublyLinkedQueue()
One.addFront(1)
One.addFront(2)
One.display()

One.addRear(3)
One.addRear(4)
One.display()

One.deleteFront()
One.display()

One.deleteRear()
One.display()