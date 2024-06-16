#pragma once

 

// Package: LapCount

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LapCount.LapCount_C
// 0x0048 (0x02C0 - 0x0278)
class ULapCount_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Bg_L;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg_M;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg_S;                                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULapCountItem_C*                        LapCountItem;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULapCountItem_C*                        LapCountItem_1;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULapCountItem_C*                        LapCountItem_2;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switch_FrameType;                                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         FrameType;                                         // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_LapCount(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetLapCount(int32 Count);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LapCount_C">();
	}
	static class ULapCount_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULapCount_C>();
	}
};
static_assert(alignof(ULapCount_C) == 0x000008, "Wrong alignment on ULapCount_C");
static_assert(sizeof(ULapCount_C) == 0x0002C0, "Wrong size on ULapCount_C");
static_assert(offsetof(ULapCount_C, UberGraphFrame) == 0x000278, "Member 'ULapCount_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULapCount_C, Bg_L) == 0x000280, "Member 'ULapCount_C::Bg_L' has a wrong offset!");
static_assert(offsetof(ULapCount_C, Bg_M) == 0x000288, "Member 'ULapCount_C::Bg_M' has a wrong offset!");
static_assert(offsetof(ULapCount_C, Bg_S) == 0x000290, "Member 'ULapCount_C::Bg_S' has a wrong offset!");
static_assert(offsetof(ULapCount_C, LapCountItem) == 0x000298, "Member 'ULapCount_C::LapCountItem' has a wrong offset!");
static_assert(offsetof(ULapCount_C, LapCountItem_1) == 0x0002A0, "Member 'ULapCount_C::LapCountItem_1' has a wrong offset!");
static_assert(offsetof(ULapCount_C, LapCountItem_2) == 0x0002A8, "Member 'ULapCount_C::LapCountItem_2' has a wrong offset!");
static_assert(offsetof(ULapCount_C, Switch_FrameType) == 0x0002B0, "Member 'ULapCount_C::Switch_FrameType' has a wrong offset!");
static_assert(offsetof(ULapCount_C, FrameType) == 0x0002B8, "Member 'ULapCount_C::FrameType' has a wrong offset!");

}

