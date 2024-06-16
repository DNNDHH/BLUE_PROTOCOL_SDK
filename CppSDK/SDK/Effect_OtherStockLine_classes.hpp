#pragma once

 

// Package: Effect_OtherStockLine

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Effect_OtherStockLine.Effect_OtherStockLine_C
// 0x0008 (0x0280 - 0x0278)
class UEffect_OtherStockLine_C final : public UUserWidget
{
public:
	class UImage*                                 Line;                                              // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Effect_OtherStockLine_C">();
	}
	static class UEffect_OtherStockLine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEffect_OtherStockLine_C>();
	}
};
static_assert(alignof(UEffect_OtherStockLine_C) == 0x000008, "Wrong alignment on UEffect_OtherStockLine_C");
static_assert(sizeof(UEffect_OtherStockLine_C) == 0x000280, "Wrong size on UEffect_OtherStockLine_C");
static_assert(offsetof(UEffect_OtherStockLine_C, Line) == 0x000278, "Member 'UEffect_OtherStockLine_C::Line' has a wrong offset!");

}

