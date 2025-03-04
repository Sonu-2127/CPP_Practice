#include <iostream>
#include <sstream>
#include <string>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student
{
  private:
  int Age, Standard;
  string First_name, Last_name;
  public:
  void set_age(int passedAge)
  {
      Age = passedAge;
  }
  void set_standard(int passStandard)
  {
      Standard = passStandard;
  }
  void set_first_name(string passFirstName)
  {
      First_name = passFirstName;
  }
  void set_last_name(string passLastName)
  {
      Last_name = passLastName;
  }
  
  //get details
  int get_age()
  {
      return Age;
  }
  int get_standard()
  {
      return Standard;
  }
  string get_first_name()
  {
      return First_name;
  }
  string get_last_name()
  {
      return Last_name;
  }
  string to_string() // Define to_string method to format output
    {
        stringstream ss;
        ss << Age << "," << First_name << "," << Last_name << "," << Standard;
        return ss.str();
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
