#pragma once

 

// Package: UMG_SeasonPassMenuInvalid

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_SeasonPassMenuInvalid.UMG_SeasonPassMenuInvalid_C
// 0x0028 (0x02A0 - 0x0278)
class UUMG_SeasonPassMenuInvalid_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_180;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_NextSeasonDiscount;                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_NextSeasonPoint;                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBPlayerSeasonPassComponent*           Comp;                                              // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UMG_SeasonPassMenuInvalid(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_SeasonPassMenuInvalid_C">();
	}
	static class UUMG_SeasonPassMenuInvalid_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_SeasonPassMenuInvalid_C>();
	}
};
static_assert(alignof(UUMG_SeasonPassMenuInvalid_C) == 0x000008, "Wrong alignment on UUMG_SeasonPassMenuInvalid_C");
static_assert(sizeof(UUMG_SeasonPassMenuInvalid_C) == 0x0002A0, "Wrong size on UUMG_SeasonPassMenuInvalid_C");
static_assert(offsetof(UUMG_SeasonPassMenuInvalid_C, UberGraphFrame) == 0x000278, "Member 'UUMG_SeasonPassMenuInvalid_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuInvalid_C, Image_180) == 0x000280, "Member 'UUMG_SeasonPassMenuInvalid_C::Image_180' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuInvalid_C, TextBlock_NextSeasonDiscount) == 0x000288, "Member 'UUMG_SeasonPassMenuInvalid_C::TextBlock_NextSeasonDiscount' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuInvalid_C, TextBlock_NextSeasonPoint) == 0x000290, "Member 'UUMG_SeasonPassMenuInvalid_C::TextBlock_NextSeasonPoint' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuInvalid_C, Comp) == 0x000298, "Member 'UUMG_SeasonPassMenuInvalid_C::Comp' has a wrong offset!");

}

