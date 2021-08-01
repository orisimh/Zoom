/*
 * ZoomSys.cpp
 *
 *  Created on: Dec 30, 2020
 *      Author: ise
 */



#include <exception>
using namespace std;
#include <iostream>
#include <string>
/*
 * exception1.h
 *
 *  Created on: Jan 9, 2021
 *      Author: ise
 */







#include "exception1.h"
//#include "exception2.h"
//#include "exception3.h"

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <stdio.h>
#include <ctype.h>
#include <cstring>
using namespace std;
#include "ZoomSys.h"
#include <list>
#include <vector>
//list<Student> studentlist;

ZoomSys::ZoomSys(string pathfile){
	this->pathfile = pathfile;

	string line;
	  ifstream myfile (this->pathfile);
	  if (myfile.is_open())
	  {
	    while ( getline (myfile,line) )
	    {

	    //  cout << line << '\n';
	     // char str[] = "Geeks for Geeks";
	       //char delim[] = {" "};
	    //   string ln= strtok(line,delim);
	    	string typ;
	    	double avg;
	    	string first;
	    	string second;
			int id;
	       string word = "";
	       int i = 0;
	           for (auto x : line)
	           {

	        	   //"\t"
	               if (x == '	')
	               {
	            	   //cout << word << endl;

	                   switch(i)
	                   	 {
						case 0:
						{
						 first = word;
						break;
						}
						case 1:
						{
						 second = word;
						 break;
						}
						case 2:
						{
//						stringstream cnvrt(word);
//
//							    cnvrt >> id;
						id = stoi(word);
						break ;
						}
						case 3:
						{
							//cout << "hree" << endl;
						 avg = stoi(word);
							break;
						}

//						case 4:
//						{
//
//						 typ = word;
//							break;
//						}

							}
	                  // cout << i << endl;
	                   word = "";
	                   i++;

					   }

						   else {
							   if(i==4){
								   typ = word;
								   //cout << typ << endl;
									    }
								 word = word + x;


								 }


	              }

	           //cout << first << endl;
	          // cout << word << endl;

	           	   	   	   	   	   	   if(typ == "R")
	           	                   	 {
	           	   	   	   	   	   		   Student *rsb= new ResponsibleStudent( first, second ,  id,   avg); //= new WorkStudent  * = new WorkStudent
	           	   	   	   	   	   		   // studentlist.push_back(*wr);
	           	   	   	   	   	   		   this->studentve.push_back(rsb);

	           						}

	           						  if(typ == "W")
	           							           	                   	 {
	           					//	cout<<"helolo"<<endl;
	           						 Student *wr= new WorkStudent( first, second ,  id,   avg); //= new WorkStudent  * = new WorkStudent
	           						// studentlist.push_back(*wr);
	           						 this->studentve.push_back(wr);

	           						}
	           						 if(typ == "L"){
	           						//	cout<<"hello1"<<endl;
	           					    	Student *lz= new LazyStudent( first, second ,  id,   avg); //= new WorkStudent  * = new WorkStudent
								  // studentlist.push_back(*wr);
								        this->studentve.push_back(lz);


	           							           						}




	    }
	    myfile.close();
	  }

	  else cout << "Unable to open file";
}


void ZoomSys::addStudent(){

	string first;
	string second;
	int id;
	double avg;
	string type;
	//id =33.2 ;
	cout<<"---Create Student---"<<endl;

	cout<<"First name:"<<endl;
	cin >> first;

	cout<<"Last name:"<<endl;
		cin >> second;


	cout<<"ID:"<<endl;
		cin >> id;
		int i =0;
		bool flag =false;

		for (i =0;i< studentve.size();i++){

			 if(studentve[i]->getId() == id){
				//delete(studentve[i]);
				 flag=true;
				 break;
					 }
		}
		try{

//			 		 if(flag ==true ){
//			 			throw except4;
//			 		 }

		cout<<"avg:"<<endl;
		 cin >> avg;

//		 if( avg<0 || avg>100 ){
//			throw except4;
//					 		 }

	cout<<"Worker(W) or Lazy(L) or Responsible(R) Student?"<<endl;
	cin >> type;

	if( flag ==true ||id<0 || (type !=  "R" &&  type != "W" && type != "L")||avg<0 || avg>100  ){
				throw except4;
						 		 }
  	   if(type == "R")
        	                   	 {

  		 Student *rsb= new ResponsibleStudent( first, second ,  id,   avg); //= new WorkStudent  * = new WorkStudent
	     // studentlist.push_back(*wr);
	     this->studentve.push_back(rsb);
        						}

		  if(type == "W")
											 {
		//cout<<"helolo"<<endl;
		 Student *wr= new WorkStudent( first, second ,  id,   avg); //= new WorkStudent  * = new WorkStudent
		// studentlist.push_back(*wr);
		 this->studentve.push_back(wr);

		}
		 if(type == "L"){
		//	cout<<"hello1"<<endl;
			Student *lz= new LazyStudent( first, second ,  id,   avg); //= new WorkStudent  * = new WorkStudent
	  // studentlist.push_back(*wr);
			this->studentve.push_back(lz);


											}
		}
		catch(exception& exp ){


			 		 cout<<exp.what()<<endl;
			 		 }

}


void ZoomSys::removeStudent(){

	int id;
	cout<<"---Remove Student---"<<endl;
	cout<<"Enter the id:"<<endl;
	cin >> id;
	int i =0;
	int j= 0;
	bool flag =false;
	Student *st1;
	for (i =0;i< studentve.size();i++){

	 if(studentve[i]->getId() == id){
		//delete(studentve[i]);
		 j = i;
		 flag=true;
		 break;
			 }
	}
	 try{

	 		 if(!flag){

	 			throw except2;
	 		 }
	 		if(studentve[j]->getRoom()!=0){
	 		studentve[j]->getRoom()->RemoveStudent(studentve[j]);
	 		//cout<<"hello";
	 		}
	 		st1= studentve[j];
	 		studentve.erase(studentve.begin()+ j );
	 		delete(st1);

	 		 }

	 		 catch(exception& exp2 ){


	 		 cout<<exp2.what()<<endl;
	 		 }


}




void ZoomSys::assignStudent(){
		cout<<"---Assign Student---"<<endl;
		int id;
		int room;

		cout<<"Enter student id:"<<endl;
		cin >> id;



		Student *stt;
		int i =0 ;
		int j =0;
		bool flag =false;
		for (i =0;i< studentve.size();i++){

		 if(studentve[i]->getId() == id){
			 j=i;
			 flag =true;
		    //stt = studentve[i];
			 break;
		 }
		}

		 try{

//		 		 if(flag==false){
//
//		 			throw except2;
//		 		 }

		 		cout<<"Enter room id:"<<endl;
		 		cin >> room;
		 		stt = studentve[j];
		 		 bool flag1 =false;
		 		 j=0;

		 		 for (i =0;i<roomvec.size() ;i++){

		 			 if(roomvec[i]->getRoomid()== room ){
		 	//			 stt->setRoom(roomvec[i]);
		 	//			 roomvec[i]->setStudent(stt);
		 				 flag1= true;
		 				 j=i;
		 				//stt->setNoRoom(false);
		 				break;
		 			}
		 		    }

		 		   	   	   if( room == -1){
		 		   	   	roomvec[j]->RemoveStudent(stt);
		 		   	   	stt->setRoom(0);
		 		   	   		   //flag =true;
		 		   	   	   }
		 		   	   	   else{

		 			 		 		 if(flag1==false || flag ==false){
		 			 		 		 throw except2;
		 			 		 		 }

		 			 		 		if(stt->getRoom()!=0){
		 			 		 			//cout<<"hello";
		 			 		 			int h =stt->getRoom()->getRoomid();
		 			 		 			stt->setRoom(0);
		 			 		 			roomvec[h]->RemoveStudent(stt);
		 			 		 		}

		 			 		 		stt->setRoom(roomvec[j]);
		 			 		 		roomvec[j]->setStudent(stt);
		 		   	   	   }

		 		 }

		 		 catch(exception& exp2 ){


		 		 cout<<exp2.what()<<endl;
		 		 }



}

void ZoomSys::addRoom(){

	Room *nst  = new StandardRoom();
	this->roomvec.push_back(nst);

	cout<<"New room created"<<endl;
	int rn=	Room::getnumofrooms();
	//cout<<nst->getRoomid()<<endl;

}







void ZoomSys::splitRoom(){
	int roomid;
	int type;
	cout<<"---Split Room---"<<endl;
	cout<<"Room id:"<<endl;
	cin >> roomid;

	vector<Room*> roomv;
	bool flag =false;

	int i;
	int j ;
	for (i =0;i<roomvec.size() ;i++){
		if(roomvec[i]->getRoomid()== roomid){
			j = i;
		flag =true;
			break;
		}
	}
	try{

			 		 if(!flag){

			 			throw except2;
			 		 }


			 		if(roomvec[j]->HaveSplittedBefore()){
			 				throw except3;
			 					 			}

			 		cout<<"1.Character split"<<endl;
					cout<<"2.Size split"<<endl;
					cin >> type;

					if(type!= 1 && type!= 2 ){
					throw except4;
				    }

			 		if (type == 1){


			 			roomv=roomvec[j]->SplitRoombyCharacter( );

			 			}


			 		for (i =0;i<roomv.size() ;i++){

			 				roomvec.push_back(roomv[i]);

			 				}


			 		if (type == 2){


			 				roomv=	roomvec[j]->SplitRoombySize();




			 			for (i =0;i<roomv.size() ;i++){

			 						roomvec.push_back(roomv[i]);

			 						}

			 		}


			 		 }

			 		 catch(exception& exp ){


			 		 cout<<exp.what()<<endl;
			 		 }




}

void ZoomSys:: removeRoom(){
	int room;
	cout<<"---Remove Room---"<<endl;
	cout<< "Enter room id:"<<endl;
	cin >> room;
	int k =0;
	int i = 0 ;
	bool flag =false;
	for (i =0;i<roomvec.size() ;i++){
		if(roomvec[i]->getRoomid()== room){
				//j = i;
			k=i;
			flag =true;
				break;
			}
		}


	 try{
			 		 		 if(!flag){
			 		 		 throw except2;
			 		 		 }

			 		 		roomvec[k]->removeRoom(roomvec[k]);
			 		 		vector<Room*> roomm ;
			 		 		roomm = Room::gettoRemoveRoom();
			 		 		int j=0;
			 		 						//std :: vector <int>::iterator pend;
							for (i =0;i<roomm.size() ;i++){
								//roomvec.erase(
								//pend =
									//	std::remove(roomvec.begin(), roomvec.end(), roomm[i]);//, roomvec.end() );
								for (j =0;j<roomvec.size() ;j++){

									if(roomm[i]->getRoomid() == roomvec[j]->getRoomid()){

										delete(roomvec[j]);
										roomvec.erase(roomvec.begin()+j );
										//cout<<"hihere"<<endl;
								//roomvec.erase(std::remove(roomvec.begin(), roomvec.end(), roomm[i]), roomvec.end());
										break;
								//v.erase( remove (v.begin(), v.end(), special_value), v.end() );
									}
							}
		//}

							}
			 		 		Room::clearvec();

			 		 		 }

			 		 		 catch(exception& exp2 ){


			 		 		 cout<<exp2.what()<<endl;
			 		 		 }



}



void ZoomSys:: work(){

	int room;
	cout<<"Enter the room you want to work:"<<endl;
	cin >> room;

	int i;
	int j=0;
	int k=0;
	bool flag =false;

	 for (i =0;i<roomvec.size() ;i++){

		 if(roomvec[i]->getRoomid()== room){
//			 stt->setRoom(roomvec[i]);
//			 roomvec[i]->setStudent(stt);
			 flag= true;
			 k=i;
			//stt->setNoRoom(false);
			break;
		}
		}
	 try{

		 		 if(flag==false){

		 			throw except2;
		 		 }

		 		for (j =0;j<roomvec[k]->getStudents().size() ;j++){
					 roomvec[k]->getStudents()[j]->Declaretion();

		 					//	cout<<"hello"<<endl;
		 						}


		 		 }

		 		 catch(exception& exp2 ){


		 		 cout<<exp2.what()<<endl;
		 		 }


}


void ZoomSys:: sendMessage(){


	int id;
	string msg;
	cout<<"Enter the id:"<<endl;
	cin >> id;


	//Student *stt;
	bool flag =false;
	int i =0 ;
	int j= 0;
	for (i =0;i< studentve.size();i++){
		 if(studentve[i]->getId() == id){
			 flag =true;
			 j=i;
		 }
		 }

	 try{

		 		 if(flag==false){

		 			throw except2;
		 		 }

		 					//	cout<<"hello"<<endl;

//	for (i =0;i< studentve.size();i++){
//	 if(studentve[i]->getId() == id){
//
        //  try{

		 cout<<"Enter the message:"<<endl;
		 string fullmsg;
		 //cin.ignore();
		 cin >> msg;
		 getline (cin, fullmsg);
		 fullmsg=msg+fullmsg;
		 // getline (cin, fullmsg);

		  //getline(msg,fullmsg);
	  	// cin >> msg;
	  	// try{
		 if(!studentve[j]->sendMessages(fullmsg)){
	  		//studentve[j]->sendMessages(msg);
			throw except1 ;
	 }

        //  }
		// studentve[j]->sendMessages(msg);
//          catch(exception& exp ){
//
//
//          		 cout<<exp.what()<<endl;
//          		 }



}
		 catch(exception& exp ){


		 cout<<exp.what()<<endl;
		 }


}



	void ZoomSys:: printRooms(){
		int i;
		int j=0;

		//cout<<roomvec.size() <<endl;
		//cout<<roomvec[0]->getStudents().size()<<endl;
	//	room id:0, students:10
		for (i =0;i<roomvec.size() ;i++){

			cout<< "room id:"<<roomvec[i]->getRoomid() <<", students:"<<roomvec[i]->getStudents().size() <<endl;


	}


	}


	void ZoomSys::printStudents(){




		cout<<"First name, Last Name, ID, Avg, Room ID"<<endl;
		int i =0;
		for (i =0;i< studentve.size();i++){



			if(studentve[i]->getRoom()!=0){  ///getRoomid() !=- 1 ){
				cout<<studentve[i]->getfirst()<<" "<<studentve[i]->getlast()<<" "<<studentve[i]->getId()<<" "<<studentve[i]->getavg()<<" "<<studentve[i]->getRoom()->getRoomid()<<endl;
			}
			if(studentve[i]->getRoom()==0){ //if(studentve[i]->getRoom()) {
				cout<<studentve[i]->getfirst()<<" "<<studentve[i]->getlast()<<" "<<studentve[i]->getId()<<" "<<studentve[i]->getavg()<<" "<<-1<<endl;
							}
			}
		}
				//Eyal Hadad 1 100 -1



	void ZoomSys::printStudentDetails(){

		int id;
		cout<<"Enter student id:"<<endl;
			cin >> id;

			int i =0;
			int j=0;
			int k = 0;
			bool flag =false;
			for (i =0;i< studentve.size();i++){
			if(studentve[i]->getId() == id){
				flag =true;
				k=i;
				break;
			}
			}
			try {

				if(flag == false){
					throw except2;
				}
	        	//dcout<<"First name, Last Name, ID, Avg, Room ID"<<endl;


				if(studentve[k]->getRoom()!=0){  ///getRoomid() !=- 1 ){

					cout<<studentve[k]->getfirst()<<" "<<studentve[k]->getlast()<<" "<<studentve[k]->getId()<<" "<<studentve[k]->getavg()<<" "<<studentve[k]->getRoom()->getRoomid()<<endl;
					cout<<"---Messages---"<<endl;
					for (j =0;j<studentve[k]->getMessages().size();j++){

						cout<<studentve[k]->getSenders()[j]->getfirst()<<" "<<studentve[k]->getSenders()[j]->getlast()<<":"<<studentve[k]->getMessages()[j]<<endl;;

						//Eyal Hadad:yesss
					}
				}
				if(studentve[k]->getRoom()==0){ //if(studentve[i]->getRoom()) {


					cout<<studentve[k]->getfirst()<<" "<<studentve[k]->getlast()<<" "<<studentve[k]->getId()<<" "<<studentve[k]->getavg()<<" "<<-1<<endl;
					cout<<"---Messages---"<<endl;
					for (j =0;j<studentve[k]->getMessages().size();j++){

						cout<<studentve[k]->getSenders()[j]->getfirst()<<" "<<studentve[k]->getSenders()[j]->getlast()<<":"<<studentve[k]->getMessages()[j]<<endl;;



				}
				}
					//Eyal Hadad 1 100 -1

//			}
//			}

			}
			catch(exception& exp1 ){


					 cout<<exp1.what()<<endl;
					 }


	}


	 ZoomSys:: ~ZoomSys(){

			int i = 0;



			for (i =0;i< studentve.size();i++){

							delete(studentve[i]);
							studentve[i]=0;
							//senders.erase(senders.begin()+ j );
						}
			for (i =0;i< roomvec.size();i++){

							delete(roomvec[i]);
							roomvec[i]=0;
							//senders.erase(senders.begin()+ j );
						}

	}

