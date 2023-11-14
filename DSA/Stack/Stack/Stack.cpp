# include<iostream>
# define limit 5
using namespace std;


int x[limit];

int top = -1;

bool isEmpty() {

	return top == -1;

}

bool isFull() {
	return top == limit - 1;
}

void push(int data) {

	if (isFull()) {
		cout << "Stack Overflow\n";
	}
	else {
		top++;
		x[top] = data;
		cout << "Pushed " << x[top] << endl;
	}

}

void pop() {
	if (isEmpty()) {
		cout << "Stack Underflow\n";
	}
	else {
		cout << "Popped " << x[top] << endl;
		x[top] = NULL;
		top--;
	}
}

int peek() {
	return x[top];
}
int size() {
	return top + 1;
}

void display() {

	for (int i = top; i > -1;i--) {
		cout << x[i] << endl;
	}

}


int main() {


	push(5);
	push(10);
	push(15);
	push(20);
	display();



	return 0;
}