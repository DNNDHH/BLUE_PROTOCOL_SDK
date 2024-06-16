#pragma once

 

// Package: Fang_expedition_StatusFinishIconAnm

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_StatusFinishIconAnm.Fang_expedition_StatusFinishIconAnm_C
// 0x0020 (0x0298 - 0x0278)
class UFang_expedition_StatusFinishIconAnm_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_StatusFinish;                                  // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Icon_Finish;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Finish_Base;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Fang_expedition_StatusFinishIconAnm(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_StatusFinishIconAnm_C">();
	}
	static class UFang_expedition_StatusFinishIconAnm_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_StatusFinishIconAnm_C>();
	}
};
static_assert(alignof(UFang_expedition_StatusFinishIconAnm_C) == 0x000008, "Wrong alignment on UFang_expedition_StatusFinishIconAnm_C");
static_assert(sizeof(UFang_expedition_StatusFinishIconAnm_C) == 0x000298, "Wrong size on UFang_expedition_StatusFinishIconAnm_C");
static_assert(offsetof(UFang_expedition_StatusFinishIconAnm_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_StatusFinishIconAnm_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_StatusFinishIconAnm_C, Anm_StatusFinish) == 0x000280, "Member 'UFang_expedition_StatusFinishIconAnm_C::Anm_StatusFinish' has a wrong offset!");
static_assert(offsetof(UFang_expedition_StatusFinishIconAnm_C, Icon_Finish) == 0x000288, "Member 'UFang_expedition_StatusFinishIconAnm_C::Icon_Finish' has a wrong offset!");
static_assert(offsetof(UFang_expedition_StatusFinishIconAnm_C, Icon_Finish_Base) == 0x000290, "Member 'UFang_expedition_StatusFinishIconAnm_C::Icon_Finish_Base' has a wrong offset!");

}

