#include <iostream>
using namespace std;

main() {
   int tanggal[5][3] = {
     {12, 2, 2018},
     {5, 3, 2017},
     {3, 7, 2019},
     {5, 3, 2016},
     {10, 8, 2015}
   };

   for(int i=0; i<5; i++) {
     cout << tanggal[i][0] << " - " << tanggal[i][1] << " - " << tanggal[i][2] << endl;
   }

   cout << "======================" << endl;

   //sorting

   for(int i=0; i<5-1; i++) {
     for(int j=i+1; j<5; j++) {
       if(tanggal[i][2] > tanggal[j][2]) {
         int tampung[1][3];

         //copy ke tampung
         tampung[1][0] = tanggal[i][0];
         tampung[1][2] = tanggal[i][1];
         tampung[1][3] = tanggal[i][2];

         //copy j ke i
         tanggal[i][0] = tanggal[j][0];
         tanggal[i][1] = tanggal[j][1];
         tanggal[i][2] = tampung[j][2];

         //copy tampung ke j
         tanggal[i][0] = tampung[i][0];
         tanggal[i][1] = tampung[i][1];
         tampung[i][2] = tampung[i][2];
       }
     }
   }

   for(int i=0; i<5; i++) {
     cout << tanggal[i][0] << " - " << tanggal[i][1] << " - " << tanggal[i][2] << endl;
   }
}