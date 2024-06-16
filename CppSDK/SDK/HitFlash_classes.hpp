#pragma once

 

// Package: HitFlash

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HitFlash.HitFlash_C
// 0x0008 (0x0280 - 0x0278)
class UHitFlash_C final : public UUserWidget
{
public:
	class UHitFlash_Pinch_C*                      HitFlash_Pinch;                                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	ESlateVisibility GetVisibility_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HitFlash_C">();
	}
	static class UHitFlash_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHitFlash_C>();
	}
};
static_assert(alignof(UHitFlash_C) == 0x000008, "Wrong alignment on UHitFlash_C");
static_assert(sizeof(UHitFlash_C) == 0x000280, "Wrong size on UHitFlash_C");
static_assert(offsetof(UHitFlash_C, HitFlash_Pinch) == 0x000278, "Member 'UHitFlash_C::HitFlash_Pinch' has a wrong offset!");

}

