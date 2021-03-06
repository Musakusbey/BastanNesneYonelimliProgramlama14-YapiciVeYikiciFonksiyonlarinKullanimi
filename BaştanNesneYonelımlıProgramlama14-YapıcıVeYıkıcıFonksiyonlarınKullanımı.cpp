#include<iostream>

using namespace std;

class personel
{
	personel()
	{
		cout<<"yap.fonk.-personel"<<endl;
	}
	
	~personel()
	{
		cout<<"yik.fonk.-personel"<<endl;
	}
};

class akademisyen : private personel
{
	public:
		
		akademisyen()
		{
			cout<<"yap.fonk.-akademisyen"<<endl;
		}
		
		~akademisyen()
		{
			cout<<"yik.fonk.-akademisyen"<<endl;
		}
};

class idari : private personel
{
	public:
		
		idari()
		{
			cout<<"yap.fonk.-idari"<<endl;
		}
		
		~idari()
		{
			cout<<"yik.fonk.-idari"<<endl;
		}
};

class arasgor : public akademisyen
{
	public:
		
		arasgor()
		{
			cout<<"yap.fonk.-arasgor"<<endl;
		}
		
		~arasgor()
		{
			cout<"yik.fonk.-arasgor"<<endl;
		}
};

class ogrgor : public akademisyen
{
	public:
		
		ogrgor()
		{
			cout<<"yap.fonk.-ogrgor"<<endl;
		}
		
		~ogrgor()
		{
			cout<<"yik.fonk.-ogrgor"<<endl;
		}
};

int main ()
{
	idari.idari();
	
	idari.~idari();
	
	arasgor.arasgor();
	
	arasgor.~arasgor();
		
	return 0;
}
