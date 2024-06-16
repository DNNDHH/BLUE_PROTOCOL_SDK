#pragma once

 

// Package: CmnCleared_L

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CmnCleared_L.CmnCleared_L_C
// 0x0010 (0x0288 - 0x0278)
class UCmnCleared_L_C final : public UUserWidget
{
public:
	class UImage*                                 Image_0;                                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_12;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CmnCleared_L_C">();
	}
	static class UCmnCleared_L_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCmnCleared_L_C>();
	}
};
static_assert(alignof(UCmnCleared_L_C) == 0x000008, "Wrong alignment on UCmnCleared_L_C");
static_assert(sizeof(UCmnCleared_L_C) == 0x000288, "Wrong size on UCmnCleared_L_C");
static_assert(offsetof(UCmnCleared_L_C, Image_0) == 0x000278, "Member 'UCmnCleared_L_C::Image_0' has a wrong offset!");
static_assert(offsetof(UCmnCleared_L_C, Image_12) == 0x000280, "Member 'UCmnCleared_L_C::Image_12' has a wrong offset!");

}

