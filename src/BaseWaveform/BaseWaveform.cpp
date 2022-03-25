//
// Created by иван on 25.03.2022.
//

#include "BaseWaveform.h"
BaseWaveform::BaseWaveform(QWidget *parent) {
}

void BaseWaveform::paintEvent(QPaintEvent *) {
  QPainter p(this); // Создаём новый объект рисовальщика
  p.setPen(QPen(Qt::red,1,Qt::SolidLine)); // Настройки рисования
  p.drawLine(0,0,width(),height()); // Рисование линии
}