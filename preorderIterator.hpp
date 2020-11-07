#ifndef PREORDER_H
#define PREORDER_H
#include <iostream>
#include <stack>
#include <algorithm>
#include "iterator.hpp"
#include "base.hpp"

using namespace std;

class PreorderIterator : public Iterator {
  private:
  	Base* randomptr;
  	stack<iterator*> stacks;
  public:
  
  	PreorderIterator(Base* ptr) { this->randomptr = ptr; } 
	  	
  	void first() {
    // Empty the stack (just in case we had something leftover from another run). Create
    // an iterator for the Base* that was passed into the PreorderIterator constructor.
    // Initialize that iterator and push it onto the stack.
	while (!stacks.empty()) { theStack.pop(); }
    stacks.push(randomptr->create_iterator());
    }

	void next() {
    // Create an iterator for the current() of the iterator on the top of the stack
    // Initialize the iterator and push it onto the stack. As long as the top iterator 
    // on the stack is_done, pop it off the stack and then advance whatever iterator is
    // now on top of the stack
	/*BinaryIterator* iter;
    iter->self_ptr = current();	
    stacks.push(iter);
      
    if (iter->is_done())
      stacks.pop();
    */
    

  	//or
  
  	if (stacks.top()->is_done()) {
    stacks.pop()
    BinaryIterator* iter;
    iter->self_ptr = current();	
    stacks.push(iter);
    }
    else
    {
    BinaryIterator* iter;
    iter->self_ptr = current();	
    stacks.push(iter);
    }
    }
  
	bool is_done() {
    // Return true if there are no more elements on the stack to iterate
		if (!stacks.empty())
          return false;
      	else
          return true;
    }

	Base* current() {
    // Return the current for the top iterator in the stack
      Iterator* topstack = stacks.top();
      return topstack->current();
    }
};
#endif
