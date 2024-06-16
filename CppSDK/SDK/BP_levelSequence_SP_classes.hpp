#pragma once

 

// Package: BP_levelSequence_SP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_levelSequence_SP.BP_LevelSequence_SP_C
// 0x0008 (0x0300 - 0x02F8)
class ABP_LevelSequence_SP_C final : public ASBLevelSequenceActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_LevelSequence_SP(int32 EntryPoint);
	void ReceiveOnStop();
	void ReceiveOnPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LevelSequence_SP_C">();
	}
	static class ABP_LevelSequence_SP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LevelSequence_SP_C>();
	}
};
static_assert(alignof(ABP_LevelSequence_SP_C) == 0x000008, "Wrong alignment on ABP_LevelSequence_SP_C");
static_assert(sizeof(ABP_LevelSequence_SP_C) == 0x000300, "Wrong size on ABP_LevelSequence_SP_C");
static_assert(offsetof(ABP_LevelSequence_SP_C, UberGraphFrame) == 0x0002F8, "Member 'ABP_LevelSequence_SP_C::UberGraphFrame' has a wrong offset!");

}

