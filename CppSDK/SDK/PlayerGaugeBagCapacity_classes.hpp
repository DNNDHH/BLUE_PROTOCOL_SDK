#pragma once

 

// Package: PlayerGaugeBagCapacity

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerGaugeBagCapacity.PlayerGaugeBagCapacity_C
// 0x0030 (0x02A8 - 0x0278)
class UPlayerGaugeBagCapacity_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           LiquidGrp;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Capacity;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_UseNum;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         CapacityNum;                                       // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         UseNum;                                            // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBoostCapacity;                                   // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_PlayerGaugeBagCapacity(int32 EntryPoint);
	void CustomEvent_0(const int32 InRetCode, const TArray<struct FSBLiquidMemoryInfo>& InUpdatedLiquidMemoryInfos);
	void CustomEvent_2();
	void Construct();
	void Update_Internal();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerGaugeBagCapacity_C">();
	}
	static class UPlayerGaugeBagCapacity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerGaugeBagCapacity_C>();
	}
};
static_assert(alignof(UPlayerGaugeBagCapacity_C) == 0x000008, "Wrong alignment on UPlayerGaugeBagCapacity_C");
static_assert(sizeof(UPlayerGaugeBagCapacity_C) == 0x0002A8, "Wrong size on UPlayerGaugeBagCapacity_C");
static_assert(offsetof(UPlayerGaugeBagCapacity_C, UberGraphFrame) == 0x000278, "Member 'UPlayerGaugeBagCapacity_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeBagCapacity_C, LiquidGrp) == 0x000280, "Member 'UPlayerGaugeBagCapacity_C::LiquidGrp' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeBagCapacity_C, Text_Capacity) == 0x000288, "Member 'UPlayerGaugeBagCapacity_C::Text_Capacity' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeBagCapacity_C, Text_UseNum) == 0x000290, "Member 'UPlayerGaugeBagCapacity_C::Text_UseNum' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeBagCapacity_C, CapacityNum) == 0x000298, "Member 'UPlayerGaugeBagCapacity_C::CapacityNum' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeBagCapacity_C, UseNum) == 0x00029C, "Member 'UPlayerGaugeBagCapacity_C::UseNum' has a wrong offset!");
static_assert(offsetof(UPlayerGaugeBagCapacity_C, IsBoostCapacity) == 0x0002A0, "Member 'UPlayerGaugeBagCapacity_C::IsBoostCapacity' has a wrong offset!");

}

