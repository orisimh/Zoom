#include "LazyStudent.h"
#include <string>
using namespace std;
#include <vector>
#include <iostream>


//class Room::getStudents;

LazyStudent::LazyStudent(string _f_name , string _l_name, int id,  double avg): Student(_f_name, _l_name, id , avg)
{

}



LazyStudent::~LazyStudent()
{
//	if(rm!=0){
//					delete(rm);
//				}
}

void LazyStudent::addLazyStudent(Room *r ){

	//vector<Student*> svs.insert(r->getStudents().end());
	unsigned long i = 0;
	//vector<Student*> svs;
//	for (i = 0 ;i < r->getStudents().size();i++){
//
//	  svs.push_back(r->getStudents()[i]);
//	   r->getStudents().erase(r->getStudents().begin()+i );
//
//	}

	r->setStudent(this);
//	cout<<r->getStudents().size()<<endl;
//	for (i =0;i<r->getStudents().size() ;i++){
//		cout<<r->getStudents()[i]->getId()<<endl;
//			}

	r->getDad()->RemoveStudent(this);

	//cout<<r->getDad()->getRoomid()<<endl;

	this->rm= r;

}

//int LazyStudent:: getId(){
//	return _id;
//}

void LazyStudent::addResponsibleStudent(Room *r){}
void LazyStudent::addWorkStudent(Room *r){}

//void LazyStudent::setRoom(Room *room){
//
//	rm=room;
//}
//void LazyStudent::setMessage(string msg){
//	msgvec.push_back(msg);
//}


//bool LazyStudent::sendMessages(string msg){
//
//return false;
//
//}
void LazyStudent::Declaretion(){

}

void LazyStudent::Crying(){
	cout<< f_name<<" "<< l_name<<" "<<"is crying"<<endl;
}


void  LazyStudent::setSender(Student *st){

Student *rs = new LazyStudent(st->getfirst() , st->getlast() ,st->getId() , st->getavg());

senders.push_back(rs);
}


//double LazyStudent::GetFinal()const
//{
//	//return Student::GetFinal() + m_project;
//	return GetAverage() + m_project;
//}
