#include <iostream>
#include "system.h"

using namespace std;

int main()
{
    int test_case = 1;
    cout << "Enter testcase number: " << endl;
    cin >> test_case;

    cout << "Test Case: " << test_case << endl;

    switch (test_case)
    {
    case 1:
    {
        System *system = new System(20, 50);

        system->admit("Adam", 1000, 3.0);

        system->print_info();
        delete system;
    }
    break;

    case 2:
    {
        System *system = new System(20, 50);

        system->add_course("COMP1000", 3, 10);

        system->print_info();
        delete system;
    }
    break;

    case 3:
    {
        System *system = new System(20, 50);

        system->admit("Adam", 1000, 3.8);
        system->admit("Brian", 1001, 4.3);
        system->admit("Cindy", 1002, 4.3);
        system->admit("Desmond", 1003, 4.3);

        system->print_info();
        delete system;
    }
    break;

    case 4:
    {
        System *system = new System(20, 50);

        system->add_course("COMP1000", 3, 10);
        system->add_course("COMP1022P", 3, 50);
        system->add_course("ECON1000", 4, 50);
        system->add_course("MATH1003", 2, 10);
        system->add_course("LANG1002A", 3, 20);

        system->print_info();
        delete system;
    }
    break;

    case 5:
    {
        System *system = new System(20, 50);

        system->admit("Adam", 1000, 3.0);
        bool success = system->apply_overload(1000, 30);
        if (success)
        {
            cout << "Apply Overload Successfully." << endl;
        }
        else
        {
            cout << "Fail to overload." << endl;
        }
        system->print_info();
        delete system;
    }
    break;

    case 6:
    {
        System *system = new System(20, 50);

        system->admit("Adam", 1000, 3.4);
        bool success = system->apply_overload(1000, 21);
        if (success)
        {
            cout << "Apply Overload Successfully." << endl;
        }
        else
        {
            cout << "Fail to overload." << endl;
        }

        system->print_info();
        delete system;
    }
    break;

    case 7:
    {
        System *system = new System(20, 50);

        system->admit("A", 1000, 3.0);
        system->admit("B", 1001, 1.1);
        system->admit("C", 1002, 4.3);
        system->admit("D", 1003, 2.3);
        system->admit("E", 1004, 3.5);
        system->admit("F", 1005, 3.7);

        system->add_course("COMP2012", 4, 2);
        system->add_course("COMP1000", 3, 1);
        system->add_course("COMP1022P", 3, 4);
        system->add_course("ECON1000", 3, 5);
        system->add_course("MATH1003", 2, 1);
        system->add_course("LANG1002A", 3, 2);

        system->add(1000, "COMP2012");
        system->add(1000, "COMP1000");
        system->add(1000, "COMP1022P");
        system->add(1000, "ECON1000");

        system->add(1001, "COMP1022P");
        system->add(1001, "ECON1000");
        system->add(1001, "MATH1003");
        system->add(1001, "LANG1002A");

        system->swap(1001, "MATH1003", "COMP1000");

        system->add(1002, "COMP2012");
        system->add(1002, "LANG1002A");

        system->swap(1002, "COMP2012", "MATH1003");

        system->add(1003, "ECON1000");
        system->add(1003, "LANG1002A");

        system->swap(1003, "ECON1000", "COMP2012");

        system->add(1004, "COMP1022P");
        system->swap(1004, "COMP1022P", "ECON1000");

        system->drop(1000, "COMP1000");

        system->print_info();
        delete system;
    }
    break;

    case 8:
    {
        System *system = new System(20, 50);

        system->admit("Adam", 1000, 3.0);
        system->admit("B", 1001, 1.1);
        system->admit("C", 1002, 4.3);
        system->admit("D", 1003, 2.3);
        system->admit("E", 1004, 3.5);
        system->admit("F", 1005, 3.7);

        system->apply_overload(1001, 23);
        system->apply_overload(1002, 26);
        system->apply_overload(1002, 24);

        system->add_course("COMP2012", 4, 2);
        system->add_course("COMP1000", 3, 1);
        system->add_course("COMP1022P", 3, 5);
        system->add_course("ECON1000", 3, 5);
        system->add_course("MATH1003", 2, 1);
        system->add_course("LANG1002A", 3, 1);

        system->add(1000, "COMP1000");
        system->add(1000, "COMP1022P");
        system->add(1000, "ECON1000");
        system->add(1000, "MATH1003");
        system->add(1000, "LANG1002A");

        system->swap(1000, "COMP1000", "COMP2012");
        system->drop(1000, "COMP2012");

        system->add(1001, "COMP1000");
        system->add(1002, "COMP1022P");
        system->add(1003, "ECON1000");
        system->add(1004, "MATH1003");
        system->add(1005, "LANG1002A");

        system->swap(1005, "LANG1002A", "COMP1022P");
        system->swap(1003, "ECON1000", "COMP1000");
        system->swap(1000, "COMP1000", "LANG1002A");
        system->swap(1005, "LANG1002A", "COMP2012");
        system->swap(1001, "COMP1000", "COMP2012");
        system->swap(1000, "MATH1003", "COMP1000");
        system->swap(1003, "COMP1000", "COMP2012");
        system->swap(1005, "COMP2012", "ECON1000");

        system->add(1002, "COMP1000");
        system->add(1003, "COMP1022P");
        system->add(1004, "ECON1000");
        system->add(1005, "MATH1003");
        system->add(1005, "LANG1002A");

        system->add(1003, "COMP1000");
        system->add(1004, "COMP1022P");
        system->add(1002, "ECON1000");
        system->add(1003, "MATH1003");
        system->add(1002, "LANG1002A");

        system->swap(1000, "COMP1022P", "MATH1003");

        system->print_info();

        delete system;
    }
    break;

    case 9:
    {
        System *system = new System(20, 50);

        system->admit("Adam", 1000, 3.0);
        system->admit("B", 1001, 1.1);
        system->admit("C", 1002, 4.3);
        system->admit("D", 1003, 2.3);

        system->add_course("COMP2012", 4, 2);
        system->add_course("COMP1000", 3, 1);
        system->add_course("COMP1022P", 3, 1);
        system->add_course("ECON1000", 3, 1);

        system->add(1000, "COMP2012");
        system->add(1001, "COMP1000");
        system->add(1002, "COMP1022P");
        system->add(1003, "ECON1000");
        system->add(1001, "COMP2012");

        system->swap(1000, "COMP2012", "COMP1000");
        system->swap(1001, "COMP1000", "COMP1022P");
        system->swap(1002, "COMP1022P", "ECON1000");
        system->swap(1003, "ECON1000", "COMP2012");

        system->drop(1001, "COMP2012");

        system->print_info();
        delete system;
    }
    break;

    case 10:
    {
        System *system = new System(20, 50);

        system->admit("Adam", 1000, 3.8);
        system->add_course("COMP2012", 4, 3);
        system->add_course("COMP2012H", 5, 3);

        system->add(1000, "COMP2012");
        system->print_info();

        system->swap(1000, "COMP2012", "COMP2012H");
        system->print_info();
        delete system;
    }
    break;

    case 11:
    {
        System *system = new System(20, 50);

        system->admit("Adam", 1000, 3.8);
        system->add_course("COMP2012", 4, 3);

        system->add(1000, "COMP2012");
        system->print_info();

        system->drop(1000, "COMP2012");
        system->print_info();
        delete system;
    }
    break;

    case 12:
    {
        System *system = new System(20, 50);

        system->admit("Adam", 1000, 3.8);
        system->admit("Brian", 1001, 4.3);
        system->admit("Cindy", 1002, 4.3);
        system->admit("Desmond", 1003, 4.3);
        system->admit("Harry", 1004, 2.0);
        system->admit("Ron", 1005, 2.0);
        system->admit("Hermione", 1006, 4.3);

        system->add_course("COMP2012", 4, 10);

        system->add(1000, "COMP2012");
        system->add(1001, "COMP2012");
        system->add(1002, "COMP2012");
        system->add(1003, "COMP2012");
        system->add(1004, "COMP2012");
        system->add(1005, "COMP2012");
        system->add(1006, "COMP2012");

        system->drop(1004, "COMP2012");

        system->print_info();
        delete system;
    }
    break;

    case 13:
    {
        System *system = new System(20, 50);

        system->admit("Adam", 1000, 3.8);
        system->admit("Brian", 1001, 4.3);
        system->admit("Cindy", 1002, 4.3);
        system->admit("Desmond", 1003, 4.3);
        system->admit("Harry", 1004, 2.0);
        system->admit("Ron", 1005, 2.0);
        system->admit("Hermione", 1006, 4.3);

        system->add_course("COMP2012", 4, 3); 

        system->add(1000, "COMP2012");
        system->add(1001, "COMP2012");
        system->add(1002, "COMP2012");
        system->add(1003, "COMP2012"); 
        system->add(1004, "COMP2012");
        system->add(1005, "COMP2012");
        system->add(1006, "COMP2012"); 


        system->drop(1001, "COMP2012"); 

        system->print_info();
        delete system;
    }
    break;

    case 14:
    {
        System *system = new System(2, 10);

        system->admit("Adam", 1000, 3.8);
        system->admit("Brian", 1001, 4.3);
        system->admit("Cindy", 1002, 4.3);
        system->admit("Desmond", 1003, 4.3);
        system->admit("Harry", 1004, 2.0);
        system->admit("Ron", 1005, 2.0);
        system->admit("Hermione", 1006, 4.3);

        system->add_course("COMP2012", 4, 3); 

        system->add(1000, "COMP2012");
        system->add(1001, "COMP2012");
        system->add(1002, "COMP2012");
        system->add(1003, "COMP2012"); 
        system->add(1004, "COMP2012");
        system->add(1005, "COMP2012");
        system->add(1006, "COMP2012"); 

        system->drop(1001, "COMP2012"); 

        System *system2 = new System(*system);
        system2->print_info();
        delete system2;
        delete system;
    }
    break;

    case 15: 
    {
        System *system = new System(20, 50);

        system->admit("Adam", 1000, 3.8);

        system->add_course("COMP2012", 4, 3);
        system->add_course("ECON1000", 3, 3);

        system->add(1000, "COMP2012");
        system->swap(1000, "COMP2012", "ECON1000");

        system->print_info();
        delete system;
    }
    break;

    case 16:
    {
        System *system = new System(20, 50);

        system->admit("Harry", 1000, 2.0);
        system->admit("Ron", 1001, 2.0);

        system->add_course("MAGIC1000", 1, 1);
        system->add_course("MAGIC1001", 1, 1);

        system->add(1000, "MAGIC1000");
        system->add(1001, "MAGIC1001");

        system->swap(1000, "MAGIC1000", "MAGIC1001");
        system->swap(1001, "MAGIC1001", "MAGIC1000");

        system->print_info();
        delete system;
    }
    break;

    case 17:
    {
        System *system = new System(20, 50);

        system->admit("Ivan", 1000, 2.0);
        system->admit("Desmond", 1001, 4.3);
        system->admit("Cindy", 1002, 4.3);
        system->admit("Cecia", 1003, 4.3);
        system->admit("Brian", 1004, 4.3);

        system->add_course("COMP1022P", 3, 2);
        system->add_course("MATH1000", 1, 2);

        system->add(1000, "COMP1022P");
        system->add(1001, "COMP1022P");
        system->add(1002, "MATH1000");
        system->add(1004, "MATH1000");
        system->add(1003, "MATH1000");
        system->add(1000, "MATH1000");
        system->print_info();

        system->swap(1002, "MATH1000", "COMP1022P");
        system->drop(1000, "COMP1022P");

        system->print_info();
        delete system;
    }
    break;

    case 18:
    {
        System *system = new System(20, 50);

        system->admit("Adam", 1000, 2.0);
        system->admit("Brian", 1001, 4.3);
        system->admit("Cindy", 1002, 4.3);
        system->admit("Desmond", 1003, 4.3);

        system->add_course("COMP1022P", 4, 2);
        system->add_course("MATH1000", 3, 2);
        system->add_course("ECON1000", 3, 2);
        system->add_course("A_VERY_HARD_COURSE", 10, 2);

        system->add(1000, "COMP1022P");
        system->add(1000, "A_VERY_HARD_COURSE");

        system->add(1001, "MATH1000");
        system->add(1002, "MATH1000");
        system->add(1000, "MATH1000"); 

        system->add(1000, "ECON1000");

        system->print_info();
        delete system;
    }
    break;

    case 19:
    {
        System *system = new System(20, 50);

        system->admit("Adam", 1000, 2.0);
        system->admit("Brian", 1001, 4.3);
        system->admit("Cindy", 1002, 4.3);

        system->add_course("COMP1022P", 3, 2);
        system->add_course("MATH1000", 2, 2);
        system->add_course("A_VERY_HARD_COURSE", 10, 2);
        system->add_course("SOSC1960", 4, 2);
        system->add_course("COMP2012H", 5, 2);

        system->add(1000, "COMP1022P");
        system->add(1000, "A_VERY_HARD_COURSE");
        system->add(1000, "MATH1000");

        system->add(1001, "SOSC1960");
        system->add(1002, "SOSC1960");
        system->swap(1000, "MATH1000", "SOSC1960");

        system->swap(1000, "COMP1022P", "COMP2012H");

        system->print_info();
        delete system;
    }
    break;

    case 20: 
    {
        System *system = new System(20, 50);

        system->admit("Adam", 1000, 2.0);
        system->admit("Brian", 1001, 4.3);
        system->admit("Cindy", 1002, 4.3);

        system->add_course("COMP1022P", 3, 2);
        system->add_course("MATH1000", 2, 2);
        system->add_course("A_VERY_HARD_COURSE", 10, 2);
        system->add_course("SOSC1960", 4, 2);
        system->add_course("COMP2012H", 5, 2);

        system->add(1000, "COMP1022P");
        system->add(1000, "A_VERY_HARD_COURSE");
        system->add(1000, "MATH1000");

        system->add(1001, "SOSC1960");
        system->add(1002, "SOSC1960");
        system->swap(1000, "MATH1000", "SOSC1960");

        system->swap(1000, "COMP1022P", "COMP2012H");

        System *system2 = new System(*system);
        system2->print_info();

        delete system2;
        delete system;
    }
    break;

    default:
        cout << "NO SUCH TESTCASE!!!" << endl;
    }
    return 0;
}