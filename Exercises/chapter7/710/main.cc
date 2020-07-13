#include <vector>
#include <iostream>


void printStack(const std::vector<int> &stack){
 for(auto const &element:stack)
 std::cout<<element<<' ';
 std::cout<<"size: "<<stack.size()<<" capacity: "<<stack.capacity()<<"\n";
}

int add(int x, int y);

main(){
 std::vector<int> stack;
 stack.reserve(5);
 printStack(stack);

 stack.push_back(5);
 printStack(stack);

 stack.push_back(2);
 printStack(stack);

 stack.push_back(1);
 printStack(stack);

 stack.pop_back();
 printStack(stack);

 stack.pop_back();
 printStack(stack);
  return 0;
}
