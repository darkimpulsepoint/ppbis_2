#include <iostream>
#include "Human.h"
using namespace std;

Human::Human() {
    set_age(0);
}

Human::Human(string name, string surname, string patronymic,string gender, int new_age) {
    this->name = name;
    this->surname = surname;
    this->patronymic = patronymic;
    this->gender = gender;
    this->age = new_age;
}

void Human::set_info(string name, string surname, string patronymic, string gender, int new_age) {
    this->name = name;
    this->surname = surname;
    this->patronymic = patronymic;
    this->gender = gender;
    this->age = new_age;
}

string Human::get_full_name() {
    string full_name= surname + " "+ name + " " + patronymic;
    return full_name;
}

int Human::get_age() {
        return age;
    }

void Human::set_name(string hum_name) {
        this->name = hum_name;
    }

void Human::set_surname(string surname) {
        this->surname = surname;
    }

void Human::set_patronymic(string patronymic) {
        this->patronymic = patronymic;
    }

void Human::set_age(int new_age) {
    if (new_age < 0) this->age = 0;
    else this->age = new_age;
}

void Human::set_gender(string gender) {
    if (!(gender=="male"||gender == "female")) this->gender="male";
            else this->gender=gender;
}

int Student::get_group() {
    return group;
}

int Student::get_course() {
    return group;
}

string Student::get_speciality() {
        return speciality;
}

void Student::set_max_course(int max_cours) {
    if (this->is_expeled) return;
    this->max_course = max_cours;
}

void Student::set_group(int new_group) {
    if (this->is_expeled) return;
        this->group = new_group;
}


void Student::set_speciality(string speciality) {
    if (this->is_expeled) return;
        this->speciality = speciality;
}

void Student::expel_student(){
        is_expeled=true;
}

void Student::restore_student(){
        this->is_expeled=false;
}

void Student::increase_course() {
    if (this->is_expeled) return;
    if (max_course != 0 && course < max_course) course++;
}

bool Student::check_is_expeled() {
    return is_expeled;
}
void Dean::set_faculty(string faculty){

    this->faculty=faculty;
}

string Dean::get_faculty(){
    return faculty;
}

void Department_head::set_department(string department){
    this->department=department;
}

string Department_head::get_department(){
    return department;
}

