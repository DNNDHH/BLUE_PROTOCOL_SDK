#pragma once

 

// Package: GeometryCollectionEngine

#include "Basic.hpp"

#include "GeometryCollectionEngine_structs.hpp"
#include "Engine_classes.hpp"
#include "Chaos_structs.hpp"
#include "ChaosSolverEngine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class GeometryCollectionEngine.ChaosDestructionListener
// 0x0220 (0x0430 - 0x0210)
class UChaosDestructionListener final : public USceneComponent
{
public:
	uint8                                         bIsCollisionEventListeningEnabled : 1;             // 0x0208(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIsBreakingEventListeningEnabled : 1;              // 0x0208(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIsTrailingEventListeningEnabled : 1;              // 0x0208(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_438B[0x3];                                     // 0x0209(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FChaosCollisionEventRequestSettings    CollisionEventRequestSettings;                     // 0x020C(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FChaosBreakingEventRequestSettings     BreakingEventRequestSettings;                      // 0x0224(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FChaosTrailingEventRequestSettings     TrailingEventRequestSettings;                      // 0x023C(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_438C[0x4];                                     // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<class AChaosSolverActor*>                ChaosSolverActors;                                 // 0x0258(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSet<class AGeometryCollectionActor*>         GeometryCollectionActors;                          // 0x02A8(0x0050)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnCollisionEvents;                                 // 0x02F8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnBreakingEvents;                                  // 0x0308(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnTrailingEvents;                                  // 0x0318(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_438D[0x108];                                   // 0x0328(0x0108)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
	void AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
	void RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
	void RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
	void SetBreakingEventEnabled(bool bIsEnabled);
	void SetBreakingEventRequestSettings(const struct FChaosBreakingEventRequestSettings& InSettings);
	void SetCollisionEventEnabled(bool bIsEnabled);
	void SetCollisionEventRequestSettings(const struct FChaosCollisionEventRequestSettings& InSettings);
	void SetTrailingEventEnabled(bool bIsEnabled);
	void SetTrailingEventRequestSettings(const struct FChaosTrailingEventRequestSettings& InSettings);
	void SortBreakingEvents(TArray<struct FChaosBreakingEventData>& BreakingEvents, EChaosBreakingSortMethod SortMethod);
	void SortCollisionEvents(TArray<struct FChaosCollisionEventData>& CollisionEvents, EChaosCollisionSortMethod SortMethod);
	void SortTrailingEvents(TArray<struct FChaosTrailingEventData>& TrailingEvents, EChaosTrailingSortMethod SortMethod);

	bool IsEventListening() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosDestructionListener">();
	}
	static class UChaosDestructionListener* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosDestructionListener>();
	}
};
static_assert(alignof(UChaosDestructionListener) == 0x000010, "Wrong alignment on UChaosDestructionListener");
static_assert(sizeof(UChaosDestructionListener) == 0x000430, "Wrong size on UChaosDestructionListener");
static_assert(offsetof(UChaosDestructionListener, CollisionEventRequestSettings) == 0x00020C, "Member 'UChaosDestructionListener::CollisionEventRequestSettings' has a wrong offset!");
static_assert(offsetof(UChaosDestructionListener, BreakingEventRequestSettings) == 0x000224, "Member 'UChaosDestructionListener::BreakingEventRequestSettings' has a wrong offset!");
static_assert(offsetof(UChaosDestructionListener, TrailingEventRequestSettings) == 0x00023C, "Member 'UChaosDestructionListener::TrailingEventRequestSettings' has a wrong offset!");
static_assert(offsetof(UChaosDestructionListener, ChaosSolverActors) == 0x000258, "Member 'UChaosDestructionListener::ChaosSolverActors' has a wrong offset!");
static_assert(offsetof(UChaosDestructionListener, GeometryCollectionActors) == 0x0002A8, "Member 'UChaosDestructionListener::GeometryCollectionActors' has a wrong offset!");
static_assert(offsetof(UChaosDestructionListener, OnCollisionEvents) == 0x0002F8, "Member 'UChaosDestructionListener::OnCollisionEvents' has a wrong offset!");
static_assert(offsetof(UChaosDestructionListener, OnBreakingEvents) == 0x000308, "Member 'UChaosDestructionListener::OnBreakingEvents' has a wrong offset!");
static_assert(offsetof(UChaosDestructionListener, OnTrailingEvents) == 0x000318, "Member 'UChaosDestructionListener::OnTrailingEvents' has a wrong offset!");

// Class GeometryCollectionEngine.GeometryCollectionActor
// 0x0010 (0x0238 - 0x0228)
class AGeometryCollectionActor final : public AActor
{
public:
	class UGeometryCollectionComponent*           GeometryCollectionComponent;                       // 0x0228(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryCollectionDebugDrawComponent*  GeometryCollectionDebugDrawComponent;              // 0x0230(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	bool RaycastSingle(const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCollectionActor">();
	}
	static class AGeometryCollectionActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGeometryCollectionActor>();
	}
};
static_assert(alignof(AGeometryCollectionActor) == 0x000008, "Wrong alignment on AGeometryCollectionActor");
static_assert(sizeof(AGeometryCollectionActor) == 0x000238, "Wrong size on AGeometryCollectionActor");
static_assert(offsetof(AGeometryCollectionActor, GeometryCollectionComponent) == 0x000228, "Member 'AGeometryCollectionActor::GeometryCollectionComponent' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionActor, GeometryCollectionDebugDrawComponent) == 0x000230, "Member 'AGeometryCollectionActor::GeometryCollectionDebugDrawComponent' has a wrong offset!");

// Class GeometryCollectionEngine.GeometryCollectionCache
// 0x0028 (0x0050 - 0x0028)
class UGeometryCollectionCache final : public UObject
{
public:
	struct FRecordedTransformTrack                RecordedData;                                      // 0x0028(0x0010)(NativeAccessSpecifierPrivate)
	class UGeometryCollection*                    SupportedCollection;                               // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                  CompatibleCollectionState;                         // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCollectionCache">();
	}
	static class UGeometryCollectionCache* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCollectionCache>();
	}
};
static_assert(alignof(UGeometryCollectionCache) == 0x000008, "Wrong alignment on UGeometryCollectionCache");
static_assert(sizeof(UGeometryCollectionCache) == 0x000050, "Wrong size on UGeometryCollectionCache");
static_assert(offsetof(UGeometryCollectionCache, RecordedData) == 0x000028, "Member 'UGeometryCollectionCache::RecordedData' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionCache, SupportedCollection) == 0x000038, "Member 'UGeometryCollectionCache::SupportedCollection' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionCache, CompatibleCollectionState) == 0x000040, "Member 'UGeometryCollectionCache::CompatibleCollectionState' has a wrong offset!");

// Class GeometryCollectionEngine.GeometryCollectionComponent
// 0x0490 (0x0920 - 0x0490)
class UGeometryCollectionComponent final : public UMeshComponent
{
public:
	uint8                                         Pad_4392[0x8];                                     // 0x0490(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class AChaosSolverActor*                      ChaosSolverActor;                                  // 0x0498(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4393[0xE0];                                    // 0x04A0(0x00E0)(Fixing Size After Last Property [ Dumper-7 ])
	class UGeometryCollection*                    RestCollection;                                    // 0x0580(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AFieldSystemActor*>              InitializationFields;                              // 0x0588(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, NativeAccessSpecifierPublic)
	bool                                          Simulating;                                        // 0x0598(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4394[0x7];                                     // 0x0599(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	EObjectStateTypeEnum                          ObjectType;                                        // 0x05A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          EnableClustering;                                  // 0x05A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4395[0x2];                                     // 0x05A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ClusterGroupIndex;                                 // 0x05A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxClusterLevel;                                   // 0x05A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4396[0x4];                                     // 0x05AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 DamageThreshold;                                   // 0x05B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	EClusterConnectionTypeEnum                    ClusterConnectionType;                             // 0x05C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4397[0x3];                                     // 0x05C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CollisionGroup;                                    // 0x05C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CollisionSampleFraction;                           // 0x05C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LinearEtherDrag;                                   // 0x05CC(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AngularEtherDrag;                                  // 0x05D0(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4398[0x4];                                     // 0x05D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChaosPhysicalMaterial*                 PhysicalMaterial;                                  // 0x05D8(0x0008)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EInitialVelocityTypeEnum                      InitialVelocityType;                               // 0x05E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4399[0x3];                                     // 0x05E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                InitialLinearVelocity;                             // 0x05E4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                InitialAngularVelocity;                            // 0x05F0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_439A[0x4];                                     // 0x05FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      PhysicalMaterialOverride;                          // 0x0600(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGeomComponentCacheParameters          CacheParameters;                                   // 0x0608(0x0050)(NoDestructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             NotifyGeometryCollectionPhysicsStateChange;        // 0x0658(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x0668(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_439B[0x18];                                    // 0x0678(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnChaosBreakEvent;                                 // 0x0690(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                         DesiredCacheTime;                                  // 0x06A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          CachePlayback;                                     // 0x06A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_439C[0x3];                                     // 0x06A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnChaosPhysicsCollision;                           // 0x06A8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                          bNotifyBreaks;                                     // 0x06B8(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bNotifyCollisions;                                 // 0x06B9(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bEnableReplication;                                // 0x06BA(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bEnableAbandonAfterLevel;                          // 0x06BB(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         ReplicationAbandonClusterLevel;                    // 0x06BC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGeometryCollectionRepData             RepData;                                           // 0x06C0(0x0018)(Net, RepNotify, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_439D[0x218];                                   // 0x06D8(0x0218)(Fixing Size After Last Property [ Dumper-7 ])
	class UBodySetup*                             DummyBodySetup;                                    // 0x08F0(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_439E[0x28];                                    // 0x08F8(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ApplyKinematicField(float Radius, const struct FVector& Position);
	void ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
	void NetAbandonCluster(int32 TransformIndex);
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
	void OnRep_RepData(const struct FGeometryCollectionRepData& OldData);
	void ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo);
	void SetNotifyBreaks(bool bNewNotifyBreaks);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCollectionComponent">();
	}
	static class UGeometryCollectionComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCollectionComponent>();
	}
};
static_assert(alignof(UGeometryCollectionComponent) == 0x000010, "Wrong alignment on UGeometryCollectionComponent");
static_assert(sizeof(UGeometryCollectionComponent) == 0x000920, "Wrong size on UGeometryCollectionComponent");
static_assert(offsetof(UGeometryCollectionComponent, ChaosSolverActor) == 0x000498, "Member 'UGeometryCollectionComponent::ChaosSolverActor' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, RestCollection) == 0x000580, "Member 'UGeometryCollectionComponent::RestCollection' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, InitializationFields) == 0x000588, "Member 'UGeometryCollectionComponent::InitializationFields' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, Simulating) == 0x000598, "Member 'UGeometryCollectionComponent::Simulating' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, ObjectType) == 0x0005A0, "Member 'UGeometryCollectionComponent::ObjectType' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, EnableClustering) == 0x0005A1, "Member 'UGeometryCollectionComponent::EnableClustering' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, ClusterGroupIndex) == 0x0005A4, "Member 'UGeometryCollectionComponent::ClusterGroupIndex' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, MaxClusterLevel) == 0x0005A8, "Member 'UGeometryCollectionComponent::MaxClusterLevel' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, DamageThreshold) == 0x0005B0, "Member 'UGeometryCollectionComponent::DamageThreshold' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, ClusterConnectionType) == 0x0005C0, "Member 'UGeometryCollectionComponent::ClusterConnectionType' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, CollisionGroup) == 0x0005C4, "Member 'UGeometryCollectionComponent::CollisionGroup' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, CollisionSampleFraction) == 0x0005C8, "Member 'UGeometryCollectionComponent::CollisionSampleFraction' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, LinearEtherDrag) == 0x0005CC, "Member 'UGeometryCollectionComponent::LinearEtherDrag' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, AngularEtherDrag) == 0x0005D0, "Member 'UGeometryCollectionComponent::AngularEtherDrag' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, PhysicalMaterial) == 0x0005D8, "Member 'UGeometryCollectionComponent::PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, InitialVelocityType) == 0x0005E0, "Member 'UGeometryCollectionComponent::InitialVelocityType' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, InitialLinearVelocity) == 0x0005E4, "Member 'UGeometryCollectionComponent::InitialLinearVelocity' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, InitialAngularVelocity) == 0x0005F0, "Member 'UGeometryCollectionComponent::InitialAngularVelocity' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, PhysicalMaterialOverride) == 0x000600, "Member 'UGeometryCollectionComponent::PhysicalMaterialOverride' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, CacheParameters) == 0x000608, "Member 'UGeometryCollectionComponent::CacheParameters' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, NotifyGeometryCollectionPhysicsStateChange) == 0x000658, "Member 'UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsStateChange' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, NotifyGeometryCollectionPhysicsLoadingStateChange) == 0x000668, "Member 'UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsLoadingStateChange' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, OnChaosBreakEvent) == 0x000690, "Member 'UGeometryCollectionComponent::OnChaosBreakEvent' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, DesiredCacheTime) == 0x0006A0, "Member 'UGeometryCollectionComponent::DesiredCacheTime' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, CachePlayback) == 0x0006A4, "Member 'UGeometryCollectionComponent::CachePlayback' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, OnChaosPhysicsCollision) == 0x0006A8, "Member 'UGeometryCollectionComponent::OnChaosPhysicsCollision' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, bNotifyBreaks) == 0x0006B8, "Member 'UGeometryCollectionComponent::bNotifyBreaks' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, bNotifyCollisions) == 0x0006B9, "Member 'UGeometryCollectionComponent::bNotifyCollisions' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, bEnableReplication) == 0x0006BA, "Member 'UGeometryCollectionComponent::bEnableReplication' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, bEnableAbandonAfterLevel) == 0x0006BB, "Member 'UGeometryCollectionComponent::bEnableAbandonAfterLevel' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, ReplicationAbandonClusterLevel) == 0x0006BC, "Member 'UGeometryCollectionComponent::ReplicationAbandonClusterLevel' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, RepData) == 0x0006C0, "Member 'UGeometryCollectionComponent::RepData' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionComponent, DummyBodySetup) == 0x0008F0, "Member 'UGeometryCollectionComponent::DummyBodySetup' has a wrong offset!");

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// 0x00E8 (0x0310 - 0x0228)
class AGeometryCollectionDebugDrawActor final : public AActor
{
public:
	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage;                                    // 0x0228(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_43A0[0x7];                                     // 0x0229(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody;                                 // 0x0230(0x0018)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bDebugDrawWholeCollection;                         // 0x0248(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDebugDrawHierarchy;                               // 0x0249(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDebugDrawClustering;                              // 0x024A(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGeometryCollectionDebugDrawActorHideGeometry HideGeometry;                                      // 0x024B(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowRigidBodyId;                                  // 0x024C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowRigidBodyCollision;                           // 0x024D(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCollisionAtOrigin;                                // 0x024E(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowRigidBodyTransform;                           // 0x024F(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowRigidBodyInertia;                             // 0x0250(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowRigidBodyVelocity;                            // 0x0251(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowRigidBodyForce;                               // 0x0252(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowRigidBodyInfos;                               // 0x0253(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowTransformIndex;                               // 0x0254(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowTransform;                                    // 0x0255(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowParent;                                       // 0x0256(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowLevel;                                        // 0x0257(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowConnectivityEdges;                            // 0x0258(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowGeometryIndex;                                // 0x0259(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowGeometryTransform;                            // 0x025A(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowBoundingBox;                                  // 0x025B(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowFaces;                                        // 0x025C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowFaceIndices;                                  // 0x025D(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowFaceNormals;                                  // 0x025E(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowSingleFace;                                   // 0x025F(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SingleFaceIndex;                                   // 0x0260(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowVertices;                                     // 0x0264(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowVertexIndices;                                // 0x0265(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShowVertexNormals;                                // 0x0266(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseActiveVisualization;                           // 0x0267(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PointThickness;                                    // 0x0268(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LineThickness;                                     // 0x026C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bTextShadow;                                       // 0x0270(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43A1[0x3];                                     // 0x0271(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TextScale;                                         // 0x0274(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NormalScale;                                       // 0x0278(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AxisScale;                                         // 0x027C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ArrowScale;                                        // 0x0280(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 RigidBodyIdColor;                                  // 0x0284(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RigidBodyTransformScale;                           // 0x0288(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 RigidBodyCollisionColor;                           // 0x028C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 RigidBodyInertiaColor;                             // 0x0290(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 RigidBodyVelocityColor;                            // 0x0294(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 RigidBodyForceColor;                               // 0x0298(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 RigidBodyInfoColor;                                // 0x029C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 TransformIndexColor;                               // 0x02A0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TransformScale;                                    // 0x02A4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 LevelColor;                                        // 0x02A8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 ParentColor;                                       // 0x02AC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ConnectivityEdgeThickness;                         // 0x02B0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 GeometryIndexColor;                                // 0x02B4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         GeometryTransformScale;                            // 0x02B8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 BoundingBoxColor;                                  // 0x02BC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 FaceColor;                                         // 0x02C0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 FaceIndexColor;                                    // 0x02C4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 FaceNormalColor;                                   // 0x02C8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 SingleFaceColor;                                   // 0x02CC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 VertexColor;                                       // 0x02D0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 VertexIndexColor;                                  // 0x02D4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                 VertexNormalColor;                                 // 0x02D8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43A2[0x4];                                     // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBillboardComponent*                    SpriteComponent;                                   // 0x02E0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43A3[0x28];                                    // 0x02E8(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCollectionDebugDrawActor">();
	}
	static class AGeometryCollectionDebugDrawActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGeometryCollectionDebugDrawActor>();
	}
};
static_assert(alignof(AGeometryCollectionDebugDrawActor) == 0x000008, "Wrong alignment on AGeometryCollectionDebugDrawActor");
static_assert(sizeof(AGeometryCollectionDebugDrawActor) == 0x000310, "Wrong size on AGeometryCollectionDebugDrawActor");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, WarningMessage) == 0x000228, "Member 'AGeometryCollectionDebugDrawActor::WarningMessage' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, SelectedRigidBody) == 0x000230, "Member 'AGeometryCollectionDebugDrawActor::SelectedRigidBody' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bDebugDrawWholeCollection) == 0x000248, "Member 'AGeometryCollectionDebugDrawActor::bDebugDrawWholeCollection' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bDebugDrawHierarchy) == 0x000249, "Member 'AGeometryCollectionDebugDrawActor::bDebugDrawHierarchy' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bDebugDrawClustering) == 0x00024A, "Member 'AGeometryCollectionDebugDrawActor::bDebugDrawClustering' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, HideGeometry) == 0x00024B, "Member 'AGeometryCollectionDebugDrawActor::HideGeometry' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowRigidBodyId) == 0x00024C, "Member 'AGeometryCollectionDebugDrawActor::bShowRigidBodyId' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowRigidBodyCollision) == 0x00024D, "Member 'AGeometryCollectionDebugDrawActor::bShowRigidBodyCollision' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bCollisionAtOrigin) == 0x00024E, "Member 'AGeometryCollectionDebugDrawActor::bCollisionAtOrigin' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowRigidBodyTransform) == 0x00024F, "Member 'AGeometryCollectionDebugDrawActor::bShowRigidBodyTransform' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowRigidBodyInertia) == 0x000250, "Member 'AGeometryCollectionDebugDrawActor::bShowRigidBodyInertia' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowRigidBodyVelocity) == 0x000251, "Member 'AGeometryCollectionDebugDrawActor::bShowRigidBodyVelocity' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowRigidBodyForce) == 0x000252, "Member 'AGeometryCollectionDebugDrawActor::bShowRigidBodyForce' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowRigidBodyInfos) == 0x000253, "Member 'AGeometryCollectionDebugDrawActor::bShowRigidBodyInfos' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowTransformIndex) == 0x000254, "Member 'AGeometryCollectionDebugDrawActor::bShowTransformIndex' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowTransform) == 0x000255, "Member 'AGeometryCollectionDebugDrawActor::bShowTransform' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowParent) == 0x000256, "Member 'AGeometryCollectionDebugDrawActor::bShowParent' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowLevel) == 0x000257, "Member 'AGeometryCollectionDebugDrawActor::bShowLevel' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowConnectivityEdges) == 0x000258, "Member 'AGeometryCollectionDebugDrawActor::bShowConnectivityEdges' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowGeometryIndex) == 0x000259, "Member 'AGeometryCollectionDebugDrawActor::bShowGeometryIndex' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowGeometryTransform) == 0x00025A, "Member 'AGeometryCollectionDebugDrawActor::bShowGeometryTransform' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowBoundingBox) == 0x00025B, "Member 'AGeometryCollectionDebugDrawActor::bShowBoundingBox' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowFaces) == 0x00025C, "Member 'AGeometryCollectionDebugDrawActor::bShowFaces' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowFaceIndices) == 0x00025D, "Member 'AGeometryCollectionDebugDrawActor::bShowFaceIndices' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowFaceNormals) == 0x00025E, "Member 'AGeometryCollectionDebugDrawActor::bShowFaceNormals' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowSingleFace) == 0x00025F, "Member 'AGeometryCollectionDebugDrawActor::bShowSingleFace' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, SingleFaceIndex) == 0x000260, "Member 'AGeometryCollectionDebugDrawActor::SingleFaceIndex' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowVertices) == 0x000264, "Member 'AGeometryCollectionDebugDrawActor::bShowVertices' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowVertexIndices) == 0x000265, "Member 'AGeometryCollectionDebugDrawActor::bShowVertexIndices' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bShowVertexNormals) == 0x000266, "Member 'AGeometryCollectionDebugDrawActor::bShowVertexNormals' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bUseActiveVisualization) == 0x000267, "Member 'AGeometryCollectionDebugDrawActor::bUseActiveVisualization' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, PointThickness) == 0x000268, "Member 'AGeometryCollectionDebugDrawActor::PointThickness' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, LineThickness) == 0x00026C, "Member 'AGeometryCollectionDebugDrawActor::LineThickness' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, bTextShadow) == 0x000270, "Member 'AGeometryCollectionDebugDrawActor::bTextShadow' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, TextScale) == 0x000274, "Member 'AGeometryCollectionDebugDrawActor::TextScale' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, NormalScale) == 0x000278, "Member 'AGeometryCollectionDebugDrawActor::NormalScale' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, AxisScale) == 0x00027C, "Member 'AGeometryCollectionDebugDrawActor::AxisScale' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, ArrowScale) == 0x000280, "Member 'AGeometryCollectionDebugDrawActor::ArrowScale' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, RigidBodyIdColor) == 0x000284, "Member 'AGeometryCollectionDebugDrawActor::RigidBodyIdColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, RigidBodyTransformScale) == 0x000288, "Member 'AGeometryCollectionDebugDrawActor::RigidBodyTransformScale' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, RigidBodyCollisionColor) == 0x00028C, "Member 'AGeometryCollectionDebugDrawActor::RigidBodyCollisionColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, RigidBodyInertiaColor) == 0x000290, "Member 'AGeometryCollectionDebugDrawActor::RigidBodyInertiaColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, RigidBodyVelocityColor) == 0x000294, "Member 'AGeometryCollectionDebugDrawActor::RigidBodyVelocityColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, RigidBodyForceColor) == 0x000298, "Member 'AGeometryCollectionDebugDrawActor::RigidBodyForceColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, RigidBodyInfoColor) == 0x00029C, "Member 'AGeometryCollectionDebugDrawActor::RigidBodyInfoColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, TransformIndexColor) == 0x0002A0, "Member 'AGeometryCollectionDebugDrawActor::TransformIndexColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, TransformScale) == 0x0002A4, "Member 'AGeometryCollectionDebugDrawActor::TransformScale' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, LevelColor) == 0x0002A8, "Member 'AGeometryCollectionDebugDrawActor::LevelColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, ParentColor) == 0x0002AC, "Member 'AGeometryCollectionDebugDrawActor::ParentColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, ConnectivityEdgeThickness) == 0x0002B0, "Member 'AGeometryCollectionDebugDrawActor::ConnectivityEdgeThickness' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, GeometryIndexColor) == 0x0002B4, "Member 'AGeometryCollectionDebugDrawActor::GeometryIndexColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, GeometryTransformScale) == 0x0002B8, "Member 'AGeometryCollectionDebugDrawActor::GeometryTransformScale' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, BoundingBoxColor) == 0x0002BC, "Member 'AGeometryCollectionDebugDrawActor::BoundingBoxColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, FaceColor) == 0x0002C0, "Member 'AGeometryCollectionDebugDrawActor::FaceColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, FaceIndexColor) == 0x0002C4, "Member 'AGeometryCollectionDebugDrawActor::FaceIndexColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, FaceNormalColor) == 0x0002C8, "Member 'AGeometryCollectionDebugDrawActor::FaceNormalColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, SingleFaceColor) == 0x0002CC, "Member 'AGeometryCollectionDebugDrawActor::SingleFaceColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, VertexColor) == 0x0002D0, "Member 'AGeometryCollectionDebugDrawActor::VertexColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, VertexIndexColor) == 0x0002D4, "Member 'AGeometryCollectionDebugDrawActor::VertexIndexColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, VertexNormalColor) == 0x0002D8, "Member 'AGeometryCollectionDebugDrawActor::VertexNormalColor' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionDebugDrawActor, SpriteComponent) == 0x0002E0, "Member 'AGeometryCollectionDebugDrawActor::SpriteComponent' has a wrong offset!");

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// 0x0018 (0x00D0 - 0x00B8)
class UGeometryCollectionDebugDrawComponent final : public UActorComponent
{
public:
	class AGeometryCollectionDebugDrawActor*      GeometryCollectionDebugDrawActor;                  // 0x00B8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor;             // 0x00C0(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43A4[0x8];                                     // 0x00C8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCollectionDebugDrawComponent">();
	}
	static class UGeometryCollectionDebugDrawComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCollectionDebugDrawComponent>();
	}
};
static_assert(alignof(UGeometryCollectionDebugDrawComponent) == 0x000008, "Wrong alignment on UGeometryCollectionDebugDrawComponent");
static_assert(sizeof(UGeometryCollectionDebugDrawComponent) == 0x0000D0, "Wrong size on UGeometryCollectionDebugDrawComponent");
static_assert(offsetof(UGeometryCollectionDebugDrawComponent, GeometryCollectionDebugDrawActor) == 0x0000B8, "Member 'UGeometryCollectionDebugDrawComponent::GeometryCollectionDebugDrawActor' has a wrong offset!");
static_assert(offsetof(UGeometryCollectionDebugDrawComponent, GeometryCollectionRenderLevelSetActor) == 0x0000C0, "Member 'UGeometryCollectionDebugDrawComponent::GeometryCollectionRenderLevelSetActor' has a wrong offset!");

// Class GeometryCollectionEngine.GeometryCollection
// 0x00E0 (0x0108 - 0x0028)
class UGeometryCollection final : public UObject
{
public:
	uint8                                         Pad_43A5[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          EnableClustering;                                  // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43A6[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ClusterGroupIndex;                                 // 0x0034(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxClusterLevel;                                   // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43A7[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 DamageThreshold;                                   // 0x0040(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	EClusterConnectionTypeEnum                    ClusterConnectionType;                             // 0x0050(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43A8[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGeometryCollectionSource>      GeometrySource;                                    // 0x0058(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>             Materials;                                         // 0x0068(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	ECollisionTypeEnum                            CollisionType;                                     // 0x0078(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EImplicitTypeEnum                             ImplicitType;                                      // 0x0079(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43A9[0x2];                                     // 0x007A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MinLevelSetResolution;                             // 0x007C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxLevelSetResolution;                             // 0x0080(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MinClusterLevelSetResolution;                      // 0x0084(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxClusterLevelSetResolution;                      // 0x0088(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CollisionObjectReductionPercentage;                // 0x008C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bMassAsDensity;                                    // 0x0090(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43AA[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Mass;                                              // 0x0094(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinimumMassClamp;                                  // 0x0098(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CollisionParticlesFraction;                        // 0x009C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaximumCollisionParticles;                         // 0x00A0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43AB[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData;                                  // 0x00A8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          EnableRemovePiecesOnFracture;                      // 0x00B8(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43AC[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             RemoveOnFractureMaterials;                         // 0x00C0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGuid                                  PersistentGuid;                                    // 0x00D0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                  StateGuid;                                         // 0x00E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         BoneSelectedMaterialIndex;                         // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_43AD[0x14];                                    // 0x00F4(0x0014)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCollection">();
	}
	static class UGeometryCollection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCollection>();
	}
};
static_assert(alignof(UGeometryCollection) == 0x000008, "Wrong alignment on UGeometryCollection");
static_assert(sizeof(UGeometryCollection) == 0x000108, "Wrong size on UGeometryCollection");
static_assert(offsetof(UGeometryCollection, EnableClustering) == 0x000030, "Member 'UGeometryCollection::EnableClustering' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, ClusterGroupIndex) == 0x000034, "Member 'UGeometryCollection::ClusterGroupIndex' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, MaxClusterLevel) == 0x000038, "Member 'UGeometryCollection::MaxClusterLevel' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, DamageThreshold) == 0x000040, "Member 'UGeometryCollection::DamageThreshold' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, ClusterConnectionType) == 0x000050, "Member 'UGeometryCollection::ClusterConnectionType' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, GeometrySource) == 0x000058, "Member 'UGeometryCollection::GeometrySource' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, Materials) == 0x000068, "Member 'UGeometryCollection::Materials' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, CollisionType) == 0x000078, "Member 'UGeometryCollection::CollisionType' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, ImplicitType) == 0x000079, "Member 'UGeometryCollection::ImplicitType' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, MinLevelSetResolution) == 0x00007C, "Member 'UGeometryCollection::MinLevelSetResolution' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, MaxLevelSetResolution) == 0x000080, "Member 'UGeometryCollection::MaxLevelSetResolution' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, MinClusterLevelSetResolution) == 0x000084, "Member 'UGeometryCollection::MinClusterLevelSetResolution' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, MaxClusterLevelSetResolution) == 0x000088, "Member 'UGeometryCollection::MaxClusterLevelSetResolution' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, CollisionObjectReductionPercentage) == 0x00008C, "Member 'UGeometryCollection::CollisionObjectReductionPercentage' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, bMassAsDensity) == 0x000090, "Member 'UGeometryCollection::bMassAsDensity' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, Mass) == 0x000094, "Member 'UGeometryCollection::Mass' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, MinimumMassClamp) == 0x000098, "Member 'UGeometryCollection::MinimumMassClamp' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, CollisionParticlesFraction) == 0x00009C, "Member 'UGeometryCollection::CollisionParticlesFraction' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, MaximumCollisionParticles) == 0x0000A0, "Member 'UGeometryCollection::MaximumCollisionParticles' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, SizeSpecificData) == 0x0000A8, "Member 'UGeometryCollection::SizeSpecificData' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, EnableRemovePiecesOnFracture) == 0x0000B8, "Member 'UGeometryCollection::EnableRemovePiecesOnFracture' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, RemoveOnFractureMaterials) == 0x0000C0, "Member 'UGeometryCollection::RemoveOnFractureMaterials' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, PersistentGuid) == 0x0000D0, "Member 'UGeometryCollection::PersistentGuid' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, StateGuid) == 0x0000E0, "Member 'UGeometryCollection::StateGuid' has a wrong offset!");
static_assert(offsetof(UGeometryCollection, BoneSelectedMaterialIndex) == 0x0000F0, "Member 'UGeometryCollection::BoneSelectedMaterialIndex' has a wrong offset!");

// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// 0x0098 (0x02C0 - 0x0228)
class alignas(0x10) AGeometryCollectionRenderLevelSetActor final : public AActor
{
public:
	class UVolumeTexture*                         TargetVolumeTexture;                               // 0x0228(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                              RayMarchMaterial;                                  // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SurfaceTolerance;                                  // 0x0238(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Isovalue;                                          // 0x023C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Enabled;                                           // 0x0240(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          RenderVolumeBoundingBox;                           // 0x0241(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43AE[0x7E];                                    // 0x0242(0x007E)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCollectionRenderLevelSetActor">();
	}
	static class AGeometryCollectionRenderLevelSetActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGeometryCollectionRenderLevelSetActor>();
	}
};
static_assert(alignof(AGeometryCollectionRenderLevelSetActor) == 0x000010, "Wrong alignment on AGeometryCollectionRenderLevelSetActor");
static_assert(sizeof(AGeometryCollectionRenderLevelSetActor) == 0x0002C0, "Wrong size on AGeometryCollectionRenderLevelSetActor");
static_assert(offsetof(AGeometryCollectionRenderLevelSetActor, TargetVolumeTexture) == 0x000228, "Member 'AGeometryCollectionRenderLevelSetActor::TargetVolumeTexture' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionRenderLevelSetActor, RayMarchMaterial) == 0x000230, "Member 'AGeometryCollectionRenderLevelSetActor::RayMarchMaterial' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionRenderLevelSetActor, SurfaceTolerance) == 0x000238, "Member 'AGeometryCollectionRenderLevelSetActor::SurfaceTolerance' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionRenderLevelSetActor, Isovalue) == 0x00023C, "Member 'AGeometryCollectionRenderLevelSetActor::Isovalue' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionRenderLevelSetActor, Enabled) == 0x000240, "Member 'AGeometryCollectionRenderLevelSetActor::Enabled' has a wrong offset!");
static_assert(offsetof(AGeometryCollectionRenderLevelSetActor, RenderVolumeBoundingBox) == 0x000241, "Member 'AGeometryCollectionRenderLevelSetActor::RenderVolumeBoundingBox' has a wrong offset!");

// Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
// 0x0088 (0x0140 - 0x00B8)
class USkeletalMeshSimulationComponent final : public UActorComponent
{
public:
	uint8                                         Pad_43AF[0x8];                                     // 0x00B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UChaosPhysicalMaterial*                 PhysicalMaterial;                                  // 0x00C0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AChaosSolverActor*                      ChaosSolverActor;                                  // 0x00C8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicsAsset*                          OverridePhysicsAsset;                              // 0x00D0(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSimulating;                                       // 0x00D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bNotifyCollisions;                                 // 0x00D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EObjectStateTypeEnum                          ObjectType;                                        // 0x00DA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43B0[0x1];                                     // 0x00DB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Density;                                           // 0x00DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinMass;                                           // 0x00E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxMass;                                           // 0x00E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECollisionTypeEnum                            CollisionType;                                     // 0x00E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43B1[0x3];                                     // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ImplicitShapeParticlesPerUnitArea;                 // 0x00EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ImplicitShapeMinNumParticles;                      // 0x00F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ImplicitShapeMaxNumParticles;                      // 0x00F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MinLevelSetResolution;                             // 0x00F8(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxLevelSetResolution;                             // 0x00FC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CollisionGroup;                                    // 0x0100(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EInitialVelocityTypeEnum                      InitialVelocityType;                               // 0x0104(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43B2[0x3];                                     // 0x0105(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                InitialLinearVelocity;                             // 0x0108(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                InitialAngularVelocity;                            // 0x0114(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnChaosPhysicsCollision;                           // 0x0120(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_43B3[0x10];                                    // 0x0130(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SkeletalMeshSimulationComponent">();
	}
	static class USkeletalMeshSimulationComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkeletalMeshSimulationComponent>();
	}
};
static_assert(alignof(USkeletalMeshSimulationComponent) == 0x000008, "Wrong alignment on USkeletalMeshSimulationComponent");
static_assert(sizeof(USkeletalMeshSimulationComponent) == 0x000140, "Wrong size on USkeletalMeshSimulationComponent");
static_assert(offsetof(USkeletalMeshSimulationComponent, PhysicalMaterial) == 0x0000C0, "Member 'USkeletalMeshSimulationComponent::PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(USkeletalMeshSimulationComponent, ChaosSolverActor) == 0x0000C8, "Member 'USkeletalMeshSimulationComponent::ChaosSolverActor' has a wrong offset!");
static_assert(offsetof(USkeletalMeshSimulationComponent, OverridePhysicsAsset) == 0x0000D0, "Member 'USkeletalMeshSimulationComponent::OverridePhysicsAsset' has a wrong offset!");
static_assert(offsetof(USkeletalMeshSimulationComponent, bSimulating) == 0x0000D8, "Member 'USkeletalMeshSimulationComponent::bSimulating' has a wrong offset!");
static_assert(offsetof(USkeletalMeshSimulationComponent, bNotifyCollisions) == 0x0000D9, "Member 'USkeletalMeshSimulationComponent::bNotifyCollisions' has a wrong offset!");
static_assert(offsetof(USkeletalMeshSimulationComponent, ObjectType) == 0x0000DA, "Member 'USkeletalMeshSimulationComponent::ObjectType' has a wrong offset!");
static_assert(offsetof(USkeletalMeshSimulationComponent, Density) == 0x0000DC, "Member 'USkeletalMeshSimulationComponent::Density' has a wrong offset!");
static_assert(offsetof(USkeletalMeshSimulationComponent, MinMass) == 0x0000E0, "Member 'USkeletalMeshSimulationComponent::MinMass' has a wrong offset!");
static_assert(offsetof(USkeletalMeshSimulationComponent, MaxMass) == 0x0000E4, "Member 'USkeletalMeshSimulationComponent::MaxMass' has a wrong offset!");
static_assert(offsetof(USkeletalMeshSimulationComponent, CollisionType) == 0x0000E8, "Member 'USkeletalMeshSimulationComponent::CollisionType' has a wrong offset!");
static_assert(offsetof(USkeletalMeshSimulationComponent, ImplicitShapeParticlesPerUnitArea) == 0x0000EC, "Member 'USkeletalMeshSimulationComponent::ImplicitShapeParticlesPerUnitArea' has a wrong offset!");
static_assert(offsetof(USkeletalMeshSimulationComponent, ImplicitShapeMinNumParticles) == 0x0000F0, "Member 'USkeletalMeshSimulationComponent::ImplicitShapeMinNumParticles' has a wrong offset!");
static_assert(offsetof(USkeletalMeshSimulationComponent, ImplicitShapeMaxNumParticles) == 0x0000F4, "Member 'USkeletalMeshSimulationComponent::ImplicitShapeMaxNumParticles' has a wrong offset!");
static_assert(offsetof(USkeletalMeshSimulationComponent, MinLevelSetResolution) == 0x0000F8, "Member 'USkeletalMeshSimulationComponent::MinLevelSetResolution' has a wrong offset!");
static_assert(offsetof(USkeletalMeshSimulationComponent, MaxLevelSetResolution) == 0x0000FC, "Member 'USkeletalMeshSimulationComponent::MaxLevelSetResolution' has a wrong offset!");
static_assert(offsetof(USkeletalMeshSimulationComponent, CollisionGroup) == 0x000100, "Member 'USkeletalMeshSimulationComponent::CollisionGroup' has a wrong offset!");
static_assert(offsetof(USkeletalMeshSimulationComponent, InitialVelocityType) == 0x000104, "Member 'USkeletalMeshSimulationComponent::InitialVelocityType' has a wrong offset!");
static_assert(offsetof(USkeletalMeshSimulationComponent, InitialLinearVelocity) == 0x000108, "Member 'USkeletalMeshSimulationComponent::InitialLinearVelocity' has a wrong offset!");
static_assert(offsetof(USkeletalMeshSimulationComponent, InitialAngularVelocity) == 0x000114, "Member 'USkeletalMeshSimulationComponent::InitialAngularVelocity' has a wrong offset!");
static_assert(offsetof(USkeletalMeshSimulationComponent, OnChaosPhysicsCollision) == 0x000120, "Member 'USkeletalMeshSimulationComponent::OnChaosPhysicsCollision' has a wrong offset!");

// Class GeometryCollectionEngine.StaticMeshSimulationComponent
// 0x0088 (0x0140 - 0x00B8)
class UStaticMeshSimulationComponent final : public UActorComponent
{
public:
	uint8                                         Pad_43B4[0x8];                                     // 0x00B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          Simulating;                                        // 0x00C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bNotifyCollisions;                                 // 0x00C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EObjectStateTypeEnum                          ObjectType;                                        // 0x00C2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43B5[0x1];                                     // 0x00C3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Mass;                                              // 0x00C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECollisionTypeEnum                            CollisionType;                                     // 0x00C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EImplicitTypeEnum                             ImplicitType;                                      // 0x00C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43B6[0x2];                                     // 0x00CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MinLevelSetResolution;                             // 0x00CC(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxLevelSetResolution;                             // 0x00D0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EInitialVelocityTypeEnum                      InitialVelocityType;                               // 0x00D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43B7[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                InitialLinearVelocity;                             // 0x00D8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                InitialAngularVelocity;                            // 0x00E4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DamageThreshold;                                   // 0x00F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43B8[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChaosPhysicalMaterial*                 PhysicalMaterial;                                  // 0x00F8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AChaosSolverActor*                      ChaosSolverActor;                                  // 0x0100(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnChaosPhysicsCollision;                           // 0x0108(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_43B9[0x10];                                    // 0x0118(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPrimitiveComponent*>            SimulatedComponents;                               // 0x0128(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                         Pad_43BA[0x8];                                     // 0x0138(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ForceRecreatePhysicsState();
	void ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StaticMeshSimulationComponent">();
	}
	static class UStaticMeshSimulationComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStaticMeshSimulationComponent>();
	}
};
static_assert(alignof(UStaticMeshSimulationComponent) == 0x000008, "Wrong alignment on UStaticMeshSimulationComponent");
static_assert(sizeof(UStaticMeshSimulationComponent) == 0x000140, "Wrong size on UStaticMeshSimulationComponent");
static_assert(offsetof(UStaticMeshSimulationComponent, Simulating) == 0x0000C0, "Member 'UStaticMeshSimulationComponent::Simulating' has a wrong offset!");
static_assert(offsetof(UStaticMeshSimulationComponent, bNotifyCollisions) == 0x0000C1, "Member 'UStaticMeshSimulationComponent::bNotifyCollisions' has a wrong offset!");
static_assert(offsetof(UStaticMeshSimulationComponent, ObjectType) == 0x0000C2, "Member 'UStaticMeshSimulationComponent::ObjectType' has a wrong offset!");
static_assert(offsetof(UStaticMeshSimulationComponent, Mass) == 0x0000C4, "Member 'UStaticMeshSimulationComponent::Mass' has a wrong offset!");
static_assert(offsetof(UStaticMeshSimulationComponent, CollisionType) == 0x0000C8, "Member 'UStaticMeshSimulationComponent::CollisionType' has a wrong offset!");
static_assert(offsetof(UStaticMeshSimulationComponent, ImplicitType) == 0x0000C9, "Member 'UStaticMeshSimulationComponent::ImplicitType' has a wrong offset!");
static_assert(offsetof(UStaticMeshSimulationComponent, MinLevelSetResolution) == 0x0000CC, "Member 'UStaticMeshSimulationComponent::MinLevelSetResolution' has a wrong offset!");
static_assert(offsetof(UStaticMeshSimulationComponent, MaxLevelSetResolution) == 0x0000D0, "Member 'UStaticMeshSimulationComponent::MaxLevelSetResolution' has a wrong offset!");
static_assert(offsetof(UStaticMeshSimulationComponent, InitialVelocityType) == 0x0000D4, "Member 'UStaticMeshSimulationComponent::InitialVelocityType' has a wrong offset!");
static_assert(offsetof(UStaticMeshSimulationComponent, InitialLinearVelocity) == 0x0000D8, "Member 'UStaticMeshSimulationComponent::InitialLinearVelocity' has a wrong offset!");
static_assert(offsetof(UStaticMeshSimulationComponent, InitialAngularVelocity) == 0x0000E4, "Member 'UStaticMeshSimulationComponent::InitialAngularVelocity' has a wrong offset!");
static_assert(offsetof(UStaticMeshSimulationComponent, DamageThreshold) == 0x0000F0, "Member 'UStaticMeshSimulationComponent::DamageThreshold' has a wrong offset!");
static_assert(offsetof(UStaticMeshSimulationComponent, PhysicalMaterial) == 0x0000F8, "Member 'UStaticMeshSimulationComponent::PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(UStaticMeshSimulationComponent, ChaosSolverActor) == 0x000100, "Member 'UStaticMeshSimulationComponent::ChaosSolverActor' has a wrong offset!");
static_assert(offsetof(UStaticMeshSimulationComponent, OnChaosPhysicsCollision) == 0x000108, "Member 'UStaticMeshSimulationComponent::OnChaosPhysicsCollision' has a wrong offset!");
static_assert(offsetof(UStaticMeshSimulationComponent, SimulatedComponents) == 0x000128, "Member 'UStaticMeshSimulationComponent::SimulatedComponents' has a wrong offset!");

}
