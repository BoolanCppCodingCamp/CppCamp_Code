#include <iostream>
using namespace std;

auto allocated = 0; 

void* operator new(size_t size) {  
  void* p = std::malloc(size); 
  allocated += size; 
  return p; 
} 

void operator delete(void* p) noexcept { 
  return std::free(p); 
} 


int main() { 

  //auto s = std::string{"abcde"};
  auto s = std::string{"01234567890123456789012"}; 
  
  std::cout << "stack size = " << sizeof(s) 
    << ", heap size = " << allocated 
    << ", capacity = " << s.capacity() 
    <<", size= "<<s.size() << '\n'; 
}

/*
struct Long { 
  size_t capacity_{}; 
  size_t size_{}; 
  char* data_{}; 
};

struct Short { 
  unsigned char size_{};
  char data_[23]{}; 
};

union u_ { 
  Short short_layout_; 
  Long long_layout_; 
};
*/



