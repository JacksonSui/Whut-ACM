#include <iostream>
#include <string>
#include <queue>
using namespace std;

struct student{
	string name;
	int grade;
	friend bool operator < (student s1, student s2){
		return s1.grade > s2.grade;
	}
}s1,s2,s3;

struct teacher{
	int salary;
	double rate;
}t1,t2,t3;

struct cmp{
	bool operator () (teacher t1, teacher t2){
		return t1.rate < t2.rate;
	}
};

int main(){
	priority_queue<student> q;
	priority_queue<teacher, vector<teacher>, cmp> qt;
	s1.name = "jason";
	s1.grade = 90;
	s2.name = "sui";
	s2.grade = 93;
	s3.name = "wenacad";
	s3.grade = 89;
	t1.salary = 10000;
	t1.rate = 0.8;
	t2.salary = 12000;
	t2.rate = 0.7;
	t3.salary = 8000;
	t3.rate = 0.99;
	q.push(s1);
	q.push(s2);
	q.push(s3);
	qt.push(t1);
	qt.push(t2);
	qt.push(t3);

	cout << q.top().name << " " << q.top().grade << endl;
	cout << qt.top().salary << " " << qt.top().rate << endl;
}