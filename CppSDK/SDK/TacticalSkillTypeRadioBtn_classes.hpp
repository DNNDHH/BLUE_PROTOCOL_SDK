#pragma once

 

// Package: TacticalSkillTypeRadioBtn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TacticalSkillTypeRadioBtn.TacticalSkillTypeRadioBtn_C
// 0x0050 (0x02C8 - 0x0278)
class UTacticalSkillTypeRadioBtn_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 CircleBase;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 EquippedIcon;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               EquippedIconGrp;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRadioBtnCmn01_C*                     RadioBtn;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SkillTypeTxt;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SkillTypeId;                                       // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_83DA[0x4];                                     // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnRadioBtnSelected;                                // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsSelectMode;                                     // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnRadioBtnSelected__DelegateSignature(int32 InSkillTypeId);
	void ExecuteUbergraph_TacticalSkillTypeRadioBtn(int32 EntryPoint);
	void BndEvt__TacticalSkillTypeRadioButton_RadioBtn_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void PreConstruct(bool IsDesignTime);
	void SetSkillType(int32 InSkillTypeId);
	void SetSelectMode(bool InIsSelectMode);
	void SetEquipped(bool InIsEquipped);
	void SetRadioBtnSelected(bool InIsSelected);
	void IsRedioBtnSelected(bool* OutIsSelected);
	void SetRadioBtnVisibility(bool InIsVisible);
	void GetSkillTypeId(int32* OutSkillTypeId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TacticalSkillTypeRadioBtn_C">();
	}
	static class UTacticalSkillTypeRadioBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTacticalSkillTypeRadioBtn_C>();
	}
};
static_assert(alignof(UTacticalSkillTypeRadioBtn_C) == 0x000008, "Wrong alignment on UTacticalSkillTypeRadioBtn_C");
static_assert(sizeof(UTacticalSkillTypeRadioBtn_C) == 0x0002C8, "Wrong size on UTacticalSkillTypeRadioBtn_C");
static_assert(offsetof(UTacticalSkillTypeRadioBtn_C, UberGraphFrame) == 0x000278, "Member 'UTacticalSkillTypeRadioBtn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTacticalSkillTypeRadioBtn_C, CircleBase) == 0x000280, "Member 'UTacticalSkillTypeRadioBtn_C::CircleBase' has a wrong offset!");
static_assert(offsetof(UTacticalSkillTypeRadioBtn_C, EquippedIcon) == 0x000288, "Member 'UTacticalSkillTypeRadioBtn_C::EquippedIcon' has a wrong offset!");
static_assert(offsetof(UTacticalSkillTypeRadioBtn_C, EquippedIconGrp) == 0x000290, "Member 'UTacticalSkillTypeRadioBtn_C::EquippedIconGrp' has a wrong offset!");
static_assert(offsetof(UTacticalSkillTypeRadioBtn_C, RadioBtn) == 0x000298, "Member 'UTacticalSkillTypeRadioBtn_C::RadioBtn' has a wrong offset!");
static_assert(offsetof(UTacticalSkillTypeRadioBtn_C, SkillTypeTxt) == 0x0002A0, "Member 'UTacticalSkillTypeRadioBtn_C::SkillTypeTxt' has a wrong offset!");
static_assert(offsetof(UTacticalSkillTypeRadioBtn_C, SkillTypeId) == 0x0002A8, "Member 'UTacticalSkillTypeRadioBtn_C::SkillTypeId' has a wrong offset!");
static_assert(offsetof(UTacticalSkillTypeRadioBtn_C, OnRadioBtnSelected) == 0x0002B0, "Member 'UTacticalSkillTypeRadioBtn_C::OnRadioBtnSelected' has a wrong offset!");
static_assert(offsetof(UTacticalSkillTypeRadioBtn_C, bIsSelectMode) == 0x0002C0, "Member 'UTacticalSkillTypeRadioBtn_C::bIsSelectMode' has a wrong offset!");

}

