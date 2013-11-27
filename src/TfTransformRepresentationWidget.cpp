#include "TfTransformRepresentationWidget.h"

// system includes

// library includes

// custom includes


/*---------------------------------- public: -----------------------------{{{-*/
QString
TfTransformRepresentationWidget::number(double p_num)
{
  return QString::number(p_num, 'f', 4);
}

TfTransformRepresentationWidget::TfTransformRepresentationWidget(tf2::Transform* p_tf, QWidget* p_parent)
  :QWidget(p_parent),
   m_tf(p_tf)
{
  createLayout();
}

void
TfTransformRepresentationWidget::setTransform(tf2::Transform* p_tf)
{
  m_tf = p_tf;
}
/*------------------------------------------------------------------------}}}-*/

/*------------------------------- public Q_SLOTS: --------------------------{{{-*/
void
TfTransformRepresentationWidget::setReadOnly(bool p_ro)
{
  m_textEdit->setReadOnly(p_ro);
}
/*------------------------------------------------------------------------}}}-*/

/*---------------------------------- private: ----------------------------{{{-*/
/*------------------------------------------------------------------------}}}-*/

/*------------------------------- private Q_SLOTS: -------------------------{{{-*/
void
TfTransformRepresentationWidget::createLayout()
{
  m_textEdit = new QPlainTextEdit();

  m_topLayout = new QHBoxLayout();
  m_topLayout->addWidget(m_textEdit);
  setLayout(m_topLayout);
}
/*------------------------------------------------------------------------}}}-*/
