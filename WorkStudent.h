
#include "Student.h"
//#include "Room.h"


class WorkStudent :
	public Student
{
protected:
//	int m_project;

public:
	//LazyStudent();
	WorkStudent(string _f_name , string _l_name, int id,  double avg) ;

	virtual void addLazyStudent(Room *r) ;
	virtual void addResponsibleStudent(Room *r);
	virtual void addWorkStudent(Room *r);
   // void setRoom(Room *room);
  //  void setMessage(string msg);
	//Student(_f_name , _l_name,  id,   avg) ;//{	m_project = project;};

    //virtual bool sendMessages(string msg);
	virtual void Declaretion();//Room rm);
	virtual void Crying();

	virtual void setSender(Student *st);
//	virtual int getId();

	virtual ~WorkStudent();

	//virtual double GetFinal()const;
};

