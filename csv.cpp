//prograpa:lectura archuivo  Csv
//alumno : Nicolas Alfredo Jimenez
//codigo fuete : video Teams 10/08/2020


#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

void parseCSV()
{
    ifstream  data("Book1.csv");  //abrir  archivo Csv
    string line;                  // bariable tipo string                  
    vector<vector<string>> parsedCsv; // definicion  vector de estrin fonfe quedara dividido las columnas y las filas
    int rowcount=0;                       
    int colcount=0;
    while(getline(data,line))   //data valor del objeto en Csv (valor verdadero o falso)
    {
        stringstream lineStream(line);
        string cell;
        vector<string> parsedRow;  // definicion de un vector de una dimencion 
        colcount-0;                
        while (getline(lineStream,cell,',')) //lectura de cada linea
        {
             parsedRow.push_back(cell);
             colcount++;
        }
        rowcount++;
        parsedCsv.push_back(parsedRow);
    }
    for (int i=0; i< rowcount; i++){
        for(int j=0; j < colcount; j++){
            cout << parsedCsv[i][j] <<"-"; // separador con el caacter --
        }
        cout <<'\n';
    }
}
 int maiin()
{
      parseCSV();
      return 0;
}

