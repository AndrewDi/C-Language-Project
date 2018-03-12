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
                swap(array, j, i);//姣忔i鍚庨潰鐨勫厓绱犳瘮array[i]灏忓氨浜ゆ崲銆?  
        }  
    }  
}  
void BubbleSort2(int array[], int n)  
{  
    for (int i = 0; i < n - 1; i++)  
    {  
        for (int j = n - 1; j >= i;j--)  
        {  
            if (array[j - 1]>array[j])//浠庡悗闈㈠埌i涓厓绱犱袱涓ゆ瘮杈冿紝鎶婂皬鐨勪笉鏂笂椤?  
                swap(array, j, j - 1);  
        }  
    }  
}  
int main()  
{  
    int arr[13];  
    cout << "请输入要排序的元素：" << endl;  
    for (int i = 0; i < 13; i++)  
    {  
        cin >> arr[i];  
    }  
    //cout << "排序前的无序数组元素" << arr[i] << endl;  
    BubbleSort1(arr, 13);  
    cout << "排序前的无序数组元素" << endl;  
    for (int i = 0; i < 13; i++)  
    {  
        cout << arr[i] << endl;  
    }  
    BubbleSort2(arr, 13);  
    cout << "排序后的数组元素" << endl;  
    for (int i = 0; i < 13; i++)  
    {  
        cout << arr[i] << endl;  
    }  
    system("pause");  
    return 0;
}