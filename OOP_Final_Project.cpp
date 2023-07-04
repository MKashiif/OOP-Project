#include<iostream>
#include <string>
using namespace std;

class men
{
	virtual void bill() = 0;
};
class clothings
{
	int price;
	int quantity;
	int bill;
	string fabric;
	string color;
	string volume;
public:
	clothings(int b = 0, int p = 0, int q = 0, string fb = "NULL", string c = "NULL", string v = "NULL")
	{
		price = p;
		bill = b;
		quantity = q;
		fabric = fb;
		color = c;
		volume = v;
	}
	void setbill(int b)
	{
		bill = b;
	}
	int getbill()
	{
		return bill;
	}
	void setprice(int p)
	{
		price = p;
	}
	int getprice()
	{
		return price;
	}
	void setquantity(int q)
	{
		quantity = q;
	}
	int getquantity()
	{
		return quantity;
	}
	void setfabric(string fb)
	{
		fabric = fb;
	}
	string getfabric()
	{
		return fabric;
	}
	void setcolor(string c)
	{
		color = c;
	}
	string getcolor()
	{
		return color;
	}
	void setvolume(string v)
	{
		volume = v;
	}
	string getvolume()
	{
		return volume;
	}
};

class unstitchedd :public clothings, public men
{
	string kurta;
	string kameezshalwar;
	static int stock;
public:
	unstitchedd(string ku = "NULL", string ks = "NULL", int b = 0, int p = 0, int st = 0, int q = 0, string fb = "NULL", string c = "NULL", string v = "NULL") :clothings(b, p, q, fb, c, v)
	{
		kurta = ku;
		kameezshalwar = ks;
		stock = st;
	}
	void setkurta(string ku)
	{
		kurta = ku;
	}
	string getkurta()
	{
		return kurta;
	}
	void setkameezshalwar(string ks)
	{
		kameezshalwar = ks;
	}
	string getkameezshalwar()
	{
		return kameezshalwar;
	}
	static void setstock(int st)
	{
		stock = st;
	}
	static int getstock()
	{
		return stock;
	}
	void bill()
	{
		if (getfabric() == "COTTON")
		{
			if (kurta == "FORMAL")
			{
				setprice(4000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (kurta == "SEMI FORMAL")
			{
				setprice(3000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (kurta == "CASUAL")
			{
				setprice(1500);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
		else if (getfabric() == "POLYESTER")
		{
			if (kurta == "FORMAL")
			{
				setprice(4000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (kurta == "SEMI FORMAL")
			{
				setprice(3000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (kurta == "CASUAL")
			{
				setprice(1500);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
		else if (getfabric() == "BLENDED")
		{
			if (kurta == "FORMAL")
			{
				setprice(4000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (kurta == "SEMI FORMAL")
			{
				setprice(3000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (kurta == "CASUAL")
			{
				setprice(1500);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
		else if (getfabric() == "COTTON")
		{
			if (kameezshalwar == "CASUAL")
			{
				setprice(2000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (kameezshalwar == "SEMI FORMAL")
			{
				setprice(3000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (kameezshalwar == "FORMAL")
			{
				setprice(4500);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (kameezshalwar == "EXCLUSIVE")
			{
				setprice(7000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
		else if (getfabric() == "POLYESTER")
		{
			if (kameezshalwar == "CASUAL")
			{
				setprice(2000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (kameezshalwar == "SEMI FORMAL")
			{
				setprice(3000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (kameezshalwar == "FORMAL")
			{
				setprice(4500);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (kameezshalwar == "EXCLUSIVE")
			{
				setprice(7000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
		else if (getfabric() == "BLENDED")
		{
			if (kameezshalwar == "CASUAL")
			{
				setprice(2000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (kameezshalwar == "SEMI FORMAL")
			{
				setprice(3000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (kameezshalwar == "FORMAL")
			{
				setprice(4500);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (kameezshalwar == "EXCLUSIVE")
			{
				setprice(7000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}

	}
};

class waistcoats :public clothings, public men
{
	string size;
	string type;
	static int stock;
public:
	waistcoats(string s = "NULL", string ty = "NULL", int b = 0, int p = 0, int st = 0, int q = 0, string fb = "NULL", string c = "NULL", string v = "NULL") : clothings(b, p, q, fb, c, v)
	{
		size = s;
		type = ty;
		stock = st;
	}
	void setsize(string s)
	{
		size = s;
	}
	string getsize()
	{
		return size;
	}
	void settype(string ty)
	{
		type = ty;
	}
	string gettype()
	{
		return type;
	}
	static void setstock(int st)
	{
		stock = st;

	}
	static int getstock()
	{
		return stock;
	}
	void bill()
	{
		if (type == "CASUAL")
		{
			setprice(1900);
			setbill(getprice() * getquantity());
			setstock(getstock() - getquantity());
		}
		else if (type == "FORMAL")
		{
			setprice(3500);
			setbill(getprice() * getquantity());
			setstock(getstock() - getquantity());
		}
	}

};

class shawl :public clothings, public men
{
	string category;
	static int stock;
public:
	shawl(string cat = "NULL", int b = 0, int p = 0, int st = 0, int q = 0, string fb = "NULL", string c = "NULL", string v = "NULL") :clothings(b, p, q, fb, c, v)
	{
		category = cat;
		stock = st;
	}
	void setcategory(string cat)
	{
		category = cat;
	}
	string getcategory()
	{
		return category;
	}
	static void setstock(int st)
	{
		stock = st;
	}
	static int getstock()
	{
		return stock;
	}
	void bill()
	{
		if (category == "PLAIN")
		{
			setprice(2000);
			setbill(getprice() * getquantity());
			setstock(getstock() - getquantity());
		}
		else if (category == "KARHAI")
		{
			setprice(3000);
			setbill(getprice() * getquantity());
			setstock(getstock() - getquantity());
		}
	}
};

class bottoms :public clothings, public men
{
	string category;
	static int stock;
public:
	bottoms(string cat = "NULL", int b = 0, int p = 0, int st = 0, int q = 0, string fb = "NULL", string c = "NULL", string v = "NULL") :clothings(b, p, q, fb, c, v)
	{
		category = cat;
	}
	void setcategory(string cat)
	{
		category = cat;
	}
	string getcategory()
	{
		return category;
	}
	static void setstock(int st)
	{
		stock = st;
	}
	static int getstock()
	{
		return stock;
	}
	void bill()
	{
		if (category == "SALWAR")
		{
			setprice(1000);
			setbill(getprice() * getquantity());
			setstock(getstock() - getquantity());
		}
		else if (category == "TROUSER")
		{
			setprice(1200);
			setbill(getprice() * getquantity());
			setstock(getstock() - getquantity());
		}
	}
};

class kameezshalwars :public clothings, public men
{
	string type;
	static int stock;
public:
	kameezshalwars(string t = "NULL", int b = 0, int p = 0, int st = 0, int q = 0, string fb = "NULL", string c = "NULL", string v = "NULL") :clothings(b, p, q, fb, c, v)
	{
		type = t;
		stock = st;
	}
	void settype(string t)
	{
		type = t;
	}
	string gettype()
	{
		return type;
	}
	static void setstock(int st)
	{
		stock = st;
	}
	static int getstock()
	{
		return stock;
	}
	void bill()
	{
		if (getfabric() == "COTTON")
		{
			if (type == "CASUAL")
			{
				setprice(2000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (type == "SEMI FORMAL")
			{
				setprice(3000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (type == "FORMAL")
			{
				setprice(4000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (type == "EXCLUSIVE")
			{
				setprice(10000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
		else if (getfabric() == "POLYESTER")
		{
			if (type == "CASUAL")
			{
				setprice(2000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (type == "SEMI FORMAL")
			{
				setprice(3000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (type == "FORMAL")
			{
				setprice(4000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (type == "EXCLUSIVE")
			{
				setprice(10000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
		else if (getfabric() == "BLENDED")
		{
			if (type == "CASUAL")
			{
				setprice(2000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (type == "SEMI FORMAL")
			{
				setprice(3000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (type == "FORMAL")
			{
				setprice(4000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (type == "EXCLUSIVE")
			{
				setprice(10000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
	}
};

class kurtas :public clothings, public men
{
	string type;
	static int stock;
public:
	kurtas(string t = "NULL", int b = 0, int p = 0, int st = 0, int q = 0, string fb = "NULL", string c = "NULL", string v = "NULL") :clothings(b, p, q, fb, c, v)
	{
		type = t;
		stock = st;
	}
	void settype(string t)
	{
		type = t;
	}
	string gettype()
	{
		return type;
	}
	static void setstock(int st)
	{
		stock = st;
	}
	static int getstock()
	{
		return stock;
	}
	void bill()
	{
		if (getfabric() == "COTTON")
		{
			if (type == "FORMAL")
			{
				setprice(4000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (type == "SEMI FORMAL")
			{
				setprice(3000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (type == "CASUAL")
			{
				setprice(1500);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
		else if (getfabric() == "LAWN")
		{
			if (type == "FORMAL")
			{
				setprice(4000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (type == "SEMI FORMAL")
			{
				setprice(3000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (type == "CASUAL")
			{
				setprice(1500);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
		else if (getfabric() == "JACQUARD")
		{
			if (type == "FORMAL")
			{
				setprice(4000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (type == "SEMI FORMAL")
			{
				setprice(3000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (type == "CASUAL")
			{
				setprice(1500);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
	}
};
int unstitchedd::stock = 100;
int waistcoats::stock = 100;
int shawl::stock = 100;
int bottoms::stock = 100;
int kameezshalwars::stock = 100;
int kurtas::stock = 100;

class Accesoriess
{
	int price;
	int bill;
	int quantity;
public:
	Accesoriess(int p = 0, int b = 0, int q = 0)
	{
		price = p;
		bill = b;
		quantity = q;
	}
	void setprice(int p)
	{
		price = p;

	}
	int getprice()
	{
		return price;
	}
	void setbill(int b)
	{
		bill = b;
	}
	int getbill()
	{
		return bill;
	}
	void setquantity(int q)
	{
		quantity = q;
	}
	int getquantity()
	{
		return quantity;
	}
};

class fragrences: public Accesoriess, public men
{
	string type;
	static int stock;
public:
	fragrences(string o = "NULL", int price = 0, int b = 0, int q = 0) :Accesoriess(price,b,q)
	{
		type = o;
	}
	void setoodh(string o)
	{
		type = o;
	}
	string getoodh()
	{
		return type;
	}
	static void setstock(int st)
	{
		stock = st;
	}
	static int getstock()
	{
		return stock;
	}
	void bill()
	{
		if (type == "OODH")
		{
			setprice(7000);
			setbill(getprice() * getquantity());
			setstock(getstock() - getquantity());
		}
		else if (type == "OBSSESSION")
		{
			setprice(5000);
			setbill(getprice() * getquantity());
			setstock(getstock() - getquantity());
		}
		else if (type == "SPECIAL")
		{
			setprice(11000);
			setbill(getprice() * getquantity());
			setstock(getstock() - getquantity());
		}
		else if (type == "TURGUT")
		{
			setprice(12000);
			setbill(getprice() * getquantity());
			setstock(getstock() - getquantity());
		}
	}
};

class footwears :public Accesoriess, public men
{
	string colour;
	string type;
	string size;
	static int stock;
public:
	footwears(string si = "NULL", int tp = 0, string tpe = "NULL", int b = 0, int q = 0, string c = "NULL") :Accesoriess(tp,b,q)
	{
		size = si;
		type = tpe;
		colour = c;
	}
	void setcolour(string c)
	{
		colour = c;
	}
	string getcolour()
	{
		return colour;
	}
	void setsize(string si)
	{
		size = si;
	}
	string getsize()
	{
		return size;
	}
	void settype(string tpe)
	{
		type = tpe;
	}
	string gettype()
	{

	}
	static void setstock(int st)
	{
		stock = st;
	}
	static int getstock()
	{
		return stock;
	}
	void bill()
	{
		if (type == "KHUSA")
		{
			setprice(2500);
			setbill(getprice() * getquantity());
			setstock(getstock() - getquantity());
		}
		else if (type == "KHERI")
		{
			setprice(4000);
			setbill(getprice() * getquantity());
			setstock(getstock() - getquantity());
		}
		else if (type == "SANDELS")
		{
			setprice(5000);
			setbill(getprice() * getquantity());
			setstock(getstock() - getquantity());
		}
		else if (type == "FLAT")
		{
			setprice(2000);
			setbill(getprice() * getquantity());
			setstock(getstock() - getquantity());
		}
		else if (type == "BOOTS")
		{
			setprice(7000);
			setbill(getprice() * getquantity());
			setstock(getstock() - getquantity());
		}
	}
};

class capss :public Accesoriess, public men
{
	string style;
	static int stock;
public:
	capss(string c = "NULL", int pr = 0, int b = 0, int q = 0) :Accesoriess(pr,b,q)
	{
		style = c;
	}
	void setstyle(string c)
	{
		style = c;
	}
	string getstyle()
	{
		return style;
	}
	static void setstock(int st)
	{
		stock = st;
	}
	static int getstock()
	{
		return stock;
	}
	void bill()
	{
		if (style == "CASUAL")
		{
			setprice(1000);
			setbill(getprice() * getquantity());
			setstock(getstock() - getquantity());
		}
		else if (style == "FORMAL")
		{
			setprice(1500);
			setbill(getprice() * getquantity());
			setstock(getstock() - getquantity());
		}
		else if (style == "TRADITIONAL")
		{
			setprice(2500);
			setbill(getprice() * getquantity());
			setstock(getstock() - getquantity());
		}
		else if (style == "WINTER")
		{
			setprice(1500);
			setbill(getprice() * getquantity());
			setstock(getstock() - getquantity());
		}
	}
};
int fragrences::stock = 100;
int footwears::stock = 100;
int capss::stock = 100;

class women
{
	virtual void bill() = 0;
};
class clothing
{
	int price;
	int quantity;
	int bill;
	string fabric;
	string color;
	string volume;
public:
	clothing(int b = 0, int p = 0, int q = 0, string fb = "NULL", string c = "NULL", string v = "NULL")
	{
		price = p;
		bill = b;
		quantity = q;
		fabric = fb;
		color = c;
		volume = v;
	}
	void setbill(int b)
	{
		bill = b;
	}
	int getbill()
	{
		return bill;
	}
	void setprice(int p)
	{
		price = p;
	}
	int getprice()
	{
		return price;
	}
	void setquantity(int q)
	{
		quantity = q;
	}
	int getquantity()
	{
		return quantity;
	}
	void setfabric(string fb)
	{
		fabric = fb;
	}
	string getfabric()
	{
		return fabric;
	}
	void setcolor(string c)
	{
		color = c;
	}
	string getcolor()
	{
		return color;
	}
	void setvolume(string v)
	{
		volume = v;
	}
	string getvolume()
	{
		return volume;
	}
};

class unstiched :public clothing, public women
{
	string peice;
	static int stock;
public:
	unstiched(int b = 0, int p = 0, int q = 0, string fb = "NULL", string c = "NULL", string v = "NULL", string pei = "NULL") :clothing(b, p, q, fb, c, v)
	{
		peice = pei;
	}
	void setpeice(string pei)
	{
		peice = pei;
	}
	string getpeice()
	{
		return peice;
	}
	void bill()
	{
		if (getfabric() == "COTTON")
		{
			if (getpeice() == "TWO PEICE")
			{
				setprice(4500);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (getpeice() == "THREE PEICE")
			{
				setprice(6500);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
		else if (getfabric() == "SILK")
		{
			if (getpeice() == "TWO PEICE")
			{
				setprice(7500);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (getpeice() == "THREE PEICE")
			{
				setprice(9500);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
		else if (getfabric() == "KHADDAR")
		{
			if (getpeice() == "TWO PEICE")
			{
				setprice(10500);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (getpeice() == "THREE PEICE")
			{
				setprice(12500);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
		else if (getfabric() == "LAWN")
		{
			if (getpeice() == "TWO PEICE")
			{
				setprice(4000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (getpeice() == "THREE PEICE")
			{
				setprice(6000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
	}
	static void setstock(int st)
	{
		stock = st;
	}
	static int getstock()
	{
		return stock;
	}
};

class stiched :public clothing, public women
{
	int size;
	static int stock;
public:
	stiched(int b = 0, int p = 0, int q = 0, string fb = "NULL", string c = "NULL", string v = "NULL", int s = 0) :clothing(b, p, q, fb, c, v)
	{
		size = s;
	}
	void setsize(int s)
	{
		size = s;
	}
	int getsize()
	{
		return size;
	}
	static void setstock(int st)
	{
		stock = st;
	}
	static int getstock()
	{
		return stock;
	}
	void bill()
	{
		if (getfabric() == "COTTON")
		{
			setprice(4000);
			setbill(getprice() * getquantity());
			setstock(getstock() - getquantity());
		}
		else if (getfabric() == "SILK")
		{
			setprice(8000);
			setbill(getprice() * getquantity());
			setstock(getstock() - getquantity());
		}
		else if (getfabric() == "KHADDAR")
		{
			setprice(10000);
			setbill(getprice() * getquantity());
			setstock(getstock() - getquantity());
		}
		else if (getfabric() == "LAWN")
		{
			setprice(3000);
			setbill(getprice() * getquantity());
			setstock(getstock() - getquantity());
		}
	}
};

class kurti :public clothing, public women
{
	string size;
	static int stock;
public:
	kurti(int b = 0, int p = 0, int q = 0, string fb = "NULL", string c = "NULL", string v = "NULL", string siz = "NULL") :clothing(b, p, q, fb, c, v)
	{
		size = siz;
	}
	void setsize(string siz)
	{
		size = siz;
	}
	string getsize()
	{
		return size;
	}
	void bill()
	{
		if (getfabric() == "COTTON")
		{
			setprice(1000);
			setbill(getprice() * getquantity());
			setstock(getstock() - getquantity());
		}
		else if (getfabric() == "SILK")
		{
			setprice(2000);
			setbill(getprice() * getquantity());
			setstock(getstock() - getquantity());
		}
		else if (getfabric() == "KHADDAR")
		{
			setprice(2500);
			setbill(getprice() * getquantity());
			setstock(getstock() - getquantity());
		}
		else if (getfabric() == "LAWN")
		{
			setprice(1500);
			setbill(getprice() * getquantity());
			setstock(getstock() - getquantity());
		}
	}
	static void setstock(int st)
	{
		stock = st;
	}
	static int getstock()
	{
		return stock;
	}
};

class bottom :public clothing, public women
{
	string type;
	string size;
	static int stock;
public:
	bottom(int b = 0, int p = 0, int q = 0, string fb = "NULL", string c = "NULL", string v = "NULL", string ty = "NULL", string si = "NULL") :clothing(b, p, q, fb, c, v)
	{
		type = ty;
		size = si;
	}
	void setsize(string si = 0)
	{
		size = si;
	}
	void settype(string ty = "NULL")
	{
		type = ty;
	}
	string getsize()
	{
		return size;
	}
	string gettype()
	{
		return type;
	}
	void bill()
	{
		if (type == "TULIP PANTS")
		{
			if (getfabric() == "COTTON")
			{
				setprice(650);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (getfabric() == "SILK")
			{
				setprice(750);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (getfabric() == "KHADDAR")
			{
				setprice(800);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (getfabric() == "LAWN")
			{
				setprice(850);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
		else if (type == "PALAZZOS")
		{
			if (getfabric() == "COTTON")
			{
				setprice(500);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (getfabric() == "SILK")
			{
				setprice(900);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (getfabric() == "KHADDAR")
			{
				setprice(1050);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (getfabric() == "LAWN")
			{
				setprice(950);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
		else if (type == "PATIALA SALWARS")
		{
			if (getfabric() == "COTTON")
			{
				setprice(400);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (getfabric() == "SILK")
			{
				setprice(750);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (getfabric() == "KHADDAR")
			{
				setprice(870);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (getfabric() == "LAWN")
			{
				setprice(990);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
		else if (type == "TROUSERS")
		{
			if (getfabric() == "COTTON")
			{
				setprice(700);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (getfabric() == "SILK")
			{
				setprice(1000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (getfabric() == "KHADDAR")
			{
				setprice(1300);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (getfabric() == "LAWN")
			{
				setprice(890);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
	}
	static void setstock(int st)
	{
		stock = st;
	}
	static int getstock()
	{
		return stock;
	}
};

class shawls :public clothing, public women
{
	string type;
	static int stock;
public:
	shawls(int b = 0, int p = 0, int q = 0, string fb = "NULL", string c = "NULL", string v = "NULL", string ty = "NULL", string tyP = "NULL") :clothing(b, p, q, fb, c, v)
	{
		type = tyP;
	}
	void settype(string tyP)
	{
		type = tyP;
	}
	string gettype()
	{
		return type;
	}
	void bill()
	{
		if (type == "PRINTED")
		{
			if (getfabric() == "WOOL")
			{
				setprice(8000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (getfabric() == "VELVET")
			{
				setprice(12000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (getfabric() == "KHADDAR")
			{
				setprice(9000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
		else if (type == "KASHMIRI")
		{
			if (getfabric() == "WOOL")
			{
				setprice(9500);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (getfabric() == "VELVET")
			{
				setprice(13500);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (getfabric() == "KHADDAR")
			{
				setprice(10500);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
		else if (type == "FANCY")
		{
			if (getfabric() == "WOOL")
			{
				setprice(6500);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (getfabric() == "VELVET")
			{
				setprice(7500);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (getfabric() == "KHADDAR")
			{
				setprice(9000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
	}
	static void setstock(int st)
	{
		stock = st;
	}
	static int getstock()
	{
		return stock;
	}
	
};
class accessories 
{
	int price;
	int quantity;
	int bill;
	string type;
public:
	accessories(int p = 0, int q = 0, int b = 0, string typ = "NULL")
	{
		price = p;
		quantity = q;
		bill = b;
		type = typ;
	}
	void setbill(int b)
	{
		bill = b;
	}
	int getbill()
	{
		return bill;
	}
	void setprice(int p)
	{
		price = p;
	}
	int getprice()
	{
		return price;
	}
	void setquantity(int q)
	{
		quantity = q;
	}
	int getquantity()
	{
		return quantity;
	}
	void settype(string typ)
	{
		type = typ;
	}
	string gettype()
	{
		return type;
	}
};

class bags :public accessories, public women
{
	string colour;
	static int stock;
public:
	bags(int p = 0, int q = 0, int b = 0, string typ = "NULL", string clr = "NULL") :accessories(p, q, b, typ)
	{
		colour = clr;
	}
	void setcolour(string clr)
	{
		colour = clr;
	}
	string getcolour()
	{
		return colour;
	}
	void bill()
	{
		if (gettype() == "HAND BAG")
		{
			if (colour == "BLACK")
			{
				setprice(5500);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (colour == "RED")
			{

				setprice(4500);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (colour == "GOLDEN")
			{
				setprice(5000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (colour == "BROWN")
			{
				setprice(3500);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
		else if (gettype() == "CLUTCHES")
		{
			if (colour == "BLACK")
			{
				setprice(3000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (colour == "RED")
			{

				setprice(2800);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (colour == "GOLDEN")
			{
				setprice(3800);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (colour == "BROWN")
			{
				setprice(3900);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
		else if (gettype() == "BRIDAL BAGS")
		{
			if (colour == "BLACK")
			{
				setprice(6000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (colour == "RED")
			{

				setprice(7800);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (colour == "GOLDEN")
			{
				setprice(6700);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (colour == "BROWN")
			{
				setprice(5800);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
	}
	static void setstock(int st)
	{
		stock = st;
	}
	static int getstock()
	{
		return stock;
	}
};

class jwellery :public accessories, public women
{
	string category;
	string material;
	static int stock;
public:
	jwellery(int p = 0, int q = 0, int b = 0, string cat = "NULL", string mat = "NULL") :accessories(p, q, b)
	{
		category = cat;
		material = mat;
	}
	void setmaterial(string mat)
	{
		material = mat;
	}
	void setcategory(string cat)
	{
		category = cat;
	}
	string getmaterial()
	{
		return material;
	}
	string getcategory()
	{
		return category;
	}
	void bill()
	{
		if (category == "EARINGS")
		{
			if (material == "GOLD")
			{
				setprice(33000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (material == "SILVER")
			{
				setprice(12000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (material == "ARTIFICIAL")
			{
				setprice(2000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
		else if (category == "BANGLES")
		{
			if (material == "GOLD")
			{
				setprice(60000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (material == "SILVER")
			{
				setprice(20000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (material == "ARTIFICIAL")
			{
				setprice(1500);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
		else if (category == "NOSE PINS")
		{
			if (material == "GOLD")
			{
				setprice(11000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (material == "SILVER")
			{
				setprice(5000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (material == "ARTIFICIAL")
			{
				setprice(2000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
		else if (category == "RINGS")
		{
			if (material == "GOLD")
			{
				setprice(25000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (material == "SILVER")
			{
				setprice(10000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (material == "ARTIFICIAL")
			{
				setprice(2000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
	}
	static void setstock(int st)
	{
		stock = st;
	}
	static int getstock()
	{
		return stock;
	}
};

class makeup :public accessories, public women
{
	string category;
	static int stock;
public:
	makeup(int p = 0, int q = 0, int b = 0, string typ = "NULL", string cat = "NULL") :accessories(p, q, b, typ)
	{
		category = cat;
	}
	void setcategory(string cat)
	{
		category = cat;
	}
	string getcategory()
	{
		return category;
	}
	void bill()
	{
		if (category == "FACE")
		{
			if (gettype() == "BLUSHER")
			{
				setprice(1900);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (gettype() == "CREAM AND FOUNDATION")
			{
				setprice(1800);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (gettype() == "POWDER")
			{
				setprice(2000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
		else if (category == "EYES")
		{
			if (gettype() == "EYE LINER")
			{
				setprice(1750);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (gettype() == "EYE PENCIL")
			{
				setprice(1450);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (gettype() == "EYE SHADOW")
			{
				setprice(1350);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
		else if (category == "LIPS")
		{
			if (gettype() == "LIPSTICK")
			{
				setprice(1050);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (gettype() == "LIPGLOSS")
			{
				setprice(750);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
	}
	static void setstock(int st)
	{
		stock = st;
	}
	static int getstock()
	{
		return stock;
	}
};

class footwear :public accessories, public women
{
	string size;
	static int stock;
	string colour;
public:
	footwear(int p = 0, int q = 0, int b = 0, string typ = "NULL", string siz = "NULL", string clr = "NULL") :accessories(p, q, b, typ)
	{
		size = siz;
		colour = clr;
	}
	void setcolour(string clr)
	{
		colour = clr;
	}
	string getcolour()
	{
		return colour;
	}
	void setsize(string siz)
	{
		size = siz;
	}
	string getsize()
	{
		return size;
	}
	void bill()
	{
		if (gettype() == "KHUSSA")
		{
			if (size == "SMALL")
			{
				setprice(2000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (size == "MEDIUM")
			{
				setprice(2500);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (size == "LARGE")
			{
				setprice(3000);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
		else if (gettype() == "SANDALS")
		{
			if (size == "SMALL")
			{
				setprice(1800);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (size == "MEDIUM")
			{
				setprice(2350);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
			else if (size == "LARGE")
			{
				setprice(3150);
				setbill(getprice() * getquantity());
				setstock(getstock() - getquantity());
			}
		}
	}
	static void setstock(int st)
	{
		stock = st;
	}
	static int getstock()
	{
		return stock;
	}
};

int stiched::stock = 100;
int unstiched::stock = 100;
int kurti::stock = 100;
int bottom::stock = 100;
int shawls::stock = 100;
int bags::stock = 200;
int jwellery::stock = 300;
int makeup::stock = 300;
int footwear::stock = 400;

int main()
{
	stiched sti;
	unstiched usti;
	kurti ku;
	bottom bo;
	shawls swl;
	bags ba;
	jwellery jwe;
	makeup mak;
	footwear foot;
	unstitchedd ustis;
	waistcoats waist;
	shawl sh;
	bottoms bt;
	kameezshalwars ks;
	kurtas kt;
	fragrences fr;
	footwears ftt;
	capss cap;
	
	int choice;
	do
	{
		cout << "ENTER 1 FOR WOMEN " << endl;
		cout << "ENTER 2 FOR MEN " << endl;
		cout << "ENTER 0 TO TERMINATE PROGRAM " << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			int choice1;
			cout << "ENTER 1 FOR CLOTHING " << endl;
			cout << "ENTER 2 FOR ACCESSORIES " << endl;
			cin >> choice1;
			switch (choice1)
			{
			case 1:
				int choice2;
				cout << "ENTER 1 FOR STICHED " << endl;
				cout << "ENTER 2 FOR UNSTICHED " << endl;
				cout << "ENTER 3 FOR KURTI " << endl;
				cout << "ENTER 4 FOR BOTTOM " << endl;
				cout << "ENTER 5 FOR SHAWLS" << endl;
				cin >> choice2;
				switch (choice2)
				{
				case 1:
					int vol;
					cout << "ENTER 1 FOR SPRING 21" << endl;
					cout << "ENTER 2 FOR WINTER 21" << endl;
					cout << "ENTER 3 FOR SUMMER 21" << endl;
					cin >> vol;
					if (vol == 1)
					{
						sti.setvolume("SPRING 21");
					}
					else if (vol == 2)
					{
						sti.setvolume("WINTER 21");
					}
					else if (vol == 3)
					{
						sti.setvolume("SUMMER 21");
					}
					int col;
					cout << "ENTER 1 FOR BLACK " << endl;
					cout << "ENTER 2 FOR RED " << endl;
					cout << "ENTER 3 FOR WHITE " << endl;
					cin >> col;
					if (col == 1)
					{
						sti.setcolor("BLACK");
					}
					else if (col == 2)
					{
						sti.setcolor("RED");
					}
					else if (col == 3)
					{
						sti.setcolor("WHITE");
					}
					int fab1;
					cout << "ENTER 1 FOR COTTON " << endl;
					cout << "ENTER 2 FOR KHADDAR " << endl;
					cout << "ENTER 3 FOR SILK " << endl;
					cout << "ENTER 4 FOR for LAWN " << endl;
					cin >> fab1;
					if (fab1 == 1)
					{
						sti.setfabric("COTTON");
					}
					else if (fab1 == 2)
					{
						sti.setfabric("KHADDAR");
					}
					else if (fab1 == 3)
					{
						sti.setfabric("SILK");
					}
					else if (fab1 == 4)
					{
						sti.setfabric("LAWN");
					}
					int qua;
					while (1)
					{
						cout << "ENTER QUANTITY : " << endl;
						cin >> qua;
						if (qua < sti.getstock())
						{
							sti.setquantity(qua);
							break;
						}
						else if (qua > sti.getstock())
						{
							cout << "OUT OF ORDER" << endl;
						}
					}
					sti.bill();
					cout << "TOTAL BILL : " << sti.getbill() << endl;
					break;
				case 2:
					int vol1;
					cout << "ENTER 1 FOR SPRING 21" << endl;
					cout << "ENTER 2 FOR WINTER 21" << endl;
					cout << "ENTER 3 FOR SUMMER 21" << endl;
					cin >> vol1;
					if (vol1 == 1)
					{
						usti.setvolume("SPRING 21");
					}
					else if (vol1 == 2)
					{
						usti.setvolume("WINTER 21");
					}
					else if (vol1 == 3)
					{
						usti.setvolume("SUMMER 21");
					}
					int col1;
					cout << "ENTER 1 FOR BLACK " << endl;
					cout << "ENTER 2 FOR RED " << endl;
					cout << "ENTER 3 FOR WHITE " << endl;
					cin >> col1;
					if (col1 == 1)
					{
						usti.setcolor("BLACK");
					}
					else if (col1 == 2)
					{
						usti.setcolor("RED");
					}
					else if (col1 == 3)
					{
						usti.setcolor("WHITE");
					}
					int fab;
					cout << "ENTER 1 FOR COTTON " << endl;
					cout << "ENTER 2 FOR KHADDAR " << endl;
					cout << "ENTER 3 FOR SILK " << endl;
					cout << "ENTER 4 FOR LAWN " << endl;
					cin >> fab;
					if (fab == 1)
					{
						usti.setfabric("COTTON");
					}
					else if (fab == 2)
					{
						usti.setfabric("KHADDAR");
					}
					else if (fab == 3)
					{
						usti.setfabric("SILK");
					}
					else if (fab == 4)
					{
						usti.setfabric("LAWN");
					}
					int qua1;
					while (1)
					{
						cout << "ENTER QUANTITY :  " << endl;
						cin >> qua1;
						if (qua1 < usti.getstock())
						{
							usti.setquantity(qua1);
							break;
						}
						else if (qua1 > usti.getstock())
						{
							cout << "OUT OF ORDER" << endl;
						}
					}
					int pie;
					cout << "ENTER 1 FOR TWO PIECE " << endl;
					cout << "ENTER 2 FOR THREE PIECE " << endl;
					cin >> pie;
					if (pie == 1)
					{
						usti.setpeice("TWO PEICE");
					}
					else if (pie == 2)
					{
						usti.setpeice("THREE PEICE");
					}
					usti.bill();
					cout << "TOTAL BILL : " << usti.getbill() << endl;
					break;
				case 3:
					int si;
					cout << "ENTER 1 FOR SMALL " << endl;
					cout << "ENTER 2 FOR MEDIUM " << endl;
					cout << "ENTER 3 FOR LARGE " << endl;
					cin >> si;
					if (si == 1)
					{
						ku.setsize("SMALL");
					}
					else if (si == 2)
					{
						ku.setsize("MEDIUM");
					}
					else if (si == 3)
					{
						ku.setsize("LARGE");
					}
					int vol2;
					cout << "ENTER 1 FOR SPRING 21 " << endl;
					cout << "ENTER 2 FOR SUMMER 21 " << endl;
					cout << "ENTER 3 FOR WINTER 21 " << endl;
					cin >> vol2;
					if (vol2 == 1)
					{
						ku.setvolume("SPRING 21");
					}
					else if (vol2 == 2)
					{
						ku.setvolume("SUMMER 21");
					}
					else if (vol2 == 3)
					{
						ku.setvolume("WINTER 21");
					}
					int clr;
					cout << "ENTER 1 FOR BLACK " << endl;
					cout << "ENTER 2 FOR RED " << endl;
					cout << "ENTER 3 FOR WHITE " << endl;
					cin >> clr;
					if (clr == 1)
					{
						ku.setcolor("BLACK");
					}
					else if (clr == 2)
					{
						ku.setcolor("RED");
					}
					else if (clr == 3)
					{
						ku.setcolor("WHITE");
					}
					int fab3;
					cout << "ENTER 1 FOR COTTON " << endl;
					cout << "ENTER 2 FOR KHADDAR " << endl;
					cout << "ENTER 3 FOR SILK " << endl;
					cout << "ENTER 4 FOR LAWN " << endl;
					cin >> fab3;
					if (fab3 == 1)
					{
						ku.setfabric("COTTON");
					}
					else if (fab3 == 2)
					{
						ku.setfabric("KHADDAR");
					}
					else if (fab3 == 3)
					{
						ku.setfabric("SILK");
					}
					else if (fab3 == 4)
					{
						ku.setfabric("LAWN");
					}
					int qua3;
					while (1)
					{
						cout << "ENTER QUANTITY : " << endl;
						cin >> qua3;
						if (qua3 < ku.getstock())
						{
							ku.setquantity(qua3);
							break;
						}
						else if (qua3 > ku.getstock())
						{
							cout << "OUT OF ORDER" << endl;
						}
					}
					ku.bill();
					cout << "TOTAL BILL : " << ku.getbill() << endl;
					break;
				case 4:
					int si1;
					cout << "ENTER 1 FOR SMALL " << endl;
					cout << "ENTER 2 FOR MEDIUM " << endl;
					cout << "ENTER 3 FOR LARGE " << endl;
					cin >> si1;
					if (si1 == 1)
					{
						bo.setsize("SMALL");
					}
					else if (si1 == 2)
					{
						bo.setsize("MEDIUM");
					}
					else if (si1 == 3)
					{
						bo.setsize("LARGE");
					}
					int vol3;
					cout << "ENTER 1 FOR SPRING 21 " << endl;
					cout << "ENTER 2 FOR SUMMER 21 " << endl;
					cout << "ENTER 3 FOR WINTER 21 " << endl;
					cin >> vol3;
					if (vol3 == 1)
					{
						bo.setvolume("SPRING 21");
					}
					else if (vol3 == 2)
					{
						bo.setvolume("SUMMER 21");
					}
					else if (vol3 == 3)
					{
						bo.setvolume("WINTER 21");
					}
					int clr1;
					cout << "ENTER 1 FOR BLACK " << endl;
					cout << "ENTER 2 FOR RED " << endl;
					cout << "ENTER 3 FOR WHITE " << endl;
					cin >> clr1;
					if (clr1 == 1)
					{
						bo.setcolor("BLACK");
					}
					else if (clr1 == 2)
					{
						bo.setcolor("RED");
					}
					else if (clr1 == 3)
					{
						bo.setcolor("WHITE");
					}
					int fab4;
					cout << "ENTER 1 FOR COTTON " << endl;
					cout << "ENTER 2 FOR KHADDAR " << endl;
					cout << "ENTER 3 FOR SILK " << endl;
					cout << "ENTER 4 FOR LAWN " << endl;
					cin >> fab4;
					if (fab4 == 1)
					{
						bo.setfabric("COTTON");
					}
					else if (fab4 == 2)
					{
						bo.setfabric("KHADDAR");
					}
					else if (fab4 == 3)
					{
						bo.setfabric("SILK");
					}
					else if (fab4 == 4)
					{
						bo.setfabric("LAWN");
					}
					int typ;
					cout << "ENTER 1 FOR TULIP PANTS " << endl;
					cout << "ENTER 2 FOR PALAZZOS " << endl;
					cout << "ENTER 3 FOR PATIALA SALWARS " << endl;
					cout << "ENTER 4 FOR TROUSERS " << endl;
					cin >> typ;
					if (typ == 1)
					{
						bo.settype("TULIP PANTS");
					}
					else if (typ == 2)
					{
						bo.settype("PALAZZOS");
					}
					else if (typ == 3)
					{
						bo.settype("PATIALA SALWARS");
					}
					else if (typ == 4)
					{
						bo.settype("TROUSERS");
					}
					int qua4;
					while (1)
					{
						cout << "ENTER QUANTITY : " << endl;
						cin >> qua4;
						if (qua4 < bo.getstock())
						{
							bo.setquantity(qua4);
							break;
						}
						else if (qua4 > bo.getstock())
						{
							cout << "OUT OF ORDER" << endl;
						}
					}
					bo.bill();
					cout << "TOTAL BILL : " << bo.getbill() << endl;
					break;
				case 5:
					int typ1;
					cout << "ENTER 1 FOR FANCY " << endl;
					cout << "ENTER 2 FOR KASHMIRI " << endl;
					cout << "ENTER 3 FOR PRINTED " << endl;
					cin >> typ1;
					if (typ1 == 1)
					{
						swl.settype("FANCY");
					}
					else if (typ1 == 2)
					{
						swl.settype("KASHMIRI");
					}
					else if (typ1 == 3)
					{
						swl.settype("PRINTED");
					}
					int fab5;
					cout << "ENTER 1 FOR WOOL " << endl;
					cout << "ENTER 2 FOR KHADDAR " << endl;
					cout << "ENTER 3 FOR VELVET " << endl;
					cin >> fab5;
					if (fab5 == 1)
					{
						swl.setfabric("WOOL");
					}
					else if (fab5 == 2)
					{
						swl.setfabric("KHADDAR");
					}
					else if (fab5 == 3)
					{
						swl.setfabric("VELVET");
					}
					int clr2;
					cout << "ENTER 1 FOR BLACK " << endl;
					cout << "ENTER 2 FOR RED " << endl;
					cout << "ENTER 3 FOR WHITE " << endl;
					cin >> clr2;
					if (clr2 == 1)
					{
						swl.setcolor("BLACK");
					}
					else if (clr2 == 2)
					{
						swl.setcolor("RED");
					}
					else if (clr2 == 3)
					{
						swl.setcolor("WHITE");
					}
					int qua5;
					while (1)
					{
						cout << "ENTER QUANTITY : " << endl;
						cin >> qua5;
						if (qua5 < swl.getstock())
						{
							swl.setquantity(qua5);
							break;
						}
						else if (qua5 > swl.getstock())
						{
							cout << "OUT OF ORDER" << endl;
						}
					}
					swl.bill();
					cout << "TOTAL BILL : " << swl.getbill() << endl;
					break;
				default:
					cout << "INVALID INPUT " << endl;
					break;
				}
				break;
			case 2:
				int choice3;
				cout << "ENTER 1 FOR BAGS " << endl;
				cout << "ENTER 2 FOR JWELLERY " << endl;
				cout << "ENTER 3 FOR MAKEUP " << endl;
				cout << "ENTER 4 FOR FOOTWEAR " << endl;
				cin >> choice3;
				switch (choice3)
				{
				case 1:
					int clr3;
					cout << "ENTER 1 FOR BLACK " << endl;
					cout << "ENTER 2 FOR RED " << endl;
					cout << "ENTER 3 FOR GOLDEN" << endl;
					cout << "ENTER 4 FOR BROWN" << endl;
					cin >> clr3;
					if (clr3 == 1)
					{
						ba.setcolour("BLACK");
					}
					else if (clr3 == 2)
					{
						ba.setcolour("RED");
					}
					else if (clr3 == 3)
					{
						ba.setcolour("GOLDEN");
					}
					else if (clr3 == 4)
					{
						ba.setcolour("BROWN");
					}
					int typ2;
					cout << "ENTER 1 FOR HAND BAG " << endl;
					cout << "ENTER 2 FOR CLUTCHES " << endl;
					cout << "ENTER 3 FOR BRIDAL BAGS " << endl;
					cin >> typ2;
					if (typ2 == 1)
					{
						ba.settype("HAND BAG");
					}
					else if (typ2 == 2)
					{
						ba.settype("CLUTCHES");
					}
					else if (typ2 == 3)
					{
						ba.settype("BRIDAL BAGS");
					}
					int qua6;
					while (1)
					{
						cout << "ENTER QUANTITY : " << endl;
						cin >> qua6;
						if (qua6 < ba.getstock())
						{
							ba.setquantity(qua6);
							break;
						}
						else if (qua6 > ba.getstock())
						{
							cout << "OUT OF ORDER" << endl;
						}
					}
					ba.bill();
					cout << "TOTAL BILL : " << ba.getbill() << endl;
					break;
				case 2:
					int cat;
					cout << "ENTER 1 FOR EARINGS " << endl;
					cout << "ENTER 2 FOR BANGLES " << endl;
					cout << "ENTER 3 FOR NOSE PINS " << endl;
					cout << "ENTER 4 FOR RINGS " << endl;
					cin >> cat;
					if (cat == 1)
					{
						jwe.setcategory("EARINGS");
					}
					else if (cat == 2)
					{
						jwe.setcategory("BANGLES");
					}
					else if (cat == 3)
					{
						jwe.setcategory("NOSE PINS");
					}
					else if (cat == 3)
					{
						jwe.setcategory("RINGS");
					}
					int mat;
					cout << "ENTER 1 FOR GOLD " << endl;
					cout << "ENTER 2 FOR SILVER " << endl;
					cout << "ENTER 3 FOR ARTIFICIAL " << endl;
					cin >> mat;
					if (mat == 1)
					{
						jwe.setmaterial("GOLD");
					}
					else if (mat == 2)
					{
						jwe.setmaterial("SILVER");
					}
					else if (mat == 3)
					{
						jwe.setmaterial("ARTIFICIAL");
					}
					int qua7;
					while (1)
					{
						cout << "ENTER QUANTITY : " << endl;
						cin >> qua7;
						if (qua7 < jwe.getstock())
						{
							jwe.setquantity(qua7);
							break;
						}
						else if (qua7 > jwe.getstock())
						{
							cout << "OUT OF ORDER" << endl;
						}
					}
					jwe.bill();
					cout << "TOTAL BILL : " << jwe.getbill() << endl;
					break;
				case 3:
					int mcat;
					cout << "ENTER 1 FOR FACE" << endl;
					cout << "ENTER 2 FOR EYES" << endl;
					cout << "ENTER 3 FOR LIPS" << endl;
					cin >> mcat;
					if (mcat == 1)
					{
						mak.setcategory("FACE");
						int mtyp;
						cout << "ENTER 1 FOR BLUSHER" << endl;
						cout << "ENTER 2 FOR CREAM AND FOUNDATION" << endl;
						cout << "ENTER 3 FOR POWDER" << endl;
						cin >> mtyp;
						if (mtyp == 1)
						{
							mak.settype("BLUSHER");
						}
						else if (mtyp == 2)
						{
							mak.settype("CREAM AND FOUNDATION");
						}
						else if (mtyp == 3)
						{
							mak.settype("POWDER");
						}
					}
					else if (mcat == 2)
					{
						mak.setcategory("EYES");
						int mtyp1;
						cout << "ENTER 1 FOR EYE LINER" << endl;
						cout << "ENTER 2 FOR EYE PENCIL" << endl;
						cout << "ENTER 3 FOR EYE SHADOW" << endl;
						cin >> mtyp1;
						if (mtyp1 == 1)
						{
							mak.settype("EYE LINER");
						}
						else if (mtyp1 == 2)
						{
							mak.settype("EYE PENCIL");
						}
						else if (mtyp1 == 3)
						{
							mak.settype("EYE SHADOW");
						}

					}
					else if (mcat == 3)
					{
						mak.setcategory("LIPS");
						int mtyp2;
						cout << "ENTER 1 FOR LIPSTICK" << endl;
						cout << "ENTER 2 FOR LIPGLOSS" << endl;
						cin >> mtyp2;
						if (mtyp2 == 1)
						{
							mak.settype("LIPSTICK");
						}
						else if (mtyp2 == 2)
						{
							mak.settype("LIPGLOSS");
						}
					}
					int qua8;
					while (1)
					{
						cout << "ENTER QUANTITY : " << endl;
						cin >> qua8;
						if (qua8 < mak.getstock())
						{
							mak.setquantity(qua8);
							break;
						}
						else if (qua8 > mak.getstock())
						{
							cout << "OUT OF ORDER" << endl;
						}
					}
					mak.bill();
					cout << "TOTAL BILL : " << mak.getbill() << endl;
					break;
				case 4:
					int clr4;
					cout << "ENTER 1 FOR BLACK " << endl;
					cout << "ENTER 2 FOR RED " << endl;
					cout << "ENTER 3 FOR WHITE" << endl;
					cin >> clr4;
					if (clr4 == 1)
					{
						foot.setcolour("BLACK");
					}
					else if (clr4 == 2)
					{
						foot.setcolour("RED");
					}
					else if (clr4 == 3)
					{
						foot.setcolour("WHITE");
					}
					int typ3;
					cout << "ENTER 1 FOR KHUSSA " << endl;
					cout << "ENTER 2 FOR SANDALS" << endl;
					cin >> typ3;
					if (typ3 == 1)
					{
						foot.settype("KHUSSA");
					}
					else if (typ3 == 2)
					{
						foot.settype("SANDALS");
					}
					int si2;
					cout << "ENTER 1 FOR SMALL " << endl;
					cout << "ENTER 2 FOR MEDIUM " << endl;
					cout << "ENTER 3 FOR LARGE " << endl;
					cin >> si2;
					if (si2 == 1)
					{
						foot.setsize("SMALL");
					}
					else if (si2 == 2)
					{
						foot.setsize("MEDIUM");
					}
					else if (si2 == 3)
					{
						foot.setsize("LARGE");
					}
					int qua9;
					while (1)
					{
						cout << "ENTER QUANTITY : " << endl;
						cin >> qua9;
						if (qua9 < foot.getstock())
						{
							foot.setquantity(qua9);
							break;
						}
						else if (qua9 > foot.getstock())
						{
							cout << "OUT OF ORDER" << endl;
						}
					}
					foot.bill();
					cout << "TOTAL BILL : " << foot.getbill() << endl;
					break;
				default:
					cout << "INVALID INPUT " << endl;
					break;
				}
				break;
			default:
				cout << "INVALID INPUT" << endl;
				break;
			}
			break;
		case 2:
			int c1;
			cout << "ENTER 1 FOR CLOTHING " << endl;
			cout << "ENTER 2 FOR ACCESSORIES " << endl;
			cin >> c1;
			switch (c1)
			{
			case 1:
				int choice2;
				cout << "ENTER 1 FOR UNSTICHED " << endl;
				cout << "ENTER 2 FOR waistcoats " << endl;
				cout << "ENTER 3 FOR shawls " << endl;
				cout << "ENTER 4 FOR bottom " << endl;
				cout << "ENTER 5 FOR kameezshalwar" << endl;
				cout << "ENTER 6 FOR kurta" << endl;
				cin >> choice2;
				switch (choice2)
				{
				case 1:
					int vol;
					cout << "ENTER 1 FOR SPRING 21" << endl;
					cout << "ENTER 2 FOR WINTER 21" << endl;
					cout << "ENTER 3 FOR SUMMER 21" << endl;
					cin >> vol;
					if (vol == 1)
					{
						ustis.setvolume("SPRING 21");
					}
					else if (vol == 2)
					{
						ustis.setvolume("WINTER 21");
					}
					else if (vol == 3)
					{
						ustis.setvolume("SUMMER 21");
					}
					int col;
					cout << "ENTER 1 FOR BLACK " << endl;
					cout << "ENTER 2 FOR RED " << endl;
					cout << "ENTER 3 FOR WHITE " << endl;
					cin >> col;
					if (col == 1)
					{
						ustis.setcolor("BLACK");
					}
					else if (col == 2)
					{
						ustis.setcolor("RED");
					}
					else if (col == 3)
					{
						ustis.setcolor("WHITE");
					}
					int fab1;
					cout << "ENTER 1 FOR COTTON " << endl;
					cout << "ENTER 2 FOR POLYESTER " << endl;
					cout << "ENTER 3 FOR BLENDED " << endl;
					
					cin >> fab1;
					if (fab1 == 1)
					{
						ustis.setfabric("COTTON");
					}
					else if (fab1 == 2)
					{
						ustis.setfabric("POLYESTER");
					}
					else if (fab1 == 3)
					{
						ustis.setfabric("BLENDED");
					}
					int kur;
					cout << "ENTER 1 FOR kurta  " << endl;
					cout << "ENTER 2 FOR kameezshalwar " << endl;
					cin >> kur;
					if (kur == 1)
					{
						int tp;
						cout << "ENTER 1 FOR CASUAL " << endl;
						cout << "ENTER 2 FOR SEMI FORMAL " << endl;
						cout << "ENTER 3 FOR FORMAL " << endl;
						cout << "ENTER 4 FOR EXCLUSIVE " << endl;
						cin >> tp;
						if (tp == 1)
						{
							ustis.setkurta("CASUAL");

						}
						else if (tp == 2)
						{
							ustis.setkurta("SEMI FORMAL");
						}
						else if (tp == 3)
						{
							ustis.setkurta("FORMAL");
						}
						else if (tp == 4)
						{
							ustis.setkurta("EXCLUSIVE");
						}
						
					}
					else if (kur == 2)
					{
						int tp;
						cout << "ENTER 1 FOR CASUAL " << endl;
						cout << "ENTER 2 FOR SEMI FORMAL " << endl;
						cout << "ENTER 3 FOR FORMAL " << endl;
						cout << "ENTER 4 FOR EXCLUSIVE " << endl;
						cin >> tp;
						if (tp == 1)
						{
							ustis.setkameezshalwar("CASUAL");

						}
						else if (tp == 2)
						{
							ustis.setkameezshalwar("SEMI FORMAL");
						}
						else if (tp == 3)
						{
							ustis.setkameezshalwar("FORMAL");
						}
						else if (tp == 4)
						{
							ustis.setkameezshalwar("EXCLUSIVE");
						}
					}

					
					
					int qua;
					while (1)
					{
						cout << "ENTER QUANTITY : " << endl;
						cin >> qua;
						if (qua < ustis.getstock())
						{
							ustis.setquantity(qua);
							break;
						}
						else if (qua > ustis.getstock())
						{
							cout << "OUT OF ORDER" << endl;
						}
					}
					ustis.bill();
					cout << "TOTAL QUANTITY : " << ustis.getquantity() << endl;
					cout << "PRICE PER ARTICLE : " << ustis.getprice() << endl;
					cout << "TOTAL BILL : " << ustis.getbill() << endl;
					break;
				case 2:
					int vol1;
					cout << "ENTER 1 FOR SPRING 21" << endl;
					cout << "ENTER 2 FOR WINTER 21" << endl;
					cout << "ENTER 3 FOR SUMMER 21" << endl;
					cin >> vol1;
					if (vol1 == 1)
					{
						waist.setvolume("SPRING 21");
					}
					else if (vol1 == 2)
					{
						waist.setvolume("WINTER 21");
					}
					else if (vol1 == 3)
					{
						waist.setvolume("SUMMER 21");
					}
					int col1;
					cout << "ENTER 1 FOR BLACK " << endl;
					cout << "ENTER 2 FOR RED " << endl;
					cout << "ENTER 3 FOR WHITE " << endl;
					cin >> col1;
					if (col1 == 1)
					{
						waist.setcolor("BLACK");
					}
					else if (col1 == 2)
					{
						waist.setcolor("RED");
					}
					else if (col1 == 3)
					{
						waist.setcolor("WHITE");
					}
					int fab;
					cout << "ENTER 1 FOR COTTON " << endl;
					cout << "ENTER 2 FOR KHADDAR " << endl;
					cout << "ENTER 3 FOR SILK " << endl;
					cout << "ENTER 4 FOR LAWN " << endl;
					cin >> fab;
					if (fab == 1)
					{
						waist.setfabric("COTTON");
					}
					else if (fab == 2)
					{
						waist.setfabric("KHADDAR");
					}
					else if (fab == 3)
					{
						waist.setfabric("SILK");
					}
					else if (fab == 4)
					{
						waist.setfabric("LAWN");
					}
					int type;
					cout << "ENTER 1 FOR CASUAL " << endl;
					cout << "ENTER 2 FOR FORMAL " << endl;
					cin >> type;
					if (type == 1)
					{
						waist.settype("CASUAL");
					}
					else if (type == 2)
					{
						waist.settype("FORMAL");
					}


					int qua1;
					while (1)
					{
						cout << "ENTER QUANTITY :  " << endl;
						cin >> qua1;
						if (qua1 < waist.getstock())
						{
							waist.setquantity(qua1);
							break;
						}
						else if (qua1 > waist.getstock())
						{
							cout << "OUT OF ORDER" << endl;
						}
					}
					
					
					waist.bill();
					cout << "TOTAL QUANTITY : " << waist.getquantity() << endl;
					cout << "PRICE PER ARTICLE : " << waist.getprice() << endl;
					cout << "TOTAL BILL : " << waist.getbill() << endl;
					break;
				case 3:
					
					int vol2;
					cout << "ENTER 1 FOR SPRING 21 " << endl;
					cout << "ENTER 2 FOR SUMMER 21 " << endl;
					cout << "ENTER 3 FOR WINTER 21 " << endl;
					cin >> vol2;
					if (vol2 == 1)
					{
						sh.setvolume("SPRING 21");
					}
					else if (vol2 == 2)
					{
						sh.setvolume("SUMMER 21");
					}
					else if (vol2 == 3)
					{
						sh.setvolume("WINTER 21");
					}
					
					
					int fab3;
					cout << "ENTER 1 FOR COTTON " << endl;
					cout << "ENTER 2 FOR KHADDAR " << endl;
					cout << "ENTER 3 FOR SILK " << endl;
					cout << "ENTER 4 FOR LAWN " << endl;
					cin >> fab3;
					if (fab3 == 1)
					{
						sh.setfabric("COTTON");
					}
					else if (fab3 == 2)
					{
						sh.setfabric("KHADDAR");
					}
					else if (fab3 == 3)
					{
						sh.setfabric("SILK");
					}
					else if (fab3 == 4)
					{
						sh.setfabric("LAWN");
					}
					int cat;
					cout << "ENTER 1 FOR PLAIN CATEGORY " << endl;
					cout << "ENTER 2 FOR KARHAI CATEGORY " << endl;
					cin >> cat;
					if (cat == 1)
					{
						sh.setcategory("PLAIN");
					}
					else if (cat == 2)
					{
						sh.setcategory("KARHAI");
					}

					int qua3;
					while (1)
					{
						cout << "ENTER QUANTITY : " << endl;
						cin >> qua3;
						if (qua3 < sh.getstock())
						{
							sh.setquantity(qua3);
							break;
						}
						else if (qua3 > sh.getstock())
						{
							cout << "OUT OF ORDER" << endl;
						}
					}
					sh.bill();
					cout << "TOTAL QUANTITY : " << sh.getquantity() << endl;
					cout << "PRICE PER ARTICLE : " << sh.getprice() << endl;
					cout << "TOTAL BILL : " << sh.getbill() << endl;
					break;
				case 4:
					
					int vol3;
					cout << "ENTER 1 FOR SPRING 21 " << endl;
					cout << "ENTER 2 FOR SUMMER 21 " << endl;
					cout << "ENTER 3 FOR WINTER 21 " << endl;
					cin >> vol3;
					if (vol3 == 1)
					{
						bt.setvolume("SPRING 21");
					}
					else if (vol3 == 2)
					{
						bt.setvolume("SUMMER 21");
					}
					else if (vol3 == 3)
					{
						bt.setvolume("WINTER 21");
					}
					int clr1;
					cout << "ENTER 1 FOR BLACK " << endl;
					cout << "ENTER 2 FOR RED " << endl;
					cout << "ENTER 3 FOR WHITE " << endl;
					cin >> clr1;
					if (clr1 == 1)
					{
						bt.setcolor("BLACK");
					}
					else if (clr1 == 2)
					{
						bt.setcolor("RED");
					}
					else if (clr1 == 3)
					{
						bt.setcolor("WHITE");
					}
					int fab4;
					cout << "ENTER 1 FOR COTTON " << endl;
					cout << "ENTER 2 FOR KHADDAR " << endl;
					cout << "ENTER 3 FOR SILK " << endl;
					cout << "ENTER 4 FOR LAWN " << endl;
					cin >> fab4;
					if (fab4 == 1)
					{
						bt.setfabric("COTTON");
					}
					else if (fab4 == 2)
					{
						bt.setfabric("KHADDAR");
					}
					else if (fab4 == 3)
					{
						bt.setfabric("SILK");
					}
					else if (fab4 == 4)
					{
						bt.setfabric("LAWN");
					}
					int typ;
					cout << "ENTER 1 FOR SALWAR " << endl;
					cout << "ENTER 2 FOR TROUSER " << endl;
					
					cin >> typ;
					if (typ == 1)
					{
						bt.setcategory("SALWAR");
					}
					else if (typ == 2)
					{
						bt.setcategory("TROUSER");
					}
					
					int qua4;
					while (1)
					{
						cout << "ENTER QUANTITY : " << endl;
						cin >> qua4;
						if (qua4 < bt.getstock())
						{
							bt.setquantity(qua4);
							break;
						}
						else if (qua4 > bt.getstock())
						{
							cout << "OUT OF ORDER" << endl;
						}
					}
					bt.bill();
					cout << "TOTAL QUANTITY : " << bt.getquantity() << endl;
					cout << "PRICE PER ARTICLE : " << bt.getprice() << endl;
					cout << "TOTAL BILL : " << bt.getbill() << endl;
					break;
				case 5:
					
					int v;
					cout << "ENTER 1 FOR SPRING 21" << endl;
					cout << "ENTER 2 FOR WINTER 21" << endl;
					cout << "ENTER 3 FOR SUMMER 21" << endl;
					cin >> v;
					if (v == 1)
					{
						ks.setvolume("SPRING 21");
					}
					else if (v == 2)
					{
						ks.setvolume("WINTER 21");
					}
					else if (v == 3)
					{
						ks.setvolume("SUMMER 21");
					}
					int sa;
					cout << "ENTER 1 FOR BLACK " << endl;
					cout << "ENTER 2 FOR RED " << endl;
					cout << "ENTER 3 FOR WHITE " << endl;
					cin >> sa;
					if (sa == 1)
					{
						ks.setcolor("BLACK");
					}
					else if (sa == 2)
					{
						ks.setcolor("RED");
					}
					else if (sa == 3)
					{
						ks.setcolor("WHITE");
					}
					int fb;
					cout << "ENTER 1 FOR COTTON " << endl;
					cout << "ENTER 2 FOR POLYESTER " << endl;
					cout << "ENTER 3 FOR BLENDED " << endl;

					cin >> fb;
					if (fb == 1)
					{
						ks.setfabric("COTTON");
					}
					else if (fb == 2)
					{
						ks.setfabric("POLYESTER");
					}
					else if (fb == 3)
					{
						ks.setfabric("BLENDED");
					}
					int tp;
					cout << "ENTER 1 FOR CASUAL " << endl;
					cout << "ENTER 2 FOR SEMI FORMAL " << endl;
					cout << "ENTER 3 FOR FORMAL " << endl;
					cout << "ENTER 4 FOR EXCLUSIVE " << endl;
					cin >> tp;
					if (tp == 1)
					{
						ks.settype("CASUAL");

					}
					else if (tp == 2)
					{
						ks.settype("SEMI FORMAL");
					}
					else if (tp == 3)
					{
						ks.settype("FORMAL");
					}
					else if (tp == 4)
					{
						ks.settype("EXCLUSIVE");
					}

					int qua5;
					while (1)
					{
						cout << "ENTER QUANTITY : " << endl;
						cin >> qua5;
						if (qua5 < ks.getstock())
						{
							ks.setquantity(qua5);
							break;
						}
						else if (qua5 > ks.getstock())
						{
							cout << "OUT OF ORDER" << endl;
						}
					}
					ks.bill();
					cout << "TOTAL QUANTITY : " << ks.getquantity() << endl;
					cout << "PRICE PER ARTICLE : " << ks.getprice() << endl;
					cout << "TOTAL BILL : " << ks.getbill() << endl;
					break;
				case 6:
					int vv;
					cout << "ENTER 1 FOR SPRING 21" << endl;
					cout << "ENTER 2 FOR WINTER 21" << endl;
					cout << "ENTER 3 FOR SUMMER 21" << endl;
					cin >> vv;
					if (vv == 1)
					{
						kt.setvolume("SPRING 21");
					}
					else if (vv == 2)
					{
						kt.setvolume("WINTER 21");
					}
					else if (vv == 3)
					{
						kt.setvolume("SUMMER 21");
					}
					int lo;
					cout << "ENTER 1 FOR BLACK " << endl;
					cout << "ENTER 2 FOR RED " << endl;
					cout << "ENTER 3 FOR WHITE " << endl;
					cin >> lo;
					if (lo == 1)
					{
						kt.setcolor("BLACK");
					}
					else if (lo == 2)
					{
						kt.setcolor("RED");
					}
					else if (lo == 3)
					{
						kt.setcolor("WHITE");
					}
					int f;
					cout << "ENTER 1 FOR COTTON " << endl;
					cout << "ENTER 2 FOR LAWN " << endl;
					cout << "ENTER 3 FOR JACQUARD " << endl;

					cin >> f;
					if (f == 1)
					{
						kt.setfabric("COTTON");
					}
					else if (f == 2)
					{
						kt.setfabric("LAWN");
					}
					else if (f == 3)
					{
						kt.setfabric("JACQUARD");
					}
					int tt;
					cout << "ENTER 1 FOR CASUAL " << endl;
					cout << "ENTER 2 FOR SEMI FORMAL " << endl;
					cout << "ENTER 3 FOR FORMAL " << endl;
					cin >> tt;
					
					if (tt == 1)
					{
						kt.settype("CASUAL");

					}
					else if (tt == 2)
					{
						kt.settype("SEMI FORMAL");
					}
					else if (tt == 3)
					{
						kt.settype("FORMAL");
					}
					

					int q;
					while (1)
					{
						cout << "ENTER QUANTITY : " << endl;
						cin >> q;
						if (q < kt.getstock())
						{
							kt.setquantity(qua5);
							break;
						}
						else if (q > kt.getstock())
						{
							cout << "OUT OF ORDER" << endl;
						}
					}
					kt.bill();
					cout << "TOTAL QUANTITY : " << kt.getquantity() << endl;
					cout << "PRICE PER ARTICLE : " << kt.getprice() << endl;
					cout << "TOTAL BILL : " << kt.getbill() << endl;
					break;

				default:
					cout << "INVALID INPUT " << endl;
					break;
				}
				break;
			case 2:
				int choice3;
				cout << "ENTER 1 FOR fragrences " << endl;
				cout << "ENTER 2 FOR footwears " << endl;
				cout << "ENTER 3 FOR caps " << endl;
				
				cin >> choice3;
				switch (choice3)
				{
				case 1:
					
					
					int typ2;
					cout << "ENTER 1 FOR OODH  " << endl;
					cout << "ENTER 2 FOR OBSSESSION " << endl;
					cout << "ENTER 3 FOR SPECIAL " << endl;
					cout << "ENTER 4 FOR TURGUT " << endl;
					cin >> typ2;
					if (typ2 == 1)
					{
						fr.setoodh("OODH");
					}
					else if (typ2 == 2)
					{
						fr.setoodh("OBSSESSION");
					}
					else if (typ2 == 3)
					{
						fr.setoodh("SPECIAL");
					}
					else if (typ2 == 4)
					{
						fr.setoodh("TURGUT");
					}
					int qua6;
					while (1)
					{
						cout << "ENTER QUANTITY : " << endl;
						cin >> qua6;
						if (qua6 < fr.getstock())
						{
							fr.setquantity(qua6);
							break;
						}
						else if (qua6 > fr.getstock())
						{
							cout << "OUT OF ORDER" << endl;
						}
					}
					fr.bill();
					cout << "TOTAL QUANTITY : " << ftt.getquantity() << endl;
					cout << "PRICE PER ARTICLE : " << ftt.getprice() << endl;
					cout << "TOTAL BILL : " << ftt.getbill() << endl;
					break;
				case 2:
					int clr4;
					cout << "ENTER 1 FOR BLACK " << endl;
					cout << "ENTER 2 FOR RED " << endl;
					cout << "ENTER 3 FOR WHITE" << endl;
					cin >> clr4;
					if (clr4 == 1)
					{
						ftt.setcolour("BLACK");
					}
					else if (clr4 == 2)
					{
						ftt.setcolour("RED");
					}
					else if (clr4 == 3)
					{
						ftt.setcolour("WHITE");
					}
					int typ3;
					cout << "ENTER 1 FOR KHUSA " << endl;
					cout << "ENTER 2 FOR KHERI" << endl;
					cout << "ENTER 3 FOR SANDELS" << endl;
					cout << "ENTER 4 FOR FLAT" << endl;
					cout << "ENTER 5 FOR BOOTS" << endl;
					cin >> typ3;
					if (typ3 == 1)
					{
						ftt.settype("KHUSA");
					}
					else if (typ3 == 2)
					{
						ftt.settype("KHERI");
					}
					else if (typ3 == 3)
					{
						ftt.settype("SANDELS");
					}
					else if (typ3 == 4)
					{
						ftt.settype("FLAT");
					}
					else if (typ3 == 5)
					{
						ftt.settype("BOOTS");
					}
					int si2;
					cout << "ENTER 1 FOR SMALL " << endl;
					cout << "ENTER 2 FOR MEDIUM " << endl;
					cout << "ENTER 3 FOR LARGE " << endl;
					cin >> si2;
					if (si2 == 1)
					{
						ftt.setsize("SMALL");
					}
					else if (si2 == 2)
					{
						ftt.setsize("MEDIUM");
					}
					else if (si2 == 3)
					{
						ftt.setsize("LARGE");
					}
					int qua9;
					while (1)
					{
						cout << "ENTER QUANTITY : " << endl;
						cin >> qua9;
						if (qua9 < ftt.getstock())
						{
							ftt.setquantity(qua9);
							break;
						}
						else if (qua9 > ftt.getstock())
						{
							cout << "OUT OF ORDER" << endl;
						}
					}
					ftt.bill();
					cout << "TOTAL QUANTITY : " << ftt.getquantity() << endl;
					cout << "PRICE PER ARTICLE : " << ftt.getprice() << endl;
					cout << "TOTAL BILL : " << ftt.getbill() << endl;
					break;
				case 3:
					int mcat;
					cout << "ENTER 1 FOR CASUAL" << endl;
					cout << "ENTER 2 FOR FORMAL" << endl;
					cout << "ENTER 3 FOR WINTER" << endl;
					cout << "ENTER 3 FOR TRADITIONAL" << endl;
					cin >> mcat;
					if (mcat == 1)
					{
						cap.setstyle("CASUAL");
					}
					else if (mcat == 2)
					{
						cap.setstyle("FORMAL");

					}
					else if (mcat == 3)
					{
						cap.setstyle("WINTER");
					}
					else if (mcat == 4)
					{
						cap.setstyle("TRADITIONAL");
					}
					int qua8;
					while (1)
					{
						cout << "ENTER QUANTITY : " << endl;
						cin >> qua8;
						if (qua8 < cap.getstock())
						{
							cap.setquantity(qua8);
							break;
						}
						else if (qua8 > cap.getstock())
						{
							cout << "OUT OF ORDER" << endl;
						}
					}
					cap.bill();
					cout << "TOTAL QUANTITY : " << cap.getquantity() << endl;
					cout << "PRICE PER ARTICLE : " << cap.getprice() << endl;
					cout << "TOTAL BILL : " << cap.getbill() << endl;
					
					break;
				
				default:
					cout << "INVALID INPUT " << endl;
					break;
				}
				break;
			default:
				cout << "INVALID INPUT" << endl;
				break;
			}
			break;

		case 0:
			exit(0);
		default:
			cout << "INVALID INPUT" << endl;
		}
	} while (choice != 0);

}