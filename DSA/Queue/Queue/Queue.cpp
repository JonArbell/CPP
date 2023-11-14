# include<iostream>
# define Max 5
using namespace std;

int queue[Max];

int front = -1;
int rear = -1;

bool isEmpty() {
	return front == -1 && rear == -1;
}
bool isFull() {
	return rear == Max - 1;
}

void enqueue(int data) {

	if (isFull()) {
		cout << "Full Queue!\n";
	}
	else {
		if (front == 0) {
			//Normal Queue
			rear++;
			queue[rear] = data;
			cout << "Enqueue " << queue[rear] << endl;
		}
		else {
			//First Time Queue
			front++;
			rear++;
			queue[rear] = data;
			cout << "Enqueue " << queue[rear] << endl;
		}
	}

}

void dequeue() {

	if (isEmpty()) {

		cout << "Empty Queue!\n";
	}
	else {

		if (front + 1 > rear) {
			cout << "Dequeue " << queue[rear] << endl;
			queue[rear] = 0;
			front = -1;
			rear = -1;
		}
		else {
			cout << "Dequeue " << queue[rear] << endl;
			queue[front] = 0;
			front++;
		}


	}

}
int peak() {

	if (!isEmpty()) {
		return queue[front];
	}
	else {
		cout << "Empty Queue!\n";
	}
}
void display() {

	if (!isEmpty()) {
		for (int i = front; i <= rear;i++) {
			cout << "Queue " << queue[i] << endl;
		}
	}
	else {
		cout << "Empty Queue!\n";
	}

}

int size() {
	return (rear - front) + 1;
}


int main() {

	enqueue(5);
	cout << "Peak " << peak() << endl;
	enqueue(10);
	enqueue(5);
	enqueue(5);
	cout << "Peak " << peak() << endl;
	dequeue();
	display();
	cout << "Size: " << size() << endl;
	cout << front;
	return 0;
}