#include "Student.h"
//#include "Grade.h"
#include <string>
using namespace std;

#include <vector>



Student::Student( string _f_name , string _l_name, int id,  double avg ){

	f_name = _f_name;
	l_name =_l_name;
	_id= id ;
	 average = avg;
	 rm= 0;
	 //noroom=true;
}

Student::~Student()
{
	int i = 0;
	for (i =0;i< senders.size();i++){

		delete(senders[i]);
		senders[i]=0;
		//senders.erase(senders.begin()+ j );
	}

//if(rm!=0)	{
//	delete(rm);
//}
}


void Student::setRoom(Room *room){
	rm=room;

}
void Student::setMessage(string msg){

	msgvec.push_back(msg);
}



int Student::  getId(){
	return _id;
}
Room* Student:: getRoom(){
	return rm;
}
string f_name = "";
	string l_name ="";
	int _id;
	int average;
	Room *rm;
string Student::  getfirst(){
	return f_name;
}
string Student::  getlast(){
	return l_name;
}
double Student:: getavg(){
 return average;
}


void Student:: setNoRoom(bool bl){
 noroom=bl;
}

bool Student:: ifhasroom(){
	return noroom;
}


// void  Student::setSender(Student *st){
//
//	 Student *rs = new Student(st->getfirst() , st->getlast() ,st->getId() , st->getavg());
//	 senders.push_back(rs);
//}


 vector<string>  Student::getMessages(){
return msgvec;

 }

 vector<Student*> Student::getSenders(){
	return senders;
}

 bool Student::sendMessages(string msg){

}
/*
Student::Student(int id, const char* name):m_id(id),m_num(0)
{strcpy(m_name, name);
}


bool Student::AddGrade(const Grade& g)
{
	if (m_num >= 10)
		return false;
	m_grades[m_num++] = g;
	return true;
}

double Student::GetAverage()const
{
	int i;
	double sum=0;
	if (m_num <= 0)
		return 0;
	for (i = 0; i < m_num; i++)
		sum += m_grades[i].GetGrade();
	return sum / m_num;
}
*/
