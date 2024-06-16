#pragma once

 

// Package: CmnBtn17

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CmnBtn17.CmnBtn17_C
// 0x0060 (0x02D8 - 0x0278)
class UCmnBtn17_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn1;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt1;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextTableAsset*                      InTextTable;                                       // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InTextID;                                          // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C53[0x4];                                     // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             EventOnClicked;                                    // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   InTextName;                                        // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Infontsize;                                        // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_5C54[0x4];                                     // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          PressedSound;                                      // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          HoveredSound;                                      // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESystemSE                                     PressedSoundId;                                    // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	ESystemSE                                     HoveredSoundId;                                    // 0x02D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetSoundID(ESystemSE SoundId);
	void SetTextName(class FName Param_InTextName);
	void SetTextId(int32 TextId);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_113_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_130_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_CmnBtn17(int32 EntryPoint);
	void EventOnClicked__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CmnBtn17_C">();
	}
	static class UCmnBtn17_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCmnBtn17_C>();
	}
};
static_assert(alignof(UCmnBtn17_C) == 0x000008, "Wrong alignment on UCmnBtn17_C");
static_assert(sizeof(UCmnBtn17_C) == 0x0002D8, "Wrong size on UCmnBtn17_C");
static_assert(offsetof(UCmnBtn17_C, UberGraphFrame) == 0x000278, "Member 'UCmnBtn17_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCmnBtn17_C, Btn1) == 0x000280, "Member 'UCmnBtn17_C::Btn1' has a wrong offset!");
static_assert(offsetof(UCmnBtn17_C, Txt1) == 0x000288, "Member 'UCmnBtn17_C::Txt1' has a wrong offset!");
static_assert(offsetof(UCmnBtn17_C, InTextTable) == 0x000290, "Member 'UCmnBtn17_C::InTextTable' has a wrong offset!");
static_assert(offsetof(UCmnBtn17_C, InTextID) == 0x000298, "Member 'UCmnBtn17_C::InTextID' has a wrong offset!");
static_assert(offsetof(UCmnBtn17_C, EventOnClicked) == 0x0002A0, "Member 'UCmnBtn17_C::EventOnClicked' has a wrong offset!");
static_assert(offsetof(UCmnBtn17_C, InTextName) == 0x0002B0, "Member 'UCmnBtn17_C::InTextName' has a wrong offset!");
static_assert(offsetof(UCmnBtn17_C, Infontsize) == 0x0002B8, "Member 'UCmnBtn17_C::Infontsize' has a wrong offset!");
static_assert(offsetof(UCmnBtn17_C, PressedSound) == 0x0002C0, "Member 'UCmnBtn17_C::PressedSound' has a wrong offset!");
static_assert(offsetof(UCmnBtn17_C, HoveredSound) == 0x0002C8, "Member 'UCmnBtn17_C::HoveredSound' has a wrong offset!");
static_assert(offsetof(UCmnBtn17_C, PressedSoundId) == 0x0002D0, "Member 'UCmnBtn17_C::PressedSoundId' has a wrong offset!");
static_assert(offsetof(UCmnBtn17_C, HoveredSoundId) == 0x0002D1, "Member 'UCmnBtn17_C::HoveredSoundId' has a wrong offset!");

}

