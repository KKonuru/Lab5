#include <iostream>
#include "StringData.h"
#include <string>
#include <vector>

int linear_search(std::vector<std::string> string_data_set,std::string element)
{
    //For loop goes through every element in the data set and checks if it equals the desired string
    //Has a time complexity of O(n)
    int i = 0;
    for (i = 0; i < string_data_set.size(); i++)
    {
        if (element == string_data_set[i])
            return i;
    }
    return -1;
}

int binary_search(std::vector<std::string>string_data_set, std::string element)
{
    //Binary search keeps cutting the search area in half and checking if the middle value equals the desired string
    //Has a time complexity of O(logn)

    int low = 0;
    int high = string_data_set.size() - 1;
    while(low<=high)
    {
        //Keeps recalculating the middle index and making sure it's an integer
        int mid = (low + high) / 2;
        if (string_data_set[mid] == element)
            return mid;
        else if( element < string_data_set[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }


    return -1;
}

int main()
{
    std::vector<std::string> test = getStringData();

    //Linear method for searching for "not_here"
    std::cout << "Finding not_here using the Linear Search algorithm\n";

    long long start = systemTimeNanoseconds();
    int location = linear_search(test, "not_here");
    long long end = systemTimeNanoseconds();

    //Print capture time
    if (location == -1)
        std::cout<< "not_here cannot be found, and it took"<< end - start<<"seconds.\n";
    else
        std::cout<< "not_here was found at"<<location<<", and it took,"<< end - start<< "seconds.\n";

    //Binary method for searching for "not_here
    std::cout<< "Finding not_here using the Binary Search algorithm";

    start = systemTimeNanoseconds();
    location = binary_search(test, "not_here");
    end = systemTimeNanoseconds();
    //Print capture time
    if (location == -1)
        std::cout<< "not_here cannot be found, and it took', end - start,'seconds.\n";
    else
        std::cout<< "not_here was found at"<<location<<", and it took',"<< end - start<< 'seconds.\n';

    //Linear method for searching for "mzzzz"
    std::cout<< "Finding mzzzz using the Linear Search algorithm";

    start = systemTimeNanoseconds();
    location = linear_search(test, "mzzzz");
    end = systemTimeNanoseconds();
    //Print capture time
    if (location == -1)
        std::cout<<"mzzzz cannot be found, and it took"<< end - start<<"seconds.\n";
    else
        std::cout<<"mzzzz was found at"<<location<<" and it took"<< end - start<< "seconds.\n";

    //Binary search method to find "mzzz" in the data set
    std::cout<<"Finding mzzzz using the Binary Search algorithm";

    start = systemTimeNanoseconds();
    location = binary_search(test, "mzzzz");
    end = systemTimeNanoseconds();

    //Print capture time
    if (location == -1)
        std::cout << "mzzzz cannot be found, and it took "<< end - start<< " seconds.\n";
    else
        std::cout << "mzzzz was found at" << location<<" and it took "<< end - start << " seconds.\n";

    //Linear Search algorithm to find "aaaa" in the data set
    std::cout <<"Finding aaaaa using the Linear Search algorithm";

    start = systemTimeNanoseconds();
    location = linear_search(test, "aaaaa");
    end = systemTimeNanoseconds();
    //Print capture time

    if (location == -1)
        std::cout<<"aaaaa cannot be found, and it took "<< end - start<< " seconds.\n";
    else
        std::cout<<"aaaaa was found at "<<location<<" and it took "<< end - start<< " seconds.\n";

    //Binary Search algorithm to find "aaaa" in the data set
    std::cout<< "Finding aaaaa using the Binary Search algorithm";

    start = systemTimeNanoseconds();
    location = binary_search(test, "aaaaa");
    end = systemTimeNanoseconds();
    //Print capture time
    if (location == -1)
        std::cout<<"aaaaa cannot be found, and it took "<< end - start<< " seconds.\n";
    else
        std::cout<<"aaaaa was found at "<<location<<" and it took "<< end - start<< " seconds.\n";

    return 0;
}




