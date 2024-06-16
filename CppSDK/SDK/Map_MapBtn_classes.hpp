#pragma once

 

// Package: Map_MapBtn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InputCore_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Map_MapBtn.Map_MapBtn_C
// 0x0058 (0x02D0 - 0x0278)
class UMap_MapBtn_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn01;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtTitle;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnButtonClicked;                                   // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USBTextTableAsset*                      TextTableAsset;                                    // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   MyKey;                                             // 0x02A8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          Out_Game_Pad_Mode;                                 // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_804E[0x3];                                     // 0x02C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Action_Name;                                       // 0x02C4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnButtonClicked__DelegateSignature();
	void ExecuteUbergraph_Map_MapBtn(int32 EntryPoint);
	void StopClickInputAction();
	void CustomEvent_0();
	void SetClickInputAction(class FName ActionName);
	void CustomEvent_2();
	void Destruct();
	void CustomEvent_1(const ESBPadKeySkinType SkinType);
	void Construct();
	void UpdateText();
	void BndEvt__Map_MapBtn_Btn01_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Map_MapBtn_Btn01_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__Btn01_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature();
	void SetPressedSoundId(ESystemSE InSoundId);
	void SetHoveredSoundId(ESystemSE InSoundId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Map_MapBtn_C">();
	}
	static class UMap_MapBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMap_MapBtn_C>();
	}
};
static_assert(alignof(UMap_MapBtn_C) == 0x000008, "Wrong alignment on UMap_MapBtn_C");
static_assert(sizeof(UMap_MapBtn_C) == 0x0002D0, "Wrong size on UMap_MapBtn_C");
static_assert(offsetof(UMap_MapBtn_C, UberGraphFrame) == 0x000278, "Member 'UMap_MapBtn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMap_MapBtn_C, Btn01) == 0x000280, "Member 'UMap_MapBtn_C::Btn01' has a wrong offset!");
static_assert(offsetof(UMap_MapBtn_C, TxtTitle) == 0x000288, "Member 'UMap_MapBtn_C::TxtTitle' has a wrong offset!");
static_assert(offsetof(UMap_MapBtn_C, OnButtonClicked) == 0x000290, "Member 'UMap_MapBtn_C::OnButtonClicked' has a wrong offset!");
static_assert(offsetof(UMap_MapBtn_C, TextTableAsset) == 0x0002A0, "Member 'UMap_MapBtn_C::TextTableAsset' has a wrong offset!");
static_assert(offsetof(UMap_MapBtn_C, MyKey) == 0x0002A8, "Member 'UMap_MapBtn_C::MyKey' has a wrong offset!");
static_assert(offsetof(UMap_MapBtn_C, Out_Game_Pad_Mode) == 0x0002C0, "Member 'UMap_MapBtn_C::Out_Game_Pad_Mode' has a wrong offset!");
static_assert(offsetof(UMap_MapBtn_C, Action_Name) == 0x0002C4, "Member 'UMap_MapBtn_C::Action_Name' has a wrong offset!");

}

