#pragma once

 

// Package: Fang_expedition_DetailItemReplacedAnm

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_DetailItemReplacedAnm.Fang_expedition_DetailItemReplacedAnm_C
// 0x0018 (0x0290 - 0x0278)
class UFang_expedition_DetailItemReplacedAnm_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnmReplacedEff;                                    // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ItemReplacedEff01;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Fang_expedition_DetailItemReplacedAnm(int32 EntryPoint);
	void Construct();
	void PlayAnm();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_DetailItemReplacedAnm_C">();
	}
	static class UFang_expedition_DetailItemReplacedAnm_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_DetailItemReplacedAnm_C>();
	}
};
static_assert(alignof(UFang_expedition_DetailItemReplacedAnm_C) == 0x000008, "Wrong alignment on UFang_expedition_DetailItemReplacedAnm_C");
static_assert(sizeof(UFang_expedition_DetailItemReplacedAnm_C) == 0x000290, "Wrong size on UFang_expedition_DetailItemReplacedAnm_C");
static_assert(offsetof(UFang_expedition_DetailItemReplacedAnm_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_DetailItemReplacedAnm_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemReplacedAnm_C, AnmReplacedEff) == 0x000280, "Member 'UFang_expedition_DetailItemReplacedAnm_C::AnmReplacedEff' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemReplacedAnm_C, ItemReplacedEff01) == 0x000288, "Member 'UFang_expedition_DetailItemReplacedAnm_C::ItemReplacedEff01' has a wrong offset!");

}

