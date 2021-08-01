#pragma once

#include "Student.h"
class Student;
#include <string>
using namespace std;
#include <vector>

//vector<string> svec;

class Room
{

protected:
	//char m_name[20];
	static int numroom;
	int _roomid;
	//Student st;
	Room* Dad;
	Room* left;
	Room* right;
	vector<Student*> svec;
	bool ifsplitted;
	static vector<Room*> rmstac;

public:
	//Student():m_num(0) {};


Room();

virtual void addLazyStudent(vector<Student*> studentsvec)=0;
virtual void addStandartStudent(vector<Student*> studentsvec)=0;
virtual void addWorkStudent(vector<Student*> studentsvec)=0;
virtual void setDad(Room *rom);


virtual vector<Room*> SplitRoombyCharacter()=0;
virtual vector<Room*> SplitRoombySize()=0;
virtual void removeRoom(Room *rom); //= 0;
static int getnumofrooms();
virtual vector<Student*> getStudents();

virtual int getRoomid();

//virtual void addSingleLazyStudent(Student *st )=0;
//virtual void addSingleWorkStudent(Student *st )=0;
//virtual void addSingleStandartStudent(Student *st )=0;
virtual void setStudent(Student *st);

virtual Room* getDad();

virtual void RemoveStudent(Student *st);

static  vector<Room*> gettoRemoveRoom(){ return rmstac; }
static  void clearvec(){ rmstac.clear(); }
//	 virtual void setRoom(int _room);
//	 virtual void setMessage(string msg);

virtual void RemoveSon(Room *rm)throw();
virtual bool HaveSplittedBefore();
virtual ~Room();
	/*
	bool AddGrade(const Grade& g);

	double GetAverage()const;
	virtual double GetFinal()const=0; //pure virtual
	*/
	// {return GetAverage(); };
};

