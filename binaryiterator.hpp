#include <iostream>
#include "iterator.hpp"
#include "base.hpp"
using namespace std;

class BinaryIterator : public Iterator {
  private:
  	int index;
  public:
  	BinaryIterator(Base* ptr) {this->self_ptr = ptr;}
  
  	void first() {
      this->self_ptr = self_ptr->get_left();
    }
  	
  	void next() {
      this->index++;
    }
  	
    bool is_done() {
      if (self_ptr == nullptr)
        return true;
      else
        return false;
    }
  
  	Base* current() {
      if (index == 0)
      {
        return this->self_ptr->get_left();
      }
      else if (index == 1)
      {
        return this->self_ptr->get_right();
      }
      else
        return nullptr;
    }
};
