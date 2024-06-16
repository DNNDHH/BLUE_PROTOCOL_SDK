#pragma once

 

// Package: UMG_SeasonPassQuestRibbon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_SeasonPassQuestRibbon.UMG_SeasonPassQuestRibbon_C
// 0x0020 (0x0298 - 0x0278)
class UUMG_SeasonPassQuestRibbon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_69;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_126;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Pass;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UMG_SeasonPassQuestRibbon(int32 EntryPoint);
	void SetRibbon(const struct FSBSeasonPassQuestItemData& SBSeasonPassQuestItemData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_SeasonPassQuestRibbon_C">();
	}
	static class UUMG_SeasonPassQuestRibbon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_SeasonPassQuestRibbon_C>();
	}
};
static_assert(alignof(UUMG_SeasonPassQuestRibbon_C) == 0x000008, "Wrong alignment on UUMG_SeasonPassQuestRibbon_C");
static_assert(sizeof(UUMG_SeasonPassQuestRibbon_C) == 0x000298, "Wrong size on UUMG_SeasonPassQuestRibbon_C");
static_assert(offsetof(UUMG_SeasonPassQuestRibbon_C, UberGraphFrame) == 0x000278, "Member 'UUMG_SeasonPassQuestRibbon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassQuestRibbon_C, Image_69) == 0x000280, "Member 'UUMG_SeasonPassQuestRibbon_C::Image_69' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassQuestRibbon_C, Image_126) == 0x000288, "Member 'UUMG_SeasonPassQuestRibbon_C::Image_126' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassQuestRibbon_C, WidgetSwitcher_Pass) == 0x000290, "Member 'UUMG_SeasonPassQuestRibbon_C::WidgetSwitcher_Pass' has a wrong offset!");

}

