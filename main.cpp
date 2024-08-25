#include <boost/filesystem.hpp>
#include <iostream>
namespace fs = boost::filesystem;

int main() {

  //fs::path p {"/home/user"};
  fs::path p {"/home/tyler"};

  if (fs::exists(p)) {    
    std::cout << p << " exists!";
  }
  else{
    std::cout << "huh";
    std::cout << "   " ;
  }

  std::cout << "hello world!";

  return 0;
}