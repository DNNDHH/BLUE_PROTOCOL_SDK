#pragma once

 

// Package: P020_Strengthen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass P020_Strengthen.P020_Strengthen_C
// 0x0020 (0x0298 - 0x0278)
class UP020_Strengthen_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimLoop;                                          // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchNum;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         StNum;                                             // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_P020_Strengthen(int32 EntryPoint);
	void Construct();
	void SetStNum(int32 InNum);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"P020_Strengthen_C">();
	}
	static class UP020_Strengthen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UP020_Strengthen_C>();
	}
};
static_assert(alignof(UP020_Strengthen_C) == 0x000008, "Wrong alignment on UP020_Strengthen_C");
static_assert(sizeof(UP020_Strengthen_C) == 0x000298, "Wrong size on UP020_Strengthen_C");
static_assert(offsetof(UP020_Strengthen_C, UberGraphFrame) == 0x000278, "Member 'UP020_Strengthen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UP020_Strengthen_C, AnimLoop) == 0x000280, "Member 'UP020_Strengthen_C::AnimLoop' has a wrong offset!");
static_assert(offsetof(UP020_Strengthen_C, SwitchNum) == 0x000288, "Member 'UP020_Strengthen_C::SwitchNum' has a wrong offset!");
static_assert(offsetof(UP020_Strengthen_C, StNum) == 0x000290, "Member 'UP020_Strengthen_C::StNum' has a wrong offset!");

}

