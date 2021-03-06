#ifndef _TF_TRANSFORM_REP_SELECTION_WIDGET_H_
#define _TF_TRANSFORM_REP_SELECTION_WIDGET_H_

// system includes

// library includes
#include <QWidget>

// custom includes


// forward declarations
class QHBoxLayout;
class QVBoxLayout;
class QLabel;
class QComboBox;
class TfTransformRepresentationWidget;

namespace tf2 {
  class Transform;
}


class TfTransformRepSelectionWidget
  :public QWidget
{
  Q_OBJECT
  // properties


  public:
    // enums
    enum ViewRepresentation { HomogeneousRepresentation, VectorRPYRepresentation, VectorQuaternionRepresentation, DenavitHartenbergRepresentation };

    // typedefs

    // const static member variables

    // static utility functions


    // constructors
    TfTransformRepSelectionWidget(QWidget* p_parent = 0);

    // overwritten methods

    // methods
    void setTransform(tf2::Transform* p_tf);
    int representation();
    void setRepresentation(int p_representation);

    // variables


  public Q_SLOTS:
    void setReadOnly(bool);
    void updateDisplay();


  Q_SIGNALS:
    void sizeChanged();


  private:
    // methods
    void createLayout();

    // variables
    tf2::Transform* m_tf;
    bool m_readOnly;

    QVBoxLayout* m_topLayout;
    QHBoxLayout* m_representationLayout;
    QLabel* m_representationLabel;
    QComboBox* m_representationComboBox;

    TfTransformRepresentationWidget* m_representationWidget;


  private Q_SLOTS:
    void setRepresentationInternal(int);


};

#endif // _TF_TRANSFORM_REP_SELECTION_WIDGET_H_
