#include <iostream>

using namespace std;

int main()
{
   int a, b, c;

   cout << "Enter two numbers\n";
   cin >> a >> b;

   c = a + b;
   c2= a - b;
   c3= a / b;
   c4= a * b;
   c5 =(int)a / b;
   int c6 = a % b;
   cout <<"Sum of entered numbers = " << c <<;
   cout <<"difference of entered numbers= " <<c2<<;
   cout <<"The product of the two numbers = " <<c4<<;
   cout <<"the integer based division of the two numbers= " <<c5<<;
   cout <<"The remainder of integer division of the two numbers= " <<c6<<;

   return 0;
}
