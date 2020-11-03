#include <iostream>
#include "Human.h"
using namespace std;

Human::Human() {
    set_age(0);
}

//Human::Human(string name, string surname, string patronymic,string gender, int new_age) {
//    this->name = name;
//    this->surname = surname;
//    this->patronymic = patronymic;
//    this->gender = gender;
//    this->age = new_age;
//}

void Human::set_info(string surname, string name, string patronymic, string gender, int age) {
    set_surname(surname);
    set_name(name);
    set_patronymic(patronymic);
    set_gender(gender);
    set_age(age);
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

Student::Student() {
    is_expeled=false;
    skipped_classes=0;
}

void Student::increment_skipped_classes() {
    if (check_is_expeled()) return;
    skipped_classes++;
}

void Student::increment_skipped_classes(int skipped_classes) {
    if (skipped_classes<this->skipped_classes) return;
    this->skipped_classes=skipped_classes;
}

int Student::get_skipped_classes() {
    return skipped_classes;
}


Student::Student(int group, string speciality, int education_years) {
    set_group(group);
    set_speciality(speciality);
    set_education_years(education_years);
    is_expeled=false;
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

void Student::set_education_years(int education_years) {
    if (check_is_expeled()) return;
    this->years_of_education = education_years;
}

void Student::set_group(int new_group) {
    if (check_is_expeled()) return;
        this->group = new_group;
}


void Student::set_speciality(string speciality) {
    if (check_is_expeled()) return;
        this->speciality = speciality;
}

void Student::expel_student(){
        is_expeled=true;
}

void Student::restore_student(){
        this->is_expeled=false;
}

void Student::increase_course() {
    if (check_is_expeled()) return;
    if (years_of_education != 0 && course < years_of_education) course++;
}

bool Student::check_is_expeled() {
    return is_expeled;
}

void Student::transfer_student(int new_group, string speciality) {
    if (check_is_expeled()) return;
    set_group(new_group);
    set_speciality(speciality);
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

