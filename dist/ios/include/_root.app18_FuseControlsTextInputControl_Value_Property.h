// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/app18.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct TextInputControl;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct app18_FuseControlsTextInputControl_Value_Property;}

namespace g{

// internal sealed class app18_FuseControlsTextInputControl_Value_Property :527
// {
::g::Uno::UX::Property1_type* app18_FuseControlsTextInputControl_Value_Property_typeof();
void app18_FuseControlsTextInputControl_Value_Property__ctor_3_fn(app18_FuseControlsTextInputControl_Value_Property* __this, ::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector* name);
void app18_FuseControlsTextInputControl_Value_Property__Get1_fn(app18_FuseControlsTextInputControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void app18_FuseControlsTextInputControl_Value_Property__New1_fn(::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector* name, app18_FuseControlsTextInputControl_Value_Property** __retval);
void app18_FuseControlsTextInputControl_Value_Property__get_Object_fn(app18_FuseControlsTextInputControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void app18_FuseControlsTextInputControl_Value_Property__Set1_fn(app18_FuseControlsTextInputControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void app18_FuseControlsTextInputControl_Value_Property__get_SupportsOriginSetter_fn(app18_FuseControlsTextInputControl_Value_Property* __this, bool* __retval);

struct app18_FuseControlsTextInputControl_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::TextInputControl*> _obj;

    void ctor_3(::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector name);
    static app18_FuseControlsTextInputControl_Value_Property* New1(::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
