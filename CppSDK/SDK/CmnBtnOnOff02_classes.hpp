#pragma once

 

// Package: CmnBtnOnOff02

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CmnBtnOnOff02.CmnBtnOnOff02_C
// 0x05E0 (0x0858 - 0x0278)
class UCmnBtnOnOff02_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn1;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt1;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextTableAsset*                      InTextTable;                                       // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InTextIDOFF;                                       // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7665[0x4];                                     // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             EventOnClicked;                                    // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   InTextNameOFF;                                     // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          PressedSound;                                      // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          HoveredSound;                                      // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESystemSE                                     PressedSoundId;                                    // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	ESystemSE                                     HoveredSoundId;                                    // 0x02C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBtnSelected;                                      // 0x02CA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7666[0x5];                                     // 0x02CB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FButtonStyle                           BtnOff;                                            // 0x02D0(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                           BtnOn;                                             // 0x0548(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         InTextIDON;                                        // 0x07C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   InTextNameON;                                      // 0x07C4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7667[0x4];                                     // 0x07CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         InFont;                                            // 0x07D0(0x0088)(Edit, BlueprintVisible, HasGetValueTypeHash)

public:
	void EventOnClicked__DelegateSignature();
	void ExecuteUbergraph_CmnBtnOnOff02(int32 EntryPoint);
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_130_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_113_OnButtonHoverEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void SetBtnSelected(bool bSelected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CmnBtnOnOff02_C">();
	}
	static class UCmnBtnOnOff02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCmnBtnOnOff02_C>();
	}
};
static_assert(alignof(UCmnBtnOnOff02_C) == 0x000008, "Wrong alignment on UCmnBtnOnOff02_C");
static_assert(sizeof(UCmnBtnOnOff02_C) == 0x000858, "Wrong size on UCmnBtnOnOff02_C");
static_assert(offsetof(UCmnBtnOnOff02_C, UberGraphFrame) == 0x000278, "Member 'UCmnBtnOnOff02_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCmnBtnOnOff02_C, Btn1) == 0x000280, "Member 'UCmnBtnOnOff02_C::Btn1' has a wrong offset!");
static_assert(offsetof(UCmnBtnOnOff02_C, Txt1) == 0x000288, "Member 'UCmnBtnOnOff02_C::Txt1' has a wrong offset!");
static_assert(offsetof(UCmnBtnOnOff02_C, InTextTable) == 0x000290, "Member 'UCmnBtnOnOff02_C::InTextTable' has a wrong offset!");
static_assert(offsetof(UCmnBtnOnOff02_C, InTextIDOFF) == 0x000298, "Member 'UCmnBtnOnOff02_C::InTextIDOFF' has a wrong offset!");
static_assert(offsetof(UCmnBtnOnOff02_C, EventOnClicked) == 0x0002A0, "Member 'UCmnBtnOnOff02_C::EventOnClicked' has a wrong offset!");
static_assert(offsetof(UCmnBtnOnOff02_C, InTextNameOFF) == 0x0002B0, "Member 'UCmnBtnOnOff02_C::InTextNameOFF' has a wrong offset!");
static_assert(offsetof(UCmnBtnOnOff02_C, PressedSound) == 0x0002B8, "Member 'UCmnBtnOnOff02_C::PressedSound' has a wrong offset!");
static_assert(offsetof(UCmnBtnOnOff02_C, HoveredSound) == 0x0002C0, "Member 'UCmnBtnOnOff02_C::HoveredSound' has a wrong offset!");
static_assert(offsetof(UCmnBtnOnOff02_C, PressedSoundId) == 0x0002C8, "Member 'UCmnBtnOnOff02_C::PressedSoundId' has a wrong offset!");
static_assert(offsetof(UCmnBtnOnOff02_C, HoveredSoundId) == 0x0002C9, "Member 'UCmnBtnOnOff02_C::HoveredSoundId' has a wrong offset!");
static_assert(offsetof(UCmnBtnOnOff02_C, bBtnSelected) == 0x0002CA, "Member 'UCmnBtnOnOff02_C::bBtnSelected' has a wrong offset!");
static_assert(offsetof(UCmnBtnOnOff02_C, BtnOff) == 0x0002D0, "Member 'UCmnBtnOnOff02_C::BtnOff' has a wrong offset!");
static_assert(offsetof(UCmnBtnOnOff02_C, BtnOn) == 0x000548, "Member 'UCmnBtnOnOff02_C::BtnOn' has a wrong offset!");
static_assert(offsetof(UCmnBtnOnOff02_C, InTextIDON) == 0x0007C0, "Member 'UCmnBtnOnOff02_C::InTextIDON' has a wrong offset!");
static_assert(offsetof(UCmnBtnOnOff02_C, InTextNameON) == 0x0007C4, "Member 'UCmnBtnOnOff02_C::InTextNameON' has a wrong offset!");
static_assert(offsetof(UCmnBtnOnOff02_C, InFont) == 0x0007D0, "Member 'UCmnBtnOnOff02_C::InFont' has a wrong offset!");

}

