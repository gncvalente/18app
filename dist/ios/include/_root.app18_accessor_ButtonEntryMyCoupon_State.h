// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/app18.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct app18_accessor_ButtonEntryMyCoupon_State;}

namespace g{

// internal sealed class app18_accessor_ButtonEntryMyCoupon_State :101
// {
::g::Uno::UX::PropertyAccessor_type* app18_accessor_ButtonEntryMyCoupon_State_typeof();
void app18_accessor_ButtonEntryMyCoupon_State__ctor_1_fn(app18_accessor_ButtonEntryMyCoupon_State* __this);
void app18_accessor_ButtonEntryMyCoupon_State__GetAsObject_fn(app18_accessor_ButtonEntryMyCoupon_State* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void app18_accessor_ButtonEntryMyCoupon_State__get_Name_fn(app18_accessor_ButtonEntryMyCoupon_State* __this, ::g::Uno::UX::Selector* __retval);
void app18_accessor_ButtonEntryMyCoupon_State__New1_fn(app18_accessor_ButtonEntryMyCoupon_State** __retval);
void app18_accessor_ButtonEntryMyCoupon_State__get_PropertyType_fn(app18_accessor_ButtonEntryMyCoupon_State* __this, uType** __retval);
void app18_accessor_ButtonEntryMyCoupon_State__SetAsObject_fn(app18_accessor_ButtonEntryMyCoupon_State* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void app18_accessor_ButtonEntryMyCoupon_State__get_SupportsOriginSetter_fn(app18_accessor_ButtonEntryMyCoupon_State* __this, bool* __retval);

struct app18_accessor_ButtonEntryMyCoupon_State : ::g::Uno::UX::PropertyAccessor
{
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return _name_; }
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return Singleton_; }

    void ctor_1();
    static app18_accessor_ButtonEntryMyCoupon_State* New1();
};
// }

} // ::g
