// C++ includes used for competitive programming
#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif

// C++ Containers & Algorithms
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <type_traits>
#include <typeindex>
#include <unordered_map>
#include <unordered_set>
#endif

using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {} 
};

class LinkedList {
    Node *head, *tail;

public:
    LinkedList() : head(nullptr), tail(nullptr) {} 

    void insertNode(int num) {
        Node* newnode = new Node(num);
        
        if (head == nullptr) { 
            head = newnode;
            tail = newnode;
        } else {
            tail->next = newnode; 
            tail = newnode;       
        }
    }

    void moveHeader(int position){
        cout << "updating the header based on the position"<< endl;
        // traverse untill those last k nodes.
        Node* newptr = head;
        int len = getLength();
        cout << "length of the list" <<len<< endl;
        for(int i=1; i<=len-position-1; i++){
            newptr = newptr->next;
        }
        Node* start = head;
        tail->next = start;
        head = newptr->next;
        newptr->next = nullptr;
        cout << "new position at the " << newptr->data << endl;
        printlist();
    }

    void printlist() {
        Node* cur = head; 
        while (cur != nullptr) { 
            cout << cur->data << " ";
            cur = cur->next;
        }
        cout << endl;
    }
    int getLength(){
        int count =0;
        Node* cur = head;
        while(cur != nullptr){
            cur = cur->next;
            count++;
        }
        return count;
    }
    void deleteNode(int position){
        if(head == nullptr) {
            cout << "Linked list is empty" << endl;
        }
        Node* cur = head;
        if(position == 1){
            cout << "removed the node at the beginning" << endl;
            head = head->next;
        }else if(position == getLength()){
            cout << "removed the node at the end" << endl;
            while(position-2 >=0){
                position--;
                cur = cur->next;
            }
            tail = cur;
        }
        else{
            cout << "removed the node at the position " << position << endl;
            for(int i=1; i<position-1; i++){
                cur = cur->next;
                // deleted in between
            }
            cur-> next= cur->next->next;
        }
    }
};

int main() {
    // cout << "Enter the no of nodes: ";
    // int n;
    // cin >> n;
    
    LinkedList* ll = new LinkedList();
    // for (int i = 0; i < n; i++) {
    //     int num;
    //     cin >> num;
    //     ll->insertNode(num);
    // }
    ll-> insertNode(1);
    ll-> insertNode(2);
    ll-> insertNode(3);
    ll-> insertNode(4);
    ll-> insertNode(5);

    ll->printlist();
    int option, position;
    while(1){
        
        cout << "press 1 to delete and 2 for move header and give the position and any key to exit" << endl;
        cin >> option;
        if(option ==1){
            cout<< " enter the position to delete ";
            cin >> position;
            ll -> deleteNode(position);
            cout << "list after the delete" << endl;
            ll->printlist();
        }else if(option ==2){
            cout<< " enter the position to move the header ";
            cin >> position;
            ll -> moveHeader(position);
        }
        else {
            break;
        }

    }
    ll -> deleteNode(3);
    ll->printlist();

    return 0;
}