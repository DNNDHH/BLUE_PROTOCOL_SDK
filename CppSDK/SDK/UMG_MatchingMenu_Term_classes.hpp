#pragma once

 

// Package: UMG_MatchingMenu_Term

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_MatchingMenu_Term.UMG_MatchingMenu_Term_C
// 0x0008 (0x0280 - 0x0278)
class UUMG_MatchingMenu_Term_C final : public UUserWidget
{
public:
	class USBDateTimeTextBlock*                   SBDateTimeTextBlock_42;                            // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetDateTime(const struct FDateTime& DateTime);
	void SetDateText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_MatchingMenu_Term_C">();
	}
	static class UUMG_MatchingMenu_Term_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_MatchingMenu_Term_C>();
	}
};
static_assert(alignof(UUMG_MatchingMenu_Term_C) == 0x000008, "Wrong alignment on UUMG_MatchingMenu_Term_C");
static_assert(sizeof(UUMG_MatchingMenu_Term_C) == 0x000280, "Wrong size on UUMG_MatchingMenu_Term_C");
static_assert(offsetof(UUMG_MatchingMenu_Term_C, SBDateTimeTextBlock_42) == 0x000278, "Member 'UUMG_MatchingMenu_Term_C::SBDateTimeTextBlock_42' has a wrong offset!");

}

