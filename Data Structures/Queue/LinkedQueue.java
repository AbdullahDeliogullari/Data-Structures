package datastructures;
import java.util.NoSuchElementException;

public class LinkedQueue<Item>{
    private int n;
    private Node first;
    private Node last;
    
    private class Node{
        private Item item;
        private Node next;
    }
    
    public LinkedQueue(){
        first = null;
        last = null;
        n = 0;
        assert check();
    }
    
    public boolean isEmpty(){
        return first == null;
    }
    
    public int size(){
        return n;
    }
    
    public Item peek(){
        if(isEmpty()) throw new NoSuchElementException("Queue underflow");
        return first.item;
    }
    
    public void enqueue(Item item){
        Node oldlast = last;
        last = new Node();
        last.item = item;
        last.next = null;
        if(isEmpty())
            first = last;
        else
            oldlast.next = last;
        n = n + 1;
        assert check();
    }
    
    public Item dequeue(){
        if(isEmpty())
            throw new NoSuchElementException("Queue underflow");
        Item item = first.item;
        first = first.next;
        n = n - 1;
        if(isEmpty())
            last = null;
        assert check();
        return item;
    }
    
    private boolean check() {
        if (n < 0) {
            return false;
        }
        else if (n == 0) {
            if (first != null) return false;
            if (last  != null) return false;
        }
        else if (n == 1) {
            if (first == null || last == null) return false;
            if (first != last)                 return false;
            if (first.next != null)            return false;
        }
        else {
            if (first == null || last == null) return false;
            if (first == last)      return false;
            if (first.next == null) return false;
            if (last.next  != null) return false;

            // check internal consistency of instance variable n
            int numberOfNodes = 0;
            for (Node x = first; x != null && numberOfNodes <= n; x = x.next) {
                numberOfNodes++;
            }
            if (numberOfNodes != n) return false;

            // check internal consistency of instance variable last
            Node lastNode = first;
            while (lastNode.next != null) {
                lastNode = lastNode.next;
            }
            if (last != lastNode) return false;
        }
        return true;
    }
    
    public void content(){
        System.out.println(first.item);
        Node NextNode = first.next;
        for(int i = 0;i < n - 1;i = i + 1){
            System.out.println(NextNode.item);
            NextNode = NextNode.next;
        }
    }
    
    public static void main(String[] args){
        LinkedQueue<Date> queue = new LinkedQueue();
        queue.enqueue(new Date(10,10,2015).next());
        queue.content();
    }
}
