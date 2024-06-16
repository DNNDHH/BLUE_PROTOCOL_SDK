#pragma once

 

// Package: Fang_expedition_ExpeditionHeartAnm

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_ExpeditionHeartAnm.Fang_expedition_ExpeditionHeartAnm_C
// 0x0028 (0x02A0 - 0x0278)
class UFang_expedition_ExpeditionHeartAnm_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnmHeart;                                          // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Heart1;                                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HeartBG;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bVisible;                                          // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_Fang_expedition_ExpeditionHeartAnm(int32 EntryPoint);
	void Construct();
	void SetIconVisibility(bool Param_bVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_ExpeditionHeartAnm_C">();
	}
	static class UFang_expedition_ExpeditionHeartAnm_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_ExpeditionHeartAnm_C>();
	}
};
static_assert(alignof(UFang_expedition_ExpeditionHeartAnm_C) == 0x000008, "Wrong alignment on UFang_expedition_ExpeditionHeartAnm_C");
static_assert(sizeof(UFang_expedition_ExpeditionHeartAnm_C) == 0x0002A0, "Wrong size on UFang_expedition_ExpeditionHeartAnm_C");
static_assert(offsetof(UFang_expedition_ExpeditionHeartAnm_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_ExpeditionHeartAnm_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ExpeditionHeartAnm_C, AnmHeart) == 0x000280, "Member 'UFang_expedition_ExpeditionHeartAnm_C::AnmHeart' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ExpeditionHeartAnm_C, Heart1) == 0x000288, "Member 'UFang_expedition_ExpeditionHeartAnm_C::Heart1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ExpeditionHeartAnm_C, HeartBG) == 0x000290, "Member 'UFang_expedition_ExpeditionHeartAnm_C::HeartBG' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ExpeditionHeartAnm_C, bVisible) == 0x000298, "Member 'UFang_expedition_ExpeditionHeartAnm_C::bVisible' has a wrong offset!");

}

