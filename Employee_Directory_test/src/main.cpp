#include <gtest/gtest.h>
#include "Employee.h"

TEST(addContact, AddingContactSuccess) {
    Employee *employee = new Employee();
    ASSERT_TRUE(employee->add_details());
    delete employee;
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest( &argc, argv );
    return RUN_ALL_TESTS();
}
