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

    // variables


  public slots:
    void setReadOnly(bool);
    void setRepresentation(int);


  signals:


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


  private slots:


};

#endif // _TF_TRANSFORM_REP_SELECTION_WIDGET_H_