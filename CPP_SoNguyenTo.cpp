// CPP_SoNguyenTo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
bool checkSNT(int so);
int main() 
{


        for (int i = 1; i <= 100; i++)
        {
            if (checkSNT(i)) cout << i << " ";
        }
    }

    bool checkSNT(int so  ) {
        int dem = 0;
        for (int i = 1; i <= so; i++)
        {
            if (so % i == 0) dem++;
        }
        if (dem == 2) return true;
        return false;

    }


    