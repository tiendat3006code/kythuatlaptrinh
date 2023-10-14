#include <QCoreApplication>
#include <iostream>
#include <QDebug>
#include <QString>

using namespace std;

void test_1(){
    int response;
    qInfo()<<"Are you feeling well?  (1=yes,2=no)";
    cin>>response;
    if(response == 1)
        qInfo()<<"good";
    else if(response == 2)
        qInfo()<<"not good";
    else
        qInfo()<<"not answer";

}

void test_2(){
    std::string userInput;
    std::cout << "Nhập chuỗi: ";
    std::getline(std::cin, userInput);

    // Chuyển đổi std::string thành QString
    QString qString = QString::fromStdString(userInput);

    //        std::cout << "Chuỗi đã nhập (dưới dạng QString): " << qPrintable(qString) << std::endl;
    qInfo()<<"chuoi da nhap: "<<qString;
}
void test_3(){
    int sum, product(1);
    int a, b=2012, c(2004);
    double d=12.23, e(b);
    qInfo()<<"gia tri e: "<<d;

}
void test_4(){
    srand(time(NULL));
    int res = rand()%100 + 1;
    qInfo()<<"gia tri cua res: "<<res;
}
void test_5(){
    char a = 0103;
    qInfo()<<"gia tri cua char a: "<<a;
    char res[20];
    cin.getline(res, 20);
    qInfo()<<res;
    qInfo()<<res[18];
}
void test_6(int x){
    bool a,b;
    a= 0;
    b=a+x;
    qInfo()<<b;
}
void test_7(){
    double a = 1.0;
    //    double b = 0.1 + 0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1;
    double b = 0.5+0.5;
    if( a== b) qInfo()<<"bang";
    else {
        qInfo()<<"khac nhau";
        qInfo()<<"gia tri cua a:" <<a;
        qInfo()<<"gia tri cua b: "<<b;
    }

}
void tinhdiem(){
    float diemGK, diemCK, diemKT;
    qInfo()<<"Nhap diem giua ky: ";
    cin>>diemGK;
    qInfo()<<"Nhap diem kiem tra: ";
    cin>>diemKT;
    qInfo()<<"Nhap diem cuoi ky: ";
    cin>>diemCK;
    qInfo()<<"Tong diem: "<<diemCK+diemGK+diemKT;
}
void checkAlphabet(){
    char a;
    cin>>a;
    if(isalpha(a)) qInfo()<<"la chu cai";
    else qInfo()<<"khong phai chu cai";
}
bool pytago(int a, int b, int c){
    if (sqrt(pow(a,2)+ pow(b,2)) == c) return true;
    else return false;
}
void tamgiac(){
    int a,b,c;
    qInfo()<<"Nhap do dai ba canh: ";
    cin>>a>>b>>c;
    if((a+b)<c) qInfo()<<"khong phai tam giac";
    else if((a+c)<b) qInfo()<<"khong phai tam giac";
    else if((b+c)<a) qInfo()<<"khong phai tam giac";
    else{
        qInfo()<<"la tam giac";
        if(a==b==c) qInfo()<<"Tam giac deu";
        else if(pytago(a,b,c) ||
                pytago(a,c,b)||
                pytago(b,c,a))
            qInfo()<<"Tam giac vuong";
        else qInfo()<<"Tam giac nhon";
    }
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //    qInfo()<<"hello world";
//    test_7();
//    tinhdiem();
//    checkAlphabet();
    tamgiac();
    return a.exec();
}
