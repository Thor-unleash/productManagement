
#include <bits/stdc++.h>
#include <fstream>
using namespace std;
class product
{
public:
    int id;
    string prcat, prname;
};
class soldproduct
{
public:
    int cusid, price;
};
class boughtproduct : public product, public soldproduct
{
public:
    int buyerid;
    string buyername;
    void input()
    {
        ofstream file;
        file.open("productOUT.txt");
        file <<"Product ID :"<< id << endl
             <<"Category   :"<< prcat << endl
             <<"Product    :" <<prname << endl;
        file.close();
        ofstream k;
        k.open("cutomerOUT.txt");
        k <<"Customer ID :" <<cusid << endl
          <<"Price       :"<< price << " bdt" << endl;
        k.close();
        ofstream j;
        j.open("buyerOUT.txt");
        j <<"Buyer ID :"<< buyerid << endl
          <<"Name     :"<<buyername<< endl;
        j.close();
    }
};

int main()
{
    boughtproduct p;

    ifstream file("productIN.txt");
    file >> p.id >> p.prcat >> p.prname ;
    file.close();
    file.open("customerIN.txt");
    file>> p.cusid >> p.price; 
    file.close();
    file.open("buyerIN.txt");
    file>> p.buyerid>>p.buyername;
    file.close();
    p.input();
}