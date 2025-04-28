#include<iostream>
#include<vector>
using namespace std;
// print array
void printArray(vector<int> & numbers, int n)

{ 
    if(
    numbers.size()==0
    )
    {
        cout << "there is no element on this array :";
        return;
    }
    for(int i=0;i<n;i++)
    {
        cout << numbers[i] << " ";
    }
}
// input array
void inputArray(vector<int> & numbers, int n)

{
    for(int i=0;i<n;i++)
    {
    cout << "enter the element __" << (i+1) << ":";

        cin >> numbers[i];
    }
}
// filtered array by even and odd function
pair<vector<int>,vector<int>> filteredByEvenOdd(vector<int> & numbers,int n)
{ 
    vector<int> evenNumbers;
    vector<int> oddNumbers;
    for(int number: numbers)
    {
        if(number % 2==0)
        { 
            

            evenNumbers.push_back(number);
        }
else{
    oddNumbers.push_back(number);

}
    }
    return {evenNumbers,oddNumbers};
}

int main()
{
    vector <int> numbers;
int n;
cout << "enter the number of elements: ";
cin >> n;
numbers.resize(n);
inputArray(numbers,n);
cout << "elements of this array is :" ;

printArray(numbers,n);
// filtered array based on even and odd number
pair<vector<int>,vector<int>> result=filteredByEvenOdd(numbers,n);
if(result.first.size()==0)
{
    cout << endl << "there is no even element on this array";
}
else{
    cout << endl << "even number array is __:";
printArray(result.first,result.first.size());
}
if(result.second.size()==0)
{
    cout <<endl << "there is no odd element on this array";
}
else{
    cout <<endl << "odd number array is __:";
printArray(result.second,result.second.size());
}


}