#pragma once

 

// Package: CmnBtn21

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CmnBtn21.CmnBtn21_C
// 0x0078 (0x02F0 - 0x0278)
class UCmnBtn21_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn01;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Hovered;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Normal;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Pressed;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchBtnType;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt1;                                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextTableAsset*                      InTextTable;                                       // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InTextID;                                          // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F84[0x4];                                     // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             EventOnClicked;                                    // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   InTextName;                                        // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          PressedSound;                                      // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          HoveredSound;                                      // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESystemSE                                     PressedSoundId;                                    // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESystemSE                                     HoveredSoundId;                                    // 0x02E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EventOnClicked__DelegateSignature();
	void ExecuteUbergraph_CmnBtn21(int32 EntryPoint);
	void BndEvt__Btn01_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Btn01_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Btn01_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn01_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void SetPressedSoundId(ESystemSE InSoundId);
	void SetHoveredSoundId(ESystemSE InSoundId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CmnBtn21_C">();
	}
	static class UCmnBtn21_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCmnBtn21_C>();
	}
};
static_assert(alignof(UCmnBtn21_C) == 0x000008, "Wrong alignment on UCmnBtn21_C");
static_assert(sizeof(UCmnBtn21_C) == 0x0002F0, "Wrong size on UCmnBtn21_C");
static_assert(offsetof(UCmnBtn21_C, UberGraphFrame) == 0x000278, "Member 'UCmnBtn21_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCmnBtn21_C, Btn01) == 0x000280, "Member 'UCmnBtn21_C::Btn01' has a wrong offset!");
static_assert(offsetof(UCmnBtn21_C, Hovered) == 0x000288, "Member 'UCmnBtn21_C::Hovered' has a wrong offset!");
static_assert(offsetof(UCmnBtn21_C, Normal) == 0x000290, "Member 'UCmnBtn21_C::Normal' has a wrong offset!");
static_assert(offsetof(UCmnBtn21_C, Pressed) == 0x000298, "Member 'UCmnBtn21_C::Pressed' has a wrong offset!");
static_assert(offsetof(UCmnBtn21_C, SwitchBtnType) == 0x0002A0, "Member 'UCmnBtn21_C::SwitchBtnType' has a wrong offset!");
static_assert(offsetof(UCmnBtn21_C, Txt1) == 0x0002A8, "Member 'UCmnBtn21_C::Txt1' has a wrong offset!");
static_assert(offsetof(UCmnBtn21_C, InTextTable) == 0x0002B0, "Member 'UCmnBtn21_C::InTextTable' has a wrong offset!");
static_assert(offsetof(UCmnBtn21_C, InTextID) == 0x0002B8, "Member 'UCmnBtn21_C::InTextID' has a wrong offset!");
static_assert(offsetof(UCmnBtn21_C, EventOnClicked) == 0x0002C0, "Member 'UCmnBtn21_C::EventOnClicked' has a wrong offset!");
static_assert(offsetof(UCmnBtn21_C, InTextName) == 0x0002D0, "Member 'UCmnBtn21_C::InTextName' has a wrong offset!");
static_assert(offsetof(UCmnBtn21_C, PressedSound) == 0x0002D8, "Member 'UCmnBtn21_C::PressedSound' has a wrong offset!");
static_assert(offsetof(UCmnBtn21_C, HoveredSound) == 0x0002E0, "Member 'UCmnBtn21_C::HoveredSound' has a wrong offset!");
static_assert(offsetof(UCmnBtn21_C, PressedSoundId) == 0x0002E8, "Member 'UCmnBtn21_C::PressedSoundId' has a wrong offset!");
static_assert(offsetof(UCmnBtn21_C, HoveredSoundId) == 0x0002E9, "Member 'UCmnBtn21_C::HoveredSoundId' has a wrong offset!");

}

