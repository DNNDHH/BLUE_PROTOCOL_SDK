#pragma once

 

// Package: IconEnemyGate

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IconEnemyGate.IconEnemyGate_C
// 0x0020 (0x02B8 - 0x0298)
class UIconEnemyGate_C final : public USBMapIcon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimCircle;                                        // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Root;                                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsInSide_0;                                        // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_IconEnemyGate(int32 EntryPoint);
	void Construct();
	void PlayAnimCircle();
	void OnSetInside(bool IsInSide);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconEnemyGate_C">();
	}
	static class UIconEnemyGate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconEnemyGate_C>();
	}
};
static_assert(alignof(UIconEnemyGate_C) == 0x000008, "Wrong alignment on UIconEnemyGate_C");
static_assert(sizeof(UIconEnemyGate_C) == 0x0002B8, "Wrong size on UIconEnemyGate_C");
static_assert(offsetof(UIconEnemyGate_C, UberGraphFrame) == 0x000298, "Member 'UIconEnemyGate_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UIconEnemyGate_C, AnimCircle) == 0x0002A0, "Member 'UIconEnemyGate_C::AnimCircle' has a wrong offset!");
static_assert(offsetof(UIconEnemyGate_C, Root) == 0x0002A8, "Member 'UIconEnemyGate_C::Root' has a wrong offset!");
static_assert(offsetof(UIconEnemyGate_C, IsInSide_0) == 0x0002B0, "Member 'UIconEnemyGate_C::IsInSide_0' has a wrong offset!");

}

