#pragma once

 

// Package: BP_PlayerInteractionComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerInteractionComponent.BP_PlayerInteractionComponent_C
// 0x0010 (0x0178 - 0x0168)
class UBP_PlayerInteractionComponent_C final : public USBPlayerInteractionComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0168(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   ResurrectionTutorialHelpId;                        // 0x0170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PlayerInteractionComponent(int32 EntryPoint);
	void OnChangeInteractionUI();
	void TutorialHelp();
	void UpdateInteractionInfo();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerInteractionComponent_C">();
	}
	static class UBP_PlayerInteractionComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerInteractionComponent_C>();
	}
};
static_assert(alignof(UBP_PlayerInteractionComponent_C) == 0x000008, "Wrong alignment on UBP_PlayerInteractionComponent_C");
static_assert(sizeof(UBP_PlayerInteractionComponent_C) == 0x000178, "Wrong size on UBP_PlayerInteractionComponent_C");
static_assert(offsetof(UBP_PlayerInteractionComponent_C, UberGraphFrame) == 0x000168, "Member 'UBP_PlayerInteractionComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PlayerInteractionComponent_C, ResurrectionTutorialHelpId) == 0x000170, "Member 'UBP_PlayerInteractionComponent_C::ResurrectionTutorialHelpId' has a wrong offset!");

}

