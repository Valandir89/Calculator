#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <climits>

using namespace std;

void display_menu();
char select_option();
void enter_values(vector<float>& m);
void print_scores(vector<float>m);
void average(vector<float>n);
void smallest_nr(vector<float>y);
void largest_nr(vector<float>x);
void search_for(vector<float>& q);
void clear_data(vector<float>& z);
bool find(vector<float>& t, float j);

int main()
{
    vector<float>nums;
    char choice{};

    while (choice != 'q' && choice != 'Q')
    {
        display_menu();
        choice = select_option();

        switch (choice)
        {
        case 'a': case 'A':
            enter_values(nums);
            break;
        case 'p': case 'P':
            print_scores(nums);
            break;
        case 'm': case 'M':
            average(nums);
            break;
        case 's': case 'S':
            smallest_nr(nums);
            break;
        case 'l': case 'L':
            largest_nr(nums);
            break;
        case 'f': case 'F':
            search_for(nums);
            break;
        case 'c': case 'C':
            clear_data(nums);
            break;
        case 'q': case 'Q':
            cout << "Goodbye";
            exit(0);

        default:cout << "Error: Incorrect choice, please enter a valid option" << endl;
        }
    }
    return 0;
}


void display_menu()
{
    cout << "A - Add a number" << endl;
    cout << "P - Print numbers" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "F - Find a number" << endl;
    cout << "C - Clear the vector's container" << endl;
    cout << "Q - Quit" << endl;
    cout << "\nEnter your choice: ";
}

char select_option()
{
    char selection;
    cin >> selection;
    return selection;
}
void enter_values(vector<float>& nums)
{
    cout << "Enter the value: ";
    float score_to_add{};
    cin >> score_to_add;
    while (cin.fail())
    {
        cin.clear(); //clear input buffer to restore cin to a useable state
        cin.ignore(INT_MAX, '\n'); //ignore the last input
        cout << "You can only enter numbers!" << endl;
        cout << "Provide a valid data: ";
        cin >> score_to_add;
    }
    nums.push_back(score_to_add);
    cout << score_to_add << " added!" << endl;
}

void print_scores(vector<float>nums)
{
    if (nums.empty())
        cout << "No data in the container." << endl;
    else
    {
        cout << "[ ";
        for (auto x : nums)
            cout << x << " ";
        cout << "]" << endl;
    }
}

void average(vector<float>nums)
{
    if (nums.size() != 0)
    {
        int total{};
        for (auto x : nums) {
            total = total + x;
        }
        float ave = total / nums.size();
        cout << "The average of all variables in the container is: " << static_cast<float>(ave) << endl;
    }
    else cout << "[...] Unable to calculate the average. No data in the container." << endl;

}

void smallest_nr(vector<float>nums)
{
    if (nums.size() != 0)
    {
        float smallest = *min_element(nums.begin(), nums.end());
        cout << "\nThe smallest element in vector is: " << smallest << endl;
    }
    else cout << "Unable to present the smallest variable - no elements in the container." << endl;

}

void largest_nr(vector<float>nums)
{
    if (nums.size() != 0)
    {
        float largest = *max_element(nums.begin(), nums.end());
        cout << "\nThe largest element in vector is: " << largest << endl;
    }
    else cout << "Unable to present the largest variable - no elements in the container." << endl;
}

void search_for(vector<float>& nums)
{
    cout << "Enter the number to be found: ";
    float number;
    cin >> number;
    if (find(nums, number))
    {
        cout << number << " was found" << endl;
    }

    else if (nums.size() == 0)
    {
        cout << "There are no elements in the vector at all." << endl;
    }
    else
    {
        cout << number << " was not found" << endl;
    }
}
void clear_data(vector<float>& nums)
{
    nums.clear();
    cout << "All data has been erased." << endl;
}

bool find(vector<float>& nums, float number)
{
    for (auto num : nums)
        if (num == number)
            return true;
    return false;
}
