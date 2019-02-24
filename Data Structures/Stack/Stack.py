from Node import Node
class LinkedStack:
    
    def __init__(self):
        self.n = 0
        self.first = None
        
    def isEmpty(self):
        return self.first == None
    
    def size(self):
        return self.n
    
    def push(self,item):
        oldfirst = self.first
        node = Node()
        self.first = node
        self.first.item = item
        self.first.next = oldfirst
        self.n = self.n + 1
    
    def pop(self):
        assert self.isEmpty,'Stack underflow'
            
        item = self.first.item
        self.first = self.first.next
        self.n = self.n - 1
        return item
    
    def peek(self):
        assert self.isEmpty,'Stack underflow'
        return self.first.item
        
ls = LinkedStack()
ls.push('abdullah')
ls.push('ömer')
ls.push('cansu')
ls.push('emriye')

while(not ls.isEmpty()):
    print(ls.pop())
    
