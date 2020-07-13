

int countItems(int (&Player)[4]){
  int count{0};
  for(int typeOfObjects:Player){
    count += typeOfObjects;
  }
  return count;
}
