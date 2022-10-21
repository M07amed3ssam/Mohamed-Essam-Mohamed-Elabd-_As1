#include<iostream>
#include<array>
using namespace std ;

   int i,x,j,value,pos,number,arlength,array1[100];//All variable
   
   int search(int i ,int number , int arlength){
    cout <<" ===================== SEARCH ====================== "<< endl;
    cout << " -------- Enter the Value To Search It ---------:";
     cin >> number;
    cout <<" =================================================== "<< endl;
    for (i = 0 ; i < arlength ; i++){
        if(array1[i] == number){
            pos = i;
            cout<<" --> the value is found and the index = "<< pos<<endl;
            break;        
        }
         else if (i == arlength-1){  
              cout <<" --> the value is not found" << endl;
         }

    } 
    return 0 ;
}
    int add (int i,int pos ,int value ,int arlength){
      cout <<" ==================== ADD ========================== "<< endl;
      cout << " ----------- Enter The Value To Add  -----------:";
      cin >> value;
      cout <<" =================================================== "<< endl;
      cout <<" ---Enter The Position From -> 0 <- To -> " << arlength- 1 << " <--- :";
      cin >> pos ;
      cout <<" =================================================== "<< endl;
    for (i = arlength-1 ; i >= pos ; i--){
        array1[i+1]=array1[i];
    }
    array1[pos]=value;
    arlength++;
    cout <<" <---> The New Array After Add <---> \n";
    for (i = 0;i < arlength; i++ ){

        cout<<" -    "<< array1[i]<<"\n";
   }
    return 0; 
}
    int remove (int i ,int number,int arlength ){
        cout <<" ===================  REMOVE ======================= "<< endl;
        cout <<" ------------ Enter The Value To Delete --------:";
        cin >> number;
        cout <<" =================================================== "<< endl;
     for (i = 0 ; i < arlength ; i++){
        if(array1[i] == number){
            pos = i+1;
            for (i=pos ;i < arlength ;i++){
                array1 [i-1]=array1 [i]; 
            }
            arlength = arlength-1;
            cout <<" <--->  The New Array After Remove  <---> \n";
            for(i=0;i<arlength;i++)
                cout<<" -    "<<array1[i]<<endl;
         }    
         
    } 
    
    return 0;
} 
int main (){
    int end;
    int arlength;
    int opperatin;
    char again ='y';
    while (again == 'y'|| again == 'Y'){
        cout << " ============ Mohamed Essam Mohamed Elabd ========== "<<endl;
        cout << " ======== Assignment 1 ====== CE =====CSE111======== "<<endl;
        cout << " ---------- Enter the size of the array ---------:";
        cin >> arlength;
         cout << " =================================================== "<<endl;
        
        
        cout << " ---------- Enter: "<<arlength<<" of array elements -------------"<<endl;
        cout << " =================================================== "<<endl;

        for (i = 0 ; i<arlength ; i++){
            cout<<" -      ";
            cin >> array1[i]; 
        }
        cout << " --------------------------------------------------- "<<endl;



        cout <<" -> To Search Element Press: 1"<<endl ;
        cout<< " -> To Add    Element Press: 2"<<endl ;
        cout<< " -> To Remove Element Press: 3"<<endl ;
        cout <<"\" Select The Process Number:\" ";
        cin >> opperatin;

        if (opperatin == 1 ){

            search(i,number,arlength);
           
        }

        else if (opperatin == 2 ){
            add (i , pos , value , arlength);
            
        }

        else  if (opperatin == 3 ){
            remove (i , number , arlength);
        }
        else{
             cout << "invalid input !" <<endl;
        }  
        cout << " --------------------------------------------------- "<<endl;
        cout << " --------      The Program Is End        ----------- " << endl; 
        cout << " -------->->->-> Go Again ? (y/n) <-<-<-<-------: " ;
        cin >> again;// change control variable
    }//end while loop     
        cout <<"  The End , I Hope It Deserves Your Appreciative. " ;
        cout<<endl<<"  Press Any Key And Press Enter To Exit ......";
        cin>>end;

    
   return 0;
}          