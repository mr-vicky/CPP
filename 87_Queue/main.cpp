#include<iostream>
#include<queue>
#include<string>
using namespace std;


int main()
{
	//enqueue
	queue<string> q,q1;
	q.push("Vicky");
	q.push("Vishal");
	q.push("Ritesh");
	q.push("Vikas");

	cout << "Front : " << q.front() << endl;
	cout << "back : " << q.back() << endl;
	cout << "Size : " << q.size() << endl;
	cout << endl;

	q1 = q;
	while (!q1.empty())
	{
		cout << q1.front() << endl;
		q1.pop(); // dequeue
	}

	return 0;
}
