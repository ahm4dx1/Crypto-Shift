#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	bool check=false;
	string encryptedText,decryptedText;
	string text,a;
	int key=0,temp;
	int count=0,shift=0,j;
	label:
		p:
	//input text from user
	cout<<"Enter the  text:";
	getline(cin, text);
	string input=text;
	string firstword = input.substr(0, input.find(" "));
	  for(int i=0;i<text.size();i++)//if user enter numbers, it is not Accepted and program again ask to enter text
	  {
	  	if(text[i]!=32)
		{
	  	if(!((text[i]>=65&&text[i]<=90)||(text[i]>=97&&text[i]<=122)))
	    {
	  	cout<<"Incorrect Input! Please Enter Alphabets:"<<endl;
	  	goto label;
	    }
        }
	  	else
	  	continue;
	  }
    //check key by hit and try
    for(j=0; j<=9; j++)
    {
    key=j;
    
    encryptedText=firstword;//text is stored in encryptedtext variable.  
    for(int i=0;i<firstword.size();i++)//.size() function is used to run the loop to the container size.
    {
    	if(firstword[i]==32)//32 is ASCII value of space. 
    	{
    		key=key-2;
		}
		else
		{
			if((firstword[i]-key)>122)//after lower case z back to a,z ASCII is 122
			{
				temp = (firstword[i] - key) - 122;
				encryptedText[i] =96 + temp;
			}
			else if(firstword[i]- key > 90 && firstword[i]<=96)
			{
				//after uppercase Z move back to A ,90 is ASCII of Z
				temp = (firstword[i] - key) -90;
				encryptedText[i] =64 + temp;
			}
			else 
			{
				//in case of character between A-Z & a-z.
				encryptedText[i]-=key;
	    	}
       }
}
	ifstream read("file.txt");
	//cout<<" file is open successfully";
	while(!read.eof())
	{
		read >>a;
	if(a ==	encryptedText)
	{	
	cout<<j<<endl;
	shift=j;
	check=true;
	break;
    }   
}
    read.close();    
}
//cout<<shift;
if(check)
{
 decryptedText=text;
   for(int i=0;i<text.size();i++)//.size() function is used to run the loop to the container size.
    {
    	if(text[i]==32)//32 is ASCII value of space. 
    	{
    		shift=shift+2;
    		cout<<shift;
		}
		else
		{
			if(text[i]-shift<97 && text[i]-shift>90)//after lower case a back to z,a ASCII is 97
			{
				 temp = (text[i] - shift) +122-97+1;
				decryptedText[i]= temp;
			}
			else if(text[i]-shift<65 && text[i]>60)
			{
				//after uppercase  move back to A ,90 is ASCII of Z
				 temp = (text[i] - shift)+90-65+1;
				decryptedText[i] = temp;
			}
			else 
			{
				//in case of character between A-Z & a-z.
		   	decryptedText[i]-=shift;
		   }
		}
	
	}

	cout<<"Decrypted Text :"<<decryptedText;
}
else
{
	cout<<" PLEASE ENTER THE CORRECT CIPHER\n";
}

}

