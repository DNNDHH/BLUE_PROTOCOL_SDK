#pragma once

 

// Package: CharaCreateBg

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CharaCreateBg.CharaCreateBg_C
// 0x0008 (0x0280 - 0x0278)
class UCharaCreateBg_C final : public UUserWidget
{
public:
	class UImage*                                 Bg1;                                               // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharaCreateBg_C">();
	}
	static class UCharaCreateBg_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharaCreateBg_C>();
	}
};
static_assert(alignof(UCharaCreateBg_C) == 0x000008, "Wrong alignment on UCharaCreateBg_C");
static_assert(sizeof(UCharaCreateBg_C) == 0x000280, "Wrong size on UCharaCreateBg_C");
static_assert(offsetof(UCharaCreateBg_C, Bg1) == 0x000278, "Member 'UCharaCreateBg_C::Bg1' has a wrong offset!");

}

