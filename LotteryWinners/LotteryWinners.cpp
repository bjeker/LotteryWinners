// Title here

#include <iostream>
#include <vector>

using namespace std;

void checkNums(int (& nums)[], vector<int> winNums);

int main()
{
    //lottery nums used
    int lotNums[] = { 13579, 26791, 26792, 33445, 55555 };
    //winning nums
    vector<int> winNums(5);
    int size = 5;
    int num;

    //enter winning nums
    cout << "Enter this week's 5 digit winning lottery numbers: ";
    
    for (int i = 0; i < size; i++)
    {
        cin >> num;
        winNums.push_back(num);
    }

    //check if nums are winners
    checkNums(lotNums, winNums);
}

//checks if nums are winners
void checkNums(int (&nums)[], vector<int> winNums)
{
    for (int num : nums)
    {

    }
}