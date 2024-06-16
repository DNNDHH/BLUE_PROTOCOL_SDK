#pragma once

 

// Package: LapCountItem

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LapCountItem.LapCountItem_C
// 0x0008 (0x0280 - 0x0278)
class ULapCountItem_C final : public UUserWidget
{
public:
	class UTextBlock*                             TextCount;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetCount(int32 Count);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LapCountItem_C">();
	}
	static class ULapCountItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULapCountItem_C>();
	}
};
static_assert(alignof(ULapCountItem_C) == 0x000008, "Wrong alignment on ULapCountItem_C");
static_assert(sizeof(ULapCountItem_C) == 0x000280, "Wrong size on ULapCountItem_C");
static_assert(offsetof(ULapCountItem_C, TextCount) == 0x000278, "Member 'ULapCountItem_C::TextCount' has a wrong offset!");

}

