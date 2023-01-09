#include <iostream>
#include "Header.h"


template <typename T>
void _swap(T* a_ptr, T* b_ptr) {
    
    T c = *a_ptr;
    *a_ptr = *b_ptr;
    *b_ptr = c;
    
}

void first_task() {

    std::cout << "enter first number " << std::endl;
    int a = 0;
    std::cin >> a;
    std::cout << "enter second number " << std::endl;;
    int b = 0;
    std::cin >> b;
    
    std::cout << a << " " << b << " your order" << std::endl;
    
    int* a_ptr = &a;
    int* b_ptr = &b;

    _swap(a_ptr, b_ptr);
    
    std::cout << a << " " << b << " reversed";

}

void seventh_task() {
    std::cout << std::endl << "enter the length of your array " << std::endl;
    int size = 0;
    std::cin >> size;
    int* array = new int[size]();
    
    std::cout << std::endl << "enter the numbers " << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> array[i];
    }
    
    int k = 0;
    std::cout << "local mins : " << std::endl;
    for (int i = 1; i < size - 1; i++) {
        if (array[i - 1] > array[i] && array[i + 1] > array[i]) {
            std::cout << array[i] << " ";
            k++;
        }
    }
    
    std::cout <<std::endl  << "the number of local mins = " << k;

}

void fifth_task() {

    std::cout << std::endl << "enter the length of your array ";
    int size = 0;
    std::cin >> size;
    int* array = new int[size]();
    for (int i = 0; i < size; i++) {
        std::cin >> array[i];
    }
    //инициализируем массивы
    int* array_under_zero = new int[size]();
    int* array_over_zero = new int[size]();
    int* arrayresult = new int[size]();


    int m = 0;
    int n = 0;
    //копируем положительные и отрицательные элементы в два массива
    for (int i = 0; i < size; i++) {
        if (array[i] < 0) {
            array_under_zero[m] = array[i];
            m++;


        }
        else {
            array_over_zero[n] = array[i];
            n++;
        }

    }

    //объединяем массивы
    for (int i = 0; i < m; i++) {
        arrayresult[i] = array_under_zero[i];
    }
    int j = 0;
    for (int i = m; i < size; i++) {
        arrayresult[i] = array_over_zero[j];
        j++;
    }
    std::cout << "sorted: "<<std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << arrayresult[i] << " ";
    }

    delete[] array_over_zero;
    delete[] array_under_zero;   

}

void ninth_task() {
    int size = 15;
    int* array = new int[size]();
    std::cout << std::endl << "enter 15 numbers " << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> array[i];
    }
    //сортировка ысего массива
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int* p1 = &array[j];
                int* p2 = &array[j + 1];
                _swap(p1, p2);
                
            }
        }
    }
    //сортировка положительных элементов
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] >= 0 && array[j + 1] >= 0 && array[j] < array[j + 1]) {
                int* p1 = &array[j];
                int* p2 = &array[j + 1];
                _swap(p1, p2);
            }
        }
    }
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
}

void eleventh_task() {
    std::cout  << "enter the lines of your array " << std::endl;
    int lines = 0;
    std::cin >> lines;

    std::cout << "enter the columns of your array " << std::endl;
    int columns = 0;
    std::cin >> columns;

    int** array = new int* [lines];
    for (int i = 0; i < lines; i++) {
        array[i] = new int[columns];
        }
    //заполняем массив
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < columns; j++) {
            std::cin >> array[i][j];
           
        }
     }
    std::cout << "your array : " << std::endl;
    for (int i = 0; i < lines; i++)
    {
        std::cout << std::endl;
        for (int j = 0; j < columns; j++) {
            std::cout << array[i][j] << " ";

        }
    }
    
    int t;
    //смещаем
    for (int i = 0; i < lines; ++i) {
        t = array[i][columns - 1];
        for (int j = columns - 1; j > 0; --j)
            array[i][j] = array[i][j - 1];
            array[i][0] = t;
        }
    
    std::cout <<std::endl << "new array : " << std::endl;
    for (int i = 0; i < lines; i++)
    {
        std::cout << std::endl;
        for (int j = 0; j < columns; j++) {
            std::cout << array[i][j] << " ";

        }
    }

}
void thirteenth_task() {
    std::cout << std::endl << "enter the length of the first array ";
    int m = 0;
    std::cin >> m;
    std::cout << std::endl << "enter the length of the second array ";
    int n = 0;
    std::cin >> n;
    
    int* nums1 = new int[n+m]();
    int* nums2 = new int[n];
    
    std::cout << "enter the numbers of the first array " << std::endl;
    for (int i = 0; i < m; i++) {
        std::cin >> nums1[i];
    }

    std::cout << "enter the numbers of the second array " << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> nums2[i];
    }

    for (int i = m; i < m + n; i++) {
        nums1[i] = nums2[i - m];
    }
    for (int i = 0; i < n + m; i++) {
        for (int j = 0; j < n + m - i - 1; j++) {
            if (nums1[j] > nums1[j + 1]) {
                int t = nums1[j];
                nums1[j] = nums1[j + 1];
                nums1[j + 1] = t;
            }
        }
    }
    for (int i = 0; i < n+m; i++) {
        std::cout << nums1[i] << " ";
    }
}







int main() {
    int a;
    std::cout << "Choose the number of task: ";
    std::cin >> a;
    switch (a) {
    case 1: {

        first_task();
        break;
    }
    case 5: {
        fifth_task();
        break;
    }
    case 7: {
        seventh_task();
        break;
    }
    case 9: {
        ninth_task();
        break;
    }
    case 11: {
        eleventh_task();
        break;
    }
    case 13: {
        thirteenth_task();
        break;
    }
    
    }
    
    std::cout << std::endl<< "third_task" << std::endl;
    double* ptr = new double(2);
    double** p = &ptr;

    std::cout << **p;

    delete ptr;
    return 0;
}






    
