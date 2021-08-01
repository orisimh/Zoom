/*
 * ZoomSys.h
 *
 *  Created on: Dec 30, 2020
 *      Author: ise
 */

#ifndef ZOOMSYS_H_
#define ZOOMSYS_H_
//#include "exception1.h"


#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#include <vector>
#include "Student.h"
#include "Room.h"
#include "WorkStudent.h"
#include "LazyStudent.h"
#include "WorkRoom.h"
#include "LazyRoom.h"
#include "StandardRoom.h"
#include "ResponsibleStudent.h"

class ZoomSys
{
private:
	string pathfile;
	vector<Student*> studentve;
	vector<Room*> roomvec;

public:

ZoomSys(string pathfile);
void addStudent();
void assignStudent();
void addRoom();
void splitRoom();
void removeStudent();
void removeRoom();
void work();
void sendMessage();
void printRooms();

void printStudents();
void printStudentDetails();

virtual ~ZoomSys();
//void assisttoremove
	//friend ostream& operator<<(ostream& out, const Rational& r);
};


/*
ostream& operator<<(ostream& out, const Rational& r)
{
	out << r.mone << r.mechane;
	return out;
}
*/



#endif /* ZOOMSYS_H_ */
