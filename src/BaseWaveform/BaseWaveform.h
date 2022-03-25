//
// Created by иван on 25.03.2022.
//
#include <QWidget>
#include <QPainter>

#ifndef COMPUTER_GRAPHIC_PROJECT_SRC_BASEWAVEFORM_BASEWAVEFORM_H_
#define COMPUTER_GRAPHIC_PROJECT_SRC_BASEWAVEFORM_BASEWAVEFORM_H_

class BaseWaveform : public QWidget {
 public:
  BaseWaveform(QWidget * parent = 0);
 protected:
  void paintEvent(QPaintEvent *);
};

#endif //COMPUTER_GRAPHIC_PROJECT_SRC_BASEWAVEFORM_BASEWAVEFORM_H_
