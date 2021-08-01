#include "WorkStudent.h"
#include "Student.h"
#include <iostream>

#include <string>
using namespace std;
#include <vector>


//LazyStudent::LazyStudent()
//{
//}

WorkStudent::WorkStudent(string _f_name , string _l_name, int id,  double avg): Student(_f_name, _l_name, id , avg)
{

}

WorkStudent::~WorkStudent()
{
}


void  WorkStudent::setSender(Student *st){

	Student *rs = new WorkStudent(st->getfirst() , st->getlast() ,st->getId() , st->getavg());

senders.push_back(rs);
}
// void WorkStudent:: setRoom(Room *room){
//
//rm=room;
////	 f_name = "ghj";
////	 room = _room;
//
// }
//void WorkStudent::setMessage(string msg){
//	msgvec.push_back(msg);
//}


	//Student(_f_name , _l_name,  id,   avg); //{	m_project = project;};

void WorkStudent::Declaretion(){

 cout<< f_name<<" "<< l_name<<" "<<"is working"<<endl;

}//Room rm);

//bool WorkStudent::sendMessages(string msg){
//	return false;
//}

void WorkStudent:: Crying(){}

void WorkStudent:: addLazyStudent(Room *r){}
void WorkStudent:: addResponsibleStudent(Room *r){}

void WorkStudent:: addWorkStudent(Room *r){

	unsigned long i = 0;
	//vector<Student*> svs;
//	for (i = 0 ;i < r->getStudents().size();i++){
//
//	  //svs.push_back(r->getStudents()[i]);
//	   r->getStudents().erase(r->getStudents().begin()+i );
//}
	//r->getStudents().push_back(this);


	r->setStudent(this);
	r->getDad()->RemoveStudent(this);
		this->rm= r;
}

//int WorkStudent:: getId(){
//	return _id;
//}

//double LazyStudent::GetFinal()const
//{
//	//return Student::GetFinal() + m_project;
//	return GetAverage() + m_project;
//}
