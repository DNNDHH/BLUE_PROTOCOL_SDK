#pragma once

 

// Package: CmnBtn15

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CmnBtn15.CmnBtn15_C
// 0x0060 (0x02D8 - 0x0278)
class UCmnBtn15_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn01;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt1;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextTableAsset*                      InTextTable;                                       // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InTextID;                                          // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4777[0x4];                                     // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             EventOnClicked;                                    // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   InTextName;                                        // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESystemSE                                     OverridePressedSystemSeId;                         // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4778[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          PressedSound;                                      // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          HoveredSound;                                      // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESystemSE                                     PressedSoundId;                                    // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESystemSE                                     HoveredSoundId;                                    // 0x02D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EventOnClicked__DelegateSignature();
	void ExecuteUbergraph_CmnBtn15(int32 EntryPoint);
	void BndEvt__Btn01_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Btn01_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn01_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void SetPressedSoundId(ESystemSE InSoundId);
	void SetHoveredSoundId(ESystemSE InSoundId);
	void SetText(class USBTextTableAsset* Param_InTextTable, int32 Param_InTextID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CmnBtn15_C">();
	}
	static class UCmnBtn15_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCmnBtn15_C>();
	}
};
static_assert(alignof(UCmnBtn15_C) == 0x000008, "Wrong alignment on UCmnBtn15_C");
static_assert(sizeof(UCmnBtn15_C) == 0x0002D8, "Wrong size on UCmnBtn15_C");
static_assert(offsetof(UCmnBtn15_C, UberGraphFrame) == 0x000278, "Member 'UCmnBtn15_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCmnBtn15_C, Btn01) == 0x000280, "Member 'UCmnBtn15_C::Btn01' has a wrong offset!");
static_assert(offsetof(UCmnBtn15_C, Txt1) == 0x000288, "Member 'UCmnBtn15_C::Txt1' has a wrong offset!");
static_assert(offsetof(UCmnBtn15_C, InTextTable) == 0x000290, "Member 'UCmnBtn15_C::InTextTable' has a wrong offset!");
static_assert(offsetof(UCmnBtn15_C, InTextID) == 0x000298, "Member 'UCmnBtn15_C::InTextID' has a wrong offset!");
static_assert(offsetof(UCmnBtn15_C, EventOnClicked) == 0x0002A0, "Member 'UCmnBtn15_C::EventOnClicked' has a wrong offset!");
static_assert(offsetof(UCmnBtn15_C, InTextName) == 0x0002B0, "Member 'UCmnBtn15_C::InTextName' has a wrong offset!");
static_assert(offsetof(UCmnBtn15_C, OverridePressedSystemSeId) == 0x0002B8, "Member 'UCmnBtn15_C::OverridePressedSystemSeId' has a wrong offset!");
static_assert(offsetof(UCmnBtn15_C, PressedSound) == 0x0002C0, "Member 'UCmnBtn15_C::PressedSound' has a wrong offset!");
static_assert(offsetof(UCmnBtn15_C, HoveredSound) == 0x0002C8, "Member 'UCmnBtn15_C::HoveredSound' has a wrong offset!");
static_assert(offsetof(UCmnBtn15_C, PressedSoundId) == 0x0002D0, "Member 'UCmnBtn15_C::PressedSoundId' has a wrong offset!");
static_assert(offsetof(UCmnBtn15_C, HoveredSoundId) == 0x0002D1, "Member 'UCmnBtn15_C::HoveredSoundId' has a wrong offset!");

}

