# Cpp-DisplayImage
C++显示路径图片的程序
#include <iostream>：包含输入输出流库，用于在控制台输出消息。
#include <opencv2/opencv.hpp>：包含OpenCV库，用于图像处理和显示。
int main()：程序的主函数，程序从这里开始执行。
std::string imagePath = "您的图片文件路径";：定义一个字符串变量imagePath，用于存储图片文件路径。
cv::Mat image = cv::imread(imagePath);：使用OpenCV的imread函数读取指定路径的图片文件，并将其存储在cv::Mat类型的变量image中。
if (image.empty()) { ... }：检查图片是否成功加载。如果图片为空（即无法打开或读取），则输出错误消息并返回-1表示程序异常终止。
cv::namedWindow("Image", cv::WINDOW_NORMAL);：创建一个窗口，并命名为"Image"，用于显示图像。
cv::imshow("Image", image);：在名为"Image"的窗口中显示图像。
cv::waitKey(0);：等待用户按下任意键，以保持图像显示。参数0表示等待无限长的时间，直到用户按下键盘上的任意键。
return 0;：返回0，表示程序正常终止。
