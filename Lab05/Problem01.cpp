//Problem 1.1

#include <iostream>
using namespace std;
int main(){
  for(int i=1; i<=10; i++){
    cout<<i<<endl;
  }
  return 0;
}

//Problem 1.2
#include <iostream>
using namespace std;
int main() {
  int number;
  cout<<"Enter a number: ";
  cin>>number;
  for (int i=1; i<=number; i++) {
    cout<<i<<endl;
  }
  return 0;
}

//Problem 1.3
#include <iostream>
using namespace std;
int main() {
  int sum=0;
  for (int i=1; i<=10; i++) {
    sum = sum + i;
  }
  cout << sum << endl;
  return 0;
}

//Problem 1.4
#include <iostream>
using namespace std;
int main() {
  int sum=0, number;
  cout<<"Enter a number: ";
  cin>>number;
  for (int i=1; i<=number; i++) {
    sum+=i;
  }
  cout<<sum<<endl;
  return 0;
}

//Problem 1.5
#include <iostream>
using namespace std;
int main() {
  int sum=0;
  for (int i=1; i<=10; i++) {
    sum = sum + i;
  }
  cout << sum/10 << endl;
  return 0;
}

//Problem 1.6
#include <iostream>
using namespace std;
int main() {
  int sum=0, number;
  cout<<"Enter a number: ";
  cin>>number;
  for (int i=1; i<=number; i++) {
    sum+=i;
  }
  cout<<sum/number<<endl;
  return 0;
}

