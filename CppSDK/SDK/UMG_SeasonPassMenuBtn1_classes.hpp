#pragma once

 

// Package: UMG_SeasonPassMenuBtn1

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_SeasonPassMenuBtn1.UMG_SeasonPassMenuBtn1_C
// 0x0038 (0x02B0 - 0x0278)
class UUMG_SeasonPassMenuBtn1_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                BorderForColor;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn1;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchTxtImage;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             EventOnClicked;                                    // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         BtnType;                                           // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EventOnClicked__DelegateSignature();
	void ExecuteUbergraph_UMG_SeasonPassMenuBtn1(int32 EntryPoint);
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_SeasonPassMenuBtn1_C">();
	}
	static class UUMG_SeasonPassMenuBtn1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_SeasonPassMenuBtn1_C>();
	}
};
static_assert(alignof(UUMG_SeasonPassMenuBtn1_C) == 0x000008, "Wrong alignment on UUMG_SeasonPassMenuBtn1_C");
static_assert(sizeof(UUMG_SeasonPassMenuBtn1_C) == 0x0002B0, "Wrong size on UUMG_SeasonPassMenuBtn1_C");
static_assert(offsetof(UUMG_SeasonPassMenuBtn1_C, UberGraphFrame) == 0x000278, "Member 'UUMG_SeasonPassMenuBtn1_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuBtn1_C, BorderForColor) == 0x000280, "Member 'UUMG_SeasonPassMenuBtn1_C::BorderForColor' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuBtn1_C, Btn1) == 0x000288, "Member 'UUMG_SeasonPassMenuBtn1_C::Btn1' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuBtn1_C, SwitchTxtImage) == 0x000290, "Member 'UUMG_SeasonPassMenuBtn1_C::SwitchTxtImage' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuBtn1_C, EventOnClicked) == 0x000298, "Member 'UUMG_SeasonPassMenuBtn1_C::EventOnClicked' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuBtn1_C, BtnType) == 0x0002A8, "Member 'UUMG_SeasonPassMenuBtn1_C::BtnType' has a wrong offset!");

}

