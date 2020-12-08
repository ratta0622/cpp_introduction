#include <iostream>
using namespace std;

class fibonacci{
  private:
    int num1, num2;
  public:
    fibonacci();
    void disp();
    void next();
};

int main(){
  fibonacci fib;
  for(int i=0;i<10;i++){
    fib.disp();
    fib.next();
  }
  return 0;
}

fibonacci::fibonacci(){
  num1 = 1;
  num2 = 0;
}

void fibonacci::disp(){
  cout << num1 << "\n";
}

void fibonacci::next(){
  int buf;
  
  buf   = num1;
  num1 += num2;
  num2  = buf;
}
