output:  main.o ZoomSys.o Room.o StandardRoom.o LazyRoom.o WorkRoom.o Student.o LazyStudent.o WorkStudent.o ResponsibleStudent.o
	g++ main.o ZoomSys.o Room.o StandardRoom.o LazyRoom.o WorkRoom.o Student.o LazyStudent.o WorkStudent.o ResponsibleStudent.o -o output
	
Room.o: Room.cpp Room.h StandardRoom.h LazyRoom.h WorkRoom.h Student.h
	g++ -c Room.cpp
	
LazyRoom.o: LazyRoom.cpp LazyRoom.h Room.h
	g++ -c LazyRoom.cpp

StandardRoom.o: StandardRoom.cpp StandardRoom.h Room.h
	g++ -c StandardRoom.cpp
	
WorkRoom.o: WorkRoom.cpp WorkRoom.h Room.h
	g++ -c WorkRoom.cpp
	
Student.o: Student.cpp Student.h LazyStudent.h WorkStudent.h ResponsibleStudent.h Room.h
	g++ -c Student.cpp
		
LazyStudent.o: LazyStudent.cpp  LazyStudent.h Student.h
	g++ -c LazyStudent.cpp

WorkStudent.o: WorkStudent.cpp  WorkStudent.h Student.h
	g++ -c WorkStudent.cpp

ResponsibleStudent.o: ResponsibleStudent.cpp  ResponsibleStudent.h Student.h
	g++ -c ResponsibleStudent.cpp

ZoomSys.o: ZoomSys.cpp ZoomSys.h Room.h StandardRoom.h LazyRoom.h WorkRoom.h Student.h LazyStudent.h WorkStudent.h ResponsibleStudent.h exception1.h
	g++ -c ZoomSys.cpp
					
main.o: main.cpp ZoomSys.h
	g++ -c main.cpp
	
clean : 
	rm -f *.o output
