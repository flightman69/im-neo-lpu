// You are using GCC
#include <iostream>
using namespace std;

class partA{
    protected:
        string m_taxPayerName, m_panId;
    
    public:
        partA(string taxPayerName, string panId){
            m_taxPayerName = taxPayerName;
            m_panId = panId;
        }
        
        void getAcc(){
            cout << "Account Holder Name: " << m_taxPayerName << endl;
            cout << "PAN: " << m_panId << endl;
        }
};

class partB : public partA{
    protected:
        int m_grossSalary, m_otherIncome;
        
    public: 
        partB(string taxPayerName, string panId, int grossSalary, int otherIncome)
        : partA(taxPayerName, panId), m_grossSalary(grossSalary), m_otherIncome(otherIncome) 
        {}
        
        void getInc(){
            cout << "Gross Salary: " << m_grossSalary << endl;
            cout << "Income from Other Sources: " << m_otherIncome << endl;
        }
        
};

class partC: public partA{
    protected:
        int m_deductions;
        
    public:
        partC(string taxPayerName, string panId, int deductions)
        : partA(taxPayerName, panId), m_deductions(deductions) {}
  
        void getDed(){
            cout << "Deductions: " << m_deductions << endl;
        }    
};

class taxComp: public partB, public partC{
    private:
        int amt;
        float taxAmt;
        
    public:
    
        taxComp(string taxPayerName, string panId, int grossSalary, int otherIncome, int deductions)
        : partB(taxPayerName, panId, grossSalary, otherIncome)
        , partC(taxPayerName, panId, deductions) 
        {}
        
        void CalcTax(){
            amt = m_grossSalary + m_otherIncome - m_deductions;
            taxAmt = amt * 0.3;
        }
        
        void getTax(){
            cout << "Taxable Income (computed): " << amt << endl;
            cout << "Tax Payable (computed): " << taxAmt << endl;
        }
        
        void getAcc(){
            partB::getAcc();
        }
};

int main(){
    string name, panid;
    int sal, otherIncome, ded;
    cin >> name >> panid >> sal >> otherIncome >> ded;
    
    taxComp T(name, panid, sal, otherIncome, ded);
    cout << "Income Tax Calculation" << endl;
    /*
    T.getAcc();
    T.getInc();
    T.getDed();
    T.getTax();
    */
    
    cout << "Account Holder Name: " << name << endl;
    cout << "PAN: " << panid << endl;
    cout << "Gross Salary: " << sal  << endl;
    cout << "Income from Other Sources: " << otherIncome << endl;
    cout << "Deductions: " << ded << endl;
    cout << "Taxable Income (computed): " << sal + otherIncome - ded << endl;
    cout << "Tax Payable (computed): " << (float)(sal+otherIncome - ded)*0.3 << endl;
}
