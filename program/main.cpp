#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cout << "\nEnter the lenght of A & B\n";
	cin >> n;
	if ((n>8)||(n<1))
    {
        cout << "\nPlease, enter A < 8.\n";
        cin >> n;
    }

    int *A = new int[n];
	int *B = new int[n];

	cout << "Enter ints for A.\n";
	for (int i = 0; i<n; i++)
        {   cin >> A[i];    }
	cout << "Enter ints for B.\n";
	for (int j = 0; j<n; j++)
        {   cin >> B[j];    }

    cout << "\nArray A: {";  //виведення масивів А і В з початковими значеннями
	for (int i = 0; i<n; i++) { cout << A[i] << " "; };
	cout << "}";
	cout << "\nArray B: {";
	for (int j = 0; j<n; j++) { cout << B[j] << " "; };
	cout << "}\n";

	cout << "\nBinar relation:\n";
	for (int i = 0; i<n; i++)
        {
            for (int j = 0; j<n; j++)
            {
                if (2*B[i]+1>A[j])
                {
                    cout << " {" << A[j] <<",";
                    cout << B[i] << "}";
                }

            }
        }

  int** Mat = new int* [n];
    for (int i = 0; i<n; i++)
            {
              Mat[i]=new int [n];
            }
    for (int i = 0; i<n; i++)
            {
                for (int j = 0; j<n; j++)
                {
                    if (2*B[i]+1>A[j])
                        {Mat[i][j]=1;}
                    else {Mat[i][j]=0;}
                }  }
    cout <<"\n\nMatrix.\n";
    for (int i = 0; i<n; i++)
            {
                for (int j = 0; j<n; j++)
                {
                    cout << Mat[j][i] << " ";
                }
                cout << "\n";
            }
    int refl = 0;
         for (int i = 0; i<n; i++)
            {
                if (Mat[i][i]==1)
                   {
                       refl++;
                   }   }
        if (refl==n)
        {
            cout << "\nMatrix is reflecsive.\n";
        }
        else cout << "\nMatrix isn`t reflecsive.\n";

    int sym = 0;
         for (int i = 0; i<n; i++)
            {
                for (int j = 0; j<n; j++)
                {
                    if (Mat[i][i]==Mat[j][i])
                       {
                           sym++;
                       } } }
        if (sym==pow(n,2))
            {
                cout << "\nMatrix is symmetric.\n";
            }
        else cout << "\nMatrix isn`t symmetric.\n";

    int a = 0;
    int b =0;
         for (int i = 0; i<n; i++)
            {
                for (int j = 0; j<n; j++)
                {
                    for (int k = 0; k<n; k++)
                    {
                        if(Mat[i][j]==Mat[j][k]==Mat[i][k]==1)
                        {
                            a++;
                        }
                        else if(Mat[i][j]==1 && Mat[j][k]==1 && Mat[i][k]==0)
                            {
                                b++;
                            }
                        else b++;
                    } } }
if (b>=1)       cout << "\nMatrix isn`t tranzitive.\n";
else if (a>=1)  cout << "\nMatrix is tranzitive.\n";
    cout << "\n";
    return 0;
}
