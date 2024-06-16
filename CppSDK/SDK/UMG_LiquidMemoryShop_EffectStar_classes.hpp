#pragma once

 

// Package: UMG_LiquidMemoryShop_EffectStar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_LiquidMemoryShop_EffectStar.UMG_LiquidMemoryShop_EffectStar_C
// 0x0028 (0x02A0 - 0x0278)
class UUMG_LiquidMemoryShop_EffectStar_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimIn2;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn1;                                           // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn0;                                           // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	int32                                         AnimType1;                                         // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ShowNum;                                           // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UMG_LiquidMemoryShop_EffectStar(int32 EntryPoint);
	void Construct();
	void PlayAnim(int32 CurNum);
	void StopAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_LiquidMemoryShop_EffectStar_C">();
	}
	static class UUMG_LiquidMemoryShop_EffectStar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_LiquidMemoryShop_EffectStar_C>();
	}
};
static_assert(alignof(UUMG_LiquidMemoryShop_EffectStar_C) == 0x000008, "Wrong alignment on UUMG_LiquidMemoryShop_EffectStar_C");
static_assert(sizeof(UUMG_LiquidMemoryShop_EffectStar_C) == 0x0002A0, "Wrong size on UUMG_LiquidMemoryShop_EffectStar_C");
static_assert(offsetof(UUMG_LiquidMemoryShop_EffectStar_C, UberGraphFrame) == 0x000278, "Member 'UUMG_LiquidMemoryShop_EffectStar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_EffectStar_C, AnimIn2) == 0x000280, "Member 'UUMG_LiquidMemoryShop_EffectStar_C::AnimIn2' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_EffectStar_C, AnimIn1) == 0x000288, "Member 'UUMG_LiquidMemoryShop_EffectStar_C::AnimIn1' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_EffectStar_C, AnimIn0) == 0x000290, "Member 'UUMG_LiquidMemoryShop_EffectStar_C::AnimIn0' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_EffectStar_C, AnimType1) == 0x000298, "Member 'UUMG_LiquidMemoryShop_EffectStar_C::AnimType1' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_EffectStar_C, ShowNum) == 0x00029C, "Member 'UUMG_LiquidMemoryShop_EffectStar_C::ShowNum' has a wrong offset!");

}

