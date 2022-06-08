#include<iostream>
#define Max 100

using namespace std;

int adjMat[Max][Max];

 // Jadikan matriks nol//
void initializeMat(int v)
{
	for(int i = 0; i < v; i++)
	{ 
	    for(int x = 0; x < v; x++ )
	    { 
	    adjMat[i][x] =0;
		}
	}
}

 // Tambahkan tepi ke grafik untuk membuatnya lebih terhubung//
void addEdge(int u, int v, int w)
{
	adjMat[u][v] = w;
	adjMat[v][u] = w;
}

// Cetak martix yang sudah di input//
void displayMat(int v)
{
    
	for (int i = 1; i <= v; i++)
	{
		cout << "\t";
		
		for (int x = 1; x <= v; x++)
		{
			cout << adjMat[i][x] <<"\t";
		}
		
		cout << endl;
	}
}

int main()
{
	 
	int vertice = 4;
	
	initializeMat(vertice);
	
	addEdge(1,2,5);
	addEdge(2,3,1);
	addEdge(4,1,3);
	addEdge(2,4,1);
	addEdge(3,1,1);
	
	displayMat(vertice);
	
	return 0;
}

