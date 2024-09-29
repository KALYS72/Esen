#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int start = 0;
    string b = "17:00";
    for (int i = 0; i < 5; i++)
    {
        string dig(1, b[i]);
        if (b[i] != '0' && b[i] != ':'){
            if (i == 0)
            {
                start += stoi(dig) * 600;
            }
            else if (i == 1)
            {
                start += stoi(dig) * 60;
            }
            else if (i == 3)
            {
                start += stoi(dig) * 10;
            }
            else if (i == 4)
            {
                start += stoi(dig);
            }
        }
    }
    cout << start;
}

// #include <iostream>
// #include <cmath>

// using namespace std;

// int main() {    
//     long long a, sum = 0, c=1, res;
//     cin >> a;
//     while (sum < a) {
//         sum += pow(c, 2);
//         res = pow(c, 2);
//         if (res < a) {
//             cout << res << " ";
//         }
//         c += 1;
//     }
// }


// #include <iostream>
// using namespace std;

// int main() {    
//     long long a, n=0, i;
//     cin >> a;
//     while (a > 0) {
//         i = a%10;
//         if (i > n) {
//             n = i;
//         }
//         a = a/10;
//     }
//     cout << n;
// }








// int main() {
//     int a;
//     cin >> a;
//     a = (a % 2 == 0) ? (a + 2): (a + 1);
//     cout << a;
// }

// int seconds(int a, int b, int c) {
//     int A = a*60*60;
//     int B = b*60;
//     int result = A + B + c;
//     return result;
// }

// int main() {
//     int a, b, c, d, e, f, start, finish, result, r1, r2, r3;
//     cin >> a >> b >> c >> d >> e >> f;
//     start = seconds(a, b, c);
//     finish = seconds(d, e, f);
//     result = finish - start;
//     r1 = result/60/60;
//     r2 = result/60%60;
//     r3 = result%60;
//     cout << r1 << " " << r2 << " " << r3;
// }

// #include <iomanip>

// int main() {
//     double i;
//     cin >> i;
//     long double P = 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844609550582231725359408128481117450284102701938521105559644622948954930381964428810975665933446128475648233786783165271201909145648566923460348610454326648213393607260249141273724587006606315588174881520920962829254091715364360113305305488204665213841469519415116094330572703657595919530921861173819326117931051185480744623799627495673518857527248912279381830119491298336733624406566430860213949463952247371907021798609437027705392171762931767523846748184676694051320005681271452635608277857713427577896091736371787214684409012249534301465495853710507922796892589235420199561121290219608640344181598136297747713099605187072113499999983729780499510597317328160963185950244594553469083026425223082533446850352619311881710100031378387528865875332083814206171776691473035982534904287554687311595628638823537875937519577818577805321712268066130019278766111959092164201989; 
//     double a = 2*P * i;
//     double b = P * i * i;
//     cout  << fixed << setprecision(4) << a << " " << b;
// }

// int main() {
//     int a;
//     cin >> a;
//     int b = a % 10; 
//     int c = (a / 10) % 10; 
//     int d = (a / 100) % 10; 
//     int e = (a / 1000); 
//     cout << (d * 10 + c);
// }


// #include <cmath>

// int main() {
//     long a;
//     long b;
//     cin >> a;
//     cin >> b;
//     int res_a = pow(a,2);
//     int res_b = pow(b,2);
//     cout << (res_a + res_b);
// }
//  #include <opencv2/imgcodecs.hpp>
//  #include <opencv2/highgui.hpp>
//  #include <opencv2/imgproc.hpp>
//  #include <iostream>

//  using namespace std;
//  using namespace cv;
 
/////////////////// Photo /////////////////////
//
// void main() {
// 	    string path = "Resources/Beatiful.jpg";
// 	    Mat img = imread(path); 	
//      imshow("image", img);
//      waitKey(0);
//  }


/////////////////// Video /////////////////////

// void main() {
//	string path = "Resources/30-seconds.mp4";
//	VideoCapture cap(path);
//	Mat img;
//	 
//	while (true) {
//		cap.read(img);
//
//		imshow("Video", img);
//		waitKey(1);
//	}
//}





/////////////////// WebCam /////////////////////

//void main() {
//	VideoCapture cap(0);
//	Mat img;
//
//	while (true) {
//
//		cap.read(img);
//		imshow("Image", img);
//		waitKey(20);
//	}
//}






// #include <opencv2/imgcodecs.hpp>
// #include <opencv2/highgui.hpp>
// #include <opencv2/imgproc.hpp>
// #include <opencv2/opencv.hpp>
// #include <iostream>

// using namespace std;
// using namespace cv;

// ///////////////// Photo /////////////////////

//  void main() {
//  	    string path = "Resources/Beatiful.jpg";
//  	    Mat img = imread(path); 	
//         Mat imgBlur, imgGray, imgCanny, imgDia, imgErode;
        
//         // Resized
//         resize(img, img, Size(860, 393));


//         // Color
//         cvtColor(img, imgGray, COLOR_BGR2GRAY); 
//         resize(imgGray, imgGray, Size(860, 393));


//         // Blur
//         GaussianBlur(img, imgBlur, Size(3, 3), 3, 0);
//         resize(imgBlur, imgBlur, Size(860, 393));


//         // Canny
//         Canny(imgBlur, imgCanny, 50, 75);
//         resize(imgCanny, imgCanny, Size(860, 393));


//         // Dialation
//         Mat kernel = getStructuringElement(MORPH_RECT, Size(5, 5));
//         dilate(imgCanny, imgDia, kernel);
//         resize(imgDia, imgDia, Size(860, 393));
//         erode(imgDia, imgErode, kernel);
//         resize(imgErode, imgErode, Size(860, 393));




//         imshow("image", img);
//         imshow("Gray Image", imgGray);
//         imshow("Blured Image", imgBlur);
//         imshow("Canny Image", imgCanny);
//         imshow("Dialated Canny Image", imgDia);
//         imshow("Dialated Erode Canny Image", imgErode);
//         waitKey(0);
//   }