#include <iostream>  
using namespace std;  
void swap(int array[], int i, int j)  
{  
    int temp = array[i];  
    array[i] = array[j];  
    array[j] = temp;  
}  
void BubbleSort1(int array[], int n)  
{  
    for (int i = 0; i < n-1; i++)  
    {  
        for (int j = i + 1; j < n-1; j++)  
        {  
            if (array[i]>array[j])  
                swap(array, j, i);//每次i后面的元素比array[i]小就交换�?  
        }  
    }  
}  
void BubbleSort2(int array[], int n)  
{  
    for (int i = 0; i < n - 1; i++)  
    {  
        for (int j = n - 1; j >= i;j--)  
        {  
            if (array[j - 1]>array[j])//从后面到i个元素两两比较，把小的不断上�?  
                swap(array, j, j - 1);  
        }  
    }  
}  
int main()  
{  
    int arr[13];  
    cout << "������Ҫ�����Ԫ�أ�" << endl;  
    for (int i = 0; i < 13; i++)  
    {  
        cin >> arr[i];  
    }  
    //cout << "����ǰ����������Ԫ��" << arr[i] << endl;  
    BubbleSort1(arr, 13);  
    cout << "����ǰ����������Ԫ��" << endl;  
    for (int i = 0; i < 13; i++)  
    {  
        cout << arr[i] << endl;  
    }  
    BubbleSort2(arr, 13);  
    cout << "����������Ԫ��" << endl;  
    for (int i = 0; i < 13; i++)  
    {  
        cout << arr[i] << endl;  
    }  
    system("pause");  
    return 0;
}