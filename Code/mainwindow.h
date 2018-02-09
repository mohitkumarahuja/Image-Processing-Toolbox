#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

#include <vector>
#include <iomanip>

#include "pch.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_buttonLoadImage_clicked();

    void on_buttonAddSaltAndPepper_clicked();

    void on_buttonConvertColorSpaceConvertTo_clicked();

    void on_pushButtonCalculateHistogram_clicked();

    void on_pushButtonEqualizeHistogram_clicked();

    void on_buttonMorphologicalOperationsPerform_clicked();

    void on_buttonBlurringPerform_clicked();

    void on_buttonSobelLaplacianPerform_clicked();

    void on_comboBoxSobelLaplacianOperation_currentTextChanged(const QString &arg1);

    void on_buttonSharpeningPerform_clicked();

    void on_buttonCannyEdgeDetectPerform_clicked();

    void on_comboBoxHoughTransformFind_currentTextChanged(const QString &arg1);

    void on_buttonHoughTransformFind_clicked();

    void on_buttonContourFind_clicked();

    void on_buttonHarrisPerform_clicked();

    void on_buttonSaveCurrentImage_clicked();


private:
    Ui::MainWindow *ui;

    cv::Mat imageInput;
    cv::Mat imageOutput;

    cv::Mat imageMatching;

    cv::Mat imageLogo;

    std::vector<cv::Mat> imageHistory;

    // Reference: https://github.com/jayrambhia/qt-opencv-app/blob/master/MatToQImage.cpp
    QImage matToQImage(const cv::Mat&);

    void addSaltNoise(cv::Mat&, int);
    void addPepperNoise(cv::Mat&, int);

    void displayInputImage();
    void displayOutputImage();
    void displayLogoImage();

    QString pickImageDialog();

    void setEnabledToolboxes(bool);

    void setCurrentColorSpace(QString);

};

#endif // MAINWINDOW_H
