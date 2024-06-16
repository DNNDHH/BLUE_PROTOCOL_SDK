#pragma once

 

// Package: ImagineView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ImagineView.ImagineView_C
// 0x0040 (0x02F0 - 0x02B0)
class UImagineView_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Close;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Btn_Image;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose01_C*                          CmnClose01;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlockerForAnimOut;                               // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ImagineView(int32 EntryPoint);
	void BndEvt__ImagineView_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature();
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void Finish();
	void SetImagineId(int32 ImagineId);
	void OnPress_Cancel();
	void BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnLoaded_CCDE58614D0A5E59AD05F894C6E3D2D1(class UObject* Loaded);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ImagineView_C">();
	}
	static class UImagineView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImagineView_C>();
	}
};
static_assert(alignof(UImagineView_C) == 0x000008, "Wrong alignment on UImagineView_C");
static_assert(sizeof(UImagineView_C) == 0x0002F0, "Wrong size on UImagineView_C");
static_assert(offsetof(UImagineView_C, UberGraphFrame) == 0x0002B0, "Member 'UImagineView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UImagineView_C, AnimOut) == 0x0002B8, "Member 'UImagineView_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UImagineView_C, AnimIn) == 0x0002C0, "Member 'UImagineView_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UImagineView_C, Btn_Close) == 0x0002C8, "Member 'UImagineView_C::Btn_Close' has a wrong offset!");
static_assert(offsetof(UImagineView_C, Btn_Image) == 0x0002D0, "Member 'UImagineView_C::Btn_Image' has a wrong offset!");
static_assert(offsetof(UImagineView_C, CmnClose01) == 0x0002D8, "Member 'UImagineView_C::CmnClose01' has a wrong offset!");
static_assert(offsetof(UImagineView_C, UIBlocker) == 0x0002E0, "Member 'UImagineView_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UImagineView_C, UIBlockerForAnimOut) == 0x0002E8, "Member 'UImagineView_C::UIBlockerForAnimOut' has a wrong offset!");

}

