#pragma once
//#include "Student.h"
#include "Room.h"
#include "WorkRoom.h"
#include <string>
using namespace std;
#include <vector>

//vector<string> svec;

class StandardRoom : public Room
{

protected:
	//char m_name[20];
//	static int numroom;
//	int _roomid;
//	vector<Student> svec;
//	Room left;
//	Room right;
//	Room Dad;
//	Room* left;
//	Room* right;
//	Room* Dad;
public:
	//Student():m_num(0) {};


	StandardRoom();


	virtual void addLazyStudent(vector<Student*> studentsvec);
	virtual void addStandartStudent(vector<Student*> studentsvec);
	virtual void addWorkStudent(vector<Student*> studentsvec);
	//virtual void removeStudent();
	//virtual void SplitRoom();

	//virtual void removeRoom();
	virtual vector<Room*> SplitRoombyCharacter() ;
	virtual vector<Room*>  SplitRoombySize();

	//virtual vector<Student*> getStudents();
	//void setDad(Room *rom);

//	virtual void addSingleLazyStudent(Student *st );
//	virtual void addSingleWorkStudent(Student *st );
//	virtual void addSingleStandartStudent(Student *st );

//	virtual int getRoomid();

	//virtual Room* getDad();
//	 virtual void setRoom(int _room);
//	 virtual void setMessage(string msg);

	 ~StandardRoom();
	/*
	bool AddGrade(const Grade& g);

	double GetAverage()const;
	virtual double GetFinal()const=0; //pure virtual
	*/
	// {return GetAverage(); };
};

