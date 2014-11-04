#ifndef INCLUDE_EMPLOYEE
#define INCLUDE_EMPLOYEE

#include<string>
using namespace std;
class Employee
{
public:
    Employee(string id, string name, string address, string contact_number);
    ~Employee();
    bool add_details(string id, string name, string address, string contact_number);
    bool delete_details(string id);
    bool modify_details(string id, string name, string address, string contact_number);
private:
    string id;
    string name;
    string address;
    string contact_number;
};

#endif
