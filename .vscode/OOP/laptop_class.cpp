#include<iostream>              // constructors will make your life easier Bois
using namespace std;

class Laptop{
    public:
        string company_name;
        string model;
        int cost;
        // just creat
        // use constructor to initialize our objects
        // specify the number of arguments a constructor will take
        // they will make your code less wordy
        // save time and space for yoou


        Laptop(string acompany_name, string amodel,int acost){
            acompany_name=company_name;
            amodel=model;
            acost=cost;





        }
};



int main()
{
    Laptop elitebook("HP","Elite-840",4162476);
    // elitebook.company_name="HP";
    // elitebook.model="elite-480";
    // elitebook.cost=150000;

    Laptop lenovo("Lenovo","Thinkpad-giant",20000000);
    // lenovo.company_name="Lenovo limited";
    // lenovo.model="Thinkpad";
    // lenovo.cost=159000;
     // cout<<elitebook.company_name<<endl;
    // cout<<lenovo.cost<<endl;

    // Recomendation for laptop on basis of cost
    if(lenovo.cost<elitebook.cost)
    {
        cout<<"Lenovo is affordable"<<endl;
    }
    else{
        cout<<"ELite book is affordable"<<endl;
    }

    return 0;

}