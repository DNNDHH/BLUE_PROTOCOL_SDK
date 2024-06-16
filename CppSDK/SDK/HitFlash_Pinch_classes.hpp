#pragma once

 

// Package: HitFlash_Pinch

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HitFlash_Pinch.HitFlash_Pinch_C
// 0x0020 (0x0298 - 0x0278)
class UHitFlash_Pinch_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimBlink;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ImgDmg4_L;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgDmg4_R;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_HitFlash_Pinch(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HitFlash_Pinch_C">();
	}
	static class UHitFlash_Pinch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHitFlash_Pinch_C>();
	}
};
static_assert(alignof(UHitFlash_Pinch_C) == 0x000008, "Wrong alignment on UHitFlash_Pinch_C");
static_assert(sizeof(UHitFlash_Pinch_C) == 0x000298, "Wrong size on UHitFlash_Pinch_C");
static_assert(offsetof(UHitFlash_Pinch_C, UberGraphFrame) == 0x000278, "Member 'UHitFlash_Pinch_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHitFlash_Pinch_C, AnimBlink) == 0x000280, "Member 'UHitFlash_Pinch_C::AnimBlink' has a wrong offset!");
static_assert(offsetof(UHitFlash_Pinch_C, ImgDmg4_L) == 0x000288, "Member 'UHitFlash_Pinch_C::ImgDmg4_L' has a wrong offset!");
static_assert(offsetof(UHitFlash_Pinch_C, ImgDmg4_R) == 0x000290, "Member 'UHitFlash_Pinch_C::ImgDmg4_R' has a wrong offset!");

}

