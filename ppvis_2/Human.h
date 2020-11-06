#ifndef PPVIS_2_HUMAN_H
#define PPVIS_2_HUMAN_H

using namespace std;

class Human {
private:
    string name;
    string surname;
    string patronymic;
    string gender;
    int age;

protected:
    Human();


public:
    void set_info(string name, string surname, string patronymic,string gender, int age);
    string get_full_name();
    int get_age();


    void set_name(string name);
    void set_surname(string surname);
    void set_patronymic(string patronymic);
    void set_age(int age);
    void set_gender(string gender);
};

class Student : public Human {
private:
    bool is_expeled;
    int group;
    int course;
    int years_of_education;
    int skipped_classes;
    std::string speciality;

    virtual void payment();
    bool check_is_expeled();
    void set_speciality(string speciality);

public:
    Student();
    Student(int group, string speciality, int education_years);
    int get_course();
    int get_group();
    int get_skipped_classes();

    string get_speciality();

    void set_education_years(int max_course);
    void set_group(int group);
    void transfer_student(int group, string speciality);

    void increment_skipped_classes();
    void increment_skipped_classes(int skipped_classes);
    void expel_student();
    void restore_student();
    void increase_course();

};

class budget_student:public Student{
private:
    double scholarship;

public:
    budget_student();
    budget_student(double scholarship);
    void set_scolarship(double scholarsip);
    double get_scolarship();

    void payment() override;

};

class student_paysite: public Student{
private:
    double month_payment;

public:
    student_paysite();
    student_paysite(double month_payment);
    void set_month_payment(double month_paysite);
    double get_month_payment();

};

class Rector :public Human
{

};

class Dean : public Human
{
private:
    string faculty;

public:
    void set_faculty(string faculty);
    string get_faculty();
    
};

class Department_head : public Dean
{
private:
    string department;

public:
    void set_department(string department);
    string get_department();
};

#endif //PPVIS_2_HUMAN_H
