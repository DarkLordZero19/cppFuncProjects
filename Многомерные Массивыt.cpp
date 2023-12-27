#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//int main() {
//    srand(time(NULL));
//    const int maxValue = 9;
//    const int SIZE = 20;
//    int array [SIZE];
//    for (int i = 0; i < SIZE; i++) {
//        array[i] = rand() % maxValue + 1;
//        cout << array[i] << " ";
//    }
//
//    int arrayBuf[maxValue + 1] = {};
//    for (int i = 0; i < SIZE; i++) {
//        arrayBuf[array[i]]++;
//    }
//
//    for (int i = 0, k=0; i < maxValue + 1; i++) {
//        while (arrayBuf[i] > 0) {
//            array[k++] = i;
//            arrayBuf[i]--;
//        }
//    }
//
//    cout << endl;
//    for (int i = 0; i < SIZE; i++) {
//        cout << array[i] << " ";
//}

//int main() {
//
//	srand(time(NULL));
//	const int COUNT_STUDENTS = 4;
//	const int COUNT_DISCIPLINES = 5;
//	int arr[COUNT_STUDENTS][COUNT_DISCIPLINES];
//	float summ = 0;
//
//	cout << "\t|rus\t|end\t|math\t|lit\t|geogr" << endl;
//	for (int i = 0; i < COUNT_STUDENTS; i++) {
//		cout << "St " << i + 1 << "\t";
//		for (int j = 0; j < COUNT_DISCIPLINES; i++) {
//			arr[i][j] = 2 + rand() % 4;
//			cout << "| "<<arr[i][j] << "\t";
//			summ += arr[i][j];
//		}
//		cout << endl;
//	}
//	cout << endl;
//	cout << "avg all students = " << summ / (COUNT_STUDENTS * COUNT_DISCIPLINES);
//}

int main() {

	srand(time(NULL));
	const int COUNT_STUDENTS = 4;
	const int COUNT_DISCIPLINES = 2;
	int arr[COUNT_STUDENTS][COUNT_DISCIPLINES];
	float summResult = 0;
	float BestStValue = 0;
	int BestStind = 0;
	float WorstStValue = 5;
	int WorstStind = 0;
	float bestStDiscValue = 0;
	int bestStDiscind = 0;
	float WorstStDiscValue = 5;
	int WorstStDiscind = 0;

	cout << "\t|rus\t|end\t|math\t|lit\t|geogr" << endl;
	for (int i = 0, summ; i < COUNT_STUDENTS; i++) {
		cout << "St " << i + 1 << "\t";
		summ = 0;
		for (int j = 0; j < COUNT_DISCIPLINES; i++) {
			arr[i][j] = 2 + rand() % 4;
			cout << "| " << arr[i][j] << "\t";
			summ += arr[i][j];
		}
		cout << "| " << (float)summ / COUNT_DISCIPLINES;
		summResult += summ;
		cout << endl;
	}
	cout<<"avgDisc"
	for (int j = 0, summ; j < COUNT_DISCIPLINES; i++) {
		summ = 0;
		for (int j = 0; j < COUNT_STUDENTS; i++) {
			summ += arr[i][j];
		}
	}

	cout << endl;
	cout << "avg all students = " << summResult / (COUNT_STUDENTS * COUNT_DISCIPLINES);
}

//int main() {
//    srand(time(NULL));
//    const int COUNT_STUDENTS = 6;
//    const int COUNT_DISCIPLINES = 3;
//    int arr[COUNT_STUDENTS][COUNT_DISCIPLINES];
//    float summ = 0;
//
//    cout << "\t|rus\t|end\t|math\t|lit\t|geogr\t|avg st" << endl;
//    for (int i = 0; i < COUNT_STUDENTS; i++) {
//        cout << "St " << i + 1 << "\t";
//        float studentSum = 0;
//        for (int j = 0; j < COUNT_DISCIPLINES; j++) {
//            arr[i][j] = 2 + rand() % 4;
//            cout << "| " << arr[i][j] << "\t";
//            studentSum += arr[i][j];
//        }
//        summ += studentSum;
//        cout << "| Avg: " << studentSum / COUNT_DISCIPLINES << endl;
//    }
//    cout << endl;
//    float avgAllStudents = summ / (COUNT_STUDENTS * COUNT_DISCIPLINES);
//    cout << "Avg all students = " << avgAllStudents << endl;
//
//    for (int i = 0; i < COUNT_STUDENTS; i++) {
//        float studentAvg = 0;
//        for (int j = 0; j < COUNT_DISCIPLINES; j++) {
//            studentAvg += arr[i][j];
//        }
//        studentAvg /= COUNT_DISCIPLINES;
//        if (studentAvg >= avgAllStudents) {
//            cout << "St " << i + 1 << " (Avg: " << studentAvg << ")" << endl;
//        }
//    }
//
//    for (int i = 0; i < COUNT_STUDENTS; i++) {
//        float studentAvg = 0;
//        for (int j = 0; j < COUNT_DISCIPLINES; j++) {
//            studentAvg += arr[i][j];
//        }
//        studentAvg /= COUNT_DISCIPLINES;
//        if (studentAvg < avgAllStudents) {
//            cout << "St " << i + 1 << " (Avg: " << studentAvg << ")" << endl;
//        }
//    }
//
//}

