

//#include <catch.hpp>
#include <CvPlot/core.h>
//#include <opencv2/opencv.hpp>   // 最小限のインクルードにしたい。
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <CvPlot/gui/show.h>
//#include "mandelbrot.h"
//#include <chrono>
#include "CvPlot/cvplot.h"

using namespace CvPlot;


int main(int argc, char* argv[])
{

    // ToDo: Write the code you want to plot
    Axes axes = plot(std::vector<double>{ 3, 3, 4, 6, 4, 3 }, "-o");
    cv::Mat mat = axes.render(400, 600);
    cv::imshow("testCaseName", mat);
    cv::waitKey();
    cv::destroyAllWindows();

    return 0;
}
