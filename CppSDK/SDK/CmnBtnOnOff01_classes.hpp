#pragma once

 

// Package: CmnBtnOnOff01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CmnBtnOnOff01.CmnBtnOnOff01_C
// 0x0550 (0x07C8 - 0x0278)
class UCmnBtnOnOff01_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn1;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt1;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt2;                                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextTableAsset*                      InTextTable;                                       // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InTextID;                                          // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A3F[0x4];                                     // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             EventOnClicked;                                    // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   InTextName;                                        // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          PressedSound;                                      // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          HoveredSound;                                      // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESystemSE                                     PressedSoundId;                                    // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	ESystemSE                                     HoveredSoundId;                                    // 0x02D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBtnSelected;                                      // 0x02D2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bHovered;                                          // 0x02D3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A40[0x4];                                     // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FButtonStyle                           BtnOff;                                            // 0x02D8(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                           BtnOn;                                             // 0x0550(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void EventOnClicked__DelegateSignature();
	void ExecuteUbergraph_CmnBtnOnOff01(int32 EntryPoint);
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_130_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_113_OnButtonHoverEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void SetTextId(int32 TextId);
	void SetTextName(class FName Param_InTextName);
	void SetSoundID(ESystemSE SoundId);
	void SetSelected(bool bSelected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CmnBtnOnOff01_C">();
	}
	static class UCmnBtnOnOff01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCmnBtnOnOff01_C>();
	}
};
static_assert(alignof(UCmnBtnOnOff01_C) == 0x000008, "Wrong alignment on UCmnBtnOnOff01_C");
static_assert(sizeof(UCmnBtnOnOff01_C) == 0x0007C8, "Wrong size on UCmnBtnOnOff01_C");
static_assert(offsetof(UCmnBtnOnOff01_C, UberGraphFrame) == 0x000278, "Member 'UCmnBtnOnOff01_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCmnBtnOnOff01_C, Btn1) == 0x000280, "Member 'UCmnBtnOnOff01_C::Btn1' has a wrong offset!");
static_assert(offsetof(UCmnBtnOnOff01_C, Txt1) == 0x000288, "Member 'UCmnBtnOnOff01_C::Txt1' has a wrong offset!");
static_assert(offsetof(UCmnBtnOnOff01_C, Txt2) == 0x000290, "Member 'UCmnBtnOnOff01_C::Txt2' has a wrong offset!");
static_assert(offsetof(UCmnBtnOnOff01_C, InTextTable) == 0x000298, "Member 'UCmnBtnOnOff01_C::InTextTable' has a wrong offset!");
static_assert(offsetof(UCmnBtnOnOff01_C, InTextID) == 0x0002A0, "Member 'UCmnBtnOnOff01_C::InTextID' has a wrong offset!");
static_assert(offsetof(UCmnBtnOnOff01_C, EventOnClicked) == 0x0002A8, "Member 'UCmnBtnOnOff01_C::EventOnClicked' has a wrong offset!");
static_assert(offsetof(UCmnBtnOnOff01_C, InTextName) == 0x0002B8, "Member 'UCmnBtnOnOff01_C::InTextName' has a wrong offset!");
static_assert(offsetof(UCmnBtnOnOff01_C, PressedSound) == 0x0002C0, "Member 'UCmnBtnOnOff01_C::PressedSound' has a wrong offset!");
static_assert(offsetof(UCmnBtnOnOff01_C, HoveredSound) == 0x0002C8, "Member 'UCmnBtnOnOff01_C::HoveredSound' has a wrong offset!");
static_assert(offsetof(UCmnBtnOnOff01_C, PressedSoundId) == 0x0002D0, "Member 'UCmnBtnOnOff01_C::PressedSoundId' has a wrong offset!");
static_assert(offsetof(UCmnBtnOnOff01_C, HoveredSoundId) == 0x0002D1, "Member 'UCmnBtnOnOff01_C::HoveredSoundId' has a wrong offset!");
static_assert(offsetof(UCmnBtnOnOff01_C, bBtnSelected) == 0x0002D2, "Member 'UCmnBtnOnOff01_C::bBtnSelected' has a wrong offset!");
static_assert(offsetof(UCmnBtnOnOff01_C, bHovered) == 0x0002D3, "Member 'UCmnBtnOnOff01_C::bHovered' has a wrong offset!");
static_assert(offsetof(UCmnBtnOnOff01_C, BtnOff) == 0x0002D8, "Member 'UCmnBtnOnOff01_C::BtnOff' has a wrong offset!");
static_assert(offsetof(UCmnBtnOnOff01_C, BtnOn) == 0x000550, "Member 'UCmnBtnOnOff01_C::BtnOn' has a wrong offset!");

}

