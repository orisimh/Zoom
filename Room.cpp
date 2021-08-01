#include "Room.h"
//#include "Grade.h"

#include <string>
using namespace std;

#include <vector>
#include <iostream>
using namespace std;
#include <exception>

vector<Room*> Room ::rmstac;
int Room::numroom =0;
Room::Room( ){

	_roomid= numroom;
	 numroom++;
	  Dad=0;
		 left=0;
		 right= 0;
		 ifsplitted =false;
}

Room::~Room()
{}

 //void Room::addStandartStudent(Student *st){}
// void Room::addWorkStudent(Student *st){}
// void Room::addLazyStudent(Student *st){}

 //void Room::removeStudent(){}
 vector<Room*> Room::SplitRoombyCharacter() {}
 vector<Room*> Room::SplitRoombySize(){}

   int Room::getnumofrooms(){
	  return numroom ;
  }

void Room::setStudent(Student *st){

int i = 0;
	 for (i = 0 ;i < svec.size();i++){
	if(st->getId() ==svec[i]->getId() ){
		return;
	}
	 }
	svec.push_back(st);
}

//Room* Room::getDad(){
//
//	return Dad;
//}


void Room::RemoveStudent(Student *st){

	   int i =0;
	   //cout<<"hello";
	   for (i = 0 ;i < svec.size();i++){
		 if(svec[i]->getId()== st->getId()){
		 // svs.push_back(r->getStudents()[i]);

		   svec.erase(svec.begin()+i );
		 	 break;
		 }
		}

}

void Room::removeRoom(Room *rom ){


	  //this == 0 &&

	    /* first delete both subtrees */
			//if (rom ==0) return;
		 int i =0;
		 for (i = 0 ;i < rom->getStudents().size();i++){

			rom->getStudents()[i]->Crying();
			 if(rom-> getDad()!=0){
			    rom-> getDad()->setStudent(rom->getStudents()[i]);
			    rom->getStudents()[i]->setRoom(rom-> getDad());

		 }
			 else{
				 rom->getStudents()[i]->setRoom(0);
			 		 }

		 }

		 int j=0;
		 vector<Student*>tempVector;
		 for(i = 0 ;i < rom->getStudents().size();i++){

			 tempVector.push_back(rom->getStudents()[i]);
		 }

		 for(i = 0 ;i < tempVector.size();i++){

			 for(j = 0 ;j < rom->getStudents().size();j++){
		 //rom->getStudents().clear();
				 if(tempVector[i]== rom->getStudents()[j]){
					 rom->RemoveStudent(rom->getStudents()[j]);
		 }
			 }
		 }


		// rom->getStudents().swap(tempVector);


//		if (left==0 && right ==0)
//			{
//			 this->~Room();
//			return;
//			}
//
//
	 if ( rom->left==0 && rom->right ==0){
		 rmstac.push_back(rom);
		//delete( rom);
		 if(rom->getDad()!=0){
		 rom->getDad()->RemoveSon(rom);
		 }
		 return;
	 }
//	    left->removeRoom();
//	    right->removeRoom();
	 	 if(rom->left!=0){
	    rom->removeRoom(rom->left);
	 	 }
	 	 if (rom->right!=0){
	    rom->removeRoom(rom->right);
	 	 }



	 if(rom->getDad()==0){
		 for (i = 0 ;i < rom->getStudents().size();i++){
			 rom->getStudents()[i]->Crying();
			 rom->getStudents()[i]->setRoom(0); //setNoRoom(true); //setRoom(0);
		 }
	//  rom->getStudents().clear();
}
	 if(rom->getDad()!=0){

		for (i = 0 ;i < rom->getStudents().size();i++){
		  rom->getStudents()[i]->Crying();
		  rom-> getDad()->setStudent(rom->getStudents()[i]);
		  rom->getStudents()[i]->setRoom(rom-> getDad());

	 }
		rom->getDad()->RemoveSon(rom);
		//rom->getStudents().clear();
	 }


	 	 	vector<Student*>tempVector1;
			 for(i = 0 ;i < rom->getStudents().size();i++){

				 tempVector1.push_back(rom->getStudents()[i]);
			 }

			 for(i = 0 ;i < tempVector1.size();i++){

				 for(j = 0 ;j < rom->getStudents().size();j++){
			 //rom->getStudents().clear();
					 if(tempVector1[i]== rom->getStudents()[j]){
						 rom->RemoveStudent(rom->getStudents()[j]);
			 }
				 }
			 }





//	 	vector<Student*>::iterator it;
//		 for ( it = rom->getStudents().begin();it != rom->getStudents().end(); ++it ) {
//			// rom->getStudents()[i]->Crying();
//			 (*it)->Crying();
//			// rom->RemoveStudent(rom->getStudents()[i]);
//		 //cout << *it << " ";
//		 }


	    rmstac.push_back(rom);



}

//
// vector<Room*> Room::gettoRemoveRoom(){
//	return rmstac;
//}

 vector<Student*> Room:: getStudents(){

 return svec;
 }


  int Room::getRoomid(){
	 return _roomid;
 }

   Room*  Room:: getDad(){
	  return Dad;
  }


bool Room:: HaveSplittedBefore(){
    	return ifsplitted;
    }
/*
Student::Student(int id, const char* name):m_id(id),m_num(0)
{strcpy(m_name, name);
}

*/


   void Room::RemoveSon(Room *rm) throw() {

	//   if(rm->getRoomid()== left->getRoomid()){
	//	   left=0;
	//   }
	   string gh = "bla";
	   try {
	   if(!left){
	    throw gh;
	   }

	   if(left->getRoomid()== rm->getRoomid()){
	  left=0;
        }
	   else{
		   right=0;
	   }
	   }
//	   else{

   	   	   catch(string gh){
	  // if(rm->getRoomid()== right->getRoomid()){
   	   		  // cout<<gh;
	   		   right=0;
   	   	   }
	   	  // }
   }


    void Room::setDad(Room *rom){
    	Dad=rom;
    }

