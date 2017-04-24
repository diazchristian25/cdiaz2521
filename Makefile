#Makefile for Robbie Robot

CXXFLAGS = -std=c++11

all: executable
rebuild: clean all

debug: CXXFLAGS += -g
debug: executable

executable: main.o RobotPart.o Head.o Arm.o Locomotor.o Battery.o Torso.o RobotModel.o Customer.o SalesAssociate.o Order.o Shop.o Controller.o
	$(CXX) $(CXXOPTS) `fltk-config --cxxflags` -o 'rrs' 'main.o' ‘RobotPart.o' ‘Head.o' ‘Arm.o' ‘Locomotor.o' ‘Battery.o' ‘Torso.o' ‘RobotModel.o' ‘Customer.o' ‘SalesAssociate.o’ ‘Order.o' ‘Shop.o' ‘Controller.o' 
	
main.o: main.cpp RobotPart.h RobotModel.h Customer.h SalesAssociate.h Order.h Shop.h Controller.h
	$(CXX) -c `fltk-config --cxxflags` $(CXXOPTS) main.cpp

RobotPart.o: RobotPart.cpp
	$(CXX) -c $(CXXOPTS) RobotPart.cpp

Head.o: Head.cpp Head.h RobotPart.h
	$(CXX) -c $(CXXOPTS) Head.cpp

Arm.o: Arm.cpp Arm.h RobotPart.h
	$(CXX) -c $(CXXOPTS) Arm.cpp

Locomotor.o: Locomotor.cpp Locomotor.h RobotPart.h
	$(CXX) -c $(CXXOPTS) Locomotor.cpp

Battery.o: Battery.cpp Battery.h RobotPart.h
	$(CXX) -c $(CXXOPTS) Battery.cpp

Torso.o: Torso.cpp Torso.h RobotPart.h
	$(CXX) -c $(CXXOPTS) Torso.cpp

RobotModel.o: RobotModel.cpp RobotPart.h Head.h Arm.h Torso.h Locomotor.h Battery.h
	$(CXX) -c $(CXXOPTS) RobotModel.cpp

Customer.o: Customer.cpp RobotPart.h Head.h Arm.h Torso.h Locomotor.h Battery.h
	$(CXX) -c $(CXXOPTS) Customer.cpp

SalesAssociate.o: SalesAssociate.cpp RobotPart.h Head.h Arm.h Torso.h Locomotor.h Battery.h
	$(CXX) -c $(CXXOPTS) SalesAssociate.cpp

Order.o: Order.cpp RobotModel.h Customer.h SalesAssociate.h
	$(CXX) -c $(CXXOPTS) Order.cpp

Shop.o: Shop.cpp Shop.h Arm.h Battery.h Head.h Locomotor.h Torso.h RobotModel.h Customer.h SalesAssociate.h Order.h
	$(CXX) -c $(CXXOPTS) Shop.cpp

Controller.o: Controller.cpp Controller.h Shop.h Arm.h Battery.h Head.h Locomotor.h Torso.h RobotModel.h Customer.h SalesAssociate.h Order.h
	$(CXX) -c $(CXXOPTS) `fltk-config --cxxflags` controller.cpp

clean:
	-rm -f *.o


