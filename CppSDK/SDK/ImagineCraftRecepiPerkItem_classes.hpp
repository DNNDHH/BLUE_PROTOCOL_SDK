#pragma once

 

// Package: ImagineCraftRecepiPerkItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C
// 0x0088 (0x0300 - 0x0278)
class UImagineCraftRecepiPerkItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       LightAnimation;                                    // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Brd_RareView;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_2;                                     // 0x0290(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Light;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Light_1;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_Normal_B;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_Normal_R;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_Special_B;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_Special_R;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_PerkName;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_PerkName_2;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_PerkNumber_1;                                  // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_PerkNumber_2;                                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonToolTip_AbilityPerk_C*           AbilityDescToolTip;                                // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PerkId;                                            // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ImagineCraftRecepiPerkItem(int32 EntryPoint);
	void Set_Rare(bool IsRare);
	void Set_Text(const class FString& InText);
	void Construct();
	void SetPerkID(int32 Param_PerkId);
	class UWidget* GetAbilityDescToolTipWidget();
	void SetPerkValue(int32 Value);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ImagineCraftRecepiPerkItem_C">();
	}
	static class UImagineCraftRecepiPerkItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImagineCraftRecepiPerkItem_C>();
	}
};
static_assert(alignof(UImagineCraftRecepiPerkItem_C) == 0x000008, "Wrong alignment on UImagineCraftRecepiPerkItem_C");
static_assert(sizeof(UImagineCraftRecepiPerkItem_C) == 0x000300, "Wrong size on UImagineCraftRecepiPerkItem_C");
static_assert(offsetof(UImagineCraftRecepiPerkItem_C, UberGraphFrame) == 0x000278, "Member 'UImagineCraftRecepiPerkItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UImagineCraftRecepiPerkItem_C, LightAnimation) == 0x000280, "Member 'UImagineCraftRecepiPerkItem_C::LightAnimation' has a wrong offset!");
static_assert(offsetof(UImagineCraftRecepiPerkItem_C, Brd_RareView) == 0x000288, "Member 'UImagineCraftRecepiPerkItem_C::Brd_RareView' has a wrong offset!");
static_assert(offsetof(UImagineCraftRecepiPerkItem_C, CanvasPanel_2) == 0x000290, "Member 'UImagineCraftRecepiPerkItem_C::CanvasPanel_2' has a wrong offset!");
static_assert(offsetof(UImagineCraftRecepiPerkItem_C, Light) == 0x000298, "Member 'UImagineCraftRecepiPerkItem_C::Light' has a wrong offset!");
static_assert(offsetof(UImagineCraftRecepiPerkItem_C, Light_1) == 0x0002A0, "Member 'UImagineCraftRecepiPerkItem_C::Light_1' has a wrong offset!");
static_assert(offsetof(UImagineCraftRecepiPerkItem_C, Line_Normal_B) == 0x0002A8, "Member 'UImagineCraftRecepiPerkItem_C::Line_Normal_B' has a wrong offset!");
static_assert(offsetof(UImagineCraftRecepiPerkItem_C, Line_Normal_R) == 0x0002B0, "Member 'UImagineCraftRecepiPerkItem_C::Line_Normal_R' has a wrong offset!");
static_assert(offsetof(UImagineCraftRecepiPerkItem_C, Line_Special_B) == 0x0002B8, "Member 'UImagineCraftRecepiPerkItem_C::Line_Special_B' has a wrong offset!");
static_assert(offsetof(UImagineCraftRecepiPerkItem_C, Line_Special_R) == 0x0002C0, "Member 'UImagineCraftRecepiPerkItem_C::Line_Special_R' has a wrong offset!");
static_assert(offsetof(UImagineCraftRecepiPerkItem_C, Txt_PerkName) == 0x0002C8, "Member 'UImagineCraftRecepiPerkItem_C::Txt_PerkName' has a wrong offset!");
static_assert(offsetof(UImagineCraftRecepiPerkItem_C, Txt_PerkName_2) == 0x0002D0, "Member 'UImagineCraftRecepiPerkItem_C::Txt_PerkName_2' has a wrong offset!");
static_assert(offsetof(UImagineCraftRecepiPerkItem_C, Txt_PerkNumber_1) == 0x0002D8, "Member 'UImagineCraftRecepiPerkItem_C::Txt_PerkNumber_1' has a wrong offset!");
static_assert(offsetof(UImagineCraftRecepiPerkItem_C, Txt_PerkNumber_2) == 0x0002E0, "Member 'UImagineCraftRecepiPerkItem_C::Txt_PerkNumber_2' has a wrong offset!");
static_assert(offsetof(UImagineCraftRecepiPerkItem_C, WidgetSwitcher_0) == 0x0002E8, "Member 'UImagineCraftRecepiPerkItem_C::WidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UImagineCraftRecepiPerkItem_C, AbilityDescToolTip) == 0x0002F0, "Member 'UImagineCraftRecepiPerkItem_C::AbilityDescToolTip' has a wrong offset!");
static_assert(offsetof(UImagineCraftRecepiPerkItem_C, PerkId) == 0x0002F8, "Member 'UImagineCraftRecepiPerkItem_C::PerkId' has a wrong offset!");

}

