#include<iostream>
using namespace std;

void msort(int* arr, int n) {
	//بعمل الارراي نصين
	int* arr1 = new int[n / 2];
	int* arr2 = new int[n / 2 + n % 2];
	for (int i = 0; i < n / 2; i++)
		arr1[i] = arr[i];

	for (int i = 0; i < n / 2+n%2; i++)
		arr2[i] = arr[i+n/2];

	//مالكش دعوة بدول دللوقتي
	int p1 = 0; int p2 = 0;


	//لو ارراي فيه رفم واحد بس بعتبره مترتب و مبعملش حاجا
	if (n == 1)
		goto end;


	
	//برتب الاتنين ارراي
	//ملناش دعوة بيترتبوا ازاي
	//ببعتهم لفانكشن تطلعهم مترتبين جاهزين
	msort(arr1, n / 2);
	msort(arr2, n / 2 + n % 2);


	//هنا دور p1 و p2
	//p1 بيعرفنا احنا خدنا كام رقم من اول ارراي
	//عشان نعرف ايه الارقام اللي لسا مخدناهاش
	//نفس الكلام مع p2

	//اللوب ديه بتشوف اصغر رقم لسا مخدناهوش من ارراي 1 و ارراي 2
	//بتشوف انهي فيهم اصغر و بتحطه في الارراي الكبير
	for (int i = 0; i < n; i++) {
		if ((p2==n/2+n%2)||arr1[p1] < arr2[p2]&&p1<n/2) {
			arr[i] = arr1[p1];
			p1++;
		}

		else {
			arr[i] = arr2[p2];
			p2++;
		}


	}



end:
	int x = 0;
}

int main() {
	int arr[10];
	for (int i = 0; i < 10; i++)
		cin >> arr[i];

	msort(arr, 10);

	for (int i = 0; i < 10; i++)
		cout << arr[i]<<" ";


}
