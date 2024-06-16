#pragma once

 

// Package: UMG_PhotoModePlayerControlViewHeader

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_PhotoModePlayerControlViewHeader.UMG_PhotoModePlayerControlViewHeader_C
// 0x0010 (0x0288 - 0x0278)
class UUMG_PhotoModePlayerControlViewHeader_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_PhotoModePlayerListItem_C*         UMG_PhotoModePlayerListItem;                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UMG_PhotoModePlayerControlViewHeader(int32 EntryPoint);
	void SetShowHeaderItem(bool bValue);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_PhotoModePlayerControlViewHeader_C">();
	}
	static class UUMG_PhotoModePlayerControlViewHeader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_PhotoModePlayerControlViewHeader_C>();
	}
};
static_assert(alignof(UUMG_PhotoModePlayerControlViewHeader_C) == 0x000008, "Wrong alignment on UUMG_PhotoModePlayerControlViewHeader_C");
static_assert(sizeof(UUMG_PhotoModePlayerControlViewHeader_C) == 0x000288, "Wrong size on UUMG_PhotoModePlayerControlViewHeader_C");
static_assert(offsetof(UUMG_PhotoModePlayerControlViewHeader_C, UberGraphFrame) == 0x000278, "Member 'UUMG_PhotoModePlayerControlViewHeader_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModePlayerControlViewHeader_C, UMG_PhotoModePlayerListItem) == 0x000280, "Member 'UUMG_PhotoModePlayerControlViewHeader_C::UMG_PhotoModePlayerListItem' has a wrong offset!");

}

