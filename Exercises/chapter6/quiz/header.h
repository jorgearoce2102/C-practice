struct Students{
  std::string name;
  int grade{0};
};


void captureInfo(Students *array, int &numberOfStudents);

void sortList(Students *array, int  &numberOfStudents);
