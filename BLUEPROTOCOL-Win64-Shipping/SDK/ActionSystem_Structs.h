#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum ActionSystem.EASEasing
	 */
	enum class EASEasing : uint8_t
	{
		Step   = 0,
		Linear = 1,
		Cubic  = 2,
		MAX    = 3
	};

	/**
	 * Enum ActionSystem.EASSMStateType
	 */
	enum class EASSMStateType : uint8_t
	{
		Sequence     = 0,
		BlendSpace   = 1,
		AimOffset    = 2,
		StateMachine = 3,
		Slot         = 4,
		MAX          = 5
	};

	/**
	 * Enum ActionSystem.EAnimCommandState
	 */
	enum class EAnimCommandState : uint8_t
	{
		ACS_Failed  = 0,
		ACS_Precede = 1,
		ASC_Just    = 2,
		MAX         = 3
	};

	/**
	 * Enum ActionSystem.EASAttackCollisionShape
	 */
	enum class EASAttackCollisionShape : uint8_t
	{
		Sphere  = 0,
		Capsule = 1,
		Box     = 2,
		MAX     = 3
	};

	/**
	 * Enum ActionSystem.EASSMTransitionType
	 */
	enum class EASSMTransitionType : uint8_t
	{
		None        = 0,
		Default     = 1,
		EventDriven = 2,
		MAX         = 3
	};

	/**
	 * Enum ActionSystem.EASAlphaBlendOption
	 */
	enum class EASAlphaBlendOption : uint8_t
	{
		Linear         = 0,
		Cubic          = 1,
		HermiteCubic   = 2,
		Sinusoidal     = 3,
		QuadraticInOut = 4,
		CubicInOut     = 5,
		QuarticInOut   = 6,
		QuinticInOut   = 7,
		CircularIn     = 8,
		CircularOut    = 9,
		CircularInOut  = 10,
		ExpIn          = 11,
		ExpOut         = 12,
		ExpInOut       = 13,
		Custom         = 14,
		Inertial       = 15,
		MAX            = 16
	};

	/**
	 * Enum ActionSystem.ENextStateType
	 */
	enum class ENextStateType : uint8_t
	{
		NST_Invalid      = 0,
		NST_Sequence     = 1,
		NST_BlendSpace   = 2,
		NST_StateMachine = 3,
		NST_Conduit      = 4,
		NST_Terminate    = 5,
		NST_Through      = 6,
		NST_Slot         = 7,
		NST_MAX          = 8
	};

	/**
	 * Enum ActionSystem.ETransitionRule
	 */
	enum class ETransitionRule : uint8_t
	{
		TR_PlayEnd      = 0,
		TR_Command      = 1,
		TR_MovementMode = 2,
		TR_Blueprint    = 3,
		TR_Custom       = 4,
		TR_MAX          = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ActionSystem.ASAnimationSetEntry
	 * Size -> 0x0018
	 */
	struct FASAnimationSetEntry
	{
	public:
		class FName                                                EntryName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UASState_Base*>                               CustomStates;                                            // 0x0008(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ActionSystem.ASPlayRateSection
	 * Size -> 0x000C
	 */
	struct FASPlayRateSection
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EASEasing                                                  Easing;                                                  // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PSF4[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ActionSystem.ASAnimationSetEntry_Sequence
	 * Size -> 0x0028 (FullSize[0x0040] - InheritedSize[0x0018])
	 */
	struct FASAnimationSetEntry_Sequence : public FASAnimationSetEntry
	{
	public:
		class UAnimSequenceBase*                                   Sequence;                                                // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartOffset;                                             // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndOffset;                                               // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FASPlayRateSection>                          PlayRate;                                                // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      RootMotionScale;                                         // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y2W3[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ActionSystem.ASAnimationSetEntry_BlendSpace
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FASAnimationSetEntry_BlendSpace : public FASAnimationSetEntry
	{
	public:
		class UBlendSpaceBase*                                     BlendSpace;                                              // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ActionSystem.ASAnimationSetEntry_StateMachine
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FASAnimationSetEntry_StateMachine : public FASAnimationSetEntry
	{
	public:
		class UASStateMachine*                                     StateMachine;                                            // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ActionSystem.ASAttackCollision
	 * Size -> 0x0058
	 */
	struct FASAttackCollision
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LocationOffset;                                          // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RotationOffset;                                          // 0x0014(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EASAttackCollisionShape                                    Shape;                                                   // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_87DZ[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SphereRadius;                                            // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CapsuleHalfHeight;                                       // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CapsuleRadius;                                           // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BoxExtent;                                               // 0x0030(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DelayTime;                                               // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LifeTime;                                                // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F7UY[0x14];                                  // 0x0044(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ActionSystem.ASReplicateState
	 * Size -> 0x0004
	 */
	struct FASReplicateState
	{
	public:
		int16_t                                                    StateMachine;                                            // 0x0000(0x0002) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    CurrentState;                                            // 0x0002(0x0002) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ActionSystem.ASReplicateStateInfo
	 * Size -> 0x0020
	 */
	struct FASReplicateStateInfo
	{
	public:
		int16_t                                                    StateMachineNum;                                         // 0x0000(0x0002) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KSNH[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FASReplicateState>                           StateMachineList;                                        // 0x0008(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		uint32_t                                                   Hash;                                                    // 0x0018(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WQYT[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ActionSystem.ASEquipWeapon
	 * Size -> 0x0028
	 */
	struct FASEquipWeapon
	{
	public:
		int32_t                                                    InventoryIndex;                                          // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0004(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Scale3D;                                                 // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ActionSystem.ASAnimInstanceProxy
	 * Size -> 0x00B0 (FullSize[0x0820] - InheritedSize[0x0770])
	 */
	struct FASAnimInstanceProxy : public FAnimInstanceProxy
	{
	public:
		unsigned char                                              UnknownData_741R[0xB0];                                  // 0x0770(0x00B0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ActionSystem.ASEventDrivenTransitionContext
	 * Size -> 0x0010
	 */
	struct FASEventDrivenTransitionContext
	{
	public:
		unsigned char                                              UnknownData_ZABL[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ActionSystem.ASStateInstanceBase
	 * Size -> 0x0008
	 */
	struct FASStateInstanceBase
	{
	public:
		unsigned char                                              UnknownData_JUWO[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ActionSystem.ASStateInstance
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FASStateInstance : public FASStateInstanceBase
	{
	public:
		unsigned char                                              UnknownData_8PPL[0x48];                                  // 0x0008(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ActionSystem.ASStateInstancePtr
	 * Size -> 0x0018
	 */
	struct FASStateInstancePtr
	{
	public:
		unsigned char                                              UnknownData_RBJM[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ActionSystem.ASStateInstance_StateMachine
	 * Size -> 0x0108 (FullSize[0x0158] - InheritedSize[0x0050])
	 */
	struct FASStateInstance_StateMachine : public FASStateInstance
	{
	public:
		unsigned char                                              UnknownData_I3YC[0xE8];                                  // 0x0050(0x00E8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FASStateInstancePtr>                         States;                                                  // 0x0138(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FX0U[0x10];                                  // 0x0148(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ActionSystem.ASAnimNode_StateMachine
	 * Size -> 0x0300 (FullSize[0x0310] - InheritedSize[0x0010])
	 */
	struct FASAnimNode_StateMachine : public FAnimNode_Base
	{
	public:
		class FString                                              NodeName;                                                // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UASStateMachine*                                     StateMachine;                                            // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UASAnimationSet*                                     AnimationSet;                                            // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayRate;                                                // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxTransitionsPerFrame;                                  // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      BlendSpaceName;                                          // 0x0038(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              BlendSpaceValue;                                         // 0x0048(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		struct FPoseLink                                           BasePose;                                                // 0x0058(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnableStateChangeNotify;                                // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3VSH[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FASStateInstance_StateMachine                       MachineInstance;                                         // 0x0070(0x0158) Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QJAO[0x20];                                  // 0x01C8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UASState_Base*>                               CustomStates;                                            // 0x01E8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<class UASAnimNotify_StateChange*>                   StateChangeNotifies;                                     // 0x01F8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0F0O[0x10];                                  // 0x0208(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class UASStateMachine*>                DynamicSubMachine;                                       // 0x0218(0x0050) Transient, Protected, NativeAccessSpecifierProtected
		TMap<class FString, class UASAnimationSet*>                DynamicAnimationSet;                                     // 0x0268(0x0050) Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PY7M[0x58];                                  // 0x02B8(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ActionSystem.ASStateInstance_BlendSpace
	 * Size -> 0x00C8 (FullSize[0x0118] - InheritedSize[0x0050])
	 */
	struct FASStateInstance_BlendSpace : public FASStateInstance
	{
	public:
		unsigned char                                              UnknownData_IMM2[0xC8];                                  // 0x0050(0x00C8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ActionSystem.ASStateInstance_AimOffset
	 * Size -> 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
	 */
	struct FASStateInstance_AimOffset : public FASStateInstance_BlendSpace
	{	};

	/**
	 * ScriptStruct ActionSystem.ASStateInstance_Conduit
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	struct FASStateInstance_Conduit : public FASStateInstance
	{	};

	/**
	 * ScriptStruct ActionSystem.ASStateInstance_Sequence
	 * Size -> 0x0038 (FullSize[0x0088] - InheritedSize[0x0050])
	 */
	struct FASStateInstance_Sequence : public FASStateInstance
	{
	public:
		unsigned char                                              UnknownData_8ZP8[0x38];                                  // 0x0050(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ActionSystem.ASStateInstance_Slot
	 * Size -> 0x00C8 (FullSize[0x0118] - InheritedSize[0x0050])
	 */
	struct FASStateInstance_Slot : public FASStateInstance
	{
	public:
		unsigned char                                              UnknownData_G452[0xC8];                                  // 0x0050(0x00C8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ActionSystem.ASEDTransitionCheckCommandDelegatePair
	 * Size -> 0x0020
	 */
	struct FASEDTransitionCheckCommandDelegatePair
	{
	public:
		unsigned char                                              UnknownData_LCBS[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ActionSystem.ASActiveTransition
	 * Size -> 0x0098
	 */
	struct FASActiveTransition
	{
	public:
		unsigned char                                              UnknownData_9NGK[0x98];                                  // 0x0000(0x0098) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ActionSystem.ASStateInstance_Terminate
	 * Size -> 0x0198 (FullSize[0x01E8] - InheritedSize[0x0050])
	 */
	struct FASStateInstance_Terminate : public FASStateInstance
	{
	public:
		unsigned char                                              UnknownData_BXM6[0x198];                                 // 0x0050(0x0198) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ActionSystem.ASStateInstance_Through
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	struct FASStateInstance_Through : public FASStateInstance
	{	};

	/**
	 * ScriptStruct ActionSystem.ASEmptyStruct
	 * Size -> 0x0001
	 */
	struct FASEmptyStruct
	{
	public:
		unsigned char                                              UnknownData_G3A8[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
