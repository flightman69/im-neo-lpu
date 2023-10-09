// You are using GCC
#include <iostream>
using namespace std;

class ItemDetails{
    public:
        string m_name;
        int m_id, m_price;
        
        void GetDetails(const string& u_name, int u_id, int u_price){
            m_name = u_name;
            m_price = u_price;
            m_id = u_id;
        }
        
};

class DiscountedItem : public ItemDetails{
      public:
        float m_discnt_prcnt, m_discnt_amt;
        
        DiscountedItem() : ItemDetails() {}
        void GetDiscount(float u_discnt_prcnt){
            m_discnt_prcnt = u_discnt_prcnt;
            m_discnt_amt = m_price - (m_price * m_discnt_prcnt/100);
        }
        
        void Show(){
            cout << "Item name: " << m_name << endl;
            cout << "Item number: " << m_id << endl;
            cout << "Item price: " << m_price << endl;
            cout << "Discount percent: " << m_discnt_prcnt << "%" << endl;
            cout << "Discounted price: " << m_discnt_amt << endl;
        }
        
};

int main(){
    int n;
    cin >> n;
    DiscountedItem D[n];
    int tot = 0;
    float tot_discnt = 0;
    cout << "Item-wise bill: \n";
    for(int i = 0; i < n; i++){
        string name;
        int id, price, discnt_prcnt;
        cin >> name >> id >> price >> discnt_prcnt;
        
        D[i].GetDetails(name, id, price);
        D[i].GetDiscount((float)discnt_prcnt);
        tot += price;
        tot_discnt += (float)discnt_prcnt *  (float)price/100;
        D[i].Show();
    }
    
    cout << "\nTotal price: " << tot << endl;
    cout << "Total discount: " << tot_discnt << endl;
}
