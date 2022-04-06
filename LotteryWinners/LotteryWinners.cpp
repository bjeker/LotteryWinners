// Ryan Bieker, CS 3060 001, Chapter 8 Programming Challenges, due 4/5/2022, 
//checks if predefined lottery numbers are winners for the current week

#include <iostream>
#include <vector>

using namespace std;

void checkNums(int nums[], vector<int> winNums);

int main()
{
    //winning nums
    vector<int> winNums(5);
    const int size = 5;
    int num;
    //lottery nums used
    int lotNums[size] = { 13579, 26791, 26792, 33445, 55555 };

    //enter winning nums
    cout << "Enter this week's 5-digit winning lottery number:";
    
    //add to winning nums vector
    for (int i = 0; i < size; i++)
    {
        cin >> num;
        winNums.push_back(num);
    }

    //check if nums are winners
    checkNums(lotNums, winNums);
}

//checks if nums are winners
void checkNums(int nums[], vector<int> winNums)
{
    bool win = false;

    //linear search predefined nums and winning nums
    for (int i = 0; i < sizeof(nums); i++)
    {
        for (int j = 0; j < winNums.size(); j++)
        {
            if (i != j && nums[i] == winNums[j])
            {
                win = true;
                break;
            }
        }
    }

    //print if winner or not
    if (win == true)
    {
        cout << "You won this week!" << endl;
    }
    else
    {
        cout << "You did not win this week." << endl;
    }
}