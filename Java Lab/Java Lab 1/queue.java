class Queue {
    public static void main(String[] args) {

        int size = 5;
        int[] queue = new int[size];
        int front = 0, rear = -1;

        // Enqueue (already given input)
        queue[++rear] = 10;
        queue[++rear] = 20;
        queue[++rear] = 30;

        // Display
        System.out.print("Queue: ");
        for (int i = front; i <= rear; i++) {
            System.out.print(queue[i] + " ");
        }
        System.out.println();

        // Dequeue
        System.out.println("Dequeued: " + queue[front++]);

        // Peek
        System.out.println("Front element: " + queue[front]);
    }
}
