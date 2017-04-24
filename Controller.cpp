//
//  Controller.cpp
//  
//
//  Created by Christian Diaz on 4/17/17.
//
//

#include "Controller.h"
#include <iostream>
#include <string>
#include <climits>
#include "stdlib.h"
#include "FL/Fl.H"
#include "FL/Fl_Window.H"
#include "Shop.h"
#include "FL/FL_Group.H"
#include "FL/Fl_Menu_Bar.H"
#include "FL/Fl_Menu_Item.H"
#include "FL/Fl_Button.H"
#include "FL/Fl_Radio_Button.H"
#include "FL/Fl_Text_Display.H"

using namespace std;

Shop Controller::shop{"BOND ROBOT PARTS"};

Controller::Controller()
{
    
}

void Controller::main_menu() {
    cout << endl;
    cout << "========================" << endl
    << shop._name() << endl
    << "========================" << endl;
    cout << MENU_LIST_ORDERS << ") List orders" << endl;
    cout << MENU_CREATE_ORDER << ") Create new order" << endl;
    cout << endl;
    cout << "People" << endl;
    cout << "------" << endl;
    cout << MENU_LIST_PEOPLE << ") List Customers and Sales Associates" << endl;
    cout << MENU_CREATE_CUSTOMER << ") Create new customer" << endl;
    cout << MENU_CREATE_SALES_ASSOCIATE << ") Create new sales associate" << endl;
    cout << endl;
    cout << "Robot Models" << endl;
    cout << "------------" << endl;
    cout << MENU_LIST_ROBOT_MODELS << ") List robot models" << endl;
    cout << MENU_CREATE_ROBOT_MODEL << ") Create new robot model" << endl;
    cout << endl;
    cout << "Robot Parts" << endl;
    cout << "-----------" << endl;
    cout << MENU_LIST_ROBOT_PARTS << ") List robot parts" << endl;
    cout << MENU_CREATE_TORSO << ") Create new torso" << endl;
    cout << MENU_CREATE_ARM << ") Create new arm" << endl;
    cout << MENU_CREATE_HEAD << ") Create new head" << endl;
    cout << MENU_CREATE_LOCOMOTOR << ") Create new locomotor" << endl;
    cout << MENU_CREATE_BATTERY << ") Create new battery" << endl;
    cout << endl;
    cout << "Miscellaneous" << endl;
    cout << "-------------" << endl;
    cout << MENU_SHOW_MENU << ") Menu" << endl;
    cout << MENU_EXIT << ") Exit" << endl;
    cout << endl;
}

string Controller::get_string(string prompt) {
    cout << prompt << " ";
    string s;
    getline(cin, s);
    return s;
}

int Controller::get_int(string prompt) {
    string s = get_string(prompt);
    return atoi(s.c_str());
}

double Controller::get_double(string prompt) {
    string s = get_string(prompt);
    return atof(s.c_str());
}

Customer& Controller::get_customer(string prompt) {
    for (int i=0; i < shop.customer().size(); ++i) {
        cout << i << ") " << shop.customer()[i] << endl;
    }
    cout << endl;
    return shop.customers()[get_int(prompt)];
}

SalesAssociate& Controller::get_sales_associate(string prompt) {
    for (int i=0; i < shop.sales_associate().size(); ++i) {
        cout << i << ") " << shop.sales_associate()[i] << endl;
    }
    cout << endl;
    return shop.sales_associate()[get_int(prompt)];
}


RobotModel& Controller::get_robot_model(string prompt) {
    for (int i=0; i < shop.robot_model().size(); ++i) {
        cout << i << ") " << shop.robot_model()[i] << endl;
    }
    cout << endl;
    return shop.robot_model()[get_int(prompt)];
}

Torso& Controller::get_torso(string prompt)
{
    for (int i=0; i < shop.torso().size(); ++i)
    {
        cout << i << ") " << shop.torso()[i] << endl;
    }
    cout << endl;
    return shop.torso()[get_int(prompt)];
}

Arm& Controller::get_arm(string prompt) {
    for (int i=0; i < shop.arms().size(); ++i) {
        cout << i << ") " << shop.arms()[i] << endl;
    }
    cout << endl;
    return shop.arms()[get_int(prompt)];
}

Head& Controller::get_head(string prompt) {
    for (int i=0; i < shop.head().size(); ++i) {
        cout << i << ") " << shop.head()[i] << endl;
    }
    cout << endl;
    return shop.heads()[get_int(prompt)];
}

Locomotor& Controller::get_locomotor(string prompt) {
    for (int i=0; i < shop.locomotor().size(); ++i) {
        cout << i << ") " << shop.locomotor()[i] << endl;
    }
    cout << endl;
    return shop.locomotor()[get_int(prompt)];
}

Battery& Controller::get_battery(string prompt) {
    for (int i=0; i < shop.battery().size(); ++i) {
        cout << i << ") " << shop.battery()[i] << endl;
    }
    cout << endl;
    return shop.battery()[get_int(prompt)];
}

void Controller::cli() {
    int cmd = 0;
    main_menu();
    while (cmd != MENU_EXIT) {
        cmd = get_int("Command (" + to_string(MENU_SHOW_MENU) + " for menu, " + to_string(MENU_EXIT) + " to exit)? ");
        execute_cmd(cmd);
    }
}
int Controller::gui()
{
    
    
    Fl_Window *window = new Fl_Window(300,180, "BOND ROBOT SHOP");
    Fl_Menu_Bar *menubar = new Fl_Menu_Bar(0,0,640,30);
    
    
    
    menubar->add("File/Quit", FL_CTRL+'q', quit_CB);
    menubar->add("Create/Order");
    menubar->add("Create/Customer");
    menubar->add("Create/Sales Associate");
    menubar->add("Create/Robot Model");
    menubar->add("Create/Robot Part", FL_CTRL+'c', show_robot_part_type_CB);
    menubar->add("View/Orders");
    menubar->add("View/People");
    menubar->add("View/Robot Model");
    menubar->add("View/Robot Part");
    menubar->add("Help/Manual");
    
    window->end();
    window->show();
    return Fl::run();
}

void Controller::quit_CB(Fl_Widget *w, void *p)
{
    exit(0);
}




void Controller::show_robot_part_type_CB(Fl_Widget *w, void *p) {
    Fl_Window *robot_part_type_create = new Fl_Window(340, 430, "New Robot Part");
    
    Fl_Input *rp_part_type = new Fl_Input(120, 90, 210, 25, "Part Type:");
    rp_part_type->align(FL_ALIGN_LEFT);
    
    Fl_Button *rp_create_button = new Fl_Return_Button(145, 400, 120, 25, "Select");
    rp_create_button->callback((Fl_Callback *) create_robot_part_CB, 0);
    
    Fl_Button *rp_cancel_button = new Fl_Button(270, 400, 60, 25, "Cancel");
    rp_cancel_button->callback((Fl_Callback *)cancel_robot_part_CB, 0);
    
    
    robot_part_type_create->end();
    robot_part_type_create->set_non_modal();
    robot_part_type_create->show();
    
}

void Controller::create_final_robot_part_CB(Fl_Widget *w, void *p) {
    w->parent()->hide();
    Fl_Input* robotPartName = (Fl_Input*) w->parent()->child(0);
    Fl_Input* robotPartNumber = (Fl_Input*) w->parent()->child(1);
    Fl_Input* robotPartWeight = (Fl_Input*) w->parent()->child(2);
    Fl_Input* robotPartCost = (Fl_Input*) w->parent()->child(3);
    Fl_Input* robotPartDescription = (Fl_Input*) w->parent()->child(4);
    
    
    //prints out user input
    cout << robotPartName->value() << endl;
    cout << robotPartNumber->value() << endl;
    cout << robotPartWeight->value() << endl;
    cout << robotPartCost->value() << endl;
    cout << robotPartDescription->value() << endl;
    
}

void Controller::show_robot_part_form_CB(Fl_Widget *w, void *p) {
    
    Fl_Window *robot_part_create = new Fl_Window(340, 430, "New Robot Part");
    
    Fl_Input *rp_name = new Fl_Input(120, 10, 210, 25, "Name");
    rp_name->align(FL_ALIGN_LEFT);
    
    Fl_Input *rp_part_number = new Fl_Input(120, 50, 210, 25, "Part Number:");
    rp_part_number->align(FL_ALIGN_LEFT);
    
    Fl_Input *rp_weight = new Fl_Input(120, 250, 210, 25, "Weight:");
    rp_weight->align(FL_ALIGN_LEFT);
    
    Fl_Input *rp_cost = new Fl_Input(120, 280, 210, 25, "Cost:");
    rp_cost->align(FL_ALIGN_LEFT);
    
    Fl_Input *rp_description = new Fl_Multiline_Input(120, 310, 210, 75, "Description:");
    rp_description->align(FL_ALIGN_LEFT);
    
    Fl_Button *rp_create_button = new Fl_Return_Button(145, 400, 120, 25, "Create");
    rp_create_button->callback((Fl_Callback *)create_final_robot_part_CB, 0);
    
    Fl_Button *rp_cancel_button = new Fl_Button(270, 400, 60, 25, "Cancel");
    rp_cancel_button->callback((Fl_Callback *)cancel_robot_part_CB, 0);
    
    
    robot_part_create->end();
    robot_part_create->set_non_modal();
    robot_part_create->show();
}
void Controller::create_robot_part_CB(Fl_Widget *w, void *p) {
    
    Fl_Input* robotPartType = (Fl_Input*) w->parent()->child(0);
    cout << robotPartType->value() << "hello" << endl;
    string robotType = robotPartType->value();
    
    if(robotType.compare("head") == 0 || robotType.compare("HEAD") == 0)
    {
        robotPartType->callback((Fl_Callback *) show_robot_part_form_CB, 0);
    }
}

void Controller::cancel_robot_part_CB(Fl_Widget *w, void *p) {
    w->parent()->hide();
}
