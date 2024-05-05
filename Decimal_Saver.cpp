#include <iostream>
#include<string>
#include <cmath>
using namespace std;

void get_number(string number,int array[])
{
    string num, part1, part2;

    num = number;

    part1 = num.substr(0,num.find("."));

    if(num.find(".")!=string::npos)
    {
        part2 = num.substr(num.find(".")+1,num.size());
    }

    string numarr[] = {part1 , part2};

    int f = 0;
    int m = 0;

    cout << end(numarr) << "," << begin(numarr) << "," << end(numarr)-begin(numarr) << endl;

    if (end(numarr)-begin(numarr) == 2)
    {
        f = -(numarr[1].length());
        m = stoi(numarr[0] + numarr[1]);
    }
    else
    {
        m = stoi(numarr[0]);
    }

    array[0] = m;
    array[1] = f;
}

static void sum(int *num1, int *num2)
{
    if (num1[1] > num2[1])
    {
        while (num1[1] != num2[1])
        {
            num1[1]--;
            num1[0] *= 10;
        }
    }
    else if (num1[1] < num2[1])
    {
        while (num1[1] != num2[1])
        {
            num2[1]--;
            num2[0] *= 10;
        }
    }

    num1[0] += num2[0];

    cout<< "sum is: " << num1[0] * pow(10, num1[1]) << endl;
}

int main()
{   
    int num1[2];
    int num2[2];
    string number1, number2;

    cout << "Please enter number 1: " << endl;
    cin >> number1;
    get_number(number1, num1);

    cout << "Please enter number 2: " << endl;
    cin >> number2;
    get_number(number2, num2);

    sum(num1, num2);

    string x;
    cin >> x;
}



