#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
class n{ //class defined
public:	
	int array[5];
	void write(){
		ofstream file;
		file.open("file.txt"); //file opened
		if (file.is_open()){
			vector <int> v(5); //vector defined
			for (int i=0;i<5; i++){
		
				v[i]=i+1;
				array[i]=i+1;
			}
			for (int i=0; i<v.size(); i++)  
			file<<array[i]<<endl;
	    }
		file.close();
		ifstream read;
		read.open("file.txt");
		string line;
		while(getline(read,line)){ //line-by-line reading from the file
			cout<<line<<endl;
		}
		read.close();} //file closed
};
int main()
{
	n object; // object defined
	object.write();//write function called
}




