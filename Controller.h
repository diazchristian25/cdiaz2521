//
//  Controller.hpp
//  
//
//  Created by Christian Diaz on 4/17/17.
//
//

#ifndef _CONTROLLER_H
#define _CONTROLLER_H_2017

#ifndef Fl_Multiline_Input_H
#define Fl_Multiline_Input_H

#ifndef Fl_Return_Button_H
#define Fl_Return_Button_H

#ifndef Fl_Radio_Button_H
#define Fl_Radio_Button_H

#include "Arm.h"
#include "Head.h"
#include "Locomotor.h"
#include "Battery.h"
#include "Torso.h"
#include "RobotModel.h"
#include "Customer.h"
#include "SalesAssociate.h"
#include "Order.h"
#include "Shop.h"
#include "FL/Fl.H"
#include "FL/Fl_Window.H"
#include "FL/Fl_Input.H"
#include "FL/Fl_Return_Button.H"
#include "Fl/Fl_Button.H

using namespace std;

private:
    static Shop shop;

class FL_EXPORT Fl_Multiline_Input : public Fl_Input
{
    public:
    Fl_Multiline_Input(int X,int Y,int W,int H,const char *l = 0);
};

///return button///
class FL_EXPORT Fl_Return_Button : public Fl_Button
{
    protected:
        void draw();
    public:
        int handle(int);
        Fl_Return_Button(int X, int Y, int W, int H, const char *l=0);
};

///radio button////
class FL_EXPORT Fl_Radio_Button : public Fl_Button
{
    public:
        Fl_Radio_Button(int X,int Y,int W,int H,const char *L=0);
};

class Controller {
    public:
        Controller();
    
        const static int MENU_LIST_ORDERS = 1;
        const static int MENU_CREATE_ORDER = 2;
        const static int MENU_LIST_PEOPLE = 11;
        const static int MENU_CREATE_CUSTOMER = 12;
        const static int MENU_CREATE_SALES_ASSOCIATE = 13;
        const static int MENU_LIST_ROBOT_MODELS = 21;
        const static int MENU_CREATE_ROBOT_MODEL = 22;
        const static int MENU_LIST_ROBOT_PARTS = 31;
        const static int MENU_CREATE_TORSO = 32;
        const static int MENU_CREATE_ARM = 33;
        const static int MENU_CREATE_HEAD = 34;
        const static int MENU_CREATE_LOCOMOTOR = 35;
        const static int MENU_CREATE_BATTERY = 36;
        const static int MENU_SHOW_MENU = 98;
        const static int MENU_EXIT = 99;
    
        void main_menu();
    
        string get_string(string prompt);
        int get_int(string prompt);
        double get_double(string prompt);
    
        Customer& get_customer(string prompt);
        SalesAssociate& get_sales_associate(string prompt);
        RobotModel& get_robot_model(string prompt);
        Torso& get_torso(string prompt);
        Arm& get_arm(string prompt);
        Head& get_head(string prompt);
        Locomotor& get_locomotor(string prompt);
        Battery& get_battery(string prompt);
    
        void cli();
        int gui();
        void execute_cmd(int cmd);
    
    ////////GUI CODE/////////////////
        static void quit_CB(Fl_Widget *w, void *p);
        static void show_robot_part_type_CB(Fl_Widget *w, void *p);
        static void define_robot_part(Fl_Widget *w, void *p);
        static void create_final_robot_part_CB(Fl_Widget *w, void *p);
        static void show_robot_part_form_CB(Fl_Widget *w, void *p);
        static void create_robot_part_CB(Fl_Widget *w, void *p);
        static void cancel_robot_part_CB(Fl_Widget *w, void *p);
        static void buttonHeadPushed(Fl_Widget* w, void* p);
        static void buttonTorsoPushed(Fl_Widget* w, void* p);
    
};

#endif
#endif
#endif
#endif
#endif /* Controller_hpp */
