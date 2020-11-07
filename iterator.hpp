
  		virtual Iterator* create_iterator() = 0;
  
  		Iterator* create_iterator() {
          return new UnaryIterator(new Op(operand));
        };                }Iterator* create_iterator() {
          return new BinaryIterator(new add(left, right));
        }
        
         Iterator* create_iterator() {
          return new BinaryIterator(new sub(left, right));
        }
  
   Iterator* create_iterator() {
          return new BinaryIterator(new mult(left, right));
        }
  
   Iterator* create_iterator() {
          return new BinaryIterator(new Div(left, right));
        }
    
     Iterator* create_iterator() {
          return new BinaryIterator(new Pow(left, right));
        }
