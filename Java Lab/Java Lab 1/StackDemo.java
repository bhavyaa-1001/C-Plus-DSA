import java.util.Scanner;

class Stack {
    int top;
    int size;
    int[] arr;

    // Constructor
    Stack(int size) {
        this.size = size;
        arr = new int[size];
        top = -1;
    }

    // Push operation
    void push(int value) {
        if (top == size - 1) {
            System.out.println("Stack Overflow");
            return;
        }
        arr[++top] = value;
        System.out.println(value + " pushed into stack");
    }

    // Pop operation
    void pop() {
        if (top == -1) {
            System.out.println("Stack Underflow");
            return;
        }
        System.out.println(arr[top--] + " popped from stack");
    }

    // Peek operation
    void peek() {
        if (top == -1) {
            System.out.println("Stack is empty");
            return;
        }
        System.out.println("Top element: " + arr[top]);
    }

    // Display stack
    void display() {
        if (top == -1) {
            System.out.println("Stack is empty");
            return;
        }
        System.out.print("Stack elements: ");
        for (int i = top; i >= 0; i--) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}

public class StackDemo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter stack size: ");
        int size = sc.nextInt();

        Stack stack = new Stack(size);

        while (true) {
            System.out.println("\n1. Push");
            System.out.println("2. Pop");
            System.out.println("3. Peek");
            System.out.println("4. Display");
            System.out.println("5. Exit");
            System.out.print("Choose option: ");

            int choice = sc.nextInt();

            switch (choice) {
                case 1:
                    System.out.print("Enter value: ");
                    int val = sc.nextInt();
                    stack.push(val);
                    break;

                case 2:
                    stack.pop();
                    break;

                case 3:
                    stack.peek();
                    break;

                case 4:
                    stack.display();
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
