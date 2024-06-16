#pragma once

 

// Package: UMG_NPCFacilityMark_Icon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_NPCFacilityMark_Icon.UMG_NPCFacilityMark_Icon_C
// 0x0010 (0x0288 - 0x0278)
class UUMG_NPCFacilityMark_Icon_C final : public UUserWidget
{
public:
	class UImage*                                 IconImage;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBFacilityType                               CurIconType;                                       // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetIconType(ESBFacilityType IconType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_NPCFacilityMark_Icon_C">();
	}
	static class UUMG_NPCFacilityMark_Icon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_NPCFacilityMark_Icon_C>();
	}
};
static_assert(alignof(UUMG_NPCFacilityMark_Icon_C) == 0x000008, "Wrong alignment on UUMG_NPCFacilityMark_Icon_C");
static_assert(sizeof(UUMG_NPCFacilityMark_Icon_C) == 0x000288, "Wrong size on UUMG_NPCFacilityMark_Icon_C");
static_assert(offsetof(UUMG_NPCFacilityMark_Icon_C, IconImage) == 0x000278, "Member 'UUMG_NPCFacilityMark_Icon_C::IconImage' has a wrong offset!");
static_assert(offsetof(UUMG_NPCFacilityMark_Icon_C, CurIconType) == 0x000280, "Member 'UUMG_NPCFacilityMark_Icon_C::CurIconType' has a wrong offset!");

}

