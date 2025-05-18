#include<iostream>
#include<cstring>

const int  MAX_PRODUCTS=50;

using namespace std;

struct product {
	
	int Id;
	string Name;
	string Category;
	string Type;
	int Quantity;
	double Price;
};

void addProduct();
void listProduct();
void updateProduct();
void removeProduct();
void searchProduct();

product  inventory[MAX_PRODUCTS];

int productcount = 0;




void addProduct() {

 
	{
		if (productcount >= MAX_PRODUCTS) {

			cout << "Cannot add more products" << endl;
			return;
		}

		product p;

		cout << "Enter product Id: ";
		cin >> p.Id;

		cout << "Enter product name: ";
		cin >> p.Name;

		cout << "Enter product Category: ";
		cin >> p.Category;

		cout << "Enter product type: ";
		cin >> p.Type;

		cout << "Enter product Quantity: ";
		cin >> p.Quantity;

		cout << "Enter product price: ";
		cin >> p.Price;

		inventory[productcount++]=p;

		cout << "Product added "<<endl;

		cout << "======================================================" << endl;

	}
	}
void listProduct()
{
	if (productcount == 0) {

		cout << "empty" << endl;
		return;

	}

	for (int i = 0;i < productcount;i++)
	{
		
		cout << "ID: " << inventory[i].Id<<" ,";
		cout << "Name: " << inventory[i].Name<<",";
		cout << "Category: " << inventory[i].Category<<" ,";
		cout << "type: " << inventory[i].Type<<" ,";
		cout << "Qty: " << inventory[i].Quantity<<" ,";
		cout << "price: " << inventory[i].Price << endl;

		cout << "=============================================================" << endl;


	}

}

void updateProduct() {

	int Id;

	cout << "Enter product id: " << endl;
		cin >> Id;

	for (int i = 0; i < productcount;i++) {

		if (inventory[i].Id == Id) {

			cout << "Enter new name: ";
			cin >> inventory[i].Name;

			cout << "Enter new category: ";
			cin >> inventory[i].Category;

			cout << "Enter new type: ";
			cin >> inventory[i].Type;

			cout << "Enter new Quantity: ";
			cin >> inventory[i].Quantity;

			cout << "Enter new price: ";
			cin >> inventory[i].Price;

			cout << "Product updated" << endl;

			
			return;
		}

	}

	cout << "product not found." << endl;

	cout << "========================================================" << endl;

}

void removeProduct()

{
	int Id;

	cout << "Enter product id to remove: ";
	cin >> Id;

	for (int i = 0;i < productcount;i++)
	{
		if (inventory[i].Id == Id)
		{
			for (int j = i;j < productcount - 1;j++) {

				inventory[j] = inventory[j + 1];


			}

			productcount--;

			cout << "product removed" << endl;

			return;

		}

	}
	cout << "Product not found" << endl;

	cout << "========================================================" << endl;
}
		
void searchProduct() {

	string search;

	cout << "Enter name/type/category to search:  ";

	cin >> search;

	bool found = false;

	for (int i = 0;i < productcount;i++) {

		if (inventory[i].Name == search || inventory[i].Type == search ||
			inventory[i].Category == search) {

			cout << "ID: " << inventory[i].Id;
			cout << "Name: " << inventory[i].Name;
			cout << "Category: " << inventory[i].Category;
			cout << "type: " << inventory[i].Type;
			cout << "Qty: " << inventory[i].Quantity;

			found = true;

			cout << "=============================================================" << endl;

		}

	}
	if (!found) {

		cout << "product not found" << endl;
	}

}

int main() {

	int select;

	do {

		cout << "================= Menu ===================" << endl;

		cout << "1.Add product" << endl;
		cout << "2.List product" << endl;
		cout << "3.update product" << endl;
		cout << "4.Remove product" << endl;
		cout << "5.Search product" << endl;
		cout << "6.Exit" << endl;
		cout << "Choose option" << endl;
		

		cin >> select;

		switch (select) {

		case 1:addProduct();
			break;
		case 2:listProduct();
			break;
		case 3:updateProduct();
			break;
		case 4:removeProduct();
			break;
		case 5:searchProduct();
			break;
		case 6:
			cout << "Exit program";
			break;

		default:
			cout << "Invalid choice" << endl;

			cout << "=======================================================" << endl;
		}

	}

	while (select != 6);

	return 0;

}

