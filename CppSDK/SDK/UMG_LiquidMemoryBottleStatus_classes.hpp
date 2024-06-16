#pragma once

 

// Package: UMG_LiquidMemoryBottleStatus

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_LiquidMemoryBottleStatus.UMG_LiquidMemoryBottleStatus_C
// 0x0078 (0x02F0 - 0x0278)
class UUMG_LiquidMemoryBottleStatus_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HorizontalBox_BottleIcons;                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LiquidMemoryUnfilledIcon_C*        TestBottleIcon_1;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LiquidMemoryUnfilledIcon_C*        TestBottleIcon_2;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LiquidMemoryUnfilledIcon_C*        TestBottleIcon_3;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LiquidMemoryUnfilledIcon_C*        TestBottleIcon_4;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LiquidMemoryUnfilledIcon_C*        TestBottleIcon_5;                                  // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSBLiquidMemoryInfo                    LiquidMemoryInfo;                                  // 0x02B0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<struct FMargin>                        TestBottleIconPaddings;                            // 0x02D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsFullCharge;                                      // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_UMG_LiquidMemoryBottleStatus(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void SetBottleStatus(const struct FSBLiquidMemoryInfo& InLiquidMemoryInfo);
	void SetBottleAccumulatedRate_One(int32 InBottleId, float AccumlatedRate);
	void SetBottleLiquidMemory_One(int32 InBottleId, int32 InLiquidMemoryId, float InAccumulatedRate);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_LiquidMemoryBottleStatus_C">();
	}
	static class UUMG_LiquidMemoryBottleStatus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_LiquidMemoryBottleStatus_C>();
	}
};
static_assert(alignof(UUMG_LiquidMemoryBottleStatus_C) == 0x000008, "Wrong alignment on UUMG_LiquidMemoryBottleStatus_C");
static_assert(sizeof(UUMG_LiquidMemoryBottleStatus_C) == 0x0002F0, "Wrong size on UUMG_LiquidMemoryBottleStatus_C");
static_assert(offsetof(UUMG_LiquidMemoryBottleStatus_C, UberGraphFrame) == 0x000278, "Member 'UUMG_LiquidMemoryBottleStatus_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryBottleStatus_C, HorizontalBox_BottleIcons) == 0x000280, "Member 'UUMG_LiquidMemoryBottleStatus_C::HorizontalBox_BottleIcons' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryBottleStatus_C, TestBottleIcon_1) == 0x000288, "Member 'UUMG_LiquidMemoryBottleStatus_C::TestBottleIcon_1' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryBottleStatus_C, TestBottleIcon_2) == 0x000290, "Member 'UUMG_LiquidMemoryBottleStatus_C::TestBottleIcon_2' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryBottleStatus_C, TestBottleIcon_3) == 0x000298, "Member 'UUMG_LiquidMemoryBottleStatus_C::TestBottleIcon_3' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryBottleStatus_C, TestBottleIcon_4) == 0x0002A0, "Member 'UUMG_LiquidMemoryBottleStatus_C::TestBottleIcon_4' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryBottleStatus_C, TestBottleIcon_5) == 0x0002A8, "Member 'UUMG_LiquidMemoryBottleStatus_C::TestBottleIcon_5' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryBottleStatus_C, LiquidMemoryInfo) == 0x0002B0, "Member 'UUMG_LiquidMemoryBottleStatus_C::LiquidMemoryInfo' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryBottleStatus_C, TestBottleIconPaddings) == 0x0002D8, "Member 'UUMG_LiquidMemoryBottleStatus_C::TestBottleIconPaddings' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryBottleStatus_C, IsFullCharge) == 0x0002E8, "Member 'UUMG_LiquidMemoryBottleStatus_C::IsFullCharge' has a wrong offset!");

}

