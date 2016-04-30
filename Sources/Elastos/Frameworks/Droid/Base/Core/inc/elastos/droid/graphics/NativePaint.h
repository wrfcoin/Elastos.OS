#ifndef __ELASTOS_DROID_GRAPHICS_NATIVEPAINT_H__
#define __ELASTOS_DROID_GRAPHICS_NATIVEPAINT_H__

#include <SkPaint.h>
#include <minikin/FontFamily.h>
#include <elastos.h>

using android::FontVariant;

namespace Elastos {
namespace Droid {
namespace Graphics {

class NativePaint : public SkPaint
{
public:
    NativePaint();
    NativePaint(const NativePaint& paint);
    ~NativePaint();

    NativePaint& operator=(const NativePaint& other);

    friend bool operator==(const NativePaint& a, const NativePaint& b);
    friend bool operator!=(const NativePaint& a, const NativePaint& b) {
        return !(a == b);
    }

    void setLetterSpacing(float letterSpacing) {
        mLetterSpacing = letterSpacing;
    }

    float getLetterSpacing() const {
        return mLetterSpacing;
    }

    void setFontFeatureSettings(const String &fontFeatureSettings) {
        mFontFeatureSettings = fontFeatureSettings;
    }

    String getFontFeatureSettings() const {
        return mFontFeatureSettings;
    }

    void setTextLocale(const String &textLocale) {
        mTextLocale = textLocale;
    }

    String getTextLocale() const {
        return mTextLocale;
    }

    void setFontVariant(FontVariant variant) {
        mFontVariant = variant;
    }

    FontVariant getFontVariant() const {
        return mFontVariant;
    }

private:
    float mLetterSpacing;
    String mFontFeatureSettings;
    String mTextLocale;
    FontVariant mFontVariant;
};

} // namespace Graphics
} // namespace Droid
} // namespace Elastos

#endif // __ELASTOS_DROID_GRAPHICS_NATIVEPAINT_H__
