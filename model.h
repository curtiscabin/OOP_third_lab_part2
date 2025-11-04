#ifndef MODEL_H
#define MODEL_H



#include <QObject>

class model : public QObject {
    Q_OBJECT
    int A;
    int B;
    int C;

    void swap(int &a, int&b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    
    void update();

    void update_model(){
        while (A > B || B > C){
            if (A > B) {
                swap(A,B);
            }
            if (B > C) {
                swap(B,C);
            }
            if (A > C) {
                swap(C,A);
            }
        }
        emit signal();
    }

public:
    model() : A(0), B(0), C(0){}

    void setA(int a){
        A = a;
        update_model();
    }

    void setB(int b){
        B = b;
        update_model();
    }

    void setC(int c){
        C = c;
        update_model();
    }

    int getA(){
        return A;
    }

    int getB(){
        return B;
    }

    int getC(){
        return C;
    }

signals:
    void signal();
};

#endif // MODEL_H
