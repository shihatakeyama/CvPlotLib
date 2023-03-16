CvPlotLib

CvPlotはソフトウエアの部品として使用しにくい構造になっている。
CvPlotに汎用性を持たせるため、ライブラリ化しました。
本リポジトリは、CvPlotをライブラリ化する手段の一例として参考にしていただければと思います。

環境：
  VisualStudio2022

プロジェクト：
・CvPlotLib2
  ・CvPlotライブラリを作成するプロジェクトです。
  ・ippファイルのみをライブラリ化しました。
  ・場所はソリューション\lib\Debug の中にライブラリが出力されます。

・CvPlotTest2
  ・CvPlotライブラリを使用した簡単な実行プログラムを作成するプロジェクトです。


変更内容要約
・プリプロセッサに CVPLOT_HEADER_ONLY を定義しない。
  定義すると、ippファイルがインライン化されてライブラリの中の関数が実装されなくなってしまう。


// ライブラリ側ソースコード ippファイルの実装
CvPlotLib2.cpp
#define OPENCV_ALL_HPP		// ← OPENCV_ALL_HPP を定義してからippファイルをインクルードする。
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>

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



設定内容 必要に応じて ビットアーキテクチャ、インクルードパス、追加の依存ファイルなどの変更をして下さい。

// exe側 インクルードディレクトリ
D:\opencv-4.6.0\build
D:\opencv-4.6.0\source\modules\core\include
D:\opencv-4.6.0\source\modules\imgproc\include
D:\opencv-4.6.0\source\modules\highgui\include
D:\opencv-4.6.0\source\modules\imgcodecs\include
D:\opencv-4.6.0\source\modules\videoio\include
D:\opencv-4.6.0\source\mysource\CvPlotFix-main\examples
D:\opencv-4.6.0\source\mysource\CvPlotFix-main\inc

// exe側 追加の依存ファイル ライブラリ
$(SolutionDir)lib\Debug\opencv_core460d.lib
$(SolutionDir)lib\Debug\opencv_imgproc460d.lib
$(SolutionDir)lib\Debug\opencv_imgcodecs460d.lib
$(SolutionDir)lib\Debug\opencv_highgui460d.lib
$(SolutionDir)lib\$(Configuration)\CvPlotLib2.lib

