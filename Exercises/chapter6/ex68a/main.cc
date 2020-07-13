
#include <iostream>
#include <string>


//int add(int x, int y);

main(){

  //pedir al usuario cuantos nombres ingresar?
  std::cout<<"How many names would you like to enter"<<"\n";
  int numOfNames;
  std::cin>>numOfNames;

  //Crear dinamic array
  std::string *array = new std::string[numOfNames]();

  //Ingresar los nombres
  for(int i=0; i<numOfNames; i++)
  {
    std::cout<<"Enter name number #"<<i+1<<": ";
    std::cin>>array[i];

    //ordenar
    if(i>0){
      for(int j =0; j<i-1;j++)
      {
        if(array[j][0]>array[i][0])
        std::swap(array[j],array[i]);
      }
    }

  }


  //Ordenar
  //if(array[1][0]<array[0][0]) std::cout<< array[1] <<" va antes que "<<array[0];
  for(int i=0; i<numOfNames; i++){
    std::cout<<array[i];
  }

  //Imprimir los nombres

  delete[] array;
  return 0;
}
