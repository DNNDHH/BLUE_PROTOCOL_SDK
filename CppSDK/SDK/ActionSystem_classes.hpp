#pragma once

 

// Package: ActionSystem

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "ActionSystem_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class ActionSystem.ASAnimationSet
// 0x0048 (0x0078 - 0x0030)
class UASAnimationSet final : public UDataAsset
{
public:
	TArray<class UASAnimationSet*>                Parents;                                           // 0x0030(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FASAnimationSetEntry_Sequence>  Sequences;                                         // 0x0040(0x0010)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FASAnimationSetEntry_BlendSpace> BlendSpaces;                                       // 0x0050(0x0010)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FASAnimationSetEntry_StateMachine> StateMachines;                                     // 0x0060(0x0010)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         Pad_19DD[0x8];                                     // 0x0070(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UBlendSpaceBase* GetBlendSpace(const class FName& KeyName) const;
	class UAnimSequenceBase* GetSequence(const class FName& KeyName) const;
	class UASStateMachine* GetStateMachine(const class FName& KeyName) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASAnimationSet">();
	}
	static class UASAnimationSet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASAnimationSet>();
	}
};
static_assert(alignof(UASAnimationSet) == 0x000008, "Wrong alignment on UASAnimationSet");
static_assert(sizeof(UASAnimationSet) == 0x000078, "Wrong size on UASAnimationSet");
static_assert(offsetof(UASAnimationSet, Parents) == 0x000030, "Member 'UASAnimationSet::Parents' has a wrong offset!");
static_assert(offsetof(UASAnimationSet, Sequences) == 0x000040, "Member 'UASAnimationSet::Sequences' has a wrong offset!");
static_assert(offsetof(UASAnimationSet, BlendSpaces) == 0x000050, "Member 'UASAnimationSet::BlendSpaces' has a wrong offset!");
static_assert(offsetof(UASAnimationSet, StateMachines) == 0x000060, "Member 'UASAnimationSet::StateMachines' has a wrong offset!");

// Class ActionSystem.ASStateMachine
// 0x0028 (0x0050 - 0x0028)
class UASStateMachine final : public UObject
{
public:
	class UASSMStateNode*                         RootNode;                                          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UASSMStateNode*>                 StateTable;                                        // 0x0030(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UASAnimationSet*                        AnimationSetAsset;                                 // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          DisableAnimationSetOverride;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bInertialBlend;                                    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19DE[0x6];                                     // 0x004A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASStateMachine">();
	}
	static class UASStateMachine* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASStateMachine>();
	}
};
static_assert(alignof(UASStateMachine) == 0x000008, "Wrong alignment on UASStateMachine");
static_assert(sizeof(UASStateMachine) == 0x000050, "Wrong size on UASStateMachine");
static_assert(offsetof(UASStateMachine, RootNode) == 0x000028, "Member 'UASStateMachine::RootNode' has a wrong offset!");
static_assert(offsetof(UASStateMachine, StateTable) == 0x000030, "Member 'UASStateMachine::StateTable' has a wrong offset!");
static_assert(offsetof(UASStateMachine, AnimationSetAsset) == 0x000040, "Member 'UASStateMachine::AnimationSetAsset' has a wrong offset!");
static_assert(offsetof(UASStateMachine, DisableAnimationSetOverride) == 0x000048, "Member 'UASStateMachine::DisableAnimationSetOverride' has a wrong offset!");
static_assert(offsetof(UASStateMachine, bInertialBlend) == 0x000049, "Member 'UASStateMachine::bInertialBlend' has a wrong offset!");

// Class ActionSystem.ASAnimInstance
// 0x01B0 (0x0470 - 0x02C0)
#pragma pack(push, 0x1)
class alignas(0x10) UASAnimInstance : public UAnimInstance
{
public:
	uint8                                         Pad_19DF[0x1B0];                                   // 0x02B8(0x01B0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AnimNotify_StateChange(class UASAnimNotify_StateChange* Notify);
	bool IsHitShift();
	void JumpMachineState(const class FString& MachinName, const class FString& StateName);
	void ReceiveStateChange(const class FString& PreviousStateName, const class FString& NextStateName);
	void SendCommand(class FName Command, const bool bForce);
	void SetDynamicAnimationSet(const class FString& AnimNodeName, const class FString& StateName, const class UASAnimationSet* AnimationSetAsset);
	void SetDynamicSequence(const class FString& AnimNodeName, const class FString& StateName, const class UAnimSequenceBase* SequenceAsset);
	void SetDynamicSubMachine(const class FString& AnimNodeName, const class FString& StateName, const class UASStateMachine* StateMachineAsset);
	void SetDynamicTransition(const class FString& AnimNodeName, const class FString& TransitionName, float CrossfadeDuration);

	bool HasTag(const class FName& Tag) const;
	bool HasTagAny(const TArray<class FName>& Tags) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASAnimInstance">();
	}
	static class UASAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASAnimInstance>();
	}
};
#pragma pack(pop)
static_assert(alignof(UASAnimInstance) == 0x000010, "Wrong alignment on UASAnimInstance");
static_assert(sizeof(UASAnimInstance) == 0x000470, "Wrong size on UASAnimInstance");

// Class ActionSystem.ASAnimNotify_EndCancel
// 0x0000 (0x0038 - 0x0038)
class UASAnimNotify_EndCancel final : public UAnimNotify
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASAnimNotify_EndCancel">();
	}
	static class UASAnimNotify_EndCancel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASAnimNotify_EndCancel>();
	}
};
static_assert(alignof(UASAnimNotify_EndCancel) == 0x000008, "Wrong alignment on UASAnimNotify_EndCancel");
static_assert(sizeof(UASAnimNotify_EndCancel) == 0x000038, "Wrong size on UASAnimNotify_EndCancel");

// Class ActionSystem.ASAnimNotify_HitShift
// 0x0000 (0x0038 - 0x0038)
class UASAnimNotify_HitShift final : public UAnimNotify
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASAnimNotify_HitShift">();
	}
	static class UASAnimNotify_HitShift* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASAnimNotify_HitShift>();
	}
};
static_assert(alignof(UASAnimNotify_HitShift) == 0x000008, "Wrong alignment on UASAnimNotify_HitShift");
static_assert(sizeof(UASAnimNotify_HitShift) == 0x000038, "Wrong size on UASAnimNotify_HitShift");

// Class ActionSystem.ASAnimNotify_StateChange
// 0x0040 (0x0078 - 0x0038)
class UASAnimNotify_StateChange final : public UAnimNotify
{
public:
	uint8                                         Pad_19E4[0x40];                                    // 0x0038(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASAnimNotify_StateChange">();
	}
	static class UASAnimNotify_StateChange* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASAnimNotify_StateChange>();
	}
};
static_assert(alignof(UASAnimNotify_StateChange) == 0x000008, "Wrong alignment on UASAnimNotify_StateChange");
static_assert(sizeof(UASAnimNotify_StateChange) == 0x000078, "Wrong size on UASAnimNotify_StateChange");

// Class ActionSystem.ASTransition_CommonBase
// 0x0000 (0x0028 - 0x0028)
class UASTransition_CommonBase : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASTransition_CommonBase">();
	}
	static class UASTransition_CommonBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASTransition_CommonBase>();
	}
};
static_assert(alignof(UASTransition_CommonBase) == 0x000008, "Wrong alignment on UASTransition_CommonBase");
static_assert(sizeof(UASTransition_CommonBase) == 0x000028, "Wrong size on UASTransition_CommonBase");

// Class ActionSystem.ASTransition_Base
// 0x0008 (0x0030 - 0x0028)
class UASTransition_Base : public UASTransition_CommonBase
{
public:
	uint8                                         bNotEqual : 1;                                     // 0x0028(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_19E5[0x7];                                     // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASTransition_Base">();
	}
	static class UASTransition_Base* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASTransition_Base>();
	}
};
static_assert(alignof(UASTransition_Base) == 0x000008, "Wrong alignment on UASTransition_Base");
static_assert(sizeof(UASTransition_Base) == 0x000030, "Wrong size on UASTransition_Base");

// Class ActionSystem.ASTransition_Command
// 0x0008 (0x0038 - 0x0030)
class UASTransition_Command final : public UASTransition_Base
{
public:
	class FName                                   Command;                                           // 0x0030(0x0008)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASTransition_Command">();
	}
	static class UASTransition_Command* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASTransition_Command>();
	}
};
static_assert(alignof(UASTransition_Command) == 0x000008, "Wrong alignment on UASTransition_Command");
static_assert(sizeof(UASTransition_Command) == 0x000038, "Wrong size on UASTransition_Command");
static_assert(offsetof(UASTransition_Command, Command) == 0x000030, "Member 'UASTransition_Command::Command' has a wrong offset!");

// Class ActionSystem.ASAnimNotifyState
// 0x0000 (0x0030 - 0x0030)
class UASAnimNotifyState : public UAnimNotifyState
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASAnimNotifyState">();
	}
	static class UASAnimNotifyState* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASAnimNotifyState>();
	}
};
static_assert(alignof(UASAnimNotifyState) == 0x000008, "Wrong alignment on UASAnimNotifyState");
static_assert(sizeof(UASAnimNotifyState) == 0x000030, "Wrong size on UASAnimNotifyState");

// Class ActionSystem.ASAnimNotifyState_Attack
// 0x0068 (0x0098 - 0x0030)
class UASAnimNotifyState_Attack : public UASAnimNotifyState
{
public:
	uint8                                         Pad_19E6[0x8];                                     // 0x0030(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FASAttackCollision>             AttackCollisions;                                  // 0x0038(0x0010)(Edit, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_19E7[0x50];                                    // 0x0048(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASAnimNotifyState_Attack">();
	}
	static class UASAnimNotifyState_Attack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASAnimNotifyState_Attack>();
	}
};
static_assert(alignof(UASAnimNotifyState_Attack) == 0x000008, "Wrong alignment on UASAnimNotifyState_Attack");
static_assert(sizeof(UASAnimNotifyState_Attack) == 0x000098, "Wrong size on UASAnimNotifyState_Attack");
static_assert(offsetof(UASAnimNotifyState_Attack, AttackCollisions) == 0x000038, "Member 'UASAnimNotifyState_Attack::AttackCollisions' has a wrong offset!");

// Class ActionSystem.ASAnimNotifyState_EndCancel
// 0x0000 (0x0030 - 0x0030)
class UASAnimNotifyState_EndCancel final : public UASAnimNotifyState
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASAnimNotifyState_EndCancel">();
	}
	static class UASAnimNotifyState_EndCancel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASAnimNotifyState_EndCancel>();
	}
};
static_assert(alignof(UASAnimNotifyState_EndCancel) == 0x000008, "Wrong alignment on UASAnimNotifyState_EndCancel");
static_assert(sizeof(UASAnimNotifyState_EndCancel) == 0x000030, "Wrong size on UASAnimNotifyState_EndCancel");

// Class ActionSystem.ASCollisionGroupComponent
// 0x0020 (0x0230 - 0x0210)
class UASCollisionGroupComponent : public USceneComponent
{
public:
	uint8                                         Pad_19E8[0x28];                                    // 0x0208(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnAttackBeginOverlap(class UPrimitiveComponent* MyComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& SweepResult);
	void OnAttackEndOverlap(class UPrimitiveComponent* MyComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp);
	void SetActiveCollision(bool Active);
	void StartAttack(int32 HitCount, float HitInterval);
	void StopAttack();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASCollisionGroupComponent">();
	}
	static class UASCollisionGroupComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASCollisionGroupComponent>();
	}
};
static_assert(alignof(UASCollisionGroupComponent) == 0x000010, "Wrong alignment on UASCollisionGroupComponent");
static_assert(sizeof(UASCollisionGroupComponent) == 0x000230, "Wrong size on UASCollisionGroupComponent");

// Class ActionSystem.ASAnimNotifyState_Float
// 0x0000 (0x0030 - 0x0030)
class UASAnimNotifyState_Float final : public UASAnimNotifyState
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASAnimNotifyState_Float">();
	}
	static class UASAnimNotifyState_Float* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASAnimNotifyState_Float>();
	}
};
static_assert(alignof(UASAnimNotifyState_Float) == 0x000008, "Wrong alignment on UASAnimNotifyState_Float");
static_assert(sizeof(UASAnimNotifyState_Float) == 0x000030, "Wrong size on UASAnimNotifyState_Float");

// Class ActionSystem.ASTransitionEventDriven_Base
// 0x0000 (0x0028 - 0x0028)
class UASTransitionEventDriven_Base : public UASTransition_CommonBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASTransitionEventDriven_Base">();
	}
	static class UASTransitionEventDriven_Base* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASTransitionEventDriven_Base>();
	}
};
static_assert(alignof(UASTransitionEventDriven_Base) == 0x000008, "Wrong alignment on UASTransitionEventDriven_Base");
static_assert(sizeof(UASTransitionEventDriven_Base) == 0x000028, "Wrong size on UASTransitionEventDriven_Base");

// Class ActionSystem.ASTransitionEventDriven_Command
// 0x0020 (0x0048 - 0x0028)
class UASTransitionEventDriven_Command : public UASTransitionEventDriven_Base
{
public:
	uint8                                         Pad_19E9[0x10];                                    // 0x0028(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           Commands;                                          // 0x0038(0x0010)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASTransitionEventDriven_Command">();
	}
	static class UASTransitionEventDriven_Command* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASTransitionEventDriven_Command>();
	}
};
static_assert(alignof(UASTransitionEventDriven_Command) == 0x000008, "Wrong alignment on UASTransitionEventDriven_Command");
static_assert(sizeof(UASTransitionEventDriven_Command) == 0x000048, "Wrong size on UASTransitionEventDriven_Command");
static_assert(offsetof(UASTransitionEventDriven_Command, Commands) == 0x000038, "Member 'UASTransitionEventDriven_Command::Commands' has a wrong offset!");

// Class ActionSystem.ASAnimNotifyState_Input
// 0x0018 (0x0048 - 0x0030)
class UASAnimNotifyState_Input final : public UASAnimNotifyState
{
public:
	float                                         ShiftStartTime;                                    // 0x0030(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19EA[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           Commands;                                          // 0x0038(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASAnimNotifyState_Input">();
	}
	static class UASAnimNotifyState_Input* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASAnimNotifyState_Input>();
	}
};
static_assert(alignof(UASAnimNotifyState_Input) == 0x000008, "Wrong alignment on UASAnimNotifyState_Input");
static_assert(sizeof(UASAnimNotifyState_Input) == 0x000048, "Wrong size on UASAnimNotifyState_Input");
static_assert(offsetof(UASAnimNotifyState_Input, ShiftStartTime) == 0x000030, "Member 'UASAnimNotifyState_Input::ShiftStartTime' has a wrong offset!");
static_assert(offsetof(UASAnimNotifyState_Input, Commands) == 0x000038, "Member 'UASAnimNotifyState_Input::Commands' has a wrong offset!");

// Class ActionSystem.ASAnimNotifyState_Invincible
// 0x0000 (0x0030 - 0x0030)
class UASAnimNotifyState_Invincible final : public UASAnimNotifyState
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASAnimNotifyState_Invincible">();
	}
	static class UASAnimNotifyState_Invincible* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASAnimNotifyState_Invincible>();
	}
};
static_assert(alignof(UASAnimNotifyState_Invincible) == 0x000008, "Wrong alignment on UASAnimNotifyState_Invincible");
static_assert(sizeof(UASAnimNotifyState_Invincible) == 0x000030, "Wrong size on UASAnimNotifyState_Invincible");

// Class ActionSystem.ASCollisionBoxComponent
// 0x0020 (0x04B0 - 0x0490)
class UASCollisionBoxComponent : public UBoxComponent
{
public:
	uint8                                         Pad_19EB[0x20];                                    // 0x0490(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnAttackBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnAttackEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASCollisionBoxComponent">();
	}
	static class UASCollisionBoxComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASCollisionBoxComponent>();
	}
};
static_assert(alignof(UASCollisionBoxComponent) == 0x000010, "Wrong alignment on UASCollisionBoxComponent");
static_assert(sizeof(UASCollisionBoxComponent) == 0x0004B0, "Wrong size on UASCollisionBoxComponent");

// Class ActionSystem.ASAnimNotifyState_SuperArmor
// 0x0000 (0x0030 - 0x0030)
class UASAnimNotifyState_SuperArmor final : public UASAnimNotifyState
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASAnimNotifyState_SuperArmor">();
	}
	static class UASAnimNotifyState_SuperArmor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASAnimNotifyState_SuperArmor>();
	}
};
static_assert(alignof(UASAnimNotifyState_SuperArmor) == 0x000008, "Wrong alignment on UASAnimNotifyState_SuperArmor");
static_assert(sizeof(UASAnimNotifyState_SuperArmor) == 0x000030, "Wrong size on UASAnimNotifyState_SuperArmor");

// Class ActionSystem.ASCharacterBase
// 0x0030 (0x04F0 - 0x04C0)
class AASCharacterBase : public ACharacter
{
public:
	uint8                                         Pad_19EE[0x10];                                    // 0x04B8(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	struct FASReplicateStateInfo                  ReplicateStateInfo;                                // 0x04C8(0x0020)(Net, Transient, RepNotify, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_19EF[0x8];                                     // 0x04E8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void JumpMachineState(const class FString& MachinName, const class FString& StateName);
	void OnRep_ReplicateStateInfo();
	void ReceiveStateChange(const class FString& PreviousStateName, const class FString& NextStateName);
	void SendAnimCommand(const class FString& Command, bool Force);
	void SendCommand(class FName Command, bool Force, bool bNoEndCancel);

	TArray<class FName> GetAnimTags() const;
	bool HasAnimTag(class FName Tag) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASCharacterBase">();
	}
	static class AASCharacterBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<AASCharacterBase>();
	}
};
static_assert(alignof(AASCharacterBase) == 0x000010, "Wrong alignment on AASCharacterBase");
static_assert(sizeof(AASCharacterBase) == 0x0004F0, "Wrong size on AASCharacterBase");
static_assert(offsetof(AASCharacterBase, ReplicateStateInfo) == 0x0004C8, "Member 'AASCharacterBase::ReplicateStateInfo' has a wrong offset!");

// Class ActionSystem.ASCharacter
// 0x0090 (0x0580 - 0x04F0)
class AASCharacter : public AASCharacterBase
{
public:
	uint8                                         Pad_19F3[0x8];                                     // 0x04F0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UASCollisionGroupComponent*             CollisionGroup;                                    // 0x04F8(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UASCollisionSphereComponent*            DamageCollision;                                   // 0x0500(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_19F4[0x78];                                    // 0x0508(0x0078)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool IsHitAttack() const;
	bool IsSuperArmor() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASCharacter">();
	}
	static class AASCharacter* GetDefaultObj()
	{
		return GetDefaultObjImpl<AASCharacter>();
	}
};
static_assert(alignof(AASCharacter) == 0x000010, "Wrong alignment on AASCharacter");
static_assert(sizeof(AASCharacter) == 0x000580, "Wrong size on AASCharacter");
static_assert(offsetof(AASCharacter, CollisionGroup) == 0x0004F8, "Member 'AASCharacter::CollisionGroup' has a wrong offset!");
static_assert(offsetof(AASCharacter, DamageCollision) == 0x000500, "Member 'AASCharacter::DamageCollision' has a wrong offset!");

// Class ActionSystem.ASCharacterMovementComponent
// 0x0010 (0x0B20 - 0x0B10)
class UASCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	uint8                                         Pad_19F5[0x10];                                    // 0x0B10(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SendAnimCommand(const class FString& Command, bool Force);
	void SendCommand(class FName Command, bool Force);
	void SetImpulse(const struct FVector& Impulse, bool bVelocityChange);

	bool HasAnimTag(class FName Tag) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASCharacterMovementComponent">();
	}
	static class UASCharacterMovementComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASCharacterMovementComponent>();
	}
};
static_assert(alignof(UASCharacterMovementComponent) == 0x000010, "Wrong alignment on UASCharacterMovementComponent");
static_assert(sizeof(UASCharacterMovementComponent) == 0x000B20, "Wrong size on UASCharacterMovementComponent");

// Class ActionSystem.ASCollisionCapsuleComponent
// 0x0020 (0x04B0 - 0x0490)
class UASCollisionCapsuleComponent : public UCapsuleComponent
{
public:
	uint8                                         Pad_19FA[0x28];                                    // 0x0488(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnAttackBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnAttackEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASCollisionCapsuleComponent">();
	}
	static class UASCollisionCapsuleComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASCollisionCapsuleComponent>();
	}
};
static_assert(alignof(UASCollisionCapsuleComponent) == 0x000010, "Wrong alignment on UASCollisionCapsuleComponent");
static_assert(sizeof(UASCollisionCapsuleComponent) == 0x0004B0, "Wrong size on UASCollisionCapsuleComponent");

// Class ActionSystem.ASCollisionInterface
// 0x0000 (0x0028 - 0x0028)
class IASCollisionInterface final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASCollisionInterface">();
	}
	static class IASCollisionInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IASCollisionInterface>();
	}
};
static_assert(alignof(IASCollisionInterface) == 0x000008, "Wrong alignment on IASCollisionInterface");
static_assert(sizeof(IASCollisionInterface) == 0x000028, "Wrong size on IASCollisionInterface");

// Class ActionSystem.ASCollisionListener
// 0x0000 (0x0028 - 0x0028)
class IASCollisionListener final : public IInterface
{
public:
	bool OnAttackOverlapCallback(class UPrimitiveComponent* MyComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& SweepResult);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASCollisionListener">();
	}
	static class IASCollisionListener* GetDefaultObj()
	{
		return GetDefaultObjImpl<IASCollisionListener>();
	}
};
static_assert(alignof(IASCollisionListener) == 0x000008, "Wrong alignment on IASCollisionListener");
static_assert(sizeof(IASCollisionListener) == 0x000028, "Wrong size on IASCollisionListener");

// Class ActionSystem.ASCollisionSphereComponent
// 0x0030 (0x04C0 - 0x0490)
class UASCollisionSphereComponent : public USphereComponent
{
public:
	uint8                                         Pad_19FE[0x38];                                    // 0x0488(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnAttackBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnAttackEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASCollisionSphereComponent">();
	}
	static class UASCollisionSphereComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASCollisionSphereComponent>();
	}
};
static_assert(alignof(UASCollisionSphereComponent) == 0x000010, "Wrong alignment on UASCollisionSphereComponent");
static_assert(sizeof(UASCollisionSphereComponent) == 0x0004C0, "Wrong size on UASCollisionSphereComponent");

// Class ActionSystem.ASDamageType
// 0x0018 (0x0058 - 0x0040)
class UASDamageType : public UDamageType
{
public:
	uint8                                         bUseDirection : 1;                                 // 0x0040(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1A01[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Direction;                                         // 0x0044(0x000C)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         HitStopTimeAttack;                                 // 0x0050(0x0004)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         HitStopTimeDamage;                                 // 0x0054(0x0004)(Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASDamageType">();
	}
	static class UASDamageType* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASDamageType>();
	}
};
static_assert(alignof(UASDamageType) == 0x000008, "Wrong alignment on UASDamageType");
static_assert(sizeof(UASDamageType) == 0x000058, "Wrong size on UASDamageType");
static_assert(offsetof(UASDamageType, Direction) == 0x000044, "Member 'UASDamageType::Direction' has a wrong offset!");
static_assert(offsetof(UASDamageType, HitStopTimeAttack) == 0x000050, "Member 'UASDamageType::HitStopTimeAttack' has a wrong offset!");
static_assert(offsetof(UASDamageType, HitStopTimeDamage) == 0x000054, "Member 'UASDamageType::HitStopTimeDamage' has a wrong offset!");

// Class ActionSystem.ASSMNode
// 0x0028 (0x0050 - 0x0028)
class UASSMNode : public UObject
{
public:
	class FString                                 StateName;                                         // 0x0028(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UASSMNode*>                      LinkedTo;                                          // 0x0038(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UASStateMachine*                        MachineAsset;                                      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASSMNode">();
	}
	static class UASSMNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASSMNode>();
	}
};
static_assert(alignof(UASSMNode) == 0x000008, "Wrong alignment on UASSMNode");
static_assert(sizeof(UASSMNode) == 0x000050, "Wrong size on UASSMNode");
static_assert(offsetof(UASSMNode, StateName) == 0x000028, "Member 'UASSMNode::StateName' has a wrong offset!");
static_assert(offsetof(UASSMNode, LinkedTo) == 0x000038, "Member 'UASSMNode::LinkedTo' has a wrong offset!");
static_assert(offsetof(UASSMNode, MachineAsset) == 0x000048, "Member 'UASSMNode::MachineAsset' has a wrong offset!");

// Class ActionSystem.ASSMStateNode
// 0x0050 (0x00A0 - 0x0050)
class UASSMStateNode : public UASSMNode
{
public:
	TArray<class FName>                           Tags;                                              // 0x0050(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         bAlwaysCanceledCommand : 1;                        // 0x0060(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1A02[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UASState_Base*>                  CustomStates;                                      // 0x0068(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UASState_Base*>                  LocalCustomStates;                                 // 0x0078(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                         StateIndex;                                        // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A03[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UASSMTransitionNode_Base*>       TransitionList;                                    // 0x0090(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASSMStateNode">();
	}
	static class UASSMStateNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASSMStateNode>();
	}
};
static_assert(alignof(UASSMStateNode) == 0x000008, "Wrong alignment on UASSMStateNode");
static_assert(sizeof(UASSMStateNode) == 0x0000A0, "Wrong size on UASSMStateNode");
static_assert(offsetof(UASSMStateNode, Tags) == 0x000050, "Member 'UASSMStateNode::Tags' has a wrong offset!");
static_assert(offsetof(UASSMStateNode, CustomStates) == 0x000068, "Member 'UASSMStateNode::CustomStates' has a wrong offset!");
static_assert(offsetof(UASSMStateNode, LocalCustomStates) == 0x000078, "Member 'UASSMStateNode::LocalCustomStates' has a wrong offset!");
static_assert(offsetof(UASSMStateNode, StateIndex) == 0x000088, "Member 'UASSMStateNode::StateIndex' has a wrong offset!");
static_assert(offsetof(UASSMStateNode, TransitionList) == 0x000090, "Member 'UASSMStateNode::TransitionList' has a wrong offset!");

// Class ActionSystem.ASSMState_BlendSpace
// 0x0028 (0x00C8 - 0x00A0)
class UASSMState_BlendSpace : public UASSMStateNode
{
public:
	float                                         PlayRate;                                          // 0x00A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLoop;                                             // 0x00A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A04[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RootMotionScale;                                   // 0x00A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   BlendSpaceName;                                    // 0x00AC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bReplaceWithThroughNodeInServer;                   // 0x00B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A05[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimationGroupReference               SyncGroup;                                         // 0x00B8(0x000C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A06[0x4];                                     // 0x00C4(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASSMState_BlendSpace">();
	}
	static class UASSMState_BlendSpace* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASSMState_BlendSpace>();
	}
};
static_assert(alignof(UASSMState_BlendSpace) == 0x000008, "Wrong alignment on UASSMState_BlendSpace");
static_assert(sizeof(UASSMState_BlendSpace) == 0x0000C8, "Wrong size on UASSMState_BlendSpace");
static_assert(offsetof(UASSMState_BlendSpace, PlayRate) == 0x0000A0, "Member 'UASSMState_BlendSpace::PlayRate' has a wrong offset!");
static_assert(offsetof(UASSMState_BlendSpace, bLoop) == 0x0000A4, "Member 'UASSMState_BlendSpace::bLoop' has a wrong offset!");
static_assert(offsetof(UASSMState_BlendSpace, RootMotionScale) == 0x0000A8, "Member 'UASSMState_BlendSpace::RootMotionScale' has a wrong offset!");
static_assert(offsetof(UASSMState_BlendSpace, BlendSpaceName) == 0x0000AC, "Member 'UASSMState_BlendSpace::BlendSpaceName' has a wrong offset!");
static_assert(offsetof(UASSMState_BlendSpace, bReplaceWithThroughNodeInServer) == 0x0000B4, "Member 'UASSMState_BlendSpace::bReplaceWithThroughNodeInServer' has a wrong offset!");
static_assert(offsetof(UASSMState_BlendSpace, SyncGroup) == 0x0000B8, "Member 'UASSMState_BlendSpace::SyncGroup' has a wrong offset!");

// Class ActionSystem.ASSMState_AimOffset
// 0x0000 (0x00C8 - 0x00C8)
class UASSMState_AimOffset final : public UASSMState_BlendSpace
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASSMState_AimOffset">();
	}
	static class UASSMState_AimOffset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASSMState_AimOffset>();
	}
};
static_assert(alignof(UASSMState_AimOffset) == 0x000008, "Wrong alignment on UASSMState_AimOffset");
static_assert(sizeof(UASSMState_AimOffset) == 0x0000C8, "Wrong size on UASSMState_AimOffset");

// Class ActionSystem.ASSMState_Conduit
// 0x0000 (0x00A0 - 0x00A0)
class UASSMState_Conduit final : public UASSMStateNode
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASSMState_Conduit">();
	}
	static class UASSMState_Conduit* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASSMState_Conduit>();
	}
};
static_assert(alignof(UASSMState_Conduit) == 0x000008, "Wrong alignment on UASSMState_Conduit");
static_assert(sizeof(UASSMState_Conduit) == 0x0000A0, "Wrong size on UASSMState_Conduit");

// Class ActionSystem.ASSMState_Sequence
// 0x0020 (0x00C0 - 0x00A0)
class UASSMState_Sequence final : public UASSMStateNode
{
public:
	float                                         PlayRate;                                          // 0x00A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLoop;                                             // 0x00A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A07[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RootMotionScale;                                   // 0x00A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SequenceName;                                      // 0x00AC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimationGroupReference               SyncGroup;                                         // 0x00B4(0x000C)(Edit, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASSMState_Sequence">();
	}
	static class UASSMState_Sequence* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASSMState_Sequence>();
	}
};
static_assert(alignof(UASSMState_Sequence) == 0x000008, "Wrong alignment on UASSMState_Sequence");
static_assert(sizeof(UASSMState_Sequence) == 0x0000C0, "Wrong size on UASSMState_Sequence");
static_assert(offsetof(UASSMState_Sequence, PlayRate) == 0x0000A0, "Member 'UASSMState_Sequence::PlayRate' has a wrong offset!");
static_assert(offsetof(UASSMState_Sequence, bLoop) == 0x0000A4, "Member 'UASSMState_Sequence::bLoop' has a wrong offset!");
static_assert(offsetof(UASSMState_Sequence, RootMotionScale) == 0x0000A8, "Member 'UASSMState_Sequence::RootMotionScale' has a wrong offset!");
static_assert(offsetof(UASSMState_Sequence, SequenceName) == 0x0000AC, "Member 'UASSMState_Sequence::SequenceName' has a wrong offset!");
static_assert(offsetof(UASSMState_Sequence, SyncGroup) == 0x0000B4, "Member 'UASSMState_Sequence::SyncGroup' has a wrong offset!");

// Class ActionSystem.ASSMState_Slot
// 0x0010 (0x00B0 - 0x00A0)
class UASSMState_Slot final : public UASSMStateNode
{
public:
	class FName                                   SlotName;                                          // 0x00A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bInertialBlend : 1;                                // 0x00A8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1A08[0x7];                                     // 0x00A9(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASSMState_Slot">();
	}
	static class UASSMState_Slot* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASSMState_Slot>();
	}
};
static_assert(alignof(UASSMState_Slot) == 0x000008, "Wrong alignment on UASSMState_Slot");
static_assert(sizeof(UASSMState_Slot) == 0x0000B0, "Wrong size on UASSMState_Slot");
static_assert(offsetof(UASSMState_Slot, SlotName) == 0x0000A0, "Member 'UASSMState_Slot::SlotName' has a wrong offset!");

// Class ActionSystem.ASSMState_StateMachine
// 0x0020 (0x00C0 - 0x00A0)
class UASSMState_StateMachine final : public UASSMStateNode
{
public:
	float                                         PlayRate;                                          // 0x00A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   StateMachineName;                                  // 0x00A4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bDisableChildMachinePlayEnd : 1;                   // 0x00AC(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSkipPlayEndTransitionNumCheck : 1;                // 0x00AC(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSkipFirstTransition : 1;                          // 0x00AC(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1A09[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UASAnimationSet*                        AnimationSetAsset;                                 // 0x00B0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bReplicates : 1;                                   // 0x00B8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1A0A[0x7];                                     // 0x00B9(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASSMState_StateMachine">();
	}
	static class UASSMState_StateMachine* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASSMState_StateMachine>();
	}
};
static_assert(alignof(UASSMState_StateMachine) == 0x000008, "Wrong alignment on UASSMState_StateMachine");
static_assert(sizeof(UASSMState_StateMachine) == 0x0000C0, "Wrong size on UASSMState_StateMachine");
static_assert(offsetof(UASSMState_StateMachine, PlayRate) == 0x0000A0, "Member 'UASSMState_StateMachine::PlayRate' has a wrong offset!");
static_assert(offsetof(UASSMState_StateMachine, StateMachineName) == 0x0000A4, "Member 'UASSMState_StateMachine::StateMachineName' has a wrong offset!");
static_assert(offsetof(UASSMState_StateMachine, AnimationSetAsset) == 0x0000B0, "Member 'UASSMState_StateMachine::AnimationSetAsset' has a wrong offset!");

// Class ActionSystem.ASSMState_Terminate
// 0x0000 (0x00A0 - 0x00A0)
class UASSMState_Terminate final : public UASSMStateNode
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASSMState_Terminate">();
	}
	static class UASSMState_Terminate* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASSMState_Terminate>();
	}
};
static_assert(alignof(UASSMState_Terminate) == 0x000008, "Wrong alignment on UASSMState_Terminate");
static_assert(sizeof(UASSMState_Terminate) == 0x0000A0, "Wrong size on UASSMState_Terminate");

// Class ActionSystem.ASSMState_Through
// 0x0000 (0x00A0 - 0x00A0)
class UASSMState_Through final : public UASSMStateNode
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASSMState_Through">();
	}
	static class UASSMState_Through* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASSMState_Through>();
	}
};
static_assert(alignof(UASSMState_Through) == 0x000008, "Wrong alignment on UASSMState_Through");
static_assert(sizeof(UASSMState_Through) == 0x0000A0, "Wrong size on UASSMState_Through");

// Class ActionSystem.ASSMTransitionNode_Base
// 0x0078 (0x00C8 - 0x0050)
class UASSMTransitionNode_Base : public UASSMNode
{
public:
	TArray<class UASTransition_CommonBase*>       TransitionRules;                                   // 0x0050(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                         PriorityOrder;                                     // 0x0060(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bEnable : 1;                                       // 0x0064(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	bool                                          Bidirectional;                                     // 0x0065(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bAuthorityOnly : 1;                                // 0x0066(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bLocallyControlledOnly : 1;                        // 0x0066(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1A0B[0x1];                                     // 0x0067(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CrossfadeDuration;                                 // 0x0068(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EASAlphaBlendOption                           BlendOption;                                       // 0x006C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A0C[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            CustomBlendCurve;                                  // 0x0070(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bRootMotionBlend : 1;                              // 0x0078(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSyncTime : 1;                                     // 0x0078(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1A0D[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StartTime;                                         // 0x007C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 StartStateName;                                    // 0x0080(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UASCustomStartSate_Base>    CustomStartState;                                  // 0x0090(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAnimNotifyEvent>               InterruptNotifyEvents;                             // 0x0098(0x0010)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         bClearCommand : 1;                                 // 0x00A8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bResetInputNotifyTimer : 1;                        // 0x00A8(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1A0E[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UASSMStateNode*                         PreviousState;                                     // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UASSMStateNode*                         NextState;                                         // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENextStateType                                NextStateType;                                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A0F[0x7];                                     // 0x00C1(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASSMTransitionNode_Base">();
	}
	static class UASSMTransitionNode_Base* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASSMTransitionNode_Base>();
	}
};
static_assert(alignof(UASSMTransitionNode_Base) == 0x000008, "Wrong alignment on UASSMTransitionNode_Base");
static_assert(sizeof(UASSMTransitionNode_Base) == 0x0000C8, "Wrong size on UASSMTransitionNode_Base");
static_assert(offsetof(UASSMTransitionNode_Base, TransitionRules) == 0x000050, "Member 'UASSMTransitionNode_Base::TransitionRules' has a wrong offset!");
static_assert(offsetof(UASSMTransitionNode_Base, PriorityOrder) == 0x000060, "Member 'UASSMTransitionNode_Base::PriorityOrder' has a wrong offset!");
static_assert(offsetof(UASSMTransitionNode_Base, Bidirectional) == 0x000065, "Member 'UASSMTransitionNode_Base::Bidirectional' has a wrong offset!");
static_assert(offsetof(UASSMTransitionNode_Base, CrossfadeDuration) == 0x000068, "Member 'UASSMTransitionNode_Base::CrossfadeDuration' has a wrong offset!");
static_assert(offsetof(UASSMTransitionNode_Base, BlendOption) == 0x00006C, "Member 'UASSMTransitionNode_Base::BlendOption' has a wrong offset!");
static_assert(offsetof(UASSMTransitionNode_Base, CustomBlendCurve) == 0x000070, "Member 'UASSMTransitionNode_Base::CustomBlendCurve' has a wrong offset!");
static_assert(offsetof(UASSMTransitionNode_Base, StartTime) == 0x00007C, "Member 'UASSMTransitionNode_Base::StartTime' has a wrong offset!");
static_assert(offsetof(UASSMTransitionNode_Base, StartStateName) == 0x000080, "Member 'UASSMTransitionNode_Base::StartStateName' has a wrong offset!");
static_assert(offsetof(UASSMTransitionNode_Base, CustomStartState) == 0x000090, "Member 'UASSMTransitionNode_Base::CustomStartState' has a wrong offset!");
static_assert(offsetof(UASSMTransitionNode_Base, InterruptNotifyEvents) == 0x000098, "Member 'UASSMTransitionNode_Base::InterruptNotifyEvents' has a wrong offset!");
static_assert(offsetof(UASSMTransitionNode_Base, PreviousState) == 0x0000B0, "Member 'UASSMTransitionNode_Base::PreviousState' has a wrong offset!");
static_assert(offsetof(UASSMTransitionNode_Base, NextState) == 0x0000B8, "Member 'UASSMTransitionNode_Base::NextState' has a wrong offset!");
static_assert(offsetof(UASSMTransitionNode_Base, NextStateType) == 0x0000C0, "Member 'UASSMTransitionNode_Base::NextStateType' has a wrong offset!");

// Class ActionSystem.ASSMTransitionNode
// 0x0000 (0x00C8 - 0x00C8)
class UASSMTransitionNode final : public UASSMTransitionNode_Base
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASSMTransitionNode">();
	}
	static class UASSMTransitionNode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASSMTransitionNode>();
	}
};
static_assert(alignof(UASSMTransitionNode) == 0x000008, "Wrong alignment on UASSMTransitionNode");
static_assert(sizeof(UASSMTransitionNode) == 0x0000C8, "Wrong size on UASSMTransitionNode");

// Class ActionSystem.ASCustomStartSate_Base
// 0x0000 (0x0028 - 0x0028)
class UASCustomStartSate_Base : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASCustomStartSate_Base">();
	}
	static class UASCustomStartSate_Base* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASCustomStartSate_Base>();
	}
};
static_assert(alignof(UASCustomStartSate_Base) == 0x000008, "Wrong alignment on UASCustomStartSate_Base");
static_assert(sizeof(UASCustomStartSate_Base) == 0x000028, "Wrong size on UASCustomStartSate_Base");

// Class ActionSystem.ASSMTransitionNodeEventDriven
// 0x0000 (0x00C8 - 0x00C8)
class UASSMTransitionNodeEventDriven final : public UASSMTransitionNode_Base
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASSMTransitionNodeEventDriven">();
	}
	static class UASSMTransitionNodeEventDriven* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASSMTransitionNodeEventDriven>();
	}
};
static_assert(alignof(UASSMTransitionNodeEventDriven) == 0x000008, "Wrong alignment on UASSMTransitionNodeEventDriven");
static_assert(sizeof(UASSMTransitionNodeEventDriven) == 0x0000C8, "Wrong size on UASSMTransitionNodeEventDriven");

// Class ActionSystem.ASState_Base
// 0x0000 (0x0028 - 0x0028)
class UASState_Base : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASState_Base">();
	}
	static class UASState_Base* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASState_Base>();
	}
};
static_assert(alignof(UASState_Base) == 0x000008, "Wrong alignment on UASState_Base");
static_assert(sizeof(UASState_Base) == 0x000028, "Wrong size on UASState_Base");

// Class ActionSystem.ASState_BlueprintBase
// 0x0010 (0x0038 - 0x0028)
class UASState_BlueprintBase : public UASState_Base
{
public:
	uint8                                         Pad_1A10[0x10];                                    // 0x0028(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	float GetAnimTime() const;
	float GetAnimTimeLength() const;
	float GetAnimTimeRatio() const;
	float GetRootMotionDistance() const;
	float GetRootMotionDistanceRange(float StartTime, float EndTime) const;
	bool HasCommand(class FName Command, bool bAlwaysCanceledCommand, bool bOnce) const;
	void PlaySlotAnimation(class UAnimSequenceBase* AnimSequence, float BlendTime, bool bLoop) const;
	void ReceiveBeginPlay(class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const;
	void ReceiveEndPlay(class UAnimInstance* AnimInstance) const;
	void ReceiveTick(float DeltaTime, class UAnimInstance* AnimInstance, const class UASAnimationSet* AnimationSet) const;
	void ResetPlayRate() const;
	void ResetRootMotionScale(class FName RootMotionScaleName) const;
	void SetAnimTime(float Time) const;
	void SetAnimTimeRatio(float TimeRatio) const;
	void SetBlendSpaceInput(const struct FVector& NewBlendInput) const;
	void SetBlendSpaceInputX(float NewBlendInputX) const;
	void SetBlendSpaceInputY(float NewBlendInputY) const;
	void SetPlayRate(float NewRate) const;
	void SetPlayRateScale(float RateScale) const;
	void SetRootMotionScale(float NewScale, class FName RootMotionScaleName) const;
	void StopSlotAnimation(float BlendTime) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASState_BlueprintBase">();
	}
	static class UASState_BlueprintBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASState_BlueprintBase>();
	}
};
static_assert(alignof(UASState_BlueprintBase) == 0x000008, "Wrong alignment on UASState_BlueprintBase");
static_assert(sizeof(UASState_BlueprintBase) == 0x000038, "Wrong size on UASState_BlueprintBase");

// Class ActionSystem.ASTransition_BlueprintBase
// 0x0020 (0x0050 - 0x0030)
class UASTransition_BlueprintBase : public UASTransition_Base
{
public:
	uint8                                         Pad_1A14[0x20];                                    // 0x0030(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool CheckCommand(const class FString& Command, bool bOnce) const;
	EAnimCommandState CheckCommandState(class FName Command, bool bOnce) const;
	float GetAnimTime() const;
	float GetAnimTimeLength() const;
	float GetElapsedTime() const;
	bool HasCommand(class FName Command, bool bOnce) const;
	bool IsPlayEnd() const;
	void OutputLog(const class FString& Value) const;
	bool ReceiveCanEnter(class UAnimInstance* AnimInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASTransition_BlueprintBase">();
	}
	static class UASTransition_BlueprintBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASTransition_BlueprintBase>();
	}
};
static_assert(alignof(UASTransition_BlueprintBase) == 0x000008, "Wrong alignment on UASTransition_BlueprintBase");
static_assert(sizeof(UASTransition_BlueprintBase) == 0x000050, "Wrong size on UASTransition_BlueprintBase");

// Class ActionSystem.ASTransition_MovementMode
// 0x0008 (0x0038 - 0x0030)
class UASTransition_MovementMode final : public UASTransition_Base
{
public:
	EMovementMode                                 MovementMode;                                      // 0x0030(0x0001)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         CustomMovementMode;                                // 0x0031(0x0001)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A19[0x6];                                     // 0x0032(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASTransition_MovementMode">();
	}
	static class UASTransition_MovementMode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASTransition_MovementMode>();
	}
};
static_assert(alignof(UASTransition_MovementMode) == 0x000008, "Wrong alignment on UASTransition_MovementMode");
static_assert(sizeof(UASTransition_MovementMode) == 0x000038, "Wrong size on UASTransition_MovementMode");
static_assert(offsetof(UASTransition_MovementMode, MovementMode) == 0x000030, "Member 'UASTransition_MovementMode::MovementMode' has a wrong offset!");
static_assert(offsetof(UASTransition_MovementMode, CustomMovementMode) == 0x000031, "Member 'UASTransition_MovementMode::CustomMovementMode' has a wrong offset!");

// Class ActionSystem.ASTransition_PlayEnd
// 0x0008 (0x0038 - 0x0030)
class UASTransition_PlayEnd : public UASTransition_Base
{
public:
	uint8                                         bIgnoreEndCancel : 1;                              // 0x0030(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1A1A[0x7];                                     // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ASTransition_PlayEnd">();
	}
	static class UASTransition_PlayEnd* GetDefaultObj()
	{
		return GetDefaultObjImpl<UASTransition_PlayEnd>();
	}
};
static_assert(alignof(UASTransition_PlayEnd) == 0x000008, "Wrong alignment on UASTransition_PlayEnd");
static_assert(sizeof(UASTransition_PlayEnd) == 0x000038, "Wrong size on UASTransition_PlayEnd");

}

