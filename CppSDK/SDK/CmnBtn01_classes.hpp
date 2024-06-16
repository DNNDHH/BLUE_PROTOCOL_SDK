#pragma once

 

// Package: CmnBtn01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "InputCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CmnBtn01.CmnBtn01_C
// 0x0080 (0x02F8 - 0x0278)
class UCmnBtn01_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn1;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_77;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt1;                                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             EventOnClicked;                                    // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USBTextTableAsset*                      InTextTable;                                       // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InTextID;                                          // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   InTextName;                                        // 0x02B4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D65[0x4];                                     // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          PressedSound;                                      // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          HoveredSound;                                      // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESystemSE                                     PressedSoundId;                                    // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESystemSE                                     HoveredSoundId;                                    // 0x02D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D66[0x2];                                     // 0x02D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Action_Name;                                       // 0x02D4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Out_Game_Pad_Mode;                                 // 0x02DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D67[0x3];                                     // 0x02DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   MyKey;                                             // 0x02E0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void EventOnClicked__DelegateSignature();
	void ExecuteUbergraph_CmnBtn01(int32 EntryPoint);
	void CustomEvent_2();
	void Destruct();
	void CustomEvent_1(const ESBPadKeySkinType SkinType);
	void Construct();
	void StopClickInputAction();
	void CustomEvent_0();
	void SetClickInputAction(class FName ActionName);
	void UpdateText();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void Set_Text(class USBTextTableAsset* Param_InTextTable, int32 Param_InTextID, class FName Param_InTextName, ESystemSE InPressedSound);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CmnBtn01_C">();
	}
	static class UCmnBtn01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCmnBtn01_C>();
	}
};
static_assert(alignof(UCmnBtn01_C) == 0x000008, "Wrong alignment on UCmnBtn01_C");
static_assert(sizeof(UCmnBtn01_C) == 0x0002F8, "Wrong size on UCmnBtn01_C");
static_assert(offsetof(UCmnBtn01_C, UberGraphFrame) == 0x000278, "Member 'UCmnBtn01_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCmnBtn01_C, Btn1) == 0x000280, "Member 'UCmnBtn01_C::Btn1' has a wrong offset!");
static_assert(offsetof(UCmnBtn01_C, Image_77) == 0x000288, "Member 'UCmnBtn01_C::Image_77' has a wrong offset!");
static_assert(offsetof(UCmnBtn01_C, Txt1) == 0x000290, "Member 'UCmnBtn01_C::Txt1' has a wrong offset!");
static_assert(offsetof(UCmnBtn01_C, EventOnClicked) == 0x000298, "Member 'UCmnBtn01_C::EventOnClicked' has a wrong offset!");
static_assert(offsetof(UCmnBtn01_C, InTextTable) == 0x0002A8, "Member 'UCmnBtn01_C::InTextTable' has a wrong offset!");
static_assert(offsetof(UCmnBtn01_C, InTextID) == 0x0002B0, "Member 'UCmnBtn01_C::InTextID' has a wrong offset!");
static_assert(offsetof(UCmnBtn01_C, InTextName) == 0x0002B4, "Member 'UCmnBtn01_C::InTextName' has a wrong offset!");
static_assert(offsetof(UCmnBtn01_C, PressedSound) == 0x0002C0, "Member 'UCmnBtn01_C::PressedSound' has a wrong offset!");
static_assert(offsetof(UCmnBtn01_C, HoveredSound) == 0x0002C8, "Member 'UCmnBtn01_C::HoveredSound' has a wrong offset!");
static_assert(offsetof(UCmnBtn01_C, PressedSoundId) == 0x0002D0, "Member 'UCmnBtn01_C::PressedSoundId' has a wrong offset!");
static_assert(offsetof(UCmnBtn01_C, HoveredSoundId) == 0x0002D1, "Member 'UCmnBtn01_C::HoveredSoundId' has a wrong offset!");
static_assert(offsetof(UCmnBtn01_C, Action_Name) == 0x0002D4, "Member 'UCmnBtn01_C::Action_Name' has a wrong offset!");
static_assert(offsetof(UCmnBtn01_C, Out_Game_Pad_Mode) == 0x0002DC, "Member 'UCmnBtn01_C::Out_Game_Pad_Mode' has a wrong offset!");
static_assert(offsetof(UCmnBtn01_C, MyKey) == 0x0002E0, "Member 'UCmnBtn01_C::MyKey' has a wrong offset!");

}

