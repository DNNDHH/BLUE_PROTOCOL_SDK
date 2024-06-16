#pragma once

 

// Package: Ghost

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Ghost.Ghost_C
// 0x0018 (0x0290 - 0x0278)
class UGhost_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                               Root;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                            BaseWidget;                                        // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Ghost(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ghost_C">();
	}
	static class UGhost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGhost_C>();
	}
};
static_assert(alignof(UGhost_C) == 0x000008, "Wrong alignment on UGhost_C");
static_assert(sizeof(UGhost_C) == 0x000290, "Wrong size on UGhost_C");
static_assert(offsetof(UGhost_C, UberGraphFrame) == 0x000278, "Member 'UGhost_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGhost_C, Root) == 0x000280, "Member 'UGhost_C::Root' has a wrong offset!");
static_assert(offsetof(UGhost_C, BaseWidget) == 0x000288, "Member 'UGhost_C::BaseWidget' has a wrong offset!");

}

