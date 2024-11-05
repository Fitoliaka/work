#include <iostream>

struct person{
   int year;
   char name[30];
};
  
int main(int, char**){
   person he;
   he.year = 2024;
   strcpy(he.name,"Arseniy");
   std::cout << "hello, " << he.name << "! now  " << he.year << " years\n";
   return 0;
}
