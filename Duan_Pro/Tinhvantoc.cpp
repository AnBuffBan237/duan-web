#include<iostream>
#include <thread> 
#include <chrono> 
#include <cstdlib>
using namespace std;
int main () {
    double s , t , v ;
    int luachon , luachon1 ;

    cout << " Vui long chon don vi cua quang duong (1: m, 2: km): " ;
    cin >> luachon ;
    if (luachon == 1) {
        cout << " Ban da chon don vi la m " << endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    else if (luachon == 2) {
        cout << " Ban da chon don vi la km " << endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));   
    }
    else {
        cout << " Lua chon khong hop le " << endl;
        return 0;
    }


    cout << " Vui long chon don vi cua thoi gian (1: s, 2: h): " ;
    cin >> luachon1 ;
    if (luachon1 == 1) {
        cout << " Ban da chon don vi la s " << endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    else if (luachon1 == 2) {
        cout << " Ban da chon don vi la h " << endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    else {
        cout << " Lua chon khong hop le " << endl;
        return 0;
    }


    
    if ( luachon == 1  ) {
        cout << " Nhap quang duong s (m): ";
        cin >> s;
    }
    else {
        cout << " Nhap quang duong s (km): ";
        cin >> s;
    }



    if ( luachon1 == 1 ) {                                  
        cout << " Nhap thoi gian t (s): " ;
        cin >> t;
    }
    else {
        cout << " Nhap thoi gian t (h): " ;
        cin >> t;
    }
    
    if ( t <= 0 || s <= 0)
    {
    cout << " Gia tri khong ton tai " ;
     exit(0);
}
    else 
    {
        cout << " Vui long doi trong giay lat... " << endl;
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }
    if (luachon == 1 && luachon1 == 1) {
        v = s / t ;
        cout << " Van toc cua ban la: " << v << " m/s " << endl;
    }
    
    else if (luachon == 2 && luachon1 == 2) {
        v = s / t ;
        cout << " Van toc cua ban la: " << v << " km/h " << endl;
    }
    else
    {
        cout << " khong the tinh van toc voi don vi khac nhau!!! " << endl;
    }
    return 0;

}
