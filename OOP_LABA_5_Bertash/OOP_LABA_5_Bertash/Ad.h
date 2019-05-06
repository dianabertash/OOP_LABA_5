#pragma once
class Ad
{
	private:
		char name[20];
		char customer[20];
	public:
		Ad();
		Ad(char* name, char* customer);
		~Ad();
		void SetName(char* n);
		void SetCustomer(char* c);
		const char* GetName() const;
		const char* GetCustomer() const;
		virtual int FullCost() = 0;
};

