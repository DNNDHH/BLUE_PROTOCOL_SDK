#pragma once

 

// Package: Fang_expedition_DetailRelease

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_DetailRelease.Fang_expedition_DetailRelease_C
// 0x0060 (0x02D8 - 0x0278)
class UFang_expedition_DetailRelease_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Base04;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DetailReleaseConditions_C* Fang_expedition_DetailReleaseConditions;           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DetailReleaseConditions_C* Fang_expedition_DetailReleaseConditions_1;         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DetailReleaseConditions_C* Fang_expedition_DetailReleaseConditions_2;         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HLine_1;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HLine_2;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HLine_3;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconCaution;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VLine_3;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UFang_expedition_DetailReleaseConditions_C*> WidgetList;                                        // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ExecuteUbergraph_Fang_expedition_DetailRelease(int32 EntryPoint);
	void Construct();
	void SetData(TArray<struct FSBFang_expeditionLimitData>& LimitData, bool* NG);
	void Init();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_DetailRelease_C">();
	}
	static class UFang_expedition_DetailRelease_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_DetailRelease_C>();
	}
};
static_assert(alignof(UFang_expedition_DetailRelease_C) == 0x000008, "Wrong alignment on UFang_expedition_DetailRelease_C");
static_assert(sizeof(UFang_expedition_DetailRelease_C) == 0x0002D8, "Wrong size on UFang_expedition_DetailRelease_C");
static_assert(offsetof(UFang_expedition_DetailRelease_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_DetailRelease_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailRelease_C, Base04) == 0x000280, "Member 'UFang_expedition_DetailRelease_C::Base04' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailRelease_C, Fang_expedition_DetailReleaseConditions) == 0x000288, "Member 'UFang_expedition_DetailRelease_C::Fang_expedition_DetailReleaseConditions' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailRelease_C, Fang_expedition_DetailReleaseConditions_1) == 0x000290, "Member 'UFang_expedition_DetailRelease_C::Fang_expedition_DetailReleaseConditions_1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailRelease_C, Fang_expedition_DetailReleaseConditions_2) == 0x000298, "Member 'UFang_expedition_DetailRelease_C::Fang_expedition_DetailReleaseConditions_2' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailRelease_C, HLine_1) == 0x0002A0, "Member 'UFang_expedition_DetailRelease_C::HLine_1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailRelease_C, HLine_2) == 0x0002A8, "Member 'UFang_expedition_DetailRelease_C::HLine_2' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailRelease_C, HLine_3) == 0x0002B0, "Member 'UFang_expedition_DetailRelease_C::HLine_3' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailRelease_C, IconCaution) == 0x0002B8, "Member 'UFang_expedition_DetailRelease_C::IconCaution' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailRelease_C, VLine_3) == 0x0002C0, "Member 'UFang_expedition_DetailRelease_C::VLine_3' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailRelease_C, WidgetList) == 0x0002C8, "Member 'UFang_expedition_DetailRelease_C::WidgetList' has a wrong offset!");

}

