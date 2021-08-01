#pragma once
#include "Room.h"
class Room ;
#include <string>
using namespace std;
#include <vector>
//vector<string> svec;

class Student
{

protected:
	//char m_name[20];
	string f_name = "";
	string l_name ="";
	int _id;
	double average;
	Room *rm;
	bool noroom;
	vector<string> msgvec;
	vector<Student*> senders;
	//Grade m_grades[10];
	//int m_num;
public:
	//Student():m_num(0) {};

	Student( string _f_name , string _l_name, int id,  double avg );

	virtual void addLazyStudent(Room *r) = 0;
	virtual void addResponsibleStudent(Room *r)= 0;
	virtual void addWorkStudent(Room *r) =0;
    virtual void setRoom(Room *room);
    virtual void setMessage(string msg);

    virtual int getId();
    virtual Room* getRoom();

    virtual string getfirst();
    virtual string getlast();
    virtual double getavg();


    virtual void setSender(Student *st)=0;

    virtual void setNoRoom(bool bl);
    virtual bool ifhasroom();

    virtual void Declaretion()=0;
    virtual bool sendMessages(string msg) ;//=0;
    virtual void Crying()=0;
	virtual ~Student();


	virtual vector<string> getMessages();

	virtual  vector<Student*> getSenders();


	/*
	bool AddGrade(const Grade& g);

	double GetAverage()const;
	virtual double GetFinal()const=0; //pure virtual
	*/
	// {return GetAverage(); };
};

