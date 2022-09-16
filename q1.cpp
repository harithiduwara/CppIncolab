//
//  q1.cpp
//  
//
//  Created by Harith Iduwara on 1/10/21.
//

#include<iostream>
#include<string.h>

using namespace std;

class currency{
 private:
  float p;

 public:
    currency() : p(0){}

    currency(float val){
        p = val;
    }

 operator float (){
  return pound*50;
 }

 void getpounds(){
  cout<<pound<<" Pounds";
 }

    friend istream& operator >>(istream& input, pounds& amount);
};

    istream& operator >>(istream& input, pounds& amount){
 input >> amount.pound;
 return input;
    }

class dollars{
 private:
  float dollar;
 public:
     dollars():dollar(0){}

    dollars(float val){
        dollar = val;
    }

    friend istream& operator >>(istream& input, dollars& amount);

 operator float (){
  return dollar/50;
 }

 void getdollar(){

  cout<<dollar<<" Dollars";
 }

};

istream& operator>>(istream& input , dollars& amount){
 input >> amount.dollar;
 return input;
    }


int main(){

dollars x;
pounds y;


while(1){
  int z;
  cout << "Choose and option\n1.convert pounds to dollars\n2.convert dollars to pounds" << std::endl;
  cin >> z;
  if (z==1){
    cin >> y;
    dollars temp=static_cast<float>(y);
    temp.getdollar();
    break;
  }
  else if(z==2) {
    cin >> x;
    pounds temp2=static_cast<float>(x);
    temp2.getpounds();
    break;
  }
  else
            break;
 }
 return 0;
}
