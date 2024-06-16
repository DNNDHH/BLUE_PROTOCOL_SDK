#pragma once

 

// Package: CmnBtn16

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "InputCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CmnBtn16.CmnBtn16_C
// 0x0088 (0x0300 - 0x0278)
class UCmnBtn16_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn1;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt1;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextTableAsset*                      InTextTable;                                       // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InTextID;                                          // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C82[0x4];                                     // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             EventOnClicked;                                    // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   InTextName;                                        // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Infontsize;                                        // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_9C83[0x4];                                     // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          PressedSound;                                      // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          HoveredSound;                                      // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESystemSE                                     PressedSoundId;                                    // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	ESystemSE                                     HoveredSoundId;                                    // 0x02D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C84[0x2];                                     // 0x02D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Action_Name;                                       // 0x02D4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Out_Game_Pad_Mode;                                 // 0x02DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C85[0x3];                                     // 0x02DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   MyKey;                                             // 0x02E0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bShowCancelKey;                                    // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void EventOnClicked__DelegateSignature();
	void ExecuteUbergraph_CmnBtn16(int32 EntryPoint);
	void ShowCancelKey(bool Param_bShowCancelKey);
	void CustomEvent_2();
	void Destruct();
	void CustomEvent_1(const ESBPadKeySkinType SkinType);
	void Construct();
	void UpdateText();
	void StopClickInputAction();
	void CustomEvent_0();
	void SetClickInputAction(class FName ActionName);
	void Initialize_Hoverd();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_130_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_113_OnButtonHoverEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void SetTextId(int32 TextId);
	void SetTextName(class FName Param_InTextName);
	void Set_Sound_ID(ESystemSE SoundId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CmnBtn16_C">();
	}
	static class UCmnBtn16_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCmnBtn16_C>();
	}
};
static_assert(alignof(UCmnBtn16_C) == 0x000008, "Wrong alignment on UCmnBtn16_C");
static_assert(sizeof(UCmnBtn16_C) == 0x000300, "Wrong size on UCmnBtn16_C");
static_assert(offsetof(UCmnBtn16_C, UberGraphFrame) == 0x000278, "Member 'UCmnBtn16_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCmnBtn16_C, Btn1) == 0x000280, "Member 'UCmnBtn16_C::Btn1' has a wrong offset!");
static_assert(offsetof(UCmnBtn16_C, Txt1) == 0x000288, "Member 'UCmnBtn16_C::Txt1' has a wrong offset!");
static_assert(offsetof(UCmnBtn16_C, InTextTable) == 0x000290, "Member 'UCmnBtn16_C::InTextTable' has a wrong offset!");
static_assert(offsetof(UCmnBtn16_C, InTextID) == 0x000298, "Member 'UCmnBtn16_C::InTextID' has a wrong offset!");
static_assert(offsetof(UCmnBtn16_C, EventOnClicked) == 0x0002A0, "Member 'UCmnBtn16_C::EventOnClicked' has a wrong offset!");
static_assert(offsetof(UCmnBtn16_C, InTextName) == 0x0002B0, "Member 'UCmnBtn16_C::InTextName' has a wrong offset!");
static_assert(offsetof(UCmnBtn16_C, Infontsize) == 0x0002B8, "Member 'UCmnBtn16_C::Infontsize' has a wrong offset!");
static_assert(offsetof(UCmnBtn16_C, PressedSound) == 0x0002C0, "Member 'UCmnBtn16_C::PressedSound' has a wrong offset!");
static_assert(offsetof(UCmnBtn16_C, HoveredSound) == 0x0002C8, "Member 'UCmnBtn16_C::HoveredSound' has a wrong offset!");
static_assert(offsetof(UCmnBtn16_C, PressedSoundId) == 0x0002D0, "Member 'UCmnBtn16_C::PressedSoundId' has a wrong offset!");
static_assert(offsetof(UCmnBtn16_C, HoveredSoundId) == 0x0002D1, "Member 'UCmnBtn16_C::HoveredSoundId' has a wrong offset!");
static_assert(offsetof(UCmnBtn16_C, Action_Name) == 0x0002D4, "Member 'UCmnBtn16_C::Action_Name' has a wrong offset!");
static_assert(offsetof(UCmnBtn16_C, Out_Game_Pad_Mode) == 0x0002DC, "Member 'UCmnBtn16_C::Out_Game_Pad_Mode' has a wrong offset!");
static_assert(offsetof(UCmnBtn16_C, MyKey) == 0x0002E0, "Member 'UCmnBtn16_C::MyKey' has a wrong offset!");
static_assert(offsetof(UCmnBtn16_C, bShowCancelKey) == 0x0002F8, "Member 'UCmnBtn16_C::bShowCancelKey' has a wrong offset!");

}

