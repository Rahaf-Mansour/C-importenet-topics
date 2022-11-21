//Listing 412.c++ - Using void in function declarations.
#include <iostream>

using namespace std;

 
  void GetDateTime(void);

  int main()
  {
     cout<<"Before the GetDateTime() function is called.\n";
    GetDateTime();
    cout<<"After the GetDateTime() function is called.\n";
    return 0;
 }
 /* GetDateTime() definition */
 void GetDateTime(void)
 {
    time_t now;

    cout<<"Within GetDateTime().\n";
    time(&now);
    cout<<"Current date and time is: "<<
       asctime(localtime(&now))<<endl;
 }
