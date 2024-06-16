#pragma once

 

// Package: BP_DroppingTextManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DroppingTextManager.BP_DroppingTextManager_C
// 0x0008 (0x0040 - 0x0038)
class UBP_DroppingTextManager_C final : public USBDroppingTextManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_DroppingTextManager(int32 EntryPoint);
	void ShowDroppingTextItemName(class UObject* WorldContextObject, const class FText& ItemName, const int32 Amount, ESBDroppingTextOption Option);
	void ShowDroppingTextItem(class UObject* WorldContextObject, const EItemType ItemType, const int32 ItemId, const int32 Amount, ESBDroppingTextOption Option, bool bUnidentified, bool bIsBonusAdd, bool bRare);
	void ShowDroppingText(class UObject* WorldContextObject, const class FText& Message, ESBDroppingTextOption Option);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DroppingTextManager_C">();
	}
	static class UBP_DroppingTextManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DroppingTextManager_C>();
	}
};
static_assert(alignof(UBP_DroppingTextManager_C) == 0x000008, "Wrong alignment on UBP_DroppingTextManager_C");
static_assert(sizeof(UBP_DroppingTextManager_C) == 0x000040, "Wrong size on UBP_DroppingTextManager_C");
static_assert(offsetof(UBP_DroppingTextManager_C, UberGraphFrame) == 0x000038, "Member 'UBP_DroppingTextManager_C::UberGraphFrame' has a wrong offset!");

}

