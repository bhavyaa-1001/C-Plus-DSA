import java.util.Scanner;

class Queue {
    int front, rear, size;
    int[] arr;

    // Constructor
    Queue(int size) {
        this.size = size;
        arr = new int[size];
        front = 0;
        rear = -1;
    }

    // Enqueue (insert)
    void enqueue(int value) {
        if (rear == size - 1) {
            System.out.println("Queue Overflow");
            return;
        }
        arr[++rear] = value;
        System.out.println(value + " enqueued");
    }

    // Dequeue (remove)
    void dequeue() {
        if (front > rear) {
            System.out.println("Queue Underflow");
            return;
        }
        System.out.println(arr[front++] + " dequeued");
    }

    // Peek (front element)
    void peek() {
        if (front > rear) {
            System.out.println("Queue is empty");
            return;
        }
        System.out.println("Front element: " + arr[front]);
    }

    // Display queue
    void display() {
        if (front > rear) {
            System.out.println("Queue is empty");
            return;
        }
        System.out.print("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}

public class QueueDemo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter queue size: ");
        int size = sc.nextInt();

        Queue q = new Queue(size);

        while (true) {
            System.out.println("\n1. Enqueue");
            System.out.println("2. Dequeue");
            System.out.println("3. Peek");
            System.out.println("4. Display");
            System.out.println("5. Exit");
            System.out.print("Choose option: ");

            int choice = sc.nextInt();

            switch (choice) {
                case 1:
                    System.out.print("Enter value: ");
                    q.enqueue(sc.nextInt());
                    break;

                case 2:
                    q.dequeue();
                    break;

                case 3:
                    q.peek();
                    break;

                case 4:
                    q.display();
                    break;

                case 5:
                    System.out.println("Exiting...");
                    sc.close();
                    return;

                default:
                    System.out.println("Invalid choice");
            }
        }
    }
}
