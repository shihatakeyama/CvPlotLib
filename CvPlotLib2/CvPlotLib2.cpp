// CvPlotLib2.cpp : スタティック ライブラリ用の関数を定義します。
//

//#include "pch.h"
#include "framework.h"

#define OPENCV_ALL_HPP      // opencvを総合インクルードは、本プロジェクトに必要以外のモジュールをインクルードしてしまうため除外したい。
#include <opencv2/core.hpp> // 
#include <opencv2/imgproc.hpp>


// imp ディレクトリにあるippファイルを実装する。
#include <CvPlot/imp/Axes.ipp>
#include <CvPlot/imp/Border.ipp>
#include <CvPlot/imp/cvplot.ipp>
#include <CvPlot/imp/Drawable.ipp>
#include <CvPlot/imp/DrawableDeque.ipp>
#include <CvPlot/imp/Group.ipp>
#include <CvPlot/imp/HorizontalGrid.ipp>
#include <CvPlot/imp/HorizontalLine.ipp>
#include <CvPlot/imp/Image.ipp>
#include <CvPlot/imp/LineBase.ipp>
#include <CvPlot/imp/makeAxes.ipp>
#include <CvPlot/imp/MouseAdapter.ipp>
#include <CvPlot/imp/Series.ipp>
#include <CvPlot/imp/Title.ipp>
#include <CvPlot/imp/util.ipp>
#include <CvPlot/imp/version.ipp>
#include <CvPlot/imp/VerticalGrid.ipp>
#include <CvPlot/imp/VerticalLine.ipp>
#include <CvPlot/imp/XAxis.ipp>
#include <CvPlot/imp/XLabel.ipp>
#include <CvPlot/imp/YAxis.ipp>
#include <CvPlot/imp/YLabel.ipp>






