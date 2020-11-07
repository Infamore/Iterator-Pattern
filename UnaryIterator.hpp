#include <iostream>
#include "iterator.hpp"
#include "base.hpp"
using namespace std;

class UnaryIterator : public Iterator {
  private:
  	Base* self_ptr;
  public:
  	
  	UnaryIterator(Base* ptr) {this->self_ptr = ptr;}
  
  	void first() {
      this->self_ptr = self_ptr->get_left();
    };
        
    /* Move onto the next element */
    void next() {
      this->self_ptr = nullptr;
    };

    /* Returns if you have finished iterating through all elements */
    bool is_done() {
      if (self_ptr == nullptr)
        return true;
      else
        return false;
    }

    /* Return the element the iterator is currently at */
    Base* current() {
      return this->self_ptr;
    }
};
