//class Room;
#include "Student.h"
#include <string>
using namespace std;
#include <vector>
//#include "Room.h"
class LazyStudent :
	public Student
{
protected:
//	int m_project;

public:
	//LazyStudent();

	LazyStudent(string _f_name , string _l_name, int id,  double avg) ;



	virtual void addLazyStudent(Room *r);
	virtual void addResponsibleStudent(Room *r);
	virtual void addWorkStudent(Room *r);

//	virtual int getId();

	// void setRoom(Room *room);

	 //void setMessage(string msg);

	//Student(_f_name , _l_name,  id,   avg); //{	m_project = project;};
	// virtual bool sendMessages(string msg);
	 virtual void Declaretion();
	 virtual void Crying();
	 virtual  void setSender(Student *st);
	 virtual ~LazyStudent();
	//virtual double GetFinal()const;
};

