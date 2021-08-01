#include "LazyRoom.h"
//#include "Grade.h"
#include <string>
using namespace std;

#include <vector>


//nt Room::numroom =0;
LazyRoom::LazyRoom(): Room( ){    //StandardRoom(){//

//	_roomid= numroom;
//	numroom++;
}
//void LazyRoom::addSingleWorkStudent(Student *st ){}
//
//void LazyRoom::addSingleStandartStudent(Student *st ){}
//
//void LazyRoom:: addSingleLazyStudent(Student *st ){
//
//
//		 svec.push_back(st); // here to fix
//
//		// studentsvec[i]->addWorkStudent(this);
//		 //studentsvec[i]->addResponsibleStudent(this);
//		 //svec.push_back(st);
//
// }

 void LazyRoom:: addLazyStudent(vector<Student*> studentsvec ){

	 int i =0;
	 for (i = 0 ;i < studentsvec.size();i++){

		 studentsvec[i]->addLazyStudent(this);
		 //Dad->removestudent(studentsvec[i]);
		// studentsvec[i]->addWorkStudent(this);
		 //studentsvec[i]->addResponsibleStudent(this);
		 //svec.push_back(st);
	 }
 }
 void LazyRoom:: addStandartStudent(vector<Student*> studentsvec){}
 void LazyRoom:: addWorkStudent(vector<Student*> studentsvec){}

// void LazyRoom::removeStudent(){
//
//
// }
 //void LazyRoom::SplitRoom(){}


 vector<Room*> LazyRoom::SplitRoombyCharacter(){

  vector<Room*> roomvec;
  left = new WorkRoom();
  left->setDad(this);

  right = new LazyRoom();
  right->setDad(this);



  //left->addLazyStudent(svec);
  right->addLazyStudent(svec);

  left->addWorkStudent(svec);
  //right->addWorkStudent(svec);
  ifsplitted = true;

  roomvec.push_back(left);
  roomvec.push_back(right);
  return roomvec;
}

 vector<Room*>  LazyRoom::SplitRoombySize(){

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

		  	 // cout<<half_size<<endl;

		  	  vector<Student*>split_l(svec.begin(), svec.begin() + half_size);
		   	  vector<Student*>split_r(svec.begin() + half_size, svec.end());

		      left->addStandartStudent(split_l);
		  	  right->addStandartStudent(split_r);
		  	  ifsplitted = true;

		  	  svec.clear();
		  	return roomvec;
}


//vector<Student*> LazyRoom::getStudents(){
//   return svec;
//
//}

//void LazyRoom::removeRoom(){
//
//
////	Room* Dady = Dad;
////	Room* left1 = left->left ;
////	Room* right1 = left->right ;
////
////	Room* left2 ;  //=right->left ;
////	Room* right2; //= right->right ;;
////
////	Room* left3 ;  //=right->left ;
////	Room* right3;
////
////	Room* lr;
////	Room* rl;
////
////	while (left2  !=0 || right2 != 0||left1!= 0|| right1!=0){
//
//	    if (this == 0 && left==0 && right ==0) return;
//
//	    /* first delete both subtrees */
//		 int i =0;
//		 for (i = 0 ;i < svec.size();i++){
//
//			 svec[i]->Crying();
//			 Dad->setStudent(svec[i]);
//			  //Dad->getStudents().push_back(svec[i]);
//			// studentsvec[i]->addWorkStudent(this);
//			 //studentsvec[i]->addResponsibleStudent(this);
//			 //svec.push_back(st);
//		 }
//
//
//	    left->removeRoom();
//	    right->removeRoom();
//
//	    delete this;
//
//	    /* then delete the node */
//	  //  cout << "Deleting node: " << node->data << endl;
//
//
//
////		left2= left1->left ;
////		right2= left1->right ;
////
////
////		 left3 = right1->left  ;  //=right->left ;
////		 right3 =right1->right ;
////
////
////		 left1 = left2 ;
////		 lr = right2;
////
////		 right1 =  left3 ;
////		 rl = right3;
////	}
////
////	right1= right1->right ;
////	right= right->left ;
////			right= right->right ;
//
//	if(Dad == 0){
//
//	}
//
//}





//Room* LazyRoom::getDad(){
//	return Dad;
//}

//void LazyRoom::setDad(Room *rom){
//   Dad = rom;
//  }


//int LazyRoom::getRoomid(){
//     	 return _roomid;
//      }

LazyRoom::~LazyRoom()
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
