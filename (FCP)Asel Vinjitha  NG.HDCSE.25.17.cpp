#include<iostream>
#include<windows.h>
#include<fstream>
#include<string>
#include <sstream>//
#include <ctime>
using namespace std;
void login(string name, string pass);
void main_menu();
void flavour_details ();
void add_flavour();
void delete_flavour();
void update();
void sales();
void sales_history();
void company_details();
void logout ();
void exit ();
void temp (); //PRICE LIST (TXT FILE)
int main()
{
	ShowWindow (GetConsoleWindow(),SW_MAXIMIZE);
system("color e4");
cout<<"          ______________________________________________________________________________________________________________________________________________________"<<endl;			
cout<<"         |                          _      __________            __                __     ______________       ________         __                              |"<<endl;
cout<<"         |      __________        _|:|    |::::::::::|           |:|              |:|    | ___________  |     |:|:::::|:|      |::|             |:|:::|:|       |"<<endl;
cout<<"         |     |::::::::::|     _|:|:     |                      |:|              |:|    | |::::::::::| |     |:|::::::|:|     |::|             |:|::::|:|      |"<<endl;
cout<<"         |         |:|          :|:       |__________             |:|            |:|     | |::::::::::| |     |:|:::::|:|      |::|             |:|:::::|:|     |"<<endl;
cout<<"         |         |:|         |::        |::::::::::|             |:|          |:|      | |::::::::::| |     |:||:|:          |::|             |:|::::::|:|    |"<<endl;
cout<<"         |         |:|          :|_       |                         |:| |:||:| |:|       | |::::::::::| |     |:|  |:|:        |::|_______      |:|:::::|:|     |"<<endl;
cout<<"         |      ___|:|____       |:|_     |__________               |:||:|  |:||:|       | |__________| |     |:|   |:|:       |::::::::::|     |:|::::|:|      |"<<endl;
cout<<"         |     |::::::::::|        |:|    |::::::::::|               |||    |||          |______________|     |:|    |:|:      |::::::::::|     |:|:::|:|       |"<<endl;
cout<<"         |                                                                                                                                                      |"<<endl;
cout<<"         |______________________________________________________________________________________________________________________________________________________|"<<endl;
Sleep(300);

	string name, pass;
	
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t\t\t\t\t";
	cout<<"U S E R N A M E  : ";cin>>name;
	cout<<"\t\t\t\t\t\t\t\t\t\t";
	cout<<"P a s s w o r d  : ";cin>>pass;
	
	
	
	login (name, pass);
	
	

	



	return 0;
}



void login(string name, string pass)
{

	
	if ((name=="admin")&&(pass=="1234"))
	{
		cout<<"\n\n";
		cout<<"\t\t\t\t\t\t\t\t\t  ";
		cout<<"S ";Sleep(50);cout<<"U ";Sleep(50);cout<<"C ";Sleep(50);cout<<"C ";Sleep(50);cout<<"E ";Sleep(50);cout<<"S ";Sleep(50);cout<<"S ";Sleep(50);cout<<"F ";Sleep(50);cout<<"U ";Sleep(50);cout<<"L ";Sleep(50);cout<<"L ";Sleep(50);cout<<"Y  ";Sleep(50);cout<<"L ";Sleep(50);cout<<"O ";Sleep(50);cout<<"G ";Sleep(50);cout<<"I ";Sleep(50);cout<<"N ";Sleep(50);                      //successfully login
		Sleep(650);
		system("cls");	
			
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t\t\t\t\tL o a d i n g . . . "<<endl;
	cout<<endl;


	cout<<"\t\t\t\t\t\t";
	cout<<"                                     ()                  "<<endl;
	Sleep(300);
	cout<<"\t\t\t\t\t\t";
	cout<<"	                            (__)                 "<<endl;
	Sleep(300);
	cout<<"\t\t\t\t\t\t";
	cout<<"	                           (____)                "<<endl;
	Sleep(300);
	cout<<"\t\t\t\t\t\t";
	cout<<"                                  (______)               "<<endl;
	Sleep(200);
	cout<<"\t\t\t\t\t\t";
	cout<<"                                 (________)              "<<endl;
	Sleep(200);
	cout<<"\t\t\t\t\t\t";
	cout<<"                                (__________)             "<<endl;
	Sleep(200);
	cout<<"\t\t\t\t\t\t";
	cout<<"                               (____________)            "<<endl;
	Sleep(200);
	cout<<"\t\t\t\t\t\t";
	cout<<"                                <<<<<<>>>>>>             "<<endl;
	Sleep(100);
	cout<<"\t\t\t\t\t\t";
	cout<<"                                 <<<<<>>>>>              "<<endl;
	Sleep(100);
	cout<<"\t\t\t\t\t\t";
	cout<<"                                  <<<<>>>>               "<<endl;
	Sleep(100);
	cout<<"\t\t\t\t\t\t";
	cout<<"                                   <<<>>>                "<<endl;
	Sleep(100);
	cout<<"\t\t\t\t\t\t";
	cout<<"                                    <<>>                 "<<endl;
	Sleep(100);
	cout<<"\t\t\t\t\t\t";
	cout<<"                                     <>                  "<<endl;
	Sleep(300);

	system ("cls");
	main_menu( );
	}
	else 
	{
		system("color 4f");
		system("color e4");
		system("color 4f");
		system("color e4");

		cout<<endl;
		cout<<endl;
		cout<<endl;
cout<<"                      _________________________________________________________________________________________________________________"<<endl;
		
cout<<"                     |                                                                                                                 |"<<endl;

cout<<"                     |                              I N V A L I D   U S E R N A M E   O R   P A S S W O R D                            |"<<endl;                      

cout<<"                     |                                               T R Y   A G A I N                                                 |"<<endl;
                                 
cout<<"                     |_________________________________________________________________________________________________________________|"<<endl;
		Sleep(1000);
				system ("cls");
		
		
		main ();
	
	}
}

void main_menu( )
{
Sleep(200);
cout<<"                      _________________________________________________________________________________________________________________"<<endl;
cout<<"                     |                                                                                                                 |"<<endl;	
cout<<"                     |                         ()                                                                                      |"<<endl;
cout<<"	             |                        (__)                                LIFE                                 _.-.            |"<<endl;
cout<<"	             |                       (____)                                IS LIKE                           '/// //)          |"<<endl;
cout<<"                     |                      (______)                      AN ICE CREAM,                             /// // /)          |"<<endl;
cout<<"                     |                     (________)                       ENJOY                                  /// // //|          |"<<endl;
cout<<"                     |                    (__________)                     BEFORE IT MELTS.                        /// // ///          |"<<endl;
cout<<"                     |                   (____________)                                                          /// // ///            |"<<endl;
cout<<"                     |                    <<<<<<>>>>>>                                                          (`: // ///             |"<<endl;
cout<<"                     |                     <<<<<>>>>>                                                            `;`: ///              |"<<endl;
cout<<"                     |                      <<<<>>>>                       >>>ICE WORLD...<<<                    / /:`:/               |"<<endl;
cout<<"                     |                       <<<>>>                                                             / /  `'                |"<<endl;
cout<<"                     |                        <<>>                                                             / /                     |"<<endl;
cout<<"                     |                         <>                                                             (_/                      |"<<endl;
cout<<"                     |_________________________________________________________________________________________________________________|"<<endl;
cout<<endl;
Sleep(200);
cout<<"                      _________________________________________________________________________________________________________________"<<endl;		
cout<<"                     |                                                                                                                 |"<<endl;
cout<<"                     |                                 ";Sleep(50);cout<<"W ";Sleep(50);cout<<"E ";Sleep(50);cout<<"L ";Sleep(50);cout<<"C ";Sleep(50);cout<<"O ";Sleep(50);cout<<"M ";Sleep(50);cout<<"E  ";Sleep(50);cout<<"T ";Sleep(50);cout<<"O  ";Sleep(50);cout<<"T ";Sleep(50);cout<<"H ";Sleep(50);cout<<"E  ";Sleep(50);cout<<"I ";Sleep(50);cout<<"C ";Sleep(50);cout<<"E  ";Sleep(50);cout<<"W ";Sleep(50);cout<<"O ";Sleep(50);cout<<"R ";Sleep(50);cout<<"L ";Sleep(50);cout<<"D                                     |"<<endl;   //  W E L C O M E  T O  T H E  I C E  W O R L D                                     
cout<<"                     |_________________________________________________________________________________________________________________|"<<endl;
Sleep(200);
cout<<endl;
	
cout<<"                                                                                                                                      "<<endl;
cout<<"                                                                                                                                      "<<endl;
cout<<"                                                            1.  E D I T   F L A V O U R   D E T A I L S                                         "<<endl;
cout<<"                                                        __________________________________________________                                       "<<endl;
Sleep(200);
cout<<"                                                                                                                                      "<<endl;
cout<<"                                                            2.  S A L E   P R O D U C T S                                             "<<endl;
cout<<"                                                        __________________________________________________                                       "<<endl;
Sleep(200);
cout<<"                                                                                                                                      "<<endl;
cout<<"                                                            3.  C O M P A N Y   D E T A I L S                                         "<<endl;
cout<<"                                                        __________________________________________________                                       "<<endl;
Sleep(200);
cout<<"                                                                                                                                      "<<endl;
cout<<"                                                            4.  L O G O U T                                                           "<<endl;
cout<<"                                                        __________________________________________________                                       "<<endl;
Sleep(200);
cout<<"                                                                                                                                      "<<endl;
cout<<"                                                            5.  E X I T                                                               "<<endl;
cout<<"                                                        __________________________________________________                                       "<<endl;
Sleep(200);	
cout<<endl;
cout<<endl;
	
	int x;
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\tE ";Sleep(50);cout<<"N ";Sleep(50);cout<<"T ";Sleep(50);cout<<"E ";Sleep(50);cout<<"R   ";Sleep(50);cout<<"T ";Sleep(50);cout<<"H ";Sleep(50);cout<<"E  ";Sleep(50);cout<<"N ";Sleep(50);cout<<"U ";Sleep(50);cout<<"M ";Sleep(50);cout<<"B ";Sleep(50);cout<<"E ";Sleep(50);cout<<"R  :  ";                   //cout<<"ENTER THE NUMBER : ";cin>>x;	
	
	ostringstream strg;
	strg<< x;
	string y = strg.str();
	cin>>y;
	
	
	if(y=="1")   //FLAVOR DETAILS
	{
		flavour_details ();
	}
	else if(y=="2")  //sale products
	{
	sales();
	}
	else if (y=="3")   //COMPANY DETAILS
	{
		system("cls");
		company_details();
	}
	else if(y=="4")  //GO TO LOGOUT FUNCTION
	{
		system("cls");
		
		logout();
	}
	else if (y=="5")   //EXIT
	{
		system ("cls");
		exit();
	}
	else
	{
		system("color 4f");
		system("color e4");
		system("color 4f");
		system("color e4");
		system("cls");
		main_menu( );
	}	
}

void flavour_details ()
{
		system ("cls");
	cout<<"      ______________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<"     |                                                                                                                                                      |"<<endl;
    cout<<"     |                                                             > > > P R I C E   L I S T < < <                                                          |"<<endl;
    cout<<"     |______________________________________________________________________________________________________________________________________________________|"<<endl;
temp ();
	

	
	int number;
	
	cout<<endl;
cout<<"\t\t\t\t\t ______________________________________________________________________________________________"<<endl;
cout<<"\t\t\t\t\t|                    |                         |                          |                    |"<<endl;	
cout<<"\t\t\t\t\t|      1. A D D      |     2. D E L E T E      |      3. U P D A T E      |     4. B A C K     |"<<endl;
cout<<"\t\t\t\t\t|____________________|_________________________|__________________________|____________________|"<<endl;
cout<<endl;
cout<<endl;	
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\tE ";Sleep(50);cout<<"N ";Sleep(50);cout<<"T ";Sleep(50);cout<<"E ";Sleep(50);cout<<"R   ";Sleep(50);cout<<"T ";Sleep(50);cout<<"H ";Sleep(50);cout<<"E  ";Sleep(50);cout<<"N ";Sleep(50);cout<<"U ";Sleep(50);cout<<"M ";Sleep(50);cout<<"B ";Sleep(50);cout<<"E ";Sleep(50);cout<<"R  :  ";				//cout<<"ENTER THE NUMBER : 
	
	ostringstream strg;
	strg<< number;
	string s1 = strg.str();
	
	cin>>s1;
	
	if (s1=="1")
	{
		system ("cls");
		add_flavour();
	}
	else if (s1=="2")
	{
		system ("cls");
		delete_flavour();
	}
	else if (s1=="3")
	{
		system ("cls");
		update();
	}
	else if (s1=="4") //BACK	
	{
		system("cls");
		main_menu( );
	}	
	else
	{
	cout<<"\t\t\t\t";	
	cout<<"                      _______________________________________________________________"<<endl;
	cout<<"\t\t\t\t";
	cout<<"                     |                                                               |"<<endl;
	cout<<"\t\t\t\t";	
	cout<<"                     |                  I N V A L I D   N U M B E R                  |"<<endl;
	cout<<"\t\t\t\t";	
	cout<<"                     |_______________________________________________________________|"<<endl;
		Sleep(1000);
		system("cls");
		flavour_details ();
	}
	
}

void add_flavour()
{
		system("cls");


	 string flav; //not woring
	  

    cout << "\t\t\t\t\t\t\tE N T E R   T H E   F L A V E R                     :  "; //not woring
    getline(cin, flav); //not woring
    cout<<endl;
	system ("cls");
			cout<<"  ______________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<"     |                                                                                                                                                      |"<<endl;
    cout<<"     |                                                             > > > P R I C E   L I S T < < <                                                          |"<<endl;
    cout<<"     |______________________________________________________________________________________________________________________________________________________|"<<endl;
	temp ();
	
	   			cout<<"                           _________________________________________________________________________________________________________________"<<endl;		
cout<<"                          |                                                                                                                 |"<<endl;
cout<<"                          |                                            ";Sleep(50);cout<<"A ";Sleep(50);cout<<"D ";Sleep(50);cout<<"D ";cout<<"I ";Sleep(50);cout<<"N ";Sleep(50);cout<<"G   ";Sleep(50);cout<<"D ";Sleep(50);cout<<"E ";Sleep(50);cout<<"T ";Sleep(50);cout<<"A ";Sleep(50);cout<<"I ";Sleep(50);cout<<"L ";Sleep(50);cout<<"S                                          |"<<endl;   //  W E L C O M E  T O  T H E  I C E  W O R L D                                     
cout<<"                          |_________________________________________________________________________________________________________________|"<<endl;
Sleep(200);
cout<<endl;
cout<<endl;

	 string flavor,price, av;
    cout << "\t\t\t\t\t\t\tE N T E R   T H E   F L A V E R                     :  ";
    getline(cin, flavor);
    cout<<endl;
    cout << "\t\t\t\t\t\t\tE N T E R   T H E   P R I C E                       :  ";
    getline(cin, price);
    cout<<endl;
	cout<<"\t\t\t\t\t\t\tA V A I L A B L E   O R   N O T   A V A I L A B L E   :  ";
	getline(cin, av);
	cout<<endl;
    ofstream myfile("abc.txt",  ios::out | ios::app);
    
    
    myfile <<flavor<<endl;
	myfile<<price<<endl;
	myfile<<av<<endl;
	myfile<<"\n"<<endl;

    
    myfile.close();
	
		cout<<"                   	   _________________________________________________________________________________________________________________"<<endl;		
		cout<<"                          |                                                                                                                 |"<<endl;
		cout<<"                          |                                            ";Sleep(50);cout<<"S ";Sleep(50);cout<<"A ";Sleep(50);cout<<"V ";Sleep(50);cout<<"E ";cout<<"D   ";Sleep(50);cout<<"T ";Sleep(50);cout<<"O   ";Sleep(50);cout<<"L ";Sleep(50);cout<<"I ";Sleep(50);cout<<"S ";Sleep(50);cout<<"T                                            |"<<endl;
		cout<<"                          |_________________________________________________________________________________________________________________|"<<endl;
		  //saved to list
Sleep(1000);
	
	system ("cls");
	flavour_details ();
}

void delete_flavour()
{
	cout<<"      ______________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<"     |                                                                                                                                                      |"<<endl;
    cout<<"     |                                                             > > > P R I C E   L I S T < < <                                                          |"<<endl;
    cout<<"     |______________________________________________________________________________________________________________________________________________________|"<<endl;
	temp ();
	  cout<<"                           _________________________________________________________________________________________________________________"<<endl;		
cout<<"                          |                                                                                                                 |"<<endl;
cout<<"                          |                                          ";Sleep(50);cout<<"D ";Sleep(50);cout<<"E ";Sleep(50);cout<<"L ";Sleep(50);cout<<"E ";Sleep(50);cout<<"T ";Sleep(50);cout<<"I ";Sleep(50);cout<<"N ";Sleep(50);cout<<"G   ";cout<<"D ";Sleep(50);cout<<"E ";Sleep(50);cout<<"T ";Sleep(50);cout<<"A ";Sleep(50);cout<<"I ";Sleep(50);cout<<"L ";Sleep(50);cout<<"S                                        |"<<endl;                                        
cout<<"                          |_________________________________________________________________________________________________________________|"<<endl;
Sleep(200);
cout<<endl;
cout<<endl;
		string deleteline;
string line;

ifstream fin;
fin.open("abc.txt");
ofstream temp;
temp.open("temp.txt");

	cout << "\t\t\t\t\t\t\tW H I C H   L I N E   D O   Y O U   W A N T   T O   D E L E T E ?   ";
	cin >> deleteline;
	
	while (getline(fin,line))
{
    if (line != deleteline)
    {
    temp << line << endl;
    }
}

temp.close();
fin.close();
remove("abc.txt");
rename("temp.txt","abc.txt");

		cout<<"                           _________________________________________________________________________________________________________________"<<endl;		
cout<<"                          |                                                                                                                 |"<<endl;
cout<<"                          |                                      ";Sleep(50);cout<<"D ";Sleep(50);cout<<"E ";Sleep(50);cout<<"L ";Sleep(50);cout<<"E ";cout<<"T ";Sleep(50);cout<<"E ";Sleep(50);cout<<"D   ";Sleep(50);cout<<"F ";Sleep(50);cout<<"R ";Sleep(50);cout<<"O ";Sleep(50);cout<<"M   ";Sleep(50);cout<<"T ";Sleep(50);cout<<"H ";Sleep(50);cout<<"E   ";Sleep(50);cout<<"L ";Sleep(50);cout<<"I ";Sleep(50);cout<<"S ";Sleep(50);cout<<"T                                  |"<<endl;   //  W E L C O M E  T O  T H E  I C E  W O R L D                                     
cout<<"                          |_________________________________________________________________________________________________________________|"<<endl;
Sleep(1000);

	system ("cls");
	flavour_details ();
	
}

void update()
	{
		system ("cls");
		temp();
		
			  cout<<"                           _________________________________________________________________________________________________________________"<<endl;		
		cout<<"                          |                                                                                                                 |"<<endl;
		cout<<"                          |                                          ";Sleep(50);cout<<"U ";Sleep(50);cout<<"P ";Sleep(50);cout<<"D ";Sleep(50);cout<<"A ";Sleep(50);cout<<"T ";Sleep(50);cout<<"I ";Sleep(50);cout<<"N ";Sleep(50);cout<<"G   ";cout<<"D ";Sleep(50);cout<<"E ";Sleep(50);cout<<"T ";Sleep(50);cout<<"A ";Sleep(50);cout<<"I ";Sleep(50);cout<<"L ";Sleep(50);cout<<"S                                        |"<<endl;                                        
		cout<<"                          |_________________________________________________________________________________________________________________|"<<endl;
		Sleep(200);
		cout<<endl;
		cout<<endl;
		
	fstream abc;
    fstream temp;
  
    
    abc.open("abc.txt",ios::in);
    temp.open("temp.txt",ios::out);
    
    char flavor [25];
    char price[25];
    char av [25];
    char a[25];
    cin.ignore();
  	cout<<"\t\t\t\t\t\t\tW H I C H   F L A V O R   D E T A I L S   D O   Y O U   W A N T   T O   U P D A T E   ? " ;
    cin.getline(a,25);

	  while(!abc.eof())
    {
        abc.getline(flavor,25);
        abc.getline(price,25);
        abc.getline(av,25);
        if(strcmp(flavor,a)==0)
        {

            cout<<" \n\t\t\t\t\t\t\tN E W   F L A V O R   N A M E   :  ";
            cin.getline(flavor,25);
            cout<<" \n\t\t\t\t\t\t\tN E W   P R I C E   :   ";
            cin.getline(price,25);
            cout<<endl;
            cout<<"\t\t\t\t\t\t\tA V A I L A B L E   O R   N O T   :   ";
            cin.getline(av,25);
            temp<< flavor<<endl;
			temp<<price<<endl;
			temp<<av<<endl;
		
        }
        else
        {
            temp<< flavor<<endl;
			temp<<price<<endl;
			temp<<av<<endl;


        }


    }
    temp.close();
    abc.close();
 	
 	
    abc.open("abc.txt",ios::out);
    temp.open("temp.txt",ios::in);
    while(!temp.eof())
    {
        temp.getline(flavor,25);
        temp.getline(price,25);
        temp.getline(av,25);
        	abc<< flavor<<endl;
			abc<<price<<endl;
			abc<<av<<endl;
		
    }
    temp.close();
    abc.close();
    remove("temp.txt");
   	cout<<"                           _________________________________________________________________________________________________________________"<<endl;		
cout<<"                          |                                                                                                                 |"<<endl;
cout<<"                          |                                      ";Sleep(50);cout<<"U ";Sleep(50);cout<<"P ";Sleep(50);cout<<"D ";Sleep(50);cout<<"A ";cout<<"T ";Sleep(50);cout<<"E ";Sleep(50);cout<<"D   ";Sleep(50);cout<<"T ";Sleep(50);cout<<"O   ";Sleep(50);cout<<"T ";Sleep(50);cout<<"H ";Sleep(50);cout<<"E   ";Sleep(50);cout<<"L ";Sleep(50);cout<<"I ";Sleep(50);cout<<"S ";Sleep(50);cout<<"T                                      |"<<endl;   //  updated to the list                                    
cout<<"                          |_________________________________________________________________________________________________________________|"<<endl;
Sleep(1000);

	Sleep(1000);
	system ("cls");	
	flavour_details ();

    	
   	    

	system("cls");
	flavour_details ();		
	}

void sales()
{
		system ("cls");
	cout<<"      ______________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<"     |                                                                                                                                                      |"<<endl;
    cout<<"     |                                                             > > > P R I C E   L I S T < < <                                                          |"<<endl;
    cout<<"     |______________________________________________________________________________________________________________________________________________________|"<<endl;
temp();
	
	int num;
	
		cout<<endl;
cout<<"\t\t\t\t\t ____________________________________________________________________________________________________"<<endl;
cout<<"\t\t\t\t\t|                          |                                 |                                       |"<<endl;	
cout<<"\t\t\t\t\t|      1. B A C K          |            2. S A L E           |     3. S A L E S   H I S T O R Y      |"<<endl;
cout<<"\t\t\t\t\t|__________________________|_________________________________|_______________________________________|"<<endl;
cout<<endl;

	
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\tE ";Sleep(50);cout<<"N ";Sleep(50);cout<<"T ";Sleep(50);cout<<"E ";Sleep(50);cout<<"R   ";Sleep(50);cout<<"T ";Sleep(50);cout<<"H ";Sleep(50);cout<<"E  ";Sleep(50);cout<<"N ";Sleep(50);cout<<"U ";Sleep(50);cout<<"M ";Sleep(50);cout<<"B ";Sleep(50);cout<<"E ";Sleep(50);cout<<"R  :  ";
 
	ostringstream strg;
	strg<< num;
	string s1 = strg.str();
 	cin>>s1;
	
	
	if(s1=="1")
	{
		system ("cls");
		main_menu();	
	}
	
	else if (s1=="2")
	{
	system ("cls");
	
		START:   //if the sale details are invalid
			cout<<"      ______________________________________________________________________________________________________________________________________________________"<<endl;
    cout<<"     |                                                                                                                                                      |"<<endl;
    cout<<"     |                                                             > > > P R I C E   L I S T < < <                                                          |"<<endl;
    cout<<"     |______________________________________________________________________________________________________________________________________________________|"<<endl;

	temp();
	string flav;
	string capacity; 
    float price;
    float quantity;
    int amt, bal;
    
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;    
    cout<<"\t\t\t\t\t\t\t\tE N T E R   T H E   F L A V O R  :  ";
    cin>>flav;
    
	    
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t\tE N T E R   T H E   P R I C E   O F   P R O D U C T  :  RS."; 
    cin>>price;
		
   	cout<<endl;
    cout<<"\t\t\t\t\t\t\t\tE N T E R   T H E   Q U A N T I T Y   O F   P R O D U C T  :  x";
   	cin>>quantity;
    system("cls");
		   
cout<<"                      _________________________________________________________________________________________________________________"<<endl;
cout<<"                     |                                                                                                                 |"<<endl;	
cout<<"                     |                         ()                                                                                      |"<<endl;
cout<<"	             |                        (__)                                LIFE                                 _.-.            |"<<endl;
cout<<"	             |                       (____)                                IS LIKE                           '/// //)          |"<<endl;
cout<<"                     |                      (______)                      AN ICE CREAM,                             /// // /)          |"<<endl;
cout<<"                     |                     (________)                       ENJOY                                  /// // //|          |"<<endl;
cout<<"                     |                    (__________)                     BEFORE IT MELTS.                        /// // ///          |"<<endl;
cout<<"                     |                   (____________)                                                          /// // ///            |"<<endl;
cout<<"                     |                    <<<<<<>>>>>>                                                          (`: // ///             |"<<endl;
cout<<"                     |                     <<<<<>>>>>                                                            `;`: ///              |"<<endl;
cout<<"                     |                      <<<<>>>>                       >>>ICE WORLD...<<<                    / /:`:/               |"<<endl;
cout<<"                     |                       <<<>>>                                                             / /  `'                |"<<endl;
cout<<"                     |                        <<>>                                                             / /                     |"<<endl;
cout<<"                     |                         <>                                                             (_/                      |"<<endl;
cout<<"                     |_________________________________________________________________________________________________________________|"<<endl;
cout<<endl;

cout<<"                      _________________________________________________________________________________________________________________"<<endl;		
cout<<"                     |                                                                                                                 |"<<endl;
cout<<"                     |                                                   ";Sleep(50);cout<<"R ";Sleep(50);cout<<"E ";Sleep(50);cout<<"C ";Sleep(50);cout<<"I ";Sleep(50);cout<<"E ";Sleep(50);cout<<"P ";Sleep(50);cout<<"T                                                 |"<<endl;   //  W E L C O M E  T O  T H E  I C E  W O R L D                                     
cout<<"                     |_________________________________________________________________________________________________________________|"<<endl;

Sleep(200);
cout<<endl;
     
    float cost=price*quantity;
    float discount, bill;
  
    if (cost>=2000)
    {	
    	time_t now = time(0);
    	char* dt = ctime(&now);
    	
    
        discount=cost*0.05;
        bill=cost-discount;
        
        
         
		cout<<"\t\t\t\t\t\tF L A V O R                               :  "<<flav<<endl;
		cout<<endl;
		cout<<"\t\t\t\t\t\tP R I C E   O F   P R O D U C T           :  RS."<<price<<endl;
		cout<<endl;
		cout<<"\t\t\t\t\t\tQ U A N T I T Y   O F   P R O D U C T     :  x"<<quantity<<endl;
		cout<<endl;
        cout<<"\t\t\t\t\t\tD I S C O U N T                           :  RS."<<discount<<endl;
        cout<<endl;
		cout<<"\t\t\t\t\t\tT O T A L  B I L L                        :  RS."<<bill<<endl;
		cout<<endl;
		cout<<"\t\t\t\t\t\tC U S T O M E R   A M O U N T             :  RS.";cin>>amt;
		cout<<endl;
		
		bal=amt-bill;
		
		cout<<"\t\t\t\t\t\tB A L A N C E                             :  Rs."<<bal<<endl; 
		cout<<endl;
		cout <<"\t\t\t\t\t\t"<< dt << endl;
		cout<<endl;
		cout<<"\t\t\t\t\t\t\t\t>>>T H A N K   Y O U<<<"<<endl;
		
	ofstream myfile("sales history.txt",  ios::out | ios::app);
    myfile.seekp( 0, ios_base::end );
    myfile <<"F L A V O R                   :  "<<flav<<endl;
	myfile <<"P R I C E                     :  Rs."<<price<<endl;
	myfile <<"Q UA N T I T Y                :  X"<<quantity<<endl;
	myfile <<"D I S C O U N T               :  Rs."<<discount<<endl;
	myfile <<"T O T A L   B I L L           :  Rs."<<bill<<endl;
	myfile<<"C U S T O M E R   A M O U N T :  Rs."<<amt<<endl;
	myfile <<"B A L A N C E                 :  Rs."<<bal<<endl;
	myfile <<dt<<endl;
	myfile <<endl;
    
    myfile.close();
    }
    else if ((cost>=1200)&&(cost<=2000))
    {
    	time_t now = time(0);
    	char* dt = ctime(&now);
    	
         discount=(cost*0.02);
         bill=cost-discount;

		cout<<"\t\t\t\t\t\tF L A V O R                            :  "<<flav<<endl;
		cout<<endl;
		cout<<"\t\t\t\t\t\tP R I C E   O F   P R O D U C T        :  RS."<<price<<endl;
		cout<<endl;
		cout<<"\t\t\t\t\t\tQ U A N T I T Y   O F   P R O D U C T  :  x"<<quantity<<endl;
		cout<<endl;
        cout<<"\t\t\t\t\t\tD I S C O U N T                        :  RS."<<discount<<endl;
        cout<<endl;
		cout<<"\t\t\t\t\t\tT O T A L  B I L L                     :  RS."<<bill<<endl;
		cout<<endl;
		cout<<"\t\t\t\t\t\tC U S T O M E R   A M O U N T          :  RS.";cin>>amt;
		cout<<endl;
		
		bal=amt-bill;
		
		cout<<"\t\t\t\t\t\tB A L A N C E                          :  Rs."<<bal<<endl; 
		cout<<endl;
		cout <<"\t\t\t\t\t\t"<< dt << endl;
		cout<<endl;
		cout<<"\t\t\t\t\t\t\t\t>>>T H A N K   Y O U<<<"<<endl;
		
	ofstream myfile("sales history.txt",  ios::out | ios::app);
    myfile.seekp( 0, ios_base::end );
    myfile <<"F L A V O R                   :  "<<flav<<endl;
	myfile <<"P R I C E                     :  Rs."<<price<<endl;
	myfile <<"Q UA N T I T Y                :  X"<<quantity<<endl;
	myfile <<"D I S C O U N T               :  Rs."<<discount<<endl;
	myfile <<"T O T A L   B I L L           :  Rs."<<bill<<endl;
	myfile<<"C U S T O M E R   A M O U N T :  Rs."<<amt<<endl;
	myfile <<"B A L A N C E                 :  Rs."<<bal<<endl;
	myfile <<dt<<endl;
	myfile <<endl;
    
    myfile.close();
    }
    
    else if ((cost>=70)&&(cost<=1200))
    {
    	time_t now = time(0);
    	char* dt = ctime(&now);
    	
         discount=(cost*0.01);
         bill=cost-discount;
         
		cout<<"\t\t\t\t\t\tF L A V O R                            :  "<<flav<<endl;
		cout<<endl;
		cout<<"\t\t\t\t\t\tP R I C E   O F   P R O D U C T        :  RS."<<price<<endl;
		cout<<endl;
		cout<<"\t\t\t\t\t\tQ U A N T I T Y   O F   P R O D U C T  :  x"<<quantity<<endl;
		cout<<endl;
        cout<<"\t\t\t\t\t\tD I S C O U N T                        :  RS."<<discount<<endl;
        cout<<endl;
		cout<<"\t\t\t\t\t\tT O T A L  B I L L                     :  RS."<<bill<<endl;
		cout<<endl;
		cout<<"\t\t\t\t\t\tC U S T O M E R   A M O U N T          :  RS.";cin>>amt;
		cout<<endl;
		
		bal=amt-bill;
		
		cout<<"\t\t\t\t\t\tB A L A N C E                          :  Rs."<<bal<<endl; 
		cout<<endl;
		cout<<"\t\t\t\t\t\t\t\t>>>T H A N K   Y O U<<<"<<endl;
		
	ofstream myfile("sales history.txt",  ios::out | ios::app);
    myfile.seekp( 0, ios_base::end );
    myfile <<"F L A V O R                   :  "<<flav<<endl;
	myfile <<"P R I C E                     :  Rs."<<price<<endl;
	myfile <<"Q UA N T I T Y                :  X"<<quantity<<endl;
	myfile <<"D I S C O U N T               :  Rs."<<discount<<endl;
	myfile <<"T O T A L   B I L L           :  Rs."<<bill<<endl;
	myfile<<"C U S T O M E R   A M O U N T :  Rs."<<amt<<endl;
	myfile <<"B A L A N C E                 :  Rs."<<bal<<endl;
	myfile <<dt<<endl;
	myfile <<endl;
    
    myfile.close();
		

    }
    else
    {
    	
    	cout<<endl;

	cout<<"\t\t\t\t\t\t                                                               "<<endl;	
	cout<<"\t\t\t\t\t\t                 I N V A L I D   D E T A I L S                 "<<endl;
	cout<<"\t\t\t\t\t\t                      T R Y   A G A I N                        "<<endl;	
	cout<<"\t\t\t\t\t\t_______________________________________________________________"<<endl;
	Sleep(1000);
	system ("cls");
	goto START;	// back to sale details
    }

    
    	cout<<endl;
    	cout<<"\n\n"<<endl;
    	int num;
cout<<"\t\t\t\t\t\t ______________________"<<endl;
cout<<"\t\t\t\t\t\t|                      |"<<endl;	
cout<<"\t\t\t\t\t\t|      1. B A C K      |"<<endl;
cout<<"\t\t\t\t\t\t|______________________|                      ";Sleep(50);cout<<"E ";Sleep(50);cout<<"N ";Sleep(50);cout<<"T ";Sleep(50);cout<<"E ";Sleep(50);cout<<"R   ";Sleep(50);cout<<"T ";Sleep(50);cout<<"H ";Sleep(50);cout<<"E  ";Sleep(50);cout<<"N ";Sleep(50);cout<<"U ";Sleep(50);cout<<"M ";Sleep(50);cout<<"B ";Sleep(50);cout<<"E ";Sleep(50);cout<<"R  :  ";

	ostringstream strg;
	strg<< num;
	string z = strg.str();
 	cin>>z;

cout<<endl;
if (z=="1")
{
	system("cls");
	
	sales();
}
else
{
			cout<<endl;
	
	cout<<"\t\t\t\t\t _______________________________________________________________"<<endl;
	cout<<"\t\t\t\t\t|                                                               |"<<endl;	
	cout<<"\t\t\t\t\t|                  I N V A L I D   N U M B E R                  |"<<endl;	
	cout<<"\t\t\t\t\t|_______________________________________________________________|"<<endl;
	Sleep(1000);
	system("cls");
	sales();
}
	}
	else if (s1=="3")
	{
		system ("cls");
		sales_history();
	}
else
{
				cout<<endl;
	
	cout<<"\t\t\t\t\t _______________________________________________________________"<<endl;
	cout<<"\t\t\t\t\t|                                                               |"<<endl;	
	cout<<"\t\t\t\t\t|                  I N V A L I D   N U M B E R                  |"<<endl;	
	cout<<"\t\t\t\t\t|_______________________________________________________________|"<<endl;
	Sleep(1000);
	system("cls");
	sales();
}



}

void company_details()
{
	system ("cls");
cout<<"          ______________________________________________________________________________________________________________________________________________________" <<endl;
cout<<"         |                                                                                                                                                      |"<<endl;
cout<<"         |      I C E W O R L D @ I N F O R . L K                     > > > I C E   W O R L D< < <                     H E L P   D E S K :  94 11 4777800       |"<<endl;
cout<<"         |______________________________________________________________________________________________________________________________________________________|"<<endl;
cout<<endl;
cout<<"          ______________________________________________________________________________________________________________________________________________________" <<endl;
cout<<"         |                                                                                                                                                      |"<<endl;
cout<<"         |               B A M B A L A P I T I Y A   I C E   W O R L D                             N U G E G O D A   I C E   W O R L D                          |"<<endl;
cout<<"         |             -------------------------------------------------                    -------------------------------------------------                   |"<<endl;
cout<<"         |                   Address  :   No. 36, De Kretser Place,                              Address  :   No. 132 B , High Level Road,                      |"<<endl;
cout<<"         |                                Bambalapitiya Colombo 04                                            Nugegoda, Sri Lanka.                              |"<<endl;
cout<<"         |                                                                                                                                                      |"<<endl;
cout<<"         |                   Phone    :   +94 11 4777888                                         Phone    :   +94 81 4777888                                    |"<<endl;
cout<<"         |                                                                                                                                                      |"<<endl;
cout<<"         |                   Email    :   bambalapitiyainfo@iceworld.lk                          Email    :   nugegodainfo@iceworld.lk                          |"<<endl;
cout<<"         |                                                                                                                                                      |"<<endl;
cout<<"         |                   Fax      :   +94 11 4203170                                         Fax      :   +94 81 4482009                                    |"<<endl;
cout<<"         |                                                                                                                                                      |"<<endl;
cout<<"         |                                                                                                                                                      |"<<endl;
cout<<"         |                                                                                                                                                      |"<<endl;
cout<<"         |                      K A N D Y   I C E   W O R L D                                          G A L L E   I C E   W O R L D                            |"<<endl;
cout<<"         |             -------------------------------------------------                    -------------------------------------------------                   |"<<endl;
cout<<"         |                   Address  :   No: 365, D.S. Senanayake,                              Address  :   No. 66, Havelock Road,                            |"<<endl;
cout<<"         |                                Street, Kandy.                                                      Galle                                             |"<<endl;
cout<<"         |                                                                                                                                                      |"<<endl;
cout<<"         |                   Phone    :   +94 11 4334636                                         Phone    :   +94 91 4936666                                    |"<<endl;
cout<<"         |                                                                                                                                                      |"<<endl;
cout<<"         |                   Email    :   Kandyinfo@iceworld.lk                                  Email    :   galleinfo@iceworld.lk                             |"<<endl;
cout<<"         |                                                                                                                                                      |"<<endl;
cout<<"         |                   Fax      :   +94 11 4203170                                         Fax      :   +94 91 4936000                                    |"<<endl;
cout<<"         |                                                                                                                                                      |"<<endl;
cout<<"         |                                                                                                                                                      |"<<endl;
cout<<"         |______________________________________________________________________________________________________________________________________________________|"<<endl;
	cout<<endl;
cout<<"\t\t\t\t\t\t ______________________________________________"<<endl;
cout<<"\t\t\t\t\t\t|                      |                       |"<<endl;	
cout<<"\t\t\t\t\t\t|      1. B A C K      |     2. L O G O U T    |"<<endl;
cout<<"\t\t\t\t\t\t|______________________|_______________________|"<<endl;
cout<<endl;

	int number;

	cout<<"\t\t\t\t\t\t\t\t\t\t\t\tE ";Sleep(50);cout<<"N ";Sleep(50);cout<<"T ";Sleep(50);cout<<"E ";Sleep(50);cout<<"R   ";Sleep(50);cout<<"T ";Sleep(50);cout<<"H ";Sleep(50);cout<<"E  ";Sleep(50);cout<<"N ";Sleep(50);cout<<"U ";Sleep(50);cout<<"M ";Sleep(50);cout<<"B ";Sleep(50);cout<<"E ";Sleep(50);cout<<"R  :  ";
	
	ostringstream strg;
	strg<< number;
	string s1 = strg.str();
	
	cin>>s1;
	
	if (s1=="1") //BACK	
	{
		system("cls");
		main_menu( );
	}	
	else if(s1=="2")  //LOGOUT
	{
		system("cls");
		logout();
	}
	else
	{
		cout<<endl;
	
	cout<<"\t\t\t\t\t _______________________________________________________________"<<endl;
	cout<<"\t\t\t\t\t|                                                               |"<<endl;	
	cout<<"\t\t\t\t\t|                  I N V A L I D   N U M B E R                  |"<<endl;	
	cout<<"\t\t\t\t\t|_______________________________________________________________|"<<endl;
	Sleep(1000);
	system("cls");
	company_details();
	}
}

void logout ()
{
		Sleep(200);
cout<<"                      _________________________________________________________________________________________________________________"<<endl;
cout<<"                     |                                                                                                                 |"<<endl;	
cout<<"                     |                         ()                                                                                      |"<<endl;
cout<<"	             |                        (__)                                LIFE                                 _.-.            |"<<endl;
cout<<"	             |                       (____)                                IS LIKE                           '/// //)          |"<<endl;
cout<<"                     |                      (______)                      AN ICE CREAM,                             /// // /)          |"<<endl;
cout<<"                     |                     (________)                       ENJOY                                  /// // //|          |"<<endl;
cout<<"                     |                    (__________)                     BEFORE IT MELTS.                        /// // ///          |"<<endl;
cout<<"                     |                   (____________)                                                          /// // ///            |"<<endl;
cout<<"                     |                    <<<<<<>>>>>>                                                          (`: // ///             |"<<endl;
cout<<"                     |                     <<<<<>>>>>                                                            `;`: ///              |"<<endl;
cout<<"                     |                      <<<<>>>>                       >>>ICE WORLD...<<<                    / /:`:/               |"<<endl;
cout<<"                     |                       <<<>>>                                                             / /  `'                |"<<endl;
cout<<"                     |                        <<>>                                                             / /                     |"<<endl;
cout<<"                     |                         <>                                                             (_/                      |"<<endl;
cout<<"                     |_________________________________________________________________________________________________________________|"<<endl;
cout<<endl;

cout<<"                      _________________________________________________________________________________________________________________"<<endl;
cout<<"                     |                                                                                                                 |"<<endl;	
cout<<"                     |                          ";Sleep(50);cout<<"A ";Sleep(50);cout<<"R ";Sleep(50);cout<<"E   ";Sleep(50);cout<<"Y ";Sleep(50);cout<<"O ";Sleep(50);cout<<"U   ";Sleep(50);cout<<"S ";Sleep(50);cout<<"U ";Sleep(50);cout<<"R ";Sleep(50);cout<<"E   ";Sleep(50);cout<<"Y ";Sleep(50);cout<<"O  ";Sleep(50);cout<<"U   ";Sleep(50);cout<<"W ";Sleep(50);cout<<"A ";Sleep(50);cout<<"N ";Sleep(50);cout<<"T   ";Sleep(50);cout<<"T ";Sleep(50);cout<<"O   ";Sleep(50);cout<<"L ";Sleep(50);cout<<"O ";Sleep(50);cout<<"G ";Sleep(50);cout<<"O ";Sleep(50);cout<<"U ";Sleep(50);cout<<"T ";Sleep(50);cout<<"?                       |"<<endl;		
cout<<"                     |_________________________________________________________________________________________________________________|"<<endl;
cout<<"                                                                                                                                      "<<endl;
cout<<"                                                                                                                                      "<<endl;
cout<<"                                                                        1.  Y E S                                                     "<<endl;
cout<<"                                                        _______________________________________                                       "<<endl;
Sleep(200);
cout<<"                                                                                                                                      "<<endl;
cout<<"                                                                        2.  N O                                                       "<<endl;
cout<<"                                                        _______________________________________                                       "<<endl;
Sleep(200);
cout<<endl;
cout<<endl;

int y;

cout<<"\t\t\t\t\t\t\t\t\t\t\t\tE ";Sleep(50);cout<<"N ";Sleep(50);cout<<"T ";Sleep(50);cout<<"E ";Sleep(50);cout<<"R   ";Sleep(50);cout<<"T ";Sleep(50);cout<<"H ";Sleep(50);cout<<"E  ";Sleep(50);cout<<"N ";Sleep(50);cout<<"U ";Sleep(50);cout<<"M ";Sleep(50);cout<<"B ";Sleep(50);cout<<"E ";Sleep(50);cout<<"R  :  ";

ostringstream strg;
strg<< y;
string s1 = strg.str();

cin>>s1;

                
if (s1=="1")
{
	system ("cls");
	main();
}

else if (s1=="2")
{
	system("cls");
	 main_menu();
}

else 
{
	cout<<endl;
	
	cout<<"\t\t\t\t\t _______________________________________________________________"<<endl;
	cout<<"\t\t\t\t\t|                                                               |"<<endl;	
	cout<<"\t\t\t\t\t|                  I N V A L I D   N U M B E R                  |"<<endl;	
	cout<<"\t\t\t\t\t|_______________________________________________________________|"<<endl;
	Sleep(1000);
	system("cls");
	logout ();
}
}


void exit ()
{
				Sleep(200);
cout<<"                      _________________________________________________________________________________________________________________"<<endl;
cout<<"                     |                                                                                                                 |"<<endl;	
cout<<"                     |                         ()                                                                                      |"<<endl;
cout<<"	             |                        (__)                                LIFE                                 _.-.            |"<<endl;
cout<<"	             |                       (____)                                IS LIKE                           '/// //)          |"<<endl;
cout<<"                     |                      (______)                      AN ICE CREAM,                             /// // /)          |"<<endl;
cout<<"                     |                     (________)                       ENJOY                                  /// // //|          |"<<endl;
cout<<"                     |                    (__________)                     BEFORE IT MELTS.                        /// // ///          |"<<endl;
cout<<"                     |                   (____________)                                                          /// // ///            |"<<endl;
cout<<"                     |                    <<<<<<>>>>>>                                                          (`: // ///             |"<<endl;
cout<<"                     |                     <<<<<>>>>>                                                            `;`: ///              |"<<endl;
cout<<"                     |                      <<<<>>>>                       >>>ICE WORLD...<<<                    / /:`:/               |"<<endl;
cout<<"                     |                       <<<>>>                                                             / /  `'                |"<<endl;
cout<<"                     |                        <<>>                                                             / /                     |"<<endl;
cout<<"                     |                         <>                                                             (_/                      |"<<endl;
cout<<"                     |_________________________________________________________________________________________________________________|"<<endl;
cout<<endl;

cout<<"                      _________________________________________________________________________________________________________________"<<endl;
cout<<"                     |                                                                                                                 |"<<endl;	
cout<<"                     |                            ";Sleep(50);cout<<"A ";Sleep(50);cout<<"R ";Sleep(50);cout<<"E   ";Sleep(50);cout<<"Y ";Sleep(50);cout<<"O ";Sleep(50);cout<<"U   ";Sleep(50);cout<<"S ";Sleep(50);cout<<"U ";Sleep(50);cout<<"R ";Sleep(50);cout<<"E   ";Sleep(50);cout<<"Y ";Sleep(50);cout<<"O  ";Sleep(50);cout<<"U   ";Sleep(50);cout<<"W ";Sleep(50);cout<<"A ";Sleep(50);cout<<"N ";Sleep(50);cout<<"T   ";Sleep(50);cout<<"T ";Sleep(50);cout<<"O   ";Sleep(50);cout<<"E ";Sleep(50);cout<<"X ";Sleep(50);cout<<"I ";Sleep(50);cout<<"T ";Sleep(50);cout<<"?                         |"<<endl;		
cout<<"                     |_________________________________________________________________________________________________________________|"<<endl;
cout<<"                                                                                                                                      "<<endl;
cout<<"                                                                                                                                      "<<endl;
cout<<"                                                                        1.  Y E S                                                     "<<endl;
cout<<"                                                        _______________________________________                                       "<<endl;
Sleep(200);
cout<<"                                                                                                                                      "<<endl;
cout<<"                                                                        2.  N O                                                       "<<endl;
cout<<"                                                        _______________________________________                                       "<<endl;
Sleep(200);
cout<<endl;
cout<<endl;

int z;

cout<<"\t\t\t\t\t\t\t\t\t\t\t\tE ";Sleep(50);cout<<"N ";Sleep(50);cout<<"T ";Sleep(50);cout<<"E ";Sleep(50);cout<<"R   ";Sleep(50);cout<<"T ";Sleep(50);cout<<"H ";Sleep(50);cout<<"E  ";Sleep(50);cout<<"N ";Sleep(50);cout<<"U ";Sleep(50);cout<<"M ";Sleep(50);cout<<"B ";Sleep(50);cout<<"E ";Sleep(50);cout<<"R  :  ";

ostringstream strg;
strg<< z;
string s1 = strg.str();
 
 cin>>s1;
 
 if(s1=="1")
 {
 	system ("cls");
 	cout<<"\n\n\n"<<endl;
    	cout<<"                           _________________________________________________________________________________________________________________"<<endl;		
		cout<<"                          |                                                                                                                 |"<<endl;
		cout<<"                          |                                          ";Sleep(50);cout<<"P ";Sleep(50);cout<<"R ";Sleep(50);cout<<"E ";Sleep(50);cout<<"S ";Sleep(50);cout<<"S   ";Sleep(50);cout<<"A ";Sleep(50);cout<<"N ";Sleep(50);cout<<"Y   ";Sleep(50);cout<<"K ";Sleep(50);cout<<"E ";Sleep(50);cout<<"Y   ";Sleep(50);cout<<"T ";Sleep(50);cout<<"O                                        |"<<endl;
		cout<<"                          |                                                                                                                 |"<<endl;
		cout<<"                          |                                      ";Sleep(50);cout<<"C ";Sleep(50);cout<<"L ";Sleep(50);cout<<"O ";Sleep(50);cout<<"S ";Sleep(50);cout<<"E   ";Sleep(50);cout<<"T ";Sleep(50);cout<<"H ";Sleep(50);cout<<"E   ";Sleep(50);cout<<"A ";Sleep(50);cout<<"P ";Sleep(50);cout<<"L ";Sleep(50);cout<<"I ";Sleep(50);cout<<"C ";Sleep(50);cout<<"A ";Sleep(50);cout<<"T ";Sleep(50);cout<<"I ";Sleep(50);cout<<"O ";Sleep(50);cout<<"N                                    |"<<endl;                                        
		cout<<"                          |_________________________________________________________________________________________________________________|"<<endl;
		Sleep(200);
		cout<<endl;
		cout<<endl;
 }    
 else if (s1=="2")        
	{
		system ("cls");
		main_menu();
	}
	else
	{
	cout<<"\t\t\t\t\t _______________________________________________________________"<<endl;
	cout<<"\t\t\t\t\t|                                                               |"<<endl;	
	cout<<"\t\t\t\t\t|                  I N V A L I D   N U M B E R                  |"<<endl;	
	cout<<"\t\t\t\t\t|_______________________________________________________________|"<<endl;
	Sleep(1000);
	system("cls");
	exit();
	}
}

void sales_history()
{
	system ("cls");
			string line;
	ifstream myfile ("sales history.txt");
	if (myfile.is_open())
	{
		while (getline (myfile,line))
		{
			cout<<line<<'\n';
		}
		myfile.close();
	}
	
	cout<<endl;
cout<<"\t\t\t\t\t\t ________________________________________________________"<<endl;
cout<<"\t\t\t\t\t\t|                         |                              |"<<endl;	
cout<<"\t\t\t\t\t\t|      1. B A C K         |     2. M A I N   M E N U     |"<<endl;
cout<<"\t\t\t\t\t\t|_________________________|______________________________|"<<endl;
cout<<endl;

int numb;
cout<<"\t\t\t\t\t\t\t\t\t\t\t\tE ";Sleep(50);cout<<"N ";Sleep(50);cout<<"T ";Sleep(50);cout<<"E ";Sleep(50);cout<<"R   ";Sleep(50);cout<<"T ";Sleep(50);cout<<"H ";Sleep(50);cout<<"E  ";Sleep(50);cout<<"N ";Sleep(50);cout<<"U ";Sleep(50);cout<<"M ";Sleep(50);cout<<"B ";Sleep(50);cout<<"E ";Sleep(50);cout<<"R  :  ";

ostringstream strg;
strg<< numb;
string s1 = strg.str();

cin>>s1;


if (s1=="1")
{
	system("cls");
	sales();
}
else if (s1=="2")
{
	system("cls");
	main_menu();
}
else
{
	cout<<"\t\t\t\t\t _______________________________________________________________"<<endl;
	cout<<"\t\t\t\t\t|                                                               |"<<endl;	
	cout<<"\t\t\t\t\t|                  I N V A L I D   N U M B E R                  |"<<endl;	
	cout<<"\t\t\t\t\t|_______________________________________________________________|"<<endl;
	Sleep(1000);
	system("cls");
	sales_history();
}

}

void temp ()
{
		string line;
	ifstream myfile ("abc.txt");
	if (myfile.is_open())
	{
		while (getline (myfile,line))
		{
			cout<<line<<'\n';
		}
		myfile.close();
	}

}
	
	

