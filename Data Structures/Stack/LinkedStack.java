package datastructures;
import java.util.NoSuchElementException;

public class LinkedStack<Item> {
    private int n;
    private Node first;
    
    private class Node{
        private Item item;
        private Node next;
    }
    
    // Initializes an empty stack
    public LinkedStack(){
        first = null;
        n = 0;
        assert check();
    }
    
    // Is this stack empty?
    public boolean isEmpty(){
        return first == null;
    }
    
    // Returns the number of items in the stack
    public int size(){
        return n;
    }
    
    public void push(Item item){
        Node oldfirst = first;
        first = new Node();
        first.item = item;
        first.next = oldfirst;
        n = n + 1;
        assert check();
    }
    
    public Item pop(){
        if(isEmpty())
            throw new NoSuchElementException("Stack underflow");
        Item item = first.item;
        first = first.next;
        n = n - 1;
        assert check();
        return item;
    }
    
    public Item peek(){
        if(isEmpty())
            throw new NoSuchElementException("Stack underflow");
        return first.item;
    }
    
    public void content(){
        if(isEmpty() == false){
            System.out.println(first.item);
            Node NextNode = first.next;
            for(int i = 0;i < n - 1;i = i + 1){
                System.out.println(NextNode.item);
                NextNode = NextNode.next;
            }
        }
    }

    private boolean check() {
        if (n < 0) {
            return false;
        }
        if (n == 0) {
            if (first != null) return false;
        }
        else if (n == 1) {
            if (first == null)      return false;
            if (first.next != null) return false;
        }
        else {
            if (first == null)      return false;
            if (first.next == null) return false;
        }
        // check internal consistency of instance variable n
        int numberOfNodes = 0;
        for (Node x = first; x != null && numberOfNodes <= n; x = x.next) {
            numberOfNodes++;
        }
        return numberOfNodes == n;
    }
    
    public static void main(String[] args){
        LinkedStack<String> stack = new LinkedStack<>();
        stack.push("abdullah");
        stack.push("emriye");
        stack.push("ömer");
        stack.push("yenge");
        stack.content();
    }   
}
