#include "WorkRoom.h"
//#include "Grade.h"
#include <string>
using namespace std;

#include <vector>


//nt Room::numroom =0;
WorkRoom::WorkRoom(): Room( ){  //StandardRoom

//	_roomid= numroom;
//	numroom++;
}

// void WorkRoom::addSingleStandartStudent(Student *st ){}
//
// void WorkRoom::addSingleWorkStudent(Student *st ){
//	svec.push_back(st);
//}
// void WorkRoom::addSingleLazyStudent(Student *st ){}

 void WorkRoom:: addLazyStudent(vector<Student*> studentsvec){

 }
 void WorkRoom:: addStandartStudent(vector<Student*> studentsvec){}
 void WorkRoom:: addWorkStudent(vector<Student*> studentsvec){

	 int i =0;
	 for (i = 0 ;i < studentsvec.size();i++){

		 //studentsvec[i]->addLazyStudent(this);
		 studentsvec[i]->addWorkStudent(this);
		 //studentsvec[i]->addResponsibleStudent(this);
		 //svec.push_back(st);
	 }
 }

//  Room* WorkRoom::getDad(){
//	 return Dad;
// }

// void WorkRoom::removeStudent(){}
 //void LazyRoom::SplitRoom(){}

 vector<Room*>  WorkRoom::SplitRoombyCharacter(){
	 vector<Room*> roomvec;
	  left = new WorkRoom();
	  left->setDad(this);

	  right = new LazyRoom();
	  right->setDad(this);

	  roomvec.push_back(left);
	  roomvec.push_back(right);

	  right->addLazyStudent(svec);

	  left->addWorkStudent(svec);
	  //right->addWorkStudent(svec);
	  ifsplitted = true;
	  return roomvec;

  }



 vector<Room*> WorkRoom::SplitRoombySize(){
	  vector<Room*> roomvec;

	  left = new StandardRoom();
	  	  	  left->setDad(this);

	  	  	  right = new StandardRoom();
	  	  	  right->setDad(this);

	  	  	roomvec.push_back(left);
	  	  	roomvec.push_back(right);

	  	  	  //left->addLazyStudent(svec);
	  	  	//lines;
	  	  	  std::size_t const half_size = svec.size() / 2;


	  	  	  vector<Student*>split_l(svec.begin(), svec.begin() + half_size);
	  	   	  vector<Student*>split_r(svec.begin() + half_size, svec.end());

	  	      left->addStandartStudent(split_l);
	  	  	  right->addStandartStudent(split_r);
	  	  	  ifsplitted = true;

	  	  	  svec.clear();

	  	  	  return roomvec;

  }


//  vector<Student*> WorkRoom::getStudents(){
// 	   return svec;
//
//    }

//  void WorkRoom::setDad(Room *rom){
//     	  Dad = rom;
//        }

  // void WorkRoom::removeRoom(){}

//   int  WorkRoom::getRoomid(){
//      	 return _roomid;
//       }


  WorkRoom::~WorkRoom()
{}


//void Student::setRoom(int _room){}
//void Student::setMessage(string msg){}
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
