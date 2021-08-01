#include "ResponsibleStudent.h"
#include <string>
using namespace std;
#include <vector>
#include <iostream>


//class Room::getStudents;

ResponsibleStudent::ResponsibleStudent(string _f_name , string _l_name, int id,  double avg): Student(_f_name, _l_name, id , avg)
{

}



ResponsibleStudent::~ResponsibleStudent()
{
//	if(rm!=0){
//					delete(rm);
//				}
}

void ResponsibleStudent::addLazyStudent(Room *r ){

	//vector<Student*> svs.insert(r->getStudents().end());
//	unsigned long i = 0;
//	vector<Student*> svs;
//	for (i = 0 ;i < r->getStudents().size();i++){
//
//	  svs.push_back(r->getStudents()[i]);
//	   r->getStudents().erase(r->getStudents().begin()+i );
//
//	}
	//this->rm= r;
}

//int ResponsibleStudent:: getId(){
//	return _id;
//}

void ResponsibleStudent::addResponsibleStudent(Room *r){}

void ResponsibleStudent::addWorkStudent(Room *r){}

//void ResponsibleStudent::setRoom(Room *room){}

void ResponsibleStudent::setMessage(string msg){
	msgvec.push_back(msg);
}


bool ResponsibleStudent::sendMessages(string msg){
	int i =0 ;
	if(rm!=0){
	for (i =0;i< rm->getStudents().size();i++){

		rm->getStudents()[i]->setMessage(msg);
		rm->getStudents()[i]->setSender(this);
}
	}

	return true;
}

void  ResponsibleStudent::setSender(Student *st){

Student *rs = new ResponsibleStudent(st->getfirst() , st->getlast() ,st->getId() , st->getavg());

senders.push_back(rs);
}

void ResponsibleStudent::Declaretion(){

}

void ResponsibleStudent::Crying(){

}



//double LazyStudent::GetFinal()const
//{
//	//return Student::GetFinal() + m_project;
//	return GetAverage() + m_project;
//}
