#include <iostream>

//using namespace std;

int main () {

//std::cout << "Hello There Human looking at me! " << std::endl;
cout << "Hello There Human looking at me!\
 This message was printed using std C " << endl;

  return 0;
}

//The above code generates these errors since 
//using namespace std is commented out

/*heystd.cc:9:1: error: use of undeclared identifier 'cout'; did you mean 'std::cout'?
cout << "Hello There Human looking at me!\
^~~~
std::cout
/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/iostream:53:33: note: 'std::cout' declared here
extern _LIBCPP_FUNC_VIS ostream cout;
                                ^
heystd.cc:10:44: error: use of undeclared identifier 'endl'; did you mean 'std::endl'?
 This message was printed using std C " << endl;
                                           ^~~~
                                           std::endl
/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/ostream:1004:1: note: 'std::endl' declared here
endl(basic_ostream<_CharT, _Traits>& __os)
^
2 errors generated.
*/