#include <iostream>
using namespace std;

/* This program teaches how to find the max number in a array 
*/

int main()
{
    int i, n,aux;
    //aux is a auxiliar variable used in 
    float arr[100];
    cout << "Enter the max number in your array";
    cin >> n;
    cout << endl;
    
    // Store number entered by the user
    for(i = 0; i < n; ++i)
    {
       cout << "Enter Number " << i + 1 << " : ";
       cin >> arr[i];
    }
    // Loop to store largest number to arr[0]
    for(i = 0, aux = arr[0];i < n; i++)
    {
       // Change < to > if you want to find the smallest element
       if(aux < arr[i])
           aux = arr[i];
    }
    cout << "Max element = " << aux;
    return 0;
}

/*This function teaches how to find the max number in a array 

1) you will need create a array or send a array to this functions
2) use a auxliar variable to run in the array while your verify the sequenci numbers
*/
int find_max_number(int size_array,int * array){
	int aux,i;
	
	for (i = 0;i < size_array;i++)
	{
		 if(aux < arr[i])
           aux = arr[i];
	}
	
	cout << "Max element = " << aux;
	return aux;
}

