from Node import Node

class Queue:
    def __init__(self):
        self.first = None
        self.last = None
        self.n = 0

    def isEmpty(self):
        return self.first == None

    def size(self):
        return self.n
    
    def enqueue(self,item):
        oldlast = self.last
        self.last = Node()
        self.last.item = item
        self.last.next = None
        if(self.isEmpty()):
            self.first = self.last
        else:
            oldlast.next = self.last
        self.n = self.n + 1
    
    def dequeue(self):
        item = self.first.item
        self.first = self.first.next
        self.n = self.n - 1
        if(self.isEmpty()):
            self.last = None
        return item
    
    def peek(self):
        return self.first.item

lq = Queue()

lq.enqueue(1)
lq.enqueue(2)
lq.enqueue(3)

while(not lq.isEmpty()):
    print(lq.dequeue())
        
    
