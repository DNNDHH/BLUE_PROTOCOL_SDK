#pragma once

 

// Package: InheritButtonView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InheritButtonView.InheritButtonView_C
// 0x02A8 (0x0520 - 0x0278)
class UInheritButtonView_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnBtn16_C*                            BtnReselect;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_286;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInheritButtonViewPerkListItem_C*       Slot1;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInheritButtonViewPerkListItem_C*       Slot2;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInheritButtonViewPerkListItem_C*       Slot3;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInheritButtonViewPerkListItem_C*       Slot4;                                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Ratio;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_SpecialPerkName;                               // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FOwnItemInfo                           SpecialPerk;                                       // 0x02C0(0x0118)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<struct FSBStackBPerk>                  SelectPerks;                                       // 0x03D8(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FOwnItemInfo                           Target;                                            // 0x03E8(0x0118)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<struct FOwnItemInfo>                   Materials;                                         // 0x0500(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             SelectReselect;                                    // 0x0510(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void SelectReselect__DelegateSignature();
	void ExecuteUbergraph_InheritButtonView(int32 EntryPoint);
	void BndEvt__InheritButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void Construct();
	void UpdateSlot();
	void UpdateVitalPerkName();
	void Initialize();
	void SetData(const struct FOwnItemInfo& Param_SpecialPerk, TArray<struct FSBStackBPerk>& Param_SelectPerks, const struct FOwnItemInfo& Param_Target, TArray<struct FOwnItemInfo>& Param_Materials);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InheritButtonView_C">();
	}
	static class UInheritButtonView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInheritButtonView_C>();
	}
};
static_assert(alignof(UInheritButtonView_C) == 0x000008, "Wrong alignment on UInheritButtonView_C");
static_assert(sizeof(UInheritButtonView_C) == 0x000520, "Wrong size on UInheritButtonView_C");
static_assert(offsetof(UInheritButtonView_C, UberGraphFrame) == 0x000278, "Member 'UInheritButtonView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInheritButtonView_C, BtnReselect) == 0x000280, "Member 'UInheritButtonView_C::BtnReselect' has a wrong offset!");
static_assert(offsetof(UInheritButtonView_C, Image_286) == 0x000288, "Member 'UInheritButtonView_C::Image_286' has a wrong offset!");
static_assert(offsetof(UInheritButtonView_C, Slot1) == 0x000290, "Member 'UInheritButtonView_C::Slot1' has a wrong offset!");
static_assert(offsetof(UInheritButtonView_C, Slot2) == 0x000298, "Member 'UInheritButtonView_C::Slot2' has a wrong offset!");
static_assert(offsetof(UInheritButtonView_C, Slot3) == 0x0002A0, "Member 'UInheritButtonView_C::Slot3' has a wrong offset!");
static_assert(offsetof(UInheritButtonView_C, Slot4) == 0x0002A8, "Member 'UInheritButtonView_C::Slot4' has a wrong offset!");
static_assert(offsetof(UInheritButtonView_C, Txt_Ratio) == 0x0002B0, "Member 'UInheritButtonView_C::Txt_Ratio' has a wrong offset!");
static_assert(offsetof(UInheritButtonView_C, Txt_SpecialPerkName) == 0x0002B8, "Member 'UInheritButtonView_C::Txt_SpecialPerkName' has a wrong offset!");
static_assert(offsetof(UInheritButtonView_C, SpecialPerk) == 0x0002C0, "Member 'UInheritButtonView_C::SpecialPerk' has a wrong offset!");
static_assert(offsetof(UInheritButtonView_C, SelectPerks) == 0x0003D8, "Member 'UInheritButtonView_C::SelectPerks' has a wrong offset!");
static_assert(offsetof(UInheritButtonView_C, Target) == 0x0003E8, "Member 'UInheritButtonView_C::Target' has a wrong offset!");
static_assert(offsetof(UInheritButtonView_C, Materials) == 0x000500, "Member 'UInheritButtonView_C::Materials' has a wrong offset!");
static_assert(offsetof(UInheritButtonView_C, SelectReselect) == 0x000510, "Member 'UInheritButtonView_C::SelectReselect' has a wrong offset!");

}

