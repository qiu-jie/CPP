#include <iostream>
#include<float.h>
using namespace std;

struct Matrix{
    int rows;//行
    int cols;//列
    float * pData;
};
float matrix_max(struct Matrix mat);

int main()
{
    Matrix matA={3,4};
    matA.pData=new float[matA.rows*matA.cols]{1.f,2.f,3.f};

    Matrix matB={4,8};
    matB.pData=new float[matB.rows*matB.cols]{10.f,20.f,30.f};

    Matrix matC={4,2};
    matC.pData=new float[matC.rows*matC.cols]{100.f,200.f,300.f};
    
    float maxa=matrix_max(matA);
    float maxb=matrix_max(matB);
    float maxc=matrix_max(matC);

    // float maxa=FLT_MIN;
    // float maxb=FLT_MIN;
    // float maxc=FLT_MIN;

    // //find max value of matA
    // for (int r = 0; r < matA.rows; r++)
    // {
    //     for (int c = 0; c < matA.cols; c++)
    //     {
    //         float val=matA.pData[r*matA.cols+c];
    //         maxa=(maxa>val?maxa:val);
    //     }        
    // }

    // //find max value of matB
    // for (int r = 0; r < matB.rows; r++)
    // {
    //     for (int c = 0; c < matB.cols; c++)
    //     {
    //         float val=matB.pData[r*matB.cols+c];
    //         maxb=(maxb>val?maxb:val);
    //     }        
    // }

    // //find max value of matC
    // for (int r = 0; r < matC.rows; r++)
    // {
    //     for (int c = 0; c < matC.cols; c++)
    //     {
    //         float val=matC.pData[r*matC.cols+c];
    //         maxc=(maxc>val?maxc:val);
    //     }        
    // }

    cout<<"max(matA) = "<<maxa<<endl;
    cout<<"max(matB) = "<<maxb<<endl;
    cout<<"max(matC) = "<<maxc<<endl;

    return 0;
}

float matrix_max(struct Matrix mat)
{
    float max=FLT_MIN;

    for (int r = 0; r < mat.rows; r++)
    {
        for (int c = 0; c < mat.cols; c++)
        {
            float val=mat.pData[r*mat.cols+c];
            max=(max>val?max:val);
        }        
    }
    return max;
}