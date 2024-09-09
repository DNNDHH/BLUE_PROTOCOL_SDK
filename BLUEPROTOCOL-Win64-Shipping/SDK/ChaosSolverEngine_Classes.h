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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class ChaosSolverEngine.ChaosDebugDrawComponent
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UChaosDebugDrawComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_7MO0[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosSolverEngine.ChaosEventListenerComponent
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UChaosEventListenerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_TXC0[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosSolverEngine.ChaosGameplayEventDispatcher
	 * Size -> 0x01B8 (FullSize[0x0278] - InheritedSize[0x00C0])
	 */
	class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
	{
	public:
		unsigned char                                              UnknownData_WUYT[0x110];                                 // 0x00C0(0x0110) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UPrimitiveComponent*, struct FChaosHandlerSet>  CollisionEventRegistrations;                             // 0x01D0(0x0050) ContainsInstancedReference, NativeAccessSpecifierPrivate
		TMap<class UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations;                                 // 0x0220(0x0050) ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_06Z4[0x8];                                   // 0x0270(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosSolverEngine.ChaosNotifyHandlerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UChaosNotifyHandlerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FHitResult ConvertPhysicsCollisionToHitResult(const struct FChaosPhysicsCollisionInfo& PhysicsCollision);
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosSolverEngine.ChaosSolver
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UChaosSolver : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosSolverEngine.ChaosSolverActor
	 * Size -> 0x00F8 (FullSize[0x0320] - InheritedSize[0x0228])
	 */
	class AChaosSolverActor : public AActor
	{
	public:
		struct FChaosSolverConfiguration                           Properties;                                              // 0x0228(0x0068) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      TimeStepMultiplier;                                      // 0x0290(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CollisionIterations;                                     // 0x0294(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PushOutIterations;                                       // 0x0298(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PushOutPairIterations;                                   // 0x029C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClusterConnectionFactor;                                 // 0x02A0(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EClusterConnectionTypeEnum                                 ClusterUnionConnectionType;                              // 0x02A4(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DoGenerateCollisionData;                                 // 0x02A5(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S5IA[0x2];                                   // 0x02A6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSolverCollisionFilterSettings                      CollisionFilterSettings;                                 // 0x02A8(0x0010) Deprecated, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       DoGenerateBreakingData;                                  // 0x02B8(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XW6G[0x3];                                   // 0x02B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSolverBreakingFilterSettings                       BreakingFilterSettings;                                  // 0x02BC(0x0010) Deprecated, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       DoGenerateTrailingData;                                  // 0x02CC(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E03Y[0x3];                                   // 0x02CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSolverTrailingFilterSettings                       TrailingFilterSettings;                                  // 0x02D0(0x0010) Deprecated, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MassScale;                                               // 0x02E0(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateContactGraph;                                   // 0x02E4(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasFloor;                                               // 0x02E5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VCEY[0x2];                                   // 0x02E6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FloorHeight;                                             // 0x02E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FChaosDebugSubstepControl                           ChaosDebugSubstepControl;                                // 0x02EC(0x0003) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZXOV[0x1];                                   // 0x02EF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBillboardComponent*                                 SpriteComponent;                                         // 0x02F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BM1J[0x18];                                  // 0x02F8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChaosGameplayEventDispatcher*                       GameplayEventDispatcherComponent;                        // 0x0310(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RBC1[0x8];                                   // 0x0318(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetSolverActive(bool bActive);
		void SetAsCurrentWorldSolver();
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosSolverEngine.ChaosSolverSettings
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UChaosSolverSettings : public UDeveloperSettings
	{
	public:
		unsigned char                                              UnknownData_DONY[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftClassPath                                      DefaultChaosSolverActorClass;                            // 0x0040(0x0018) Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
