#include <iostream>
using namespace std;

int main()
{
     // US Citizen
     //     CA Resident: tuition = 0
     //     Non-resident: tuition = 1000
     // Not a US citizen
     //     tuition = 3000

     bool isCitizen = true;
     bool caResident = true;
     short tuition = 0;
     if (isCitizen) {
         if (!caResident) tuition = 1'000;
     }
     else tuition = 3'000;
}