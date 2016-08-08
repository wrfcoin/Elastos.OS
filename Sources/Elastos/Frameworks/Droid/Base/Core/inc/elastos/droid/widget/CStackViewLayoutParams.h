#ifndef __ELASTOS_DROID_WIDGET_CSTACKVIEWLAYOUTPARAMS_H__
#define __ELASTOS_DROID_WIDGET_CSTACKVIEWLAYOUTPARAMS_H__

#include "_Elastos_Droid_Widget_CStackViewLayoutParams.h"
#include "elastos/droid/widget/StackView.h"


namespace Elastos {
namespace Droid {
namespace Widget {

CarClass(CStackViewLayoutParams)
    , public StackView::LayoutParams
{
public:
    CAR_OBJECT_DECL()
};

}// namespace Widget
}// namespace Droid
}// namespace Elastos

#endif //__ELASTOS_DROID_WIDGET_CSTACKVIEWLAYOUTPARAMS_H__
