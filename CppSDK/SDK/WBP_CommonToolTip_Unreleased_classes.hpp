#pragma once

 

// Package: WBP_CommonToolTip_Unreleased

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CommonToolTip_Unreleased.WBP_CommonToolTip_Unreleased_C
// 0x0028 (0x02A0 - 0x0278)
class UWBP_CommonToolTip_Unreleased_C final : public UUserWidget
{
public:
	class UImage*                                 BG;                                                // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ClassType;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    LevelMark;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Name_WBP_CommonToolTip_Unreleased_C;               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ReleaseLevel;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetInfo(const class FString& InName, int32 InReleaseLevel, ESBClassType InClassType, bool InIsClassTypeVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CommonToolTip_Unreleased_C">();
	}
	static class UWBP_CommonToolTip_Unreleased_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CommonToolTip_Unreleased_C>();
	}
};
static_assert(alignof(UWBP_CommonToolTip_Unreleased_C) == 0x000008, "Wrong alignment on UWBP_CommonToolTip_Unreleased_C");
static_assert(sizeof(UWBP_CommonToolTip_Unreleased_C) == 0x0002A0, "Wrong size on UWBP_CommonToolTip_Unreleased_C");
static_assert(offsetof(UWBP_CommonToolTip_Unreleased_C, BG) == 0x000278, "Member 'UWBP_CommonToolTip_Unreleased_C::BG' has a wrong offset!");
static_assert(offsetof(UWBP_CommonToolTip_Unreleased_C, ClassType) == 0x000280, "Member 'UWBP_CommonToolTip_Unreleased_C::ClassType' has a wrong offset!");
static_assert(offsetof(UWBP_CommonToolTip_Unreleased_C, LevelMark) == 0x000288, "Member 'UWBP_CommonToolTip_Unreleased_C::LevelMark' has a wrong offset!");
static_assert(offsetof(UWBP_CommonToolTip_Unreleased_C, Name_WBP_CommonToolTip_Unreleased_C) == 0x000290, "Member 'UWBP_CommonToolTip_Unreleased_C::Name_WBP_CommonToolTip_Unreleased_C' has a wrong offset!");
static_assert(offsetof(UWBP_CommonToolTip_Unreleased_C, ReleaseLevel) == 0x000298, "Member 'UWBP_CommonToolTip_Unreleased_C::ReleaseLevel' has a wrong offset!");

}

