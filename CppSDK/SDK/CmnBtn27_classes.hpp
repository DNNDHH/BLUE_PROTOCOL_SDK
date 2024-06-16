#pragma once

 

// Package: CmnBtn27

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CmnBtn27.CmnBtn27_C
// 0x0058 (0x02D0 - 0x0278)
class UCmnBtn27_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn1;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt1;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             EventOnClicked;                                    // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USBTextTableAsset*                      InTextTable;                                       // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InTextID;                                          // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   InTextName;                                        // 0x02AC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Infontsize;                                        // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          PressedSound;                                      // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          HoveredSound;                                      // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESystemSE                                     PressedSoundId;                                    // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESystemSE                                     HoveredSoundId;                                    // 0x02C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void EventOnClicked__DelegateSignature();
	void ExecuteUbergraph_CmnBtn27(int32 EntryPoint);
	void SetTextId_Name_(class FName Param_InTextName);
	void BndEvt__Btn1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SBButton_C_61_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SBButton_C_61_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CmnBtn27_C">();
	}
	static class UCmnBtn27_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCmnBtn27_C>();
	}
};
static_assert(alignof(UCmnBtn27_C) == 0x000008, "Wrong alignment on UCmnBtn27_C");
static_assert(sizeof(UCmnBtn27_C) == 0x0002D0, "Wrong size on UCmnBtn27_C");
static_assert(offsetof(UCmnBtn27_C, UberGraphFrame) == 0x000278, "Member 'UCmnBtn27_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCmnBtn27_C, Btn1) == 0x000280, "Member 'UCmnBtn27_C::Btn1' has a wrong offset!");
static_assert(offsetof(UCmnBtn27_C, Txt1) == 0x000288, "Member 'UCmnBtn27_C::Txt1' has a wrong offset!");
static_assert(offsetof(UCmnBtn27_C, EventOnClicked) == 0x000290, "Member 'UCmnBtn27_C::EventOnClicked' has a wrong offset!");
static_assert(offsetof(UCmnBtn27_C, InTextTable) == 0x0002A0, "Member 'UCmnBtn27_C::InTextTable' has a wrong offset!");
static_assert(offsetof(UCmnBtn27_C, InTextID) == 0x0002A8, "Member 'UCmnBtn27_C::InTextID' has a wrong offset!");
static_assert(offsetof(UCmnBtn27_C, InTextName) == 0x0002AC, "Member 'UCmnBtn27_C::InTextName' has a wrong offset!");
static_assert(offsetof(UCmnBtn27_C, Infontsize) == 0x0002B4, "Member 'UCmnBtn27_C::Infontsize' has a wrong offset!");
static_assert(offsetof(UCmnBtn27_C, PressedSound) == 0x0002B8, "Member 'UCmnBtn27_C::PressedSound' has a wrong offset!");
static_assert(offsetof(UCmnBtn27_C, HoveredSound) == 0x0002C0, "Member 'UCmnBtn27_C::HoveredSound' has a wrong offset!");
static_assert(offsetof(UCmnBtn27_C, PressedSoundId) == 0x0002C8, "Member 'UCmnBtn27_C::PressedSoundId' has a wrong offset!");
static_assert(offsetof(UCmnBtn27_C, HoveredSoundId) == 0x0002C9, "Member 'UCmnBtn27_C::HoveredSoundId' has a wrong offset!");

}

