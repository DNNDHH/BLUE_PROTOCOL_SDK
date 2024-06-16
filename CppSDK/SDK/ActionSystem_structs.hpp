#pragma once

 

// Package: ActionSystem

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// Enum ActionSystem.EASEasing
// NumValues: 0x0004
enum class EASEasing : uint8
{
	Step                                     = 0,
	Linear                                   = 1,
	Cubic                                    = 2,
	EASEasing_MAX                            = 3,
};

// Enum ActionSystem.EASSMStateType
// NumValues: 0x0006
enum class EASSMStateType : uint8
{
	Sequence                                 = 1,
	BlendSpace                               = 2,
	AimOffset                                = 3,
	StateMachine                             = 4,
	Slot                                     = 5,
	EASSMStateType_MAX                       = 6,
};

// Enum ActionSystem.EAnimCommandState
// NumValues: 0x0004
enum class EAnimCommandState : uint8
{
	ACS_Failed                               = 0,
	ACS_Precede                              = 1,
	ASC_Just                                 = 2,
	EAnimCommandState_MAX                    = 3,
};

// Enum ActionSystem.EASAttackCollisionShape
// NumValues: 0x0004
enum class EASAttackCollisionShape : uint8
{
	Sphere                                   = 0,
	Capsule                                  = 1,
	Box                                      = 2,
	EASAttackCollisionShape_MAX              = 3,
};

// Enum ActionSystem.EASSMTransitionType
// NumValues: 0x0004
enum class EASSMTransitionType : uint8
{
	None                                     = 0,
	Default                                  = 1,
	EventDriven                              = 2,
	EASSMTransitionType_MAX                  = 3,
};

// Enum ActionSystem.EASAlphaBlendOption
// NumValues: 0x0011
enum class EASAlphaBlendOption : uint8
{
	Linear                                   = 0,
	Cubic                                    = 1,
	HermiteCubic                             = 2,
	Sinusoidal                               = 3,
	QuadraticInOut                           = 4,
	CubicInOut                               = 5,
	QuarticInOut                             = 6,
	QuinticInOut                             = 7,
	CircularIn                               = 8,
	CircularOut                              = 9,
	CircularInOut                            = 10,
	ExpIn                                    = 11,
	ExpOut                                   = 12,
	ExpInOut                                 = 13,
	Custom                                   = 14,
	Inertial                                 = 15,
	EASAlphaBlendOption_MAX                  = 16,
};

// Enum ActionSystem.ENextStateType
// NumValues: 0x0009
enum class ENextStateType : uint8
{
	NST_Invalid                              = 0,
	NST_Sequence                             = 1,
	NST_BlendSpace                           = 2,
	NST_StateMachine                         = 3,
	NST_Conduit                              = 4,
	NST_Terminate                            = 5,
	NST_Through                              = 6,
	NST_Slot                                 = 7,
	NST_MAX                                  = 8,
};

// Enum ActionSystem.ETransitionRule
// NumValues: 0x0006
enum class ETransitionRule : uint8
{
	TR_PlayEnd                               = 0,
	TR_Command                               = 1,
	TR_MovementMode                          = 2,
	TR_Blueprint                             = 3,
	TR_Custom                                = 4,
	TR_MAX                                   = 5,
};

// ScriptStruct ActionSystem.ASReplicateState
// 0x0004 (0x0004 - 0x0000)
struct FASReplicateState final
{
public:
	int16                                         StateMachine;                                      // 0x0000(0x0002)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                         CurrentState;                                      // 0x0002(0x0002)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FASReplicateState) == 0x000002, "Wrong alignment on FASReplicateState");
static_assert(sizeof(FASReplicateState) == 0x000004, "Wrong size on FASReplicateState");
static_assert(offsetof(FASReplicateState, StateMachine) == 0x000000, "Member 'FASReplicateState::StateMachine' has a wrong offset!");
static_assert(offsetof(FASReplicateState, CurrentState) == 0x000002, "Member 'FASReplicateState::CurrentState' has a wrong offset!");

// ScriptStruct ActionSystem.ASReplicateStateInfo
// 0x0020 (0x0020 - 0x0000)
struct FASReplicateStateInfo final
{
public:
	int16                                         StateMachineNum;                                   // 0x0000(0x0002)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19C5[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FASReplicateState>              StateMachineList;                                  // 0x0008(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint32                                        Hash;                                              // 0x0018(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19C6[0x4];                                     // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FASReplicateStateInfo) == 0x000008, "Wrong alignment on FASReplicateStateInfo");
static_assert(sizeof(FASReplicateStateInfo) == 0x000020, "Wrong size on FASReplicateStateInfo");
static_assert(offsetof(FASReplicateStateInfo, StateMachineNum) == 0x000000, "Member 'FASReplicateStateInfo::StateMachineNum' has a wrong offset!");
static_assert(offsetof(FASReplicateStateInfo, StateMachineList) == 0x000008, "Member 'FASReplicateStateInfo::StateMachineList' has a wrong offset!");
static_assert(offsetof(FASReplicateStateInfo, Hash) == 0x000018, "Member 'FASReplicateStateInfo::Hash' has a wrong offset!");

// ScriptStruct ActionSystem.ASStateInstanceBase
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) FASStateInstanceBase
{
public:
	uint8                                         Pad_19C7[0x8];                                     // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FASStateInstanceBase) == 0x000008, "Wrong alignment on FASStateInstanceBase");
static_assert(sizeof(FASStateInstanceBase) == 0x000008, "Wrong size on FASStateInstanceBase");

// ScriptStruct ActionSystem.ASStateInstance
// 0x0048 (0x0050 - 0x0008)
struct FASStateInstance : public FASStateInstanceBase
{
public:
	uint8                                         Pad_19C8[0x48];                                    // 0x0008(0x0048)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FASStateInstance) == 0x000008, "Wrong alignment on FASStateInstance");
static_assert(sizeof(FASStateInstance) == 0x000050, "Wrong size on FASStateInstance");

// ScriptStruct ActionSystem.ASStateInstance_BlendSpace
// 0x00C8 (0x0118 - 0x0050)
struct FASStateInstance_BlendSpace : public FASStateInstance
{
public:
	uint8                                         Pad_19C9[0xC8];                                    // 0x0050(0x00C8)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FASStateInstance_BlendSpace) == 0x000008, "Wrong alignment on FASStateInstance_BlendSpace");
static_assert(sizeof(FASStateInstance_BlendSpace) == 0x000118, "Wrong size on FASStateInstance_BlendSpace");

// ScriptStruct ActionSystem.ASStateInstance_AimOffset
// 0x0000 (0x0118 - 0x0118)
struct FASStateInstance_AimOffset final : public FASStateInstance_BlendSpace
{
};
static_assert(alignof(FASStateInstance_AimOffset) == 0x000008, "Wrong alignment on FASStateInstance_AimOffset");
static_assert(sizeof(FASStateInstance_AimOffset) == 0x000118, "Wrong size on FASStateInstance_AimOffset");

// ScriptStruct ActionSystem.ASEquipWeapon
// 0x0028 (0x0028 - 0x0000)
struct FASEquipWeapon
{
public:
	int32                                         InventoryIndex;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Location;                                          // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               Rotation;                                          // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                Scale3D;                                           // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FASEquipWeapon) == 0x000004, "Wrong alignment on FASEquipWeapon");
static_assert(sizeof(FASEquipWeapon) == 0x000028, "Wrong size on FASEquipWeapon");
static_assert(offsetof(FASEquipWeapon, InventoryIndex) == 0x000000, "Member 'FASEquipWeapon::InventoryIndex' has a wrong offset!");
static_assert(offsetof(FASEquipWeapon, Location) == 0x000004, "Member 'FASEquipWeapon::Location' has a wrong offset!");
static_assert(offsetof(FASEquipWeapon, Rotation) == 0x000010, "Member 'FASEquipWeapon::Rotation' has a wrong offset!");
static_assert(offsetof(FASEquipWeapon, Scale3D) == 0x00001C, "Member 'FASEquipWeapon::Scale3D' has a wrong offset!");

// ScriptStruct ActionSystem.ASAnimationSetEntry
// 0x0018 (0x0018 - 0x0000)
struct FASAnimationSetEntry
{
public:
	class FName                                   EntryName;                                         // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UASState_Base*>                  CustomStates;                                      // 0x0008(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(FASAnimationSetEntry) == 0x000008, "Wrong alignment on FASAnimationSetEntry");
static_assert(sizeof(FASAnimationSetEntry) == 0x000018, "Wrong size on FASAnimationSetEntry");
static_assert(offsetof(FASAnimationSetEntry, EntryName) == 0x000000, "Member 'FASAnimationSetEntry::EntryName' has a wrong offset!");
static_assert(offsetof(FASAnimationSetEntry, CustomStates) == 0x000008, "Member 'FASAnimationSetEntry::CustomStates' has a wrong offset!");

// ScriptStruct ActionSystem.ASAnimationSetEntry_StateMachine
// 0x0008 (0x0020 - 0x0018)
struct FASAnimationSetEntry_StateMachine final : public FASAnimationSetEntry
{
public:
	class UASStateMachine*                        StateMachine;                                      // 0x0018(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FASAnimationSetEntry_StateMachine) == 0x000008, "Wrong alignment on FASAnimationSetEntry_StateMachine");
static_assert(sizeof(FASAnimationSetEntry_StateMachine) == 0x000020, "Wrong size on FASAnimationSetEntry_StateMachine");
static_assert(offsetof(FASAnimationSetEntry_StateMachine, StateMachine) == 0x000018, "Member 'FASAnimationSetEntry_StateMachine::StateMachine' has a wrong offset!");

// ScriptStruct ActionSystem.ASAnimationSetEntry_BlendSpace
// 0x0008 (0x0020 - 0x0018)
struct FASAnimationSetEntry_BlendSpace final : public FASAnimationSetEntry
{
public:
	class UBlendSpaceBase*                        BlendSpace;                                        // 0x0018(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FASAnimationSetEntry_BlendSpace) == 0x000008, "Wrong alignment on FASAnimationSetEntry_BlendSpace");
static_assert(sizeof(FASAnimationSetEntry_BlendSpace) == 0x000020, "Wrong size on FASAnimationSetEntry_BlendSpace");
static_assert(offsetof(FASAnimationSetEntry_BlendSpace, BlendSpace) == 0x000018, "Member 'FASAnimationSetEntry_BlendSpace::BlendSpace' has a wrong offset!");

// ScriptStruct ActionSystem.ASPlayRateSection
// 0x000C (0x000C - 0x0000)
struct FASPlayRateSection final
{
public:
	float                                         Time;                                              // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Scale;                                             // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EASEasing                                     Easing;                                            // 0x0008(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19CA[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FASPlayRateSection) == 0x000004, "Wrong alignment on FASPlayRateSection");
static_assert(sizeof(FASPlayRateSection) == 0x00000C, "Wrong size on FASPlayRateSection");
static_assert(offsetof(FASPlayRateSection, Time) == 0x000000, "Member 'FASPlayRateSection::Time' has a wrong offset!");
static_assert(offsetof(FASPlayRateSection, Scale) == 0x000004, "Member 'FASPlayRateSection::Scale' has a wrong offset!");
static_assert(offsetof(FASPlayRateSection, Easing) == 0x000008, "Member 'FASPlayRateSection::Easing' has a wrong offset!");

// ScriptStruct ActionSystem.ASAnimationSetEntry_Sequence
// 0x0028 (0x0040 - 0x0018)
struct FASAnimationSetEntry_Sequence final : public FASAnimationSetEntry
{
public:
	class UAnimSequenceBase*                      Sequence;                                          // 0x0018(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartOffset;                                       // 0x0020(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndOffset;                                         // 0x0024(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FASPlayRateSection>             PlayRate;                                          // 0x0028(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         RootMotionScale;                                   // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19CB[0x4];                                     // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FASAnimationSetEntry_Sequence) == 0x000008, "Wrong alignment on FASAnimationSetEntry_Sequence");
static_assert(sizeof(FASAnimationSetEntry_Sequence) == 0x000040, "Wrong size on FASAnimationSetEntry_Sequence");
static_assert(offsetof(FASAnimationSetEntry_Sequence, Sequence) == 0x000018, "Member 'FASAnimationSetEntry_Sequence::Sequence' has a wrong offset!");
static_assert(offsetof(FASAnimationSetEntry_Sequence, StartOffset) == 0x000020, "Member 'FASAnimationSetEntry_Sequence::StartOffset' has a wrong offset!");
static_assert(offsetof(FASAnimationSetEntry_Sequence, EndOffset) == 0x000024, "Member 'FASAnimationSetEntry_Sequence::EndOffset' has a wrong offset!");
static_assert(offsetof(FASAnimationSetEntry_Sequence, PlayRate) == 0x000028, "Member 'FASAnimationSetEntry_Sequence::PlayRate' has a wrong offset!");
static_assert(offsetof(FASAnimationSetEntry_Sequence, RootMotionScale) == 0x000038, "Member 'FASAnimationSetEntry_Sequence::RootMotionScale' has a wrong offset!");

// ScriptStruct ActionSystem.ASAnimInstanceProxy
// 0x00B0 (0x0820 - 0x0770)
struct FASAnimInstanceProxy : public FAnimInstanceProxy
{
public:
	uint8                                         Pad_19CC[0xB0];                                    // 0x0770(0x00B0)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FASAnimInstanceProxy) == 0x000010, "Wrong alignment on FASAnimInstanceProxy");
static_assert(sizeof(FASAnimInstanceProxy) == 0x000820, "Wrong size on FASAnimInstanceProxy");

// ScriptStruct ActionSystem.ASEventDrivenTransitionContext
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FASEventDrivenTransitionContext final
{
public:
	uint8                                         Pad_19CD[0x10];                                    // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FASEventDrivenTransitionContext) == 0x000008, "Wrong alignment on FASEventDrivenTransitionContext");
static_assert(sizeof(FASEventDrivenTransitionContext) == 0x000010, "Wrong size on FASEventDrivenTransitionContext");

// ScriptStruct ActionSystem.ASStateInstancePtr
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FASStateInstancePtr final
{
public:
	uint8                                         Pad_19CE[0x18];                                    // 0x0000(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FASStateInstancePtr) == 0x000008, "Wrong alignment on FASStateInstancePtr");
static_assert(sizeof(FASStateInstancePtr) == 0x000018, "Wrong size on FASStateInstancePtr");

// ScriptStruct ActionSystem.ASStateInstance_StateMachine
// 0x0108 (0x0158 - 0x0050)
struct FASStateInstance_StateMachine final : public FASStateInstance
{
public:
	uint8                                         Pad_19CF[0xE8];                                    // 0x0050(0x00E8)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FASStateInstancePtr>            States;                                            // 0x0138(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_19D0[0x10];                                    // 0x0148(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FASStateInstance_StateMachine) == 0x000008, "Wrong alignment on FASStateInstance_StateMachine");
static_assert(sizeof(FASStateInstance_StateMachine) == 0x000158, "Wrong size on FASStateInstance_StateMachine");
static_assert(offsetof(FASStateInstance_StateMachine, States) == 0x000138, "Member 'FASStateInstance_StateMachine::States' has a wrong offset!");

// ScriptStruct ActionSystem.ASAnimNode_StateMachine
// 0x0300 (0x0310 - 0x0010)
struct FASAnimNode_StateMachine final : public FAnimNode_Base
{
public:
	class FString                                 NodeName;                                          // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UASStateMachine*                        StateMachine;                                      // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UASAnimationSet*                        AnimationSet;                                      // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PlayRate;                                          // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxTransitionsPerFrame;                            // 0x0034(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         BlendSpaceName;                                    // 0x0038(0x0010)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 BlendSpaceValue;                                   // 0x0048(0x0010)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FPoseLink                              BasePose;                                          // 0x0058(0x0010)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bEnableStateChangeNotify;                          // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19D1[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FASStateInstance_StateMachine          MachineInstance;                                   // 0x0070(0x0158)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_19D2[0x20];                                    // 0x01C8(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UASState_Base*>                  CustomStates;                                      // 0x01E8(0x0010)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UASAnimNotify_StateChange*>      StateChangeNotifies;                               // 0x01F8(0x0010)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_19D3[0x10];                                    // 0x0208(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, class UASStateMachine*>   DynamicSubMachine;                                 // 0x0218(0x0050)(Transient, Protected, NativeAccessSpecifierProtected)
	TMap<class FString, class UASAnimationSet*>   DynamicAnimationSet;                               // 0x0268(0x0050)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_19D4[0x58];                                    // 0x02B8(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FASAnimNode_StateMachine) == 0x000008, "Wrong alignment on FASAnimNode_StateMachine");
static_assert(sizeof(FASAnimNode_StateMachine) == 0x000310, "Wrong size on FASAnimNode_StateMachine");
static_assert(offsetof(FASAnimNode_StateMachine, NodeName) == 0x000010, "Member 'FASAnimNode_StateMachine::NodeName' has a wrong offset!");
static_assert(offsetof(FASAnimNode_StateMachine, StateMachine) == 0x000020, "Member 'FASAnimNode_StateMachine::StateMachine' has a wrong offset!");
static_assert(offsetof(FASAnimNode_StateMachine, AnimationSet) == 0x000028, "Member 'FASAnimNode_StateMachine::AnimationSet' has a wrong offset!");
static_assert(offsetof(FASAnimNode_StateMachine, PlayRate) == 0x000030, "Member 'FASAnimNode_StateMachine::PlayRate' has a wrong offset!");
static_assert(offsetof(FASAnimNode_StateMachine, MaxTransitionsPerFrame) == 0x000034, "Member 'FASAnimNode_StateMachine::MaxTransitionsPerFrame' has a wrong offset!");
static_assert(offsetof(FASAnimNode_StateMachine, BlendSpaceName) == 0x000038, "Member 'FASAnimNode_StateMachine::BlendSpaceName' has a wrong offset!");
static_assert(offsetof(FASAnimNode_StateMachine, BlendSpaceValue) == 0x000048, "Member 'FASAnimNode_StateMachine::BlendSpaceValue' has a wrong offset!");
static_assert(offsetof(FASAnimNode_StateMachine, BasePose) == 0x000058, "Member 'FASAnimNode_StateMachine::BasePose' has a wrong offset!");
static_assert(offsetof(FASAnimNode_StateMachine, bEnableStateChangeNotify) == 0x000068, "Member 'FASAnimNode_StateMachine::bEnableStateChangeNotify' has a wrong offset!");
static_assert(offsetof(FASAnimNode_StateMachine, MachineInstance) == 0x000070, "Member 'FASAnimNode_StateMachine::MachineInstance' has a wrong offset!");
static_assert(offsetof(FASAnimNode_StateMachine, CustomStates) == 0x0001E8, "Member 'FASAnimNode_StateMachine::CustomStates' has a wrong offset!");
static_assert(offsetof(FASAnimNode_StateMachine, StateChangeNotifies) == 0x0001F8, "Member 'FASAnimNode_StateMachine::StateChangeNotifies' has a wrong offset!");
static_assert(offsetof(FASAnimNode_StateMachine, DynamicSubMachine) == 0x000218, "Member 'FASAnimNode_StateMachine::DynamicSubMachine' has a wrong offset!");
static_assert(offsetof(FASAnimNode_StateMachine, DynamicAnimationSet) == 0x000268, "Member 'FASAnimNode_StateMachine::DynamicAnimationSet' has a wrong offset!");

// ScriptStruct ActionSystem.ASAttackCollision
// 0x0058 (0x0058 - 0x0000)
struct alignas(0x08) FASAttackCollision final
{
public:
	class FName                                   SocketName;                                        // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                LocationOffset;                                    // 0x0008(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               RotationOffset;                                    // 0x0014(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	EASAttackCollisionShape                       Shape;                                             // 0x0020(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19D5[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SphereRadius;                                      // 0x0024(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CapsuleHalfHeight;                                 // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CapsuleRadius;                                     // 0x002C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                BoxExtent;                                         // 0x0030(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DelayTime;                                         // 0x003C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LifeTime;                                          // 0x0040(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19D6[0x14];                                    // 0x0044(0x0014)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FASAttackCollision) == 0x000008, "Wrong alignment on FASAttackCollision");
static_assert(sizeof(FASAttackCollision) == 0x000058, "Wrong size on FASAttackCollision");
static_assert(offsetof(FASAttackCollision, SocketName) == 0x000000, "Member 'FASAttackCollision::SocketName' has a wrong offset!");
static_assert(offsetof(FASAttackCollision, LocationOffset) == 0x000008, "Member 'FASAttackCollision::LocationOffset' has a wrong offset!");
static_assert(offsetof(FASAttackCollision, RotationOffset) == 0x000014, "Member 'FASAttackCollision::RotationOffset' has a wrong offset!");
static_assert(offsetof(FASAttackCollision, Shape) == 0x000020, "Member 'FASAttackCollision::Shape' has a wrong offset!");
static_assert(offsetof(FASAttackCollision, SphereRadius) == 0x000024, "Member 'FASAttackCollision::SphereRadius' has a wrong offset!");
static_assert(offsetof(FASAttackCollision, CapsuleHalfHeight) == 0x000028, "Member 'FASAttackCollision::CapsuleHalfHeight' has a wrong offset!");
static_assert(offsetof(FASAttackCollision, CapsuleRadius) == 0x00002C, "Member 'FASAttackCollision::CapsuleRadius' has a wrong offset!");
static_assert(offsetof(FASAttackCollision, BoxExtent) == 0x000030, "Member 'FASAttackCollision::BoxExtent' has a wrong offset!");
static_assert(offsetof(FASAttackCollision, DelayTime) == 0x00003C, "Member 'FASAttackCollision::DelayTime' has a wrong offset!");
static_assert(offsetof(FASAttackCollision, LifeTime) == 0x000040, "Member 'FASAttackCollision::LifeTime' has a wrong offset!");

// ScriptStruct ActionSystem.ASStateInstance_Conduit
// 0x0000 (0x0050 - 0x0050)
struct FASStateInstance_Conduit final : public FASStateInstance
{
};
static_assert(alignof(FASStateInstance_Conduit) == 0x000008, "Wrong alignment on FASStateInstance_Conduit");
static_assert(sizeof(FASStateInstance_Conduit) == 0x000050, "Wrong size on FASStateInstance_Conduit");

// ScriptStruct ActionSystem.ASStateInstance_Sequence
// 0x0038 (0x0088 - 0x0050)
struct FASStateInstance_Sequence final : public FASStateInstance
{
public:
	uint8                                         Pad_19D7[0x38];                                    // 0x0050(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FASStateInstance_Sequence) == 0x000008, "Wrong alignment on FASStateInstance_Sequence");
static_assert(sizeof(FASStateInstance_Sequence) == 0x000088, "Wrong size on FASStateInstance_Sequence");

// ScriptStruct ActionSystem.ASStateInstance_Slot
// 0x00C8 (0x0118 - 0x0050)
struct FASStateInstance_Slot final : public FASStateInstance
{
public:
	uint8                                         Pad_19D8[0xC8];                                    // 0x0050(0x00C8)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FASStateInstance_Slot) == 0x000008, "Wrong alignment on FASStateInstance_Slot");
static_assert(sizeof(FASStateInstance_Slot) == 0x000118, "Wrong size on FASStateInstance_Slot");

// ScriptStruct ActionSystem.ASEDTransitionCheckCommandDelegatePair
// 0x0020 (0x0020 - 0x0000)
struct alignas(0x08) FASEDTransitionCheckCommandDelegatePair final
{
public:
	uint8                                         Pad_19D9[0x20];                                    // 0x0000(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FASEDTransitionCheckCommandDelegatePair) == 0x000008, "Wrong alignment on FASEDTransitionCheckCommandDelegatePair");
static_assert(sizeof(FASEDTransitionCheckCommandDelegatePair) == 0x000020, "Wrong size on FASEDTransitionCheckCommandDelegatePair");

// ScriptStruct ActionSystem.ASActiveTransition
// 0x0098 (0x0098 - 0x0000)
struct alignas(0x08) FASActiveTransition final
{
public:
	uint8                                         Pad_19DA[0x98];                                    // 0x0000(0x0098)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FASActiveTransition) == 0x000008, "Wrong alignment on FASActiveTransition");
static_assert(sizeof(FASActiveTransition) == 0x000098, "Wrong size on FASActiveTransition");

// ScriptStruct ActionSystem.ASStateInstance_Terminate
// 0x0198 (0x01E8 - 0x0050)
struct FASStateInstance_Terminate final : public FASStateInstance
{
public:
	uint8                                         Pad_19DB[0x198];                                   // 0x0050(0x0198)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FASStateInstance_Terminate) == 0x000008, "Wrong alignment on FASStateInstance_Terminate");
static_assert(sizeof(FASStateInstance_Terminate) == 0x0001E8, "Wrong size on FASStateInstance_Terminate");

// ScriptStruct ActionSystem.ASStateInstance_Through
// 0x0000 (0x0050 - 0x0050)
struct FASStateInstance_Through final : public FASStateInstance
{
};
static_assert(alignof(FASStateInstance_Through) == 0x000008, "Wrong alignment on FASStateInstance_Through");
static_assert(sizeof(FASStateInstance_Through) == 0x000050, "Wrong size on FASStateInstance_Through");

// ScriptStruct ActionSystem.ASEmptyStruct
// 0x0001 (0x0001 - 0x0000)
struct FASEmptyStruct final
{
public:
	uint8                                         Pad_19DC[0x1];                                     // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FASEmptyStruct) == 0x000001, "Wrong alignment on FASEmptyStruct");
static_assert(sizeof(FASEmptyStruct) == 0x000001, "Wrong size on FASEmptyStruct");

}

