#include <iostream>
using namespace std;

class adder{
  private:
    int num;
  public:
    adder(int num_initial);
    void disp();
    void add(int num_input);
};

int main(){
  adder obj(10);

  for(int i=0;i<=100;i++){
    cout << i*(i+1)/2 << " ";
    obj.add(i);
    obj.disp();
  }

  return 0; 
}

void adder::disp(){
  cout << num << "\n";
}

void adder::add(int num_input){
  num += num_input;
}

adder::adder(int num_initial){
  num = num_initial;
}
