#pragma once

 

// Package: SS_NPC_WaitTurn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SS_NPC_WaitTurn.SS_NPC_WaitTurn_C
// 0x0018 (0x0058 - 0x0040)
class USS_NPC_WaitTurn_C final : public USBCustomState_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0040(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Start_Ratio;                                       // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         End_Ratio;                                         // 0x004C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Complete_Ratio;                                    // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SS_NPC_WaitTurn(int32 EntryPoint);
	void TickDelegate(class ASBMobCharacter* InMobCharacter);
	void BeginProcess(class ASBMobCharacter* MobCharacer, class USBNpcCharacterAnimInstance* AnimInstance);
	void TickProcess(class USBNpcCharacterAnimInstance* AnimInstance);
	void TickDelegateProcess(class AActor* Actor, class USBNpcCharacterAnimInstance* AnimInstance);
	void EndProcess(class ASBMobCharacter* MobCharacter, class USBNpcCharacterAnimInstance* AnimInstance);
	void SetStartTime(class USBNpcCharacterAnimInstance* Anim_Instance);
	void GetStartTime(class USBNpcCharacterAnimInstance* Anim_Instance, struct FDateTime* StartTime);
	void Set_Temp_Anim_Time_Ratio(class USBNpcCharacterAnimInstance* AnimInstance, float AnimTimeRatio);
	void SetTempAnimTimeLength(class USBNpcCharacterAnimInstance* AnimInstance, float AnimTimeLength);
	void GetTempAnimTimeRatio(class USBNpcCharacterAnimInstance* AnimInstance, float* AnimTimeRatio);
	void GetTempAnimTimeLength(class USBNpcCharacterAnimInstance* AnimInstance, float* AnimTimeLength);
	void SetCompleteAnimTimeRatio(class USBNpcCharacterAnimInstance* AnimInstance, bool IsCompleted);
	void IsCompleteAnimTimeRatio(class USBNpcCharacterAnimInstance* AnimInstance, bool* IsCompleted);

	void ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const;
	void ReceiveBeginPlay(class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const;
	void ReceiveEndPlay(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SS_NPC_WaitTurn_C">();
	}
	static class USS_NPC_WaitTurn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USS_NPC_WaitTurn_C>();
	}
};
static_assert(alignof(USS_NPC_WaitTurn_C) == 0x000008, "Wrong alignment on USS_NPC_WaitTurn_C");
static_assert(sizeof(USS_NPC_WaitTurn_C) == 0x000058, "Wrong size on USS_NPC_WaitTurn_C");
static_assert(offsetof(USS_NPC_WaitTurn_C, UberGraphFrame) == 0x000040, "Member 'USS_NPC_WaitTurn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USS_NPC_WaitTurn_C, Start_Ratio) == 0x000048, "Member 'USS_NPC_WaitTurn_C::Start_Ratio' has a wrong offset!");
static_assert(offsetof(USS_NPC_WaitTurn_C, End_Ratio) == 0x00004C, "Member 'USS_NPC_WaitTurn_C::End_Ratio' has a wrong offset!");
static_assert(offsetof(USS_NPC_WaitTurn_C, Complete_Ratio) == 0x000050, "Member 'USS_NPC_WaitTurn_C::Complete_Ratio' has a wrong offset!");

}

