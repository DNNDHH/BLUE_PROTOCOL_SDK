#pragma once

 

// Package: GameplayAbilities

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "DataRegistry_structs.hpp"
#include "MovieScene_structs.hpp"


namespace SDK
{

// Enum GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
// NumValues: 0x0004
enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8
{
	CancelAbilityImmediately                 = 0,
	RemoveAbilityOnEnd                       = 1,
	DoNothing                                = 2,
	EGameplayEffectGrantedAbilityRemovePolicy_MAX = 3,
};

// Enum GameplayAbilities.EGameplayEffectAttributeCaptureSource
// NumValues: 0x0003
enum class EGameplayEffectAttributeCaptureSource : uint8
{
	Source                                   = 0,
	Target                                   = 1,
	EGameplayEffectAttributeCaptureSource_MAX = 2,
};

// Enum GameplayAbilities.EGameplayAbilityActivationMode
// NumValues: 0x0006
enum class EGameplayAbilityActivationMode : uint8
{
	Authority                                = 0,
	NonAuthority                             = 1,
	Predicting                               = 2,
	Confirmed                                = 3,
	Rejected                                 = 4,
	EGameplayAbilityActivationMode_MAX       = 5,
};

// Enum GameplayAbilities.EAbilityGenericReplicatedEvent
// NumValues: 0x000D
enum class EAbilityGenericReplicatedEvent : uint8
{
	GenericConfirm                           = 0,
	GenericCancel                            = 1,
	InputPressed                             = 2,
	InputReleased                            = 3,
	GenericSignalFromClient                  = 4,
	GenericSignalFromServer                  = 5,
	GameCustom1                              = 6,
	GameCustom2                              = 7,
	GameCustom3                              = 8,
	GameCustom4                              = 9,
	GameCustom5                              = 10,
	GameCustom6                              = 11,
	MAX                                      = 12,
};

// Enum GameplayAbilities.EGameplayCueEvent
// NumValues: 0x0005
enum class EGameplayCueEvent : uint8
{
	OnActive                                 = 0,
	WhileActive                              = 1,
	Executed                                 = 2,
	Removed                                  = 3,
	EGameplayCueEvent_MAX                    = 4,
};

// Enum GameplayAbilities.EGameplayEffectReplicationMode
// NumValues: 0x0004
enum class EGameplayEffectReplicationMode : uint8
{
	Minimal                                  = 0,
	Mixed                                    = 1,
	Full                                     = 2,
	EGameplayEffectReplicationMode_MAX       = 3,
};

// Enum GameplayAbilities.EAbilityTaskWaitState
// NumValues: 0x0004
enum class EAbilityTaskWaitState : uint8
{
	WaitingOnGame                            = 1,
	WaitingOnUser                            = 2,
	WaitingOnAvatar                          = 4,
	EAbilityTaskWaitState_MAX                = 5,
};

// Enum GameplayAbilities.ERootMotionMoveToActorTargetOffsetType
// NumValues: 0x0004
enum class ERootMotionMoveToActorTargetOffsetType : uint8
{
	AlignFromTargetToSource                  = 0,
	AlignToTargetForward                     = 1,
	AlignToWorldSpace                        = 2,
	ERootMotionMoveToActorTargetOffsetType_MAX = 3,
};

// Enum GameplayAbilities.EAbilityTaskNetSyncType
// NumValues: 0x0004
enum class EAbilityTaskNetSyncType : uint8
{
	BothWait                                 = 0,
	OnlyServerWait                           = 1,
	OnlyClientWait                           = 2,
	EAbilityTaskNetSyncType_MAX              = 3,
};

// Enum GameplayAbilities.EWaitAttributeChangeComparison
// NumValues: 0x0008
enum class EWaitAttributeChangeComparison : uint8
{
	None                                     = 0,
	GreaterThan                              = 1,
	LessThan                                 = 2,
	GreaterThanOrEqualTo                     = 3,
	LessThanOrEqualTo                        = 4,
	NotEqualTo                               = 5,
	ExactlyEqualTo                           = 6,
	MAX                                      = 7,
};

// Enum GameplayAbilities.EGameplayAbilityInputBinds
// NumValues: 0x000A
enum class EGameplayAbilityInputBinds : uint8
{
	Ability1                                 = 0,
	Ability2                                 = 1,
	Ability3                                 = 2,
	Ability4                                 = 3,
	Ability5                                 = 4,
	Ability6                                 = 5,
	Ability7                                 = 6,
	Ability8                                 = 7,
	Ability9                                 = 8,
	EGameplayAbilityInputBinds_MAX           = 9,
};

// Enum GameplayAbilities.ETargetDataFilterSelf
// NumValues: 0x0004
enum class ETargetDataFilterSelf : uint8
{
	TDFS_Any                                 = 0,
	TDFS_NoSelf                              = 1,
	TDFS_NoOthers                            = 2,
	TDFS_MAX                                 = 3,
};

// Enum GameplayAbilities.EGameplayAbilityTargetingLocationType
// NumValues: 0x0004
enum class EGameplayAbilityTargetingLocationType : uint8
{
	LiteralTransform                         = 0,
	ActorTransform                           = 1,
	SocketTransform                          = 2,
	EGameplayAbilityTargetingLocationType_MAX = 3,
};

// Enum GameplayAbilities.EGameplayTargetingConfirmation
// NumValues: 0x0005
enum class EGameplayTargetingConfirmation : uint8
{
	Instant                                  = 0,
	UserConfirmed                            = 1,
	Custom                                   = 2,
	CustomMulti                              = 3,
	EGameplayTargetingConfirmation_MAX       = 4,
};

// Enum GameplayAbilities.ERepAnimPositionMethod
// NumValues: 0x0003
enum class ERepAnimPositionMethod : uint8
{
	Position                                 = 0,
	CurrentSectionId                         = 1,
	ERepAnimPositionMethod_MAX               = 2,
};

// Enum GameplayAbilities.EGameplayAbilityTriggerSource
// NumValues: 0x0004
enum class EGameplayAbilityTriggerSource : uint8
{
	GameplayEvent                            = 0,
	OwnedTagAdded                            = 1,
	OwnedTagPresent                          = 2,
	EGameplayAbilityTriggerSource_MAX        = 3,
};

// Enum GameplayAbilities.EGameplayAbilityReplicationPolicy
// NumValues: 0x0003
enum class EGameplayAbilityReplicationPolicy : uint8
{
	ReplicateNo                              = 0,
	ReplicateYes                             = 1,
	EGameplayAbilityReplicationPolicy_MAX    = 2,
};

// Enum GameplayAbilities.EGameplayAbilityNetSecurityPolicy
// NumValues: 0x0005
enum class EGameplayAbilityNetSecurityPolicy : uint8
{
	ClientOrServer                           = 0,
	ServerOnlyExecution                      = 1,
	ServerOnlyTermination                    = 2,
	ServerOnly                               = 3,
	EGameplayAbilityNetSecurityPolicy_MAX    = 4,
};

// Enum GameplayAbilities.EGameplayAbilityNetExecutionPolicy
// NumValues: 0x0005
enum class EGameplayAbilityNetExecutionPolicy : uint8
{
	LocalPredicted                           = 0,
	LocalOnly                                = 1,
	ServerInitiated                          = 2,
	ServerOnly                               = 3,
	EGameplayAbilityNetExecutionPolicy_MAX   = 4,
};

// Enum GameplayAbilities.EGameplayAbilityInstancingPolicy
// NumValues: 0x0004
enum class EGameplayAbilityInstancingPolicy : uint8
{
	NonInstanced                             = 0,
	InstancedPerActor                        = 1,
	InstancedPerExecution                    = 2,
	EGameplayAbilityInstancingPolicy_MAX     = 3,
};

// Enum GameplayAbilities.EGameplayCuePayloadType
// NumValues: 0x0003
enum class EGameplayCuePayloadType : uint8
{
	CueParameters                            = 0,
	FromSpec                                 = 1,
	EGameplayCuePayloadType_MAX              = 2,
};

// Enum GameplayAbilities.EGameplayEffectPeriodInhibitionRemovedPolicy
// NumValues: 0x0004
enum class EGameplayEffectPeriodInhibitionRemovedPolicy : uint8
{
	NeverReset                               = 0,
	ResetPeriod                              = 1,
	ExecuteAndResetPeriod                    = 2,
	EGameplayEffectPeriodInhibitionRemovedPolicy_MAX = 3,
};

// Enum GameplayAbilities.EGameplayEffectStackingExpirationPolicy
// NumValues: 0x0004
enum class EGameplayEffectStackingExpirationPolicy : uint8
{
	ClearEntireStack                         = 0,
	RemoveSingleStackAndRefreshDuration      = 1,
	RefreshDuration                          = 2,
	EGameplayEffectStackingExpirationPolicy_MAX = 3,
};

// Enum GameplayAbilities.EGameplayEffectStackingPeriodPolicy
// NumValues: 0x0003
enum class EGameplayEffectStackingPeriodPolicy : uint8
{
	ResetOnSuccessfulApplication             = 0,
	NeverReset                               = 1,
	EGameplayEffectStackingPeriodPolicy_MAX  = 2,
};

// Enum GameplayAbilities.EGameplayEffectStackingDurationPolicy
// NumValues: 0x0003
enum class EGameplayEffectStackingDurationPolicy : uint8
{
	RefreshOnSuccessfulApplication           = 0,
	NeverRefresh                             = 1,
	EGameplayEffectStackingDurationPolicy_MAX = 2,
};

// Enum GameplayAbilities.EGameplayEffectDurationType
// NumValues: 0x0004
enum class EGameplayEffectDurationType : uint8
{
	Instant                                  = 0,
	Infinite                                 = 1,
	HasDuration                              = 2,
	EGameplayEffectDurationType_MAX          = 3,
};

// Enum GameplayAbilities.EGameplayEffectScopedModifierAggregatorType
// NumValues: 0x0003
enum class EGameplayEffectScopedModifierAggregatorType : uint8
{
	CapturedAttributeBacked                  = 0,
	Transient                                = 1,
	EGameplayEffectScopedModifierAggregatorType_MAX = 2,
};

// Enum GameplayAbilities.EAttributeBasedFloatCalculationType
// NumValues: 0x0005
enum class EAttributeBasedFloatCalculationType : uint8
{
	AttributeMagnitude                       = 0,
	AttributeBaseValue                       = 1,
	AttributeBonusMagnitude                  = 2,
	AttributeMagnitudeEvaluatedUpToChannel   = 3,
	EAttributeBasedFloatCalculationType_MAX  = 4,
};

// Enum GameplayAbilities.EGameplayEffectMagnitudeCalculation
// NumValues: 0x0005
enum class EGameplayEffectMagnitudeCalculation : uint8
{
	ScalableFloat                            = 0,
	AttributeBased                           = 1,
	CustomCalculationClass                   = 2,
	SetByCaller                              = 3,
	EGameplayEffectMagnitudeCalculation_MAX  = 4,
};

// Enum GameplayAbilities.EGameplayTagEventType
// NumValues: 0x0003
enum class EGameplayTagEventType : uint8
{
	NewOrRemoved                             = 0,
	AnyCountChange                           = 1,
	EGameplayTagEventType_MAX                = 2,
};

// Enum GameplayAbilities.EGameplayEffectStackingType
// NumValues: 0x0004
enum class EGameplayEffectStackingType : uint8
{
	None                                     = 0,
	AggregateBySource                        = 1,
	AggregateByTarget                        = 2,
	EGameplayEffectStackingType_MAX          = 3,
};

// Enum GameplayAbilities.EGameplayModOp
// NumValues: 0x0005
enum class EGameplayModOp : uint8
{
	Additive                                 = 0,
	Multiplicitive                           = 1,
	Division                                 = 2,
	Override                                 = 3,
	Max                                      = 4,
};

// Enum GameplayAbilities.EGameplayModEvaluationChannel
// NumValues: 0x000C
enum class EGameplayModEvaluationChannel : uint8
{
	Channel0                                 = 0,
	Channel1                                 = 1,
	Channel2                                 = 2,
	Channel3                                 = 3,
	Channel4                                 = 4,
	Channel5                                 = 5,
	Channel6                                 = 6,
	Channel7                                 = 7,
	Channel8                                 = 8,
	Channel9                                 = 9,
	Channel_MAX                              = 10,
	EGameplayModEvaluationChannel_MAX        = 11,
};

// ScriptStruct GameplayAbilities.GameplayTargetDataFilter
// 0x0020 (0x0020 - 0x0000)
struct FGameplayTargetDataFilter final
{
public:
	uint8                                         Pad_1272[0x8];                                     // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 SelfActor;                                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                     RequiredActorClass;                                // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETargetDataFilterSelf                         SelfFilter;                                        // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bReverseFilter;                                    // 0x0019(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1273[0x6];                                     // 0x001A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayTargetDataFilter) == 0x000008, "Wrong alignment on FGameplayTargetDataFilter");
static_assert(sizeof(FGameplayTargetDataFilter) == 0x000020, "Wrong size on FGameplayTargetDataFilter");
static_assert(offsetof(FGameplayTargetDataFilter, SelfActor) == 0x000008, "Member 'FGameplayTargetDataFilter::SelfActor' has a wrong offset!");
static_assert(offsetof(FGameplayTargetDataFilter, RequiredActorClass) == 0x000010, "Member 'FGameplayTargetDataFilter::RequiredActorClass' has a wrong offset!");
static_assert(offsetof(FGameplayTargetDataFilter, SelfFilter) == 0x000018, "Member 'FGameplayTargetDataFilter::SelfFilter' has a wrong offset!");
static_assert(offsetof(FGameplayTargetDataFilter, bReverseFilter) == 0x000019, "Member 'FGameplayTargetDataFilter::bReverseFilter' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandle
// 0x0004 (0x0004 - 0x0000)
struct FGameplayAbilitySpecHandle final
{
public:
	int32                                         Handle;                                            // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FGameplayAbilitySpecHandle) == 0x000004, "Wrong alignment on FGameplayAbilitySpecHandle");
static_assert(sizeof(FGameplayAbilitySpecHandle) == 0x000004, "Wrong size on FGameplayAbilitySpecHandle");
static_assert(offsetof(FGameplayAbilitySpecHandle, Handle) == 0x000000, "Member 'FGameplayAbilitySpecHandle::Handle' has a wrong offset!");

// ScriptStruct GameplayAbilities.PredictionKey
// 0x0010 (0x0010 - 0x0000)
struct FPredictionKey final
{
public:
	class UPackageMap*                            PredictiveConnection;                              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                         Current;                                           // 0x0008(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                         Base;                                              // 0x000A(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsStale;                                          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsServerInitiated;                                // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1274[0x2];                                     // 0x000E(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPredictionKey) == 0x000008, "Wrong alignment on FPredictionKey");
static_assert(sizeof(FPredictionKey) == 0x000010, "Wrong size on FPredictionKey");
static_assert(offsetof(FPredictionKey, PredictiveConnection) == 0x000000, "Member 'FPredictionKey::PredictiveConnection' has a wrong offset!");
static_assert(offsetof(FPredictionKey, Current) == 0x000008, "Member 'FPredictionKey::Current' has a wrong offset!");
static_assert(offsetof(FPredictionKey, Base) == 0x00000A, "Member 'FPredictionKey::Base' has a wrong offset!");
static_assert(offsetof(FPredictionKey, bIsStale) == 0x00000C, "Member 'FPredictionKey::bIsStale' has a wrong offset!");
static_assert(offsetof(FPredictionKey, bIsServerInitiated) == 0x00000D, "Member 'FPredictionKey::bIsServerInitiated' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayAbilityActivationInfo
// 0x0018 (0x0018 - 0x0000)
struct FGameplayAbilityActivationInfo final
{
public:
	EGameplayAbilityActivationMode                ActivationMode;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bCanBeEndedByOtherInstance : 1;                    // 0x0001(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1275[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPredictionKey                         PredictionKeyWhenActivated;                        // 0x0008(0x0010)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FGameplayAbilityActivationInfo) == 0x000008, "Wrong alignment on FGameplayAbilityActivationInfo");
static_assert(sizeof(FGameplayAbilityActivationInfo) == 0x000018, "Wrong size on FGameplayAbilityActivationInfo");
static_assert(offsetof(FGameplayAbilityActivationInfo, ActivationMode) == 0x000000, "Member 'FGameplayAbilityActivationInfo::ActivationMode' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityActivationInfo, PredictionKeyWhenActivated) == 0x000008, "Member 'FGameplayAbilityActivationInfo::PredictionKeyWhenActivated' has a wrong offset!");

// ScriptStruct GameplayAbilities.ActiveGameplayEffectHandle
// 0x0008 (0x0008 - 0x0000)
struct FActiveGameplayEffectHandle final
{
public:
	int32                                         Handle;                                            // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bPassedFiltersAndWasExecuted;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1276[0x3];                                     // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FActiveGameplayEffectHandle) == 0x000004, "Wrong alignment on FActiveGameplayEffectHandle");
static_assert(sizeof(FActiveGameplayEffectHandle) == 0x000008, "Wrong size on FActiveGameplayEffectHandle");
static_assert(offsetof(FActiveGameplayEffectHandle, Handle) == 0x000000, "Member 'FActiveGameplayEffectHandle::Handle' has a wrong offset!");
static_assert(offsetof(FActiveGameplayEffectHandle, bPassedFiltersAndWasExecuted) == 0x000004, "Member 'FActiveGameplayEffectHandle::bPassedFiltersAndWasExecuted' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayAbilitySpec
// 0x00D4 (0x00E0 - 0x000C)
struct FGameplayAbilitySpec final : public FFastArraySerializerItem
{
public:
	struct FGameplayAbilitySpecHandle             Handle;                                            // 0x000C(0x0004)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayAbility*                       Ability;                                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Level;                                             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InputID;                                           // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                SourceObject;                                      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         ActiveCount;                                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         InputPressed : 1;                                  // 0x0029(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         RemoveAfterActivation : 1;                         // 0x0029(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         PendingRemove : 1;                                 // 0x0029(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bActivateOnce : 1;                                 // 0x0029(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1277[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityActivationInfo         ActivationInfo;                                    // 0x0030(0x0018)(RepSkip, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  DynamicAbilityTags;                                // 0x0048(0x0020)(NativeAccessSpecifierPublic)
	TArray<class UGameplayAbility*>               NonReplicatedInstances;                            // 0x0068(0x0010)(ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
	TArray<class UGameplayAbility*>               ReplicatedInstances;                               // 0x0078(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle            GameplayEffectHandle;                              // 0x0088(0x0008)(RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1278[0x50];                                    // 0x0090(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayAbilitySpec) == 0x000008, "Wrong alignment on FGameplayAbilitySpec");
static_assert(sizeof(FGameplayAbilitySpec) == 0x0000E0, "Wrong size on FGameplayAbilitySpec");
static_assert(offsetof(FGameplayAbilitySpec, Handle) == 0x00000C, "Member 'FGameplayAbilitySpec::Handle' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpec, Ability) == 0x000010, "Member 'FGameplayAbilitySpec::Ability' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpec, Level) == 0x000018, "Member 'FGameplayAbilitySpec::Level' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpec, InputID) == 0x00001C, "Member 'FGameplayAbilitySpec::InputID' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpec, SourceObject) == 0x000020, "Member 'FGameplayAbilitySpec::SourceObject' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpec, ActiveCount) == 0x000028, "Member 'FGameplayAbilitySpec::ActiveCount' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpec, ActivationInfo) == 0x000030, "Member 'FGameplayAbilitySpec::ActivationInfo' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpec, DynamicAbilityTags) == 0x000048, "Member 'FGameplayAbilitySpec::DynamicAbilityTags' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpec, NonReplicatedInstances) == 0x000068, "Member 'FGameplayAbilitySpec::NonReplicatedInstances' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpec, ReplicatedInstances) == 0x000078, "Member 'FGameplayAbilitySpec::ReplicatedInstances' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpec, GameplayEffectHandle) == 0x000088, "Member 'FGameplayAbilitySpec::GameplayEffectHandle' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayAbilityTargetDataHandle
// 0x0028 (0x0028 - 0x0000)
struct alignas(0x08) FGameplayAbilityTargetDataHandle final
{
public:
	uint8                                         Pad_1279[0x28];                                    // 0x0000(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayAbilityTargetDataHandle) == 0x000008, "Wrong alignment on FGameplayAbilityTargetDataHandle");
static_assert(sizeof(FGameplayAbilityTargetDataHandle) == 0x000028, "Wrong size on FGameplayAbilityTargetDataHandle");

// ScriptStruct GameplayAbilities.ServerAbilityRPCBatch
// 0x0048 (0x0048 - 0x0000)
struct GameplayAbilities::FServerAbilityRPCBatch final
{
public:
	struct FGameplayAbilitySpecHandle             AbilitySpecHandle;                                 // 0x0000(0x0004)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_127A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPredictionKey                         PredictionKey;                                     // 0x0008(0x0010)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0018(0x0028)(NativeAccessSpecifierPublic)
	bool                                          InputPressed;                                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Ended;                                             // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Started;                                           // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_127B[0x5];                                     // 0x0043(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GameplayAbilities::FServerAbilityRPCBatch) == 0x000008, "Wrong alignment on GameplayAbilities::FServerAbilityRPCBatch");
static_assert(sizeof(GameplayAbilities::FServerAbilityRPCBatch) == 0x000048, "Wrong size on GameplayAbilities::FServerAbilityRPCBatch");
static_assert(offsetof(GameplayAbilities::FServerAbilityRPCBatch, AbilitySpecHandle) == 0x000000, "Member 'GameplayAbilities::FServerAbilityRPCBatch::AbilitySpecHandle' has a wrong offset!");
static_assert(offsetof(GameplayAbilities::FServerAbilityRPCBatch, PredictionKey) == 0x000008, "Member 'GameplayAbilities::FServerAbilityRPCBatch::PredictionKey' has a wrong offset!");
static_assert(offsetof(GameplayAbilities::FServerAbilityRPCBatch, TargetData) == 0x000018, "Member 'GameplayAbilities::FServerAbilityRPCBatch::TargetData' has a wrong offset!");
static_assert(offsetof(GameplayAbilities::FServerAbilityRPCBatch, InputPressed) == 0x000040, "Member 'GameplayAbilities::FServerAbilityRPCBatch::InputPressed' has a wrong offset!");
static_assert(offsetof(GameplayAbilities::FServerAbilityRPCBatch, Ended) == 0x000041, "Member 'GameplayAbilities::FServerAbilityRPCBatch::Ended' has a wrong offset!");
static_assert(offsetof(GameplayAbilities::FServerAbilityRPCBatch, Started) == 0x000042, "Member 'GameplayAbilities::FServerAbilityRPCBatch::Started' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayEffectContextHandle
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FGameplayEffectContextHandle final
{
public:
	uint8                                         Pad_127C[0x18];                                    // 0x0000(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayEffectContextHandle) == 0x000008, "Wrong alignment on FGameplayEffectContextHandle");
static_assert(sizeof(FGameplayEffectContextHandle) == 0x000018, "Wrong size on FGameplayEffectContextHandle");

// ScriptStruct GameplayAbilities.GameplayEventData
// 0x00B0 (0x00B0 - 0x0000)
struct FGameplayEventData final
{
public:
	struct FGameplayTag                           EventTag;                                          // 0x0000(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 Instigator;                                        // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 Target;                                            // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                OptionalObject;                                    // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                OptionalObject2;                                   // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle           ContextHandle;                                     // 0x0028(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  InstigatorTags;                                    // 0x0040(0x0020)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  TargetTags;                                        // 0x0060(0x0020)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                         EventMagnitude;                                    // 0x0080(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_127D[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0088(0x0028)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameplayEventData) == 0x000008, "Wrong alignment on FGameplayEventData");
static_assert(sizeof(FGameplayEventData) == 0x0000B0, "Wrong size on FGameplayEventData");
static_assert(offsetof(FGameplayEventData, EventTag) == 0x000000, "Member 'FGameplayEventData::EventTag' has a wrong offset!");
static_assert(offsetof(FGameplayEventData, Instigator) == 0x000008, "Member 'FGameplayEventData::Instigator' has a wrong offset!");
static_assert(offsetof(FGameplayEventData, Target) == 0x000010, "Member 'FGameplayEventData::Target' has a wrong offset!");
static_assert(offsetof(FGameplayEventData, OptionalObject) == 0x000018, "Member 'FGameplayEventData::OptionalObject' has a wrong offset!");
static_assert(offsetof(FGameplayEventData, OptionalObject2) == 0x000020, "Member 'FGameplayEventData::OptionalObject2' has a wrong offset!");
static_assert(offsetof(FGameplayEventData, ContextHandle) == 0x000028, "Member 'FGameplayEventData::ContextHandle' has a wrong offset!");
static_assert(offsetof(FGameplayEventData, InstigatorTags) == 0x000040, "Member 'FGameplayEventData::InstigatorTags' has a wrong offset!");
static_assert(offsetof(FGameplayEventData, TargetTags) == 0x000060, "Member 'FGameplayEventData::TargetTags' has a wrong offset!");
static_assert(offsetof(FGameplayEventData, EventMagnitude) == 0x000080, "Member 'FGameplayEventData::EventMagnitude' has a wrong offset!");
static_assert(offsetof(FGameplayEventData, TargetData) == 0x000088, "Member 'FGameplayEventData::TargetData' has a wrong offset!");

// ScriptStruct GameplayAbilities.AbilityEndedData
// 0x0010 (0x0010 - 0x0000)
struct FAbilityEndedData final
{
public:
	class UGameplayAbility*                       AbilityThatEnded;                                  // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilitySpecHandle             AbilitySpecHandle;                                 // 0x0008(0x0004)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bReplicateEndAbility;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bWasCancelled;                                     // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_127E[0x2];                                     // 0x000E(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAbilityEndedData) == 0x000008, "Wrong alignment on FAbilityEndedData");
static_assert(sizeof(FAbilityEndedData) == 0x000010, "Wrong size on FAbilityEndedData");
static_assert(offsetof(FAbilityEndedData, AbilityThatEnded) == 0x000000, "Member 'FAbilityEndedData::AbilityThatEnded' has a wrong offset!");
static_assert(offsetof(FAbilityEndedData, AbilitySpecHandle) == 0x000008, "Member 'FAbilityEndedData::AbilitySpecHandle' has a wrong offset!");
static_assert(offsetof(FAbilityEndedData, bReplicateEndAbility) == 0x00000C, "Member 'FAbilityEndedData::bReplicateEndAbility' has a wrong offset!");
static_assert(offsetof(FAbilityEndedData, bWasCancelled) == 0x00000D, "Member 'FAbilityEndedData::bWasCancelled' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayCueTranslationLink
// 0x0018 (0x0018 - 0x0000)
struct FGameplayCueTranslationLink final
{
public:
	class UGameplayCueTranslator*                 RulesCDO;                                          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_127F[0x10];                                    // 0x0008(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayCueTranslationLink) == 0x000008, "Wrong alignment on FGameplayCueTranslationLink");
static_assert(sizeof(FGameplayCueTranslationLink) == 0x000018, "Wrong size on FGameplayCueTranslationLink");
static_assert(offsetof(FGameplayCueTranslationLink, RulesCDO) == 0x000000, "Member 'FGameplayCueTranslationLink::RulesCDO' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayCueTranslatorNodeIndex
// 0x0004 (0x0004 - 0x0000)
struct FGameplayCueTranslatorNodeIndex final
{
public:
	int32                                         Index;                                             // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameplayCueTranslatorNodeIndex) == 0x000004, "Wrong alignment on FGameplayCueTranslatorNodeIndex");
static_assert(sizeof(FGameplayCueTranslatorNodeIndex) == 0x000004, "Wrong size on FGameplayCueTranslatorNodeIndex");
static_assert(offsetof(FGameplayCueTranslatorNodeIndex, Index) == 0x000000, "Member 'FGameplayCueTranslatorNodeIndex::Index' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayCueTranslatorNode
// 0x0078 (0x0078 - 0x0000)
struct FGameplayCueTranslatorNode final
{
public:
	TArray<struct FGameplayCueTranslationLink>    Links;                                             // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayCueTranslatorNodeIndex        CachedIndex;                                       // 0x0010(0x0004)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           CachedGameplayTag;                                 // 0x0014(0x0008)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   CachedGameplayTagName;                             // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1280[0x54];                                    // 0x0024(0x0054)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayCueTranslatorNode) == 0x000008, "Wrong alignment on FGameplayCueTranslatorNode");
static_assert(sizeof(FGameplayCueTranslatorNode) == 0x000078, "Wrong size on FGameplayCueTranslatorNode");
static_assert(offsetof(FGameplayCueTranslatorNode, Links) == 0x000000, "Member 'FGameplayCueTranslatorNode::Links' has a wrong offset!");
static_assert(offsetof(FGameplayCueTranslatorNode, CachedIndex) == 0x000010, "Member 'FGameplayCueTranslatorNode::CachedIndex' has a wrong offset!");
static_assert(offsetof(FGameplayCueTranslatorNode, CachedGameplayTag) == 0x000014, "Member 'FGameplayCueTranslatorNode::CachedGameplayTag' has a wrong offset!");
static_assert(offsetof(FGameplayCueTranslatorNode, CachedGameplayTagName) == 0x00001C, "Member 'FGameplayCueTranslatorNode::CachedGameplayTagName' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayCueTranslationManager
// 0x0080 (0x0080 - 0x0000)
struct FGameplayCueTranslationManager final
{
public:
	TArray<struct FGameplayCueTranslatorNode>     TranslationLUT;                                    // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FGameplayCueTranslatorNodeIndex> TranslationNameToIndexMap;                         // 0x0010(0x0050)(NativeAccessSpecifierPrivate)
	class UGameplayTagsManager*                   TagManager;                                        // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1281[0x18];                                    // 0x0068(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayCueTranslationManager) == 0x000008, "Wrong alignment on FGameplayCueTranslationManager");
static_assert(sizeof(FGameplayCueTranslationManager) == 0x000080, "Wrong size on FGameplayCueTranslationManager");
static_assert(offsetof(FGameplayCueTranslationManager, TranslationLUT) == 0x000000, "Member 'FGameplayCueTranslationManager::TranslationLUT' has a wrong offset!");
static_assert(offsetof(FGameplayCueTranslationManager, TranslationNameToIndexMap) == 0x000010, "Member 'FGameplayCueTranslationManager::TranslationNameToIndexMap' has a wrong offset!");
static_assert(offsetof(FGameplayCueTranslationManager, TagManager) == 0x000060, "Member 'FGameplayCueTranslationManager::TagManager' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayAbilitySpecContainer
// 0x0018 (0x0120 - 0x0108)
struct FGameplayAbilitySpecContainer final : public FFastArraySerializer
{
public:
	TArray<struct FGameplayAbilitySpec>           Items;                                             // 0x0108(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*                Owner;                                             // 0x0118(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameplayAbilitySpecContainer) == 0x000008, "Wrong alignment on FGameplayAbilitySpecContainer");
static_assert(sizeof(FGameplayAbilitySpecContainer) == 0x000120, "Wrong size on FGameplayAbilitySpecContainer");
static_assert(offsetof(FGameplayAbilitySpecContainer, Items) == 0x000108, "Member 'FGameplayAbilitySpecContainer::Items' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpecContainer, Owner) == 0x000118, "Member 'FGameplayAbilitySpecContainer::Owner' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayEffectSpecHandle
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FGameplayEffectSpecHandle final
{
public:
	uint8                                         Pad_1282[0x10];                                    // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayEffectSpecHandle) == 0x000008, "Wrong alignment on FGameplayEffectSpecHandle");
static_assert(sizeof(FGameplayEffectSpecHandle) == 0x000010, "Wrong size on FGameplayEffectSpecHandle");

// ScriptStruct GameplayAbilities.GameplayAbilityTargetingLocationInfo
// 0x0070 (0x0070 - 0x0000)
struct FGameplayAbilityTargetingLocationInfo final
{
public:
	uint8                                         Pad_1283[0x10];                                    // 0x0000(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	EGameplayAbilityTargetingLocationType         LocationType;                                      // 0x0010(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1284[0xF];                                     // 0x0011(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             LiteralTransform;                                  // 0x0020(0x0030)(BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	class AActor*                                 SourceActor;                                       // 0x0050(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshComponent*                         SourceComponent;                                   // 0x0058(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayAbility*                       SourceAbility;                                     // 0x0060(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SourceSocketName;                                  // 0x0068(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameplayAbilityTargetingLocationInfo) == 0x000010, "Wrong alignment on FGameplayAbilityTargetingLocationInfo");
static_assert(sizeof(FGameplayAbilityTargetingLocationInfo) == 0x000070, "Wrong size on FGameplayAbilityTargetingLocationInfo");
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, LocationType) == 0x000010, "Member 'FGameplayAbilityTargetingLocationInfo::LocationType' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, LiteralTransform) == 0x000020, "Member 'FGameplayAbilityTargetingLocationInfo::LiteralTransform' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, SourceActor) == 0x000050, "Member 'FGameplayAbilityTargetingLocationInfo::SourceActor' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, SourceComponent) == 0x000058, "Member 'FGameplayAbilityTargetingLocationInfo::SourceComponent' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, SourceAbility) == 0x000060, "Member 'FGameplayAbilityTargetingLocationInfo::SourceAbility' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, SourceSocketName) == 0x000068, "Member 'FGameplayAbilityTargetingLocationInfo::SourceSocketName' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) FGameplayAbilityTargetData
{
public:
	uint8                                         Pad_1285[0x8];                                     // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayAbilityTargetData) == 0x000008, "Wrong alignment on FGameplayAbilityTargetData");
static_assert(sizeof(FGameplayAbilityTargetData) == 0x000008, "Wrong size on FGameplayAbilityTargetData");

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_ActorArray
// 0x0088 (0x0090 - 0x0008)
struct FGameplayAbilityTargetData_ActorArray final : public FGameplayAbilityTargetData
{
public:
	uint8                                         Pad_1286[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetingLocationInfo  SourceLocation;                                    // 0x0010(0x0070)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class AActor>>          TargetActorArray;                                  // 0x0080(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameplayAbilityTargetData_ActorArray) == 0x000010, "Wrong alignment on FGameplayAbilityTargetData_ActorArray");
static_assert(sizeof(FGameplayAbilityTargetData_ActorArray) == 0x000090, "Wrong size on FGameplayAbilityTargetData_ActorArray");
static_assert(offsetof(FGameplayAbilityTargetData_ActorArray, SourceLocation) == 0x000010, "Member 'FGameplayAbilityTargetData_ActorArray::SourceLocation' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityTargetData_ActorArray, TargetActorArray) == 0x000080, "Member 'FGameplayAbilityTargetData_ActorArray::TargetActorArray' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayTagRequirements
// 0x0040 (0x0040 - 0x0000)
struct FGameplayTagRequirements final
{
public:
	struct FGameplayTagContainer                  RequireTags;                                       // 0x0000(0x0020)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  IgnoreTags;                                        // 0x0020(0x0020)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameplayTagRequirements) == 0x000008, "Wrong alignment on FGameplayTagRequirements");
static_assert(sizeof(FGameplayTagRequirements) == 0x000040, "Wrong size on FGameplayTagRequirements");
static_assert(offsetof(FGameplayTagRequirements, RequireTags) == 0x000000, "Member 'FGameplayTagRequirements::RequireTags' has a wrong offset!");
static_assert(offsetof(FGameplayTagRequirements, IgnoreTags) == 0x000020, "Member 'FGameplayTagRequirements::IgnoreTags' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayTargetDataFilterHandle
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FGameplayTargetDataFilterHandle final
{
public:
	uint8                                         Pad_1287[0x10];                                    // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayTargetDataFilterHandle) == 0x000008, "Wrong alignment on FGameplayTargetDataFilterHandle");
static_assert(sizeof(FGameplayTargetDataFilterHandle) == 0x000010, "Wrong size on FGameplayTargetDataFilterHandle");

// ScriptStruct GameplayAbilities.MinimalReplicationTagCountMap
// 0x0060 (0x0060 - 0x0000)
struct FMinimalReplicationTagCountMap final
{
public:
	uint8                                         Pad_1288[0x50];                                    // 0x0000(0x0050)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                Owner;                                             // 0x0050(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1289[0x8];                                     // 0x0058(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMinimalReplicationTagCountMap) == 0x000008, "Wrong alignment on FMinimalReplicationTagCountMap");
static_assert(sizeof(FMinimalReplicationTagCountMap) == 0x000060, "Wrong size on FMinimalReplicationTagCountMap");
static_assert(offsetof(FMinimalReplicationTagCountMap, Owner) == 0x000050, "Member 'FMinimalReplicationTagCountMap::Owner' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayAttribute
// 0x0038 (0x0038 - 0x0000)
struct FGameplayAttribute final
{
public:
	class FString                                 AttributeName;                                     // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TFieldPath<struct FProperty>                  Attribute;                                         // 0x0010(0x0020)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStruct*                                AttributeOwner;                                    // 0x0030(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FGameplayAttribute) == 0x000008, "Wrong alignment on FGameplayAttribute");
static_assert(sizeof(FGameplayAttribute) == 0x000038, "Wrong size on FGameplayAttribute");
static_assert(offsetof(FGameplayAttribute, AttributeName) == 0x000000, "Member 'FGameplayAttribute::AttributeName' has a wrong offset!");
static_assert(offsetof(FGameplayAttribute, Attribute) == 0x000010, "Member 'FGameplayAttribute::Attribute' has a wrong offset!");
static_assert(offsetof(FGameplayAttribute, AttributeOwner) == 0x000030, "Member 'FGameplayAttribute::AttributeOwner' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayEffectCue
// 0x0060 (0x0060 - 0x0000)
struct FGameplayEffectCue final
{
public:
	struct FGameplayAttribute                     MagnitudeAttribute;                                // 0x0000(0x0038)(Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinLevel;                                          // 0x0038(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxLevel;                                          // 0x003C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  GameplayCueTags;                                   // 0x0040(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameplayEffectCue) == 0x000008, "Wrong alignment on FGameplayEffectCue");
static_assert(sizeof(FGameplayEffectCue) == 0x000060, "Wrong size on FGameplayEffectCue");
static_assert(offsetof(FGameplayEffectCue, MagnitudeAttribute) == 0x000000, "Member 'FGameplayEffectCue::MagnitudeAttribute' has a wrong offset!");
static_assert(offsetof(FGameplayEffectCue, MinLevel) == 0x000038, "Member 'FGameplayEffectCue::MinLevel' has a wrong offset!");
static_assert(offsetof(FGameplayEffectCue, MaxLevel) == 0x00003C, "Member 'FGameplayEffectCue::MaxLevel' has a wrong offset!");
static_assert(offsetof(FGameplayEffectCue, GameplayCueTags) == 0x000040, "Member 'FGameplayEffectCue::GameplayCueTags' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayEffectModifiedAttribute
// 0x0040 (0x0040 - 0x0000)
struct FGameplayEffectModifiedAttribute final
{
public:
	struct FGameplayAttribute                     Attribute;                                         // 0x0000(0x0038)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TotalMagnitude;                                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_128A[0x4];                                     // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayEffectModifiedAttribute) == 0x000008, "Wrong alignment on FGameplayEffectModifiedAttribute");
static_assert(sizeof(FGameplayEffectModifiedAttribute) == 0x000040, "Wrong size on FGameplayEffectModifiedAttribute");
static_assert(offsetof(FGameplayEffectModifiedAttribute, Attribute) == 0x000000, "Member 'FGameplayEffectModifiedAttribute::Attribute' has a wrong offset!");
static_assert(offsetof(FGameplayEffectModifiedAttribute, TotalMagnitude) == 0x000038, "Member 'FGameplayEffectModifiedAttribute::TotalMagnitude' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureDefinition
// 0x0040 (0x0040 - 0x0000)
struct FGameplayEffectAttributeCaptureDefinition final
{
public:
	struct FGameplayAttribute                     AttributeToCapture;                                // 0x0000(0x0038)(Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGameplayEffectAttributeCaptureSource         AttributeSource;                                   // 0x0038(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSnapshot;                                         // 0x0039(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_128B[0x6];                                     // 0x003A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayEffectAttributeCaptureDefinition) == 0x000008, "Wrong alignment on FGameplayEffectAttributeCaptureDefinition");
static_assert(sizeof(FGameplayEffectAttributeCaptureDefinition) == 0x000040, "Wrong size on FGameplayEffectAttributeCaptureDefinition");
static_assert(offsetof(FGameplayEffectAttributeCaptureDefinition, AttributeToCapture) == 0x000000, "Member 'FGameplayEffectAttributeCaptureDefinition::AttributeToCapture' has a wrong offset!");
static_assert(offsetof(FGameplayEffectAttributeCaptureDefinition, AttributeSource) == 0x000038, "Member 'FGameplayEffectAttributeCaptureDefinition::AttributeSource' has a wrong offset!");
static_assert(offsetof(FGameplayEffectAttributeCaptureDefinition, bSnapshot) == 0x000039, "Member 'FGameplayEffectAttributeCaptureDefinition::bSnapshot' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpec
// 0x0050 (0x0050 - 0x0000)
struct FGameplayEffectAttributeCaptureSpec final
{
public:
	struct FGameplayEffectAttributeCaptureDefinition BackingDefinition;                                 // 0x0000(0x0040)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_128C[0x10];                                    // 0x0040(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayEffectAttributeCaptureSpec) == 0x000008, "Wrong alignment on FGameplayEffectAttributeCaptureSpec");
static_assert(sizeof(FGameplayEffectAttributeCaptureSpec) == 0x000050, "Wrong size on FGameplayEffectAttributeCaptureSpec");
static_assert(offsetof(FGameplayEffectAttributeCaptureSpec, BackingDefinition) == 0x000000, "Member 'FGameplayEffectAttributeCaptureSpec::BackingDefinition' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
// 0x0028 (0x0028 - 0x0000)
struct FGameplayEffectAttributeCaptureSpecContainer final
{
public:
	TArray<struct FGameplayEffectAttributeCaptureSpec> SourceAttributes;                                  // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FGameplayEffectAttributeCaptureSpec> TargetAttributes;                                  // 0x0010(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                          bHasNonSnapshottedAttributes;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_128D[0x7];                                     // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayEffectAttributeCaptureSpecContainer) == 0x000008, "Wrong alignment on FGameplayEffectAttributeCaptureSpecContainer");
static_assert(sizeof(FGameplayEffectAttributeCaptureSpecContainer) == 0x000028, "Wrong size on FGameplayEffectAttributeCaptureSpecContainer");
static_assert(offsetof(FGameplayEffectAttributeCaptureSpecContainer, SourceAttributes) == 0x000000, "Member 'FGameplayEffectAttributeCaptureSpecContainer::SourceAttributes' has a wrong offset!");
static_assert(offsetof(FGameplayEffectAttributeCaptureSpecContainer, TargetAttributes) == 0x000010, "Member 'FGameplayEffectAttributeCaptureSpecContainer::TargetAttributes' has a wrong offset!");
static_assert(offsetof(FGameplayEffectAttributeCaptureSpecContainer, bHasNonSnapshottedAttributes) == 0x000020, "Member 'FGameplayEffectAttributeCaptureSpecContainer::bHasNonSnapshottedAttributes' has a wrong offset!");

// ScriptStruct GameplayAbilities.TagContainerAggregator
// 0x0088 (0x0088 - 0x0000)
struct FTagContainerAggregator final
{
public:
	struct FGameplayTagContainer                  CapturedActorTags;                                 // 0x0000(0x0020)(NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                  CapturedSpecTags;                                  // 0x0020(0x0020)(NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                  ScopedTags;                                        // 0x0040(0x0020)(NativeAccessSpecifierPrivate)
	uint8                                         Pad_128E[0x28];                                    // 0x0060(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FTagContainerAggregator) == 0x000008, "Wrong alignment on FTagContainerAggregator");
static_assert(sizeof(FTagContainerAggregator) == 0x000088, "Wrong size on FTagContainerAggregator");
static_assert(offsetof(FTagContainerAggregator, CapturedActorTags) == 0x000000, "Member 'FTagContainerAggregator::CapturedActorTags' has a wrong offset!");
static_assert(offsetof(FTagContainerAggregator, CapturedSpecTags) == 0x000020, "Member 'FTagContainerAggregator::CapturedSpecTags' has a wrong offset!");
static_assert(offsetof(FTagContainerAggregator, ScopedTags) == 0x000040, "Member 'FTagContainerAggregator::ScopedTags' has a wrong offset!");

// ScriptStruct GameplayAbilities.ModifierSpec
// 0x0004 (0x0004 - 0x0000)
struct FModifierSpec final
{
public:
	float                                         EvaluatedMagnitude;                                // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FModifierSpec) == 0x000004, "Wrong alignment on FModifierSpec");
static_assert(sizeof(FModifierSpec) == 0x000004, "Wrong size on FModifierSpec");
static_assert(offsetof(FModifierSpec, EvaluatedMagnitude) == 0x000000, "Member 'FModifierSpec::EvaluatedMagnitude' has a wrong offset!");

// ScriptStruct GameplayAbilities.ScalableFloat
// 0x0028 (0x0028 - 0x0000)
struct FScalableFloat final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_128F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCurveTableRowHandle                   Curve;                                             // 0x0008(0x0010)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataRegistryType                      RegistryType;                                      // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1290[0x8];                                     // 0x0020(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FScalableFloat) == 0x000008, "Wrong alignment on FScalableFloat");
static_assert(sizeof(FScalableFloat) == 0x000028, "Wrong size on FScalableFloat");
static_assert(offsetof(FScalableFloat, Value) == 0x000000, "Member 'FScalableFloat::Value' has a wrong offset!");
static_assert(offsetof(FScalableFloat, Curve) == 0x000008, "Member 'FScalableFloat::Curve' has a wrong offset!");
static_assert(offsetof(FScalableFloat, RegistryType) == 0x000018, "Member 'FScalableFloat::RegistryType' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayAbilitySpecDef
// 0x0098 (0x0098 - 0x0000)
struct FGameplayAbilitySpecDef final
{
public:
	TSubclassOf<class UGameplayAbility>           Ability;                                           // 0x0000(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                         LevelScalableFloat;                                // 0x0008(0x0028)(Edit, DisableEditOnInstance, RepSkip, NativeAccessSpecifierPublic)
	int32                                         InputID;                                           // 0x0030(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGameplayEffectGrantedAbilityRemovePolicy     RemovalPolicy;                                     // 0x0034(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1291[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                SourceObject;                                      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1292[0x50];                                    // 0x0040(0x0050)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilitySpecHandle             AssignedHandle;                                    // 0x0090(0x0004)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1293[0x4];                                     // 0x0094(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayAbilitySpecDef) == 0x000008, "Wrong alignment on FGameplayAbilitySpecDef");
static_assert(sizeof(FGameplayAbilitySpecDef) == 0x000098, "Wrong size on FGameplayAbilitySpecDef");
static_assert(offsetof(FGameplayAbilitySpecDef, Ability) == 0x000000, "Member 'FGameplayAbilitySpecDef::Ability' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpecDef, LevelScalableFloat) == 0x000008, "Member 'FGameplayAbilitySpecDef::LevelScalableFloat' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpecDef, InputID) == 0x000030, "Member 'FGameplayAbilitySpecDef::InputID' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpecDef, RemovalPolicy) == 0x000034, "Member 'FGameplayAbilitySpecDef::RemovalPolicy' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpecDef, SourceObject) == 0x000038, "Member 'FGameplayAbilitySpecDef::SourceObject' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpecDef, AssignedHandle) == 0x000090, "Member 'FGameplayAbilitySpecDef::AssignedHandle' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayEffectSpec
// 0x0298 (0x0298 - 0x0000)
struct FGameplayEffectSpec final
{
public:
	class UGameplayEffect*                        Def;                                               // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayEffectModifiedAttribute> ModifiedAttributes;                                // 0x0008(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayEffectAttributeCaptureSpecContainer CapturedRelevantAttributes;                        // 0x0018(0x0028)(RepSkip, NativeAccessSpecifierPublic)
	uint8                                         Pad_1294[0x10];                                    // 0x0040(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Duration;                                          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Period;                                            // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ChanceToApplyToTarget;                             // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1295[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTagContainerAggregator                CapturedSourceTags;                                // 0x0060(0x0088)(RepSkip, NativeAccessSpecifierPublic)
	struct FTagContainerAggregator                CapturedTargetTags;                                // 0x00E8(0x0088)(RepSkip, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  DynamicGrantedTags;                                // 0x0170(0x0020)(NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  DynamicAssetTags;                                  // 0x0190(0x0020)(NativeAccessSpecifierPublic)
	TArray<struct FModifierSpec>                  Modifiers;                                         // 0x01B0(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         StackCount;                                        // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bCompletedSourceAttributeCapture : 1;              // 0x01C4(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bCompletedTargetAttributeCapture : 1;              // 0x01C4(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bDurationLocked : 1;                               // 0x01C4(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1296[0x3];                                     // 0x01C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGameplayAbilitySpecDef>        GrantedAbilitySpecs;                               // 0x01C8(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1297[0xA0];                                    // 0x01D8(0x00A0)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEffectContextHandle           EffectContext;                                     // 0x0278(0x0018)(NativeAccessSpecifierPrivate)
	float                                         Level;                                             // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1298[0x4];                                     // 0x0294(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayEffectSpec) == 0x000008, "Wrong alignment on FGameplayEffectSpec");
static_assert(sizeof(FGameplayEffectSpec) == 0x000298, "Wrong size on FGameplayEffectSpec");
static_assert(offsetof(FGameplayEffectSpec, Def) == 0x000000, "Member 'FGameplayEffectSpec::Def' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpec, ModifiedAttributes) == 0x000008, "Member 'FGameplayEffectSpec::ModifiedAttributes' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpec, CapturedRelevantAttributes) == 0x000018, "Member 'FGameplayEffectSpec::CapturedRelevantAttributes' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpec, Duration) == 0x000050, "Member 'FGameplayEffectSpec::Duration' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpec, Period) == 0x000054, "Member 'FGameplayEffectSpec::Period' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpec, ChanceToApplyToTarget) == 0x000058, "Member 'FGameplayEffectSpec::ChanceToApplyToTarget' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpec, CapturedSourceTags) == 0x000060, "Member 'FGameplayEffectSpec::CapturedSourceTags' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpec, CapturedTargetTags) == 0x0000E8, "Member 'FGameplayEffectSpec::CapturedTargetTags' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpec, DynamicGrantedTags) == 0x000170, "Member 'FGameplayEffectSpec::DynamicGrantedTags' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpec, DynamicAssetTags) == 0x000190, "Member 'FGameplayEffectSpec::DynamicAssetTags' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpec, Modifiers) == 0x0001B0, "Member 'FGameplayEffectSpec::Modifiers' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpec, StackCount) == 0x0001C0, "Member 'FGameplayEffectSpec::StackCount' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpec, GrantedAbilitySpecs) == 0x0001C8, "Member 'FGameplayEffectSpec::GrantedAbilitySpecs' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpec, EffectContext) == 0x000278, "Member 'FGameplayEffectSpec::EffectContext' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpec, Level) == 0x000290, "Member 'FGameplayEffectSpec::Level' has a wrong offset!");

// ScriptStruct GameplayAbilities.ActiveGameplayEffect
// 0x035C (0x0368 - 0x000C)
struct FActiveGameplayEffect final : public FFastArraySerializerItem
{
public:
	uint8                                         Pad_1299[0xC];                                     // 0x000C(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEffectSpec                    Spec;                                              // 0x0018(0x0298)(NativeAccessSpecifierPublic)
	struct FPredictionKey                         PredictionKey;                                     // 0x02B0(0x0010)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartServerWorldTime;                              // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CachedStartServerWorldTime;                        // 0x02C4(0x0004)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         StartWorldTime;                                    // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsInhibited;                                      // 0x02CC(0x0001)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_129A[0x9B];                                    // 0x02CD(0x009B)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FActiveGameplayEffect) == 0x000008, "Wrong alignment on FActiveGameplayEffect");
static_assert(sizeof(FActiveGameplayEffect) == 0x000368, "Wrong size on FActiveGameplayEffect");
static_assert(offsetof(FActiveGameplayEffect, Spec) == 0x000018, "Member 'FActiveGameplayEffect::Spec' has a wrong offset!");
static_assert(offsetof(FActiveGameplayEffect, PredictionKey) == 0x0002B0, "Member 'FActiveGameplayEffect::PredictionKey' has a wrong offset!");
static_assert(offsetof(FActiveGameplayEffect, StartServerWorldTime) == 0x0002C0, "Member 'FActiveGameplayEffect::StartServerWorldTime' has a wrong offset!");
static_assert(offsetof(FActiveGameplayEffect, CachedStartServerWorldTime) == 0x0002C4, "Member 'FActiveGameplayEffect::CachedStartServerWorldTime' has a wrong offset!");
static_assert(offsetof(FActiveGameplayEffect, StartWorldTime) == 0x0002C8, "Member 'FActiveGameplayEffect::StartWorldTime' has a wrong offset!");
static_assert(offsetof(FActiveGameplayEffect, bIsInhibited) == 0x0002CC, "Member 'FActiveGameplayEffect::bIsInhibited' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayAbilityActorInfo
// 0x0048 (0x0048 - 0x0000)
struct alignas(0x08) FGameplayAbilityActorInfo final
{
public:
	uint8                                         Pad_129B[0x8];                                     // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TWeakObjectPtr<class AActor>                  OwnerActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                  AvatarActor;                                       // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class APlayerController>       PlayerController;                                  // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UAbilitySystemComponent> AbilitySystemComponent;                            // 0x0020(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USkeletalMeshComponent>  SkeletalMeshComponent;                             // 0x0028(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UAnimInstance>           AnimInstance;                                      // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UMovementComponent>      MovementComponent;                                 // 0x0038(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   AffectedAnimInstanceTag;                           // 0x0040(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameplayAbilityActorInfo) == 0x000008, "Wrong alignment on FGameplayAbilityActorInfo");
static_assert(sizeof(FGameplayAbilityActorInfo) == 0x000048, "Wrong size on FGameplayAbilityActorInfo");
static_assert(offsetof(FGameplayAbilityActorInfo, OwnerActor) == 0x000008, "Member 'FGameplayAbilityActorInfo::OwnerActor' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityActorInfo, AvatarActor) == 0x000010, "Member 'FGameplayAbilityActorInfo::AvatarActor' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityActorInfo, PlayerController) == 0x000018, "Member 'FGameplayAbilityActorInfo::PlayerController' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityActorInfo, AbilitySystemComponent) == 0x000020, "Member 'FGameplayAbilityActorInfo::AbilitySystemComponent' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityActorInfo, SkeletalMeshComponent) == 0x000028, "Member 'FGameplayAbilityActorInfo::SkeletalMeshComponent' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityActorInfo, AnimInstance) == 0x000030, "Member 'FGameplayAbilityActorInfo::AnimInstance' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityActorInfo, MovementComponent) == 0x000038, "Member 'FGameplayAbilityActorInfo::MovementComponent' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityActorInfo, AffectedAnimInstanceTag) == 0x000040, "Member 'FGameplayAbilityActorInfo::AffectedAnimInstanceTag' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayCueParameters
// 0x00C0 (0x00C0 - 0x0000)
struct FGameplayCueParameters final
{
public:
	float                                         NormalizedMagnitude;                               // 0x0000(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RawMagnitude;                                      // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle           EffectContext;                                     // 0x0008(0x0018)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTag                           MatchedTagName;                                    // 0x0020(0x0008)(BlueprintVisible, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           OriginalTag;                                       // 0x0028(0x0008)(BlueprintVisible, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  AggregatedSourceTags;                              // 0x0030(0x0020)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  AggregatedTargetTags;                              // 0x0050(0x0020)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                  Location;                                          // 0x0070(0x000C)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal              Normal;                                            // 0x007C(0x000C)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                  Instigator;                                        // 0x0088(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                  EffectCauser;                                      // 0x0090(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UObject>                 SourceObject;                                      // 0x0098(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UPhysicalMaterial>       PhysicalMaterial;                                  // 0x00A0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         GameplayEffectLevel;                               // 0x00A8(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AbilityLevel;                                      // 0x00AC(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USceneComponent>         TargetAttachComponent;                             // 0x00B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bReplicateLocationWhenUsingMinimalRepProxy;        // 0x00B8(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_129C[0x7];                                     // 0x00B9(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayCueParameters) == 0x000008, "Wrong alignment on FGameplayCueParameters");
static_assert(sizeof(FGameplayCueParameters) == 0x0000C0, "Wrong size on FGameplayCueParameters");
static_assert(offsetof(FGameplayCueParameters, NormalizedMagnitude) == 0x000000, "Member 'FGameplayCueParameters::NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(FGameplayCueParameters, RawMagnitude) == 0x000004, "Member 'FGameplayCueParameters::RawMagnitude' has a wrong offset!");
static_assert(offsetof(FGameplayCueParameters, EffectContext) == 0x000008, "Member 'FGameplayCueParameters::EffectContext' has a wrong offset!");
static_assert(offsetof(FGameplayCueParameters, MatchedTagName) == 0x000020, "Member 'FGameplayCueParameters::MatchedTagName' has a wrong offset!");
static_assert(offsetof(FGameplayCueParameters, OriginalTag) == 0x000028, "Member 'FGameplayCueParameters::OriginalTag' has a wrong offset!");
static_assert(offsetof(FGameplayCueParameters, AggregatedSourceTags) == 0x000030, "Member 'FGameplayCueParameters::AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(FGameplayCueParameters, AggregatedTargetTags) == 0x000050, "Member 'FGameplayCueParameters::AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(FGameplayCueParameters, Location) == 0x000070, "Member 'FGameplayCueParameters::Location' has a wrong offset!");
static_assert(offsetof(FGameplayCueParameters, Normal) == 0x00007C, "Member 'FGameplayCueParameters::Normal' has a wrong offset!");
static_assert(offsetof(FGameplayCueParameters, Instigator) == 0x000088, "Member 'FGameplayCueParameters::Instigator' has a wrong offset!");
static_assert(offsetof(FGameplayCueParameters, EffectCauser) == 0x000090, "Member 'FGameplayCueParameters::EffectCauser' has a wrong offset!");
static_assert(offsetof(FGameplayCueParameters, SourceObject) == 0x000098, "Member 'FGameplayCueParameters::SourceObject' has a wrong offset!");
static_assert(offsetof(FGameplayCueParameters, PhysicalMaterial) == 0x0000A0, "Member 'FGameplayCueParameters::PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(FGameplayCueParameters, GameplayEffectLevel) == 0x0000A8, "Member 'FGameplayCueParameters::GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(FGameplayCueParameters, AbilityLevel) == 0x0000AC, "Member 'FGameplayCueParameters::AbilityLevel' has a wrong offset!");
static_assert(offsetof(FGameplayCueParameters, TargetAttachComponent) == 0x0000B0, "Member 'FGameplayCueParameters::TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(FGameplayCueParameters, bReplicateLocationWhenUsingMinimalRepProxy) == 0x0000B8, "Member 'FGameplayCueParameters::bReplicateLocationWhenUsingMinimalRepProxy' has a wrong offset!");

// ScriptStruct GameplayAbilities.ActiveGameplayCue
// 0x00E4 (0x00F0 - 0x000C)
struct FActiveGameplayCue final : public FFastArraySerializerItem
{
public:
	struct FGameplayTag                           GameplayCueTag;                                    // 0x000C(0x0008)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_129D[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPredictionKey                         PredictionKey;                                     // 0x0018(0x0010)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0028(0x00C0)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                          bPredictivelyRemoved;                              // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_129E[0x7];                                     // 0x00E9(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FActiveGameplayCue) == 0x000008, "Wrong alignment on FActiveGameplayCue");
static_assert(sizeof(FActiveGameplayCue) == 0x0000F0, "Wrong size on FActiveGameplayCue");
static_assert(offsetof(FActiveGameplayCue, GameplayCueTag) == 0x00000C, "Member 'FActiveGameplayCue::GameplayCueTag' has a wrong offset!");
static_assert(offsetof(FActiveGameplayCue, PredictionKey) == 0x000018, "Member 'FActiveGameplayCue::PredictionKey' has a wrong offset!");
static_assert(offsetof(FActiveGameplayCue, Parameters) == 0x000028, "Member 'FActiveGameplayCue::Parameters' has a wrong offset!");
static_assert(offsetof(FActiveGameplayCue, bPredictivelyRemoved) == 0x0000E8, "Member 'FActiveGameplayCue::bPredictivelyRemoved' has a wrong offset!");

// ScriptStruct GameplayAbilities.InheritedTagContainer
// 0x0060 (0x0060 - 0x0000)
struct FInheritedTagContainer final
{
public:
	struct FGameplayTagContainer                  CombinedTags;                                      // 0x0000(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  Added;                                             // 0x0020(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  Removed;                                           // 0x0040(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, NativeAccessSpecifierPublic)
};
static_assert(alignof(FInheritedTagContainer) == 0x000008, "Wrong alignment on FInheritedTagContainer");
static_assert(sizeof(FInheritedTagContainer) == 0x000060, "Wrong size on FInheritedTagContainer");
static_assert(offsetof(FInheritedTagContainer, CombinedTags) == 0x000000, "Member 'FInheritedTagContainer::CombinedTags' has a wrong offset!");
static_assert(offsetof(FInheritedTagContainer, Added) == 0x000020, "Member 'FInheritedTagContainer::Added' has a wrong offset!");
static_assert(offsetof(FInheritedTagContainer, Removed) == 0x000040, "Member 'FInheritedTagContainer::Removed' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayTagReponsePair
// 0x0028 (0x0028 - 0x0000)
struct FGameplayTagReponsePair final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x0008)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayEffect>            ResponseGameplayEffect;                            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>    ResponseGameplayEffects;                           // 0x0010(0x0010)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	int32                                         SoftCountCap;                                      // 0x0020(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_129F[0x4];                                     // 0x0024(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayTagReponsePair) == 0x000008, "Wrong alignment on FGameplayTagReponsePair");
static_assert(sizeof(FGameplayTagReponsePair) == 0x000028, "Wrong size on FGameplayTagReponsePair");
static_assert(offsetof(FGameplayTagReponsePair, Tag) == 0x000000, "Member 'FGameplayTagReponsePair::Tag' has a wrong offset!");
static_assert(offsetof(FGameplayTagReponsePair, ResponseGameplayEffect) == 0x000008, "Member 'FGameplayTagReponsePair::ResponseGameplayEffect' has a wrong offset!");
static_assert(offsetof(FGameplayTagReponsePair, ResponseGameplayEffects) == 0x000010, "Member 'FGameplayTagReponsePair::ResponseGameplayEffects' has a wrong offset!");
static_assert(offsetof(FGameplayTagReponsePair, SoftCountCap) == 0x000020, "Member 'FGameplayTagReponsePair::SoftCountCap' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayTagResponseTableEntry
// 0x0050 (0x0050 - 0x0000)
struct FGameplayTagResponseTableEntry final
{
public:
	struct FGameplayTagReponsePair                Positive;                                          // 0x0000(0x0028)(Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagReponsePair                Negative;                                          // 0x0028(0x0028)(Edit, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameplayTagResponseTableEntry) == 0x000008, "Wrong alignment on FGameplayTagResponseTableEntry");
static_assert(sizeof(FGameplayTagResponseTableEntry) == 0x000050, "Wrong size on FGameplayTagResponseTableEntry");
static_assert(offsetof(FGameplayTagResponseTableEntry, Positive) == 0x000000, "Member 'FGameplayTagResponseTableEntry::Positive' has a wrong offset!");
static_assert(offsetof(FGameplayTagResponseTableEntry, Negative) == 0x000028, "Member 'FGameplayTagResponseTableEntry::Negative' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayAbilityRepAnimMontage
// 0x0030 (0x0030 - 0x0000)
struct FGameplayAbilityRepAnimMontage final
{
public:
	class UAnimMontage*                           AnimMontage;                                       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PlayRate;                                          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Position;                                          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         BlendTime;                                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         NextSectionID;                                     // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bRepPosition : 1;                                  // 0x0015(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         IsStopped : 1;                                     // 0x0015(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         ForcePlayBit : 1;                                  // 0x0015(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         SkipPositionCorrection : 1;                        // 0x0015(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSkipPlayRate : 1;                                 // 0x0015(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_12A0[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPredictionKey                         PredictionKey;                                     // 0x0018(0x0010)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         SectionIdToPlay;                                   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12A1[0x7];                                     // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayAbilityRepAnimMontage) == 0x000008, "Wrong alignment on FGameplayAbilityRepAnimMontage");
static_assert(sizeof(FGameplayAbilityRepAnimMontage) == 0x000030, "Wrong size on FGameplayAbilityRepAnimMontage");
static_assert(offsetof(FGameplayAbilityRepAnimMontage, AnimMontage) == 0x000000, "Member 'FGameplayAbilityRepAnimMontage::AnimMontage' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityRepAnimMontage, PlayRate) == 0x000008, "Member 'FGameplayAbilityRepAnimMontage::PlayRate' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityRepAnimMontage, Position) == 0x00000C, "Member 'FGameplayAbilityRepAnimMontage::Position' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityRepAnimMontage, BlendTime) == 0x000010, "Member 'FGameplayAbilityRepAnimMontage::BlendTime' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityRepAnimMontage, NextSectionID) == 0x000014, "Member 'FGameplayAbilityRepAnimMontage::NextSectionID' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityRepAnimMontage, PredictionKey) == 0x000018, "Member 'FGameplayAbilityRepAnimMontage::PredictionKey' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityRepAnimMontage, SectionIdToPlay) == 0x000028, "Member 'FGameplayAbilityRepAnimMontage::SectionIdToPlay' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayEffectSpecForRPC
// 0x0078 (0x0078 - 0x0000)
struct FGameplayEffectSpecForRPC final
{
public:
	class UGameplayEffect*                        Def;                                               // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayEffectModifiedAttribute> ModifiedAttributes;                                // 0x0008(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle           EffectContext;                                     // 0x0018(0x0018)(NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  AggregatedSourceTags;                              // 0x0030(0x0020)(NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  AggregatedTargetTags;                              // 0x0050(0x0020)(NativeAccessSpecifierPublic)
	float                                         Level;                                             // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         AbilityLevel;                                      // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameplayEffectSpecForRPC) == 0x000008, "Wrong alignment on FGameplayEffectSpecForRPC");
static_assert(sizeof(FGameplayEffectSpecForRPC) == 0x000078, "Wrong size on FGameplayEffectSpecForRPC");
static_assert(offsetof(FGameplayEffectSpecForRPC, Def) == 0x000000, "Member 'FGameplayEffectSpecForRPC::Def' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpecForRPC, ModifiedAttributes) == 0x000008, "Member 'FGameplayEffectSpecForRPC::ModifiedAttributes' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpecForRPC, EffectContext) == 0x000018, "Member 'FGameplayEffectSpecForRPC::EffectContext' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpecForRPC, AggregatedSourceTags) == 0x000030, "Member 'FGameplayEffectSpecForRPC::AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpecForRPC, AggregatedTargetTags) == 0x000050, "Member 'FGameplayEffectSpecForRPC::AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpecForRPC, Level) == 0x000070, "Member 'FGameplayEffectSpecForRPC::Level' has a wrong offset!");
static_assert(offsetof(FGameplayEffectSpecForRPC, AbilityLevel) == 0x000074, "Member 'FGameplayEffectSpecForRPC::AbilityLevel' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayCuePendingExecute
// 0x0170 (0x0170 - 0x0000)
struct FGameplayCuePendingExecute final
{
public:
	uint8                                         Pad_12A2[0x18];                                    // 0x0000(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPredictionKey                         PredictionKey;                                     // 0x0018(0x0010)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGameplayCuePayloadType                       PayloadType;                                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12A3[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                OwningComponent;                                   // 0x0030(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecForRPC              FromSpec;                                          // 0x0038(0x0078)(NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                 CueParameters;                                     // 0x00B0(0x00C0)(ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameplayCuePendingExecute) == 0x000008, "Wrong alignment on FGameplayCuePendingExecute");
static_assert(sizeof(FGameplayCuePendingExecute) == 0x000170, "Wrong size on FGameplayCuePendingExecute");
static_assert(offsetof(FGameplayCuePendingExecute, PredictionKey) == 0x000018, "Member 'FGameplayCuePendingExecute::PredictionKey' has a wrong offset!");
static_assert(offsetof(FGameplayCuePendingExecute, PayloadType) == 0x000028, "Member 'FGameplayCuePendingExecute::PayloadType' has a wrong offset!");
static_assert(offsetof(FGameplayCuePendingExecute, OwningComponent) == 0x000030, "Member 'FGameplayCuePendingExecute::OwningComponent' has a wrong offset!");
static_assert(offsetof(FGameplayCuePendingExecute, FromSpec) == 0x000038, "Member 'FGameplayCuePendingExecute::FromSpec' has a wrong offset!");
static_assert(offsetof(FGameplayCuePendingExecute, CueParameters) == 0x0000B0, "Member 'FGameplayCuePendingExecute::CueParameters' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayEffectRemovalInfo
// 0x0020 (0x0020 - 0x0000)
struct FGameplayEffectRemovalInfo final
{
public:
	bool                                          bPrematureRemoval;                                 // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12A4[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         StackCount;                                        // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle           EffectContext;                                     // 0x0008(0x0018)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameplayEffectRemovalInfo) == 0x000008, "Wrong alignment on FGameplayEffectRemovalInfo");
static_assert(sizeof(FGameplayEffectRemovalInfo) == 0x000020, "Wrong size on FGameplayEffectRemovalInfo");
static_assert(offsetof(FGameplayEffectRemovalInfo, bPrematureRemoval) == 0x000000, "Member 'FGameplayEffectRemovalInfo::bPrematureRemoval' has a wrong offset!");
static_assert(offsetof(FGameplayEffectRemovalInfo, StackCount) == 0x000004, "Member 'FGameplayEffectRemovalInfo::StackCount' has a wrong offset!");
static_assert(offsetof(FGameplayEffectRemovalInfo, EffectContext) == 0x000008, "Member 'FGameplayEffectRemovalInfo::EffectContext' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayEffectQuery
// 0x0150 (0x0150 - 0x0000)
struct FGameplayEffectQuery final
{
public:
	uint8                                         Pad_12A5[0x10];                                    // 0x0000(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FActiveGameplayEffect& Effect, bool* bMatches)> CustomMatchDelegate_BP;                            // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                      OwningTagQuery;                                    // 0x0020(0x0048)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                      EffectTagQuery;                                    // 0x0068(0x0048)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                      SourceTagQuery;                                    // 0x00B0(0x0048)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                     ModifyingAttribute;                                // 0x00F8(0x0038)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                EffectSource;                                      // 0x0130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayEffect>            EffectDefinition;                                  // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12A6[0x10];                                    // 0x0140(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayEffectQuery) == 0x000008, "Wrong alignment on FGameplayEffectQuery");
static_assert(sizeof(FGameplayEffectQuery) == 0x000150, "Wrong size on FGameplayEffectQuery");
static_assert(offsetof(FGameplayEffectQuery, CustomMatchDelegate_BP) == 0x000010, "Member 'FGameplayEffectQuery::CustomMatchDelegate_BP' has a wrong offset!");
static_assert(offsetof(FGameplayEffectQuery, OwningTagQuery) == 0x000020, "Member 'FGameplayEffectQuery::OwningTagQuery' has a wrong offset!");
static_assert(offsetof(FGameplayEffectQuery, EffectTagQuery) == 0x000068, "Member 'FGameplayEffectQuery::EffectTagQuery' has a wrong offset!");
static_assert(offsetof(FGameplayEffectQuery, SourceTagQuery) == 0x0000B0, "Member 'FGameplayEffectQuery::SourceTagQuery' has a wrong offset!");
static_assert(offsetof(FGameplayEffectQuery, ModifyingAttribute) == 0x0000F8, "Member 'FGameplayEffectQuery::ModifyingAttribute' has a wrong offset!");
static_assert(offsetof(FGameplayEffectQuery, EffectSource) == 0x000130, "Member 'FGameplayEffectQuery::EffectSource' has a wrong offset!");
static_assert(offsetof(FGameplayEffectQuery, EffectDefinition) == 0x000138, "Member 'FGameplayEffectQuery::EffectDefinition' has a wrong offset!");

// ScriptStruct GameplayAbilities.ReplicatedPredictionKeyItem
// 0x0014 (0x0020 - 0x000C)
struct FReplicatedPredictionKeyItem final : public FFastArraySerializerItem
{
public:
	uint8                                         Pad_12A7[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPredictionKey                         PredictionKey;                                     // 0x0010(0x0010)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FReplicatedPredictionKeyItem) == 0x000008, "Wrong alignment on FReplicatedPredictionKeyItem");
static_assert(sizeof(FReplicatedPredictionKeyItem) == 0x000020, "Wrong size on FReplicatedPredictionKeyItem");
static_assert(offsetof(FReplicatedPredictionKeyItem, PredictionKey) == 0x000010, "Member 'FReplicatedPredictionKeyItem::PredictionKey' has a wrong offset!");

// ScriptStruct GameplayAbilities.ReplicatedPredictionKeyMap
// 0x0010 (0x0118 - 0x0108)
struct FReplicatedPredictionKeyMap final : public FFastArraySerializer
{
public:
	TArray<struct FReplicatedPredictionKeyItem>   PredictionKeys;                                    // 0x0108(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FReplicatedPredictionKeyMap) == 0x000008, "Wrong alignment on FReplicatedPredictionKeyMap");
static_assert(sizeof(FReplicatedPredictionKeyMap) == 0x000118, "Wrong size on FReplicatedPredictionKeyMap");
static_assert(offsetof(FReplicatedPredictionKeyMap, PredictionKeys) == 0x000108, "Member 'FReplicatedPredictionKeyMap::PredictionKeys' has a wrong offset!");

// ScriptStruct GameplayAbilities.AttributeBasedFloat
// 0x0110 (0x0110 - 0x0000)
struct FAttributeBasedFloat final
{
public:
	struct FScalableFloat                         Coefficient;                                       // 0x0000(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         PreMultiplyAdditiveValue;                          // 0x0028(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         PostMultiplyAdditiveValue;                         // 0x0050(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayEffectAttributeCaptureDefinition BackingAttribute;                                  // 0x0078(0x0040)(Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                   AttributeCurve;                                    // 0x00B8(0x0010)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAttributeBasedFloatCalculationType           AttributeCalculationType;                          // 0x00C8(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGameplayModEvaluationChannel                 FinalChannel;                                      // 0x00C9(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12A8[0x6];                                     // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  SourceTagFilter;                                   // 0x00D0(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  TargetTagFilter;                                   // 0x00F0(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAttributeBasedFloat) == 0x000008, "Wrong alignment on FAttributeBasedFloat");
static_assert(sizeof(FAttributeBasedFloat) == 0x000110, "Wrong size on FAttributeBasedFloat");
static_assert(offsetof(FAttributeBasedFloat, Coefficient) == 0x000000, "Member 'FAttributeBasedFloat::Coefficient' has a wrong offset!");
static_assert(offsetof(FAttributeBasedFloat, PreMultiplyAdditiveValue) == 0x000028, "Member 'FAttributeBasedFloat::PreMultiplyAdditiveValue' has a wrong offset!");
static_assert(offsetof(FAttributeBasedFloat, PostMultiplyAdditiveValue) == 0x000050, "Member 'FAttributeBasedFloat::PostMultiplyAdditiveValue' has a wrong offset!");
static_assert(offsetof(FAttributeBasedFloat, BackingAttribute) == 0x000078, "Member 'FAttributeBasedFloat::BackingAttribute' has a wrong offset!");
static_assert(offsetof(FAttributeBasedFloat, AttributeCurve) == 0x0000B8, "Member 'FAttributeBasedFloat::AttributeCurve' has a wrong offset!");
static_assert(offsetof(FAttributeBasedFloat, AttributeCalculationType) == 0x0000C8, "Member 'FAttributeBasedFloat::AttributeCalculationType' has a wrong offset!");
static_assert(offsetof(FAttributeBasedFloat, FinalChannel) == 0x0000C9, "Member 'FAttributeBasedFloat::FinalChannel' has a wrong offset!");
static_assert(offsetof(FAttributeBasedFloat, SourceTagFilter) == 0x0000D0, "Member 'FAttributeBasedFloat::SourceTagFilter' has a wrong offset!");
static_assert(offsetof(FAttributeBasedFloat, TargetTagFilter) == 0x0000F0, "Member 'FAttributeBasedFloat::TargetTagFilter' has a wrong offset!");

// ScriptStruct GameplayAbilities.CustomCalculationBasedFloat
// 0x0090 (0x0090 - 0x0000)
struct FCustomCalculationBasedFloat final
{
public:
	TSubclassOf<class UGameplayModMagnitudeCalculation> CalculationClassMagnitude;                         // 0x0000(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                         Coefficient;                                       // 0x0008(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         PreMultiplyAdditiveValue;                          // 0x0030(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                         PostMultiplyAdditiveValue;                         // 0x0058(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                   FinalLookupCurve;                                  // 0x0080(0x0010)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCustomCalculationBasedFloat) == 0x000008, "Wrong alignment on FCustomCalculationBasedFloat");
static_assert(sizeof(FCustomCalculationBasedFloat) == 0x000090, "Wrong size on FCustomCalculationBasedFloat");
static_assert(offsetof(FCustomCalculationBasedFloat, CalculationClassMagnitude) == 0x000000, "Member 'FCustomCalculationBasedFloat::CalculationClassMagnitude' has a wrong offset!");
static_assert(offsetof(FCustomCalculationBasedFloat, Coefficient) == 0x000008, "Member 'FCustomCalculationBasedFloat::Coefficient' has a wrong offset!");
static_assert(offsetof(FCustomCalculationBasedFloat, PreMultiplyAdditiveValue) == 0x000030, "Member 'FCustomCalculationBasedFloat::PreMultiplyAdditiveValue' has a wrong offset!");
static_assert(offsetof(FCustomCalculationBasedFloat, PostMultiplyAdditiveValue) == 0x000058, "Member 'FCustomCalculationBasedFloat::PostMultiplyAdditiveValue' has a wrong offset!");
static_assert(offsetof(FCustomCalculationBasedFloat, FinalLookupCurve) == 0x000080, "Member 'FCustomCalculationBasedFloat::FinalLookupCurve' has a wrong offset!");

// ScriptStruct GameplayAbilities.SetByCallerFloat
// 0x0010 (0x0010 - 0x0000)
struct FSetByCallerFloat final
{
public:
	class FName                                   DataName;                                          // 0x0000(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           DataTag;                                           // 0x0008(0x0008)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSetByCallerFloat) == 0x000004, "Wrong alignment on FSetByCallerFloat");
static_assert(sizeof(FSetByCallerFloat) == 0x000010, "Wrong size on FSetByCallerFloat");
static_assert(offsetof(FSetByCallerFloat, DataName) == 0x000000, "Member 'FSetByCallerFloat::DataName' has a wrong offset!");
static_assert(offsetof(FSetByCallerFloat, DataTag) == 0x000008, "Member 'FSetByCallerFloat::DataTag' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayEffectModifierMagnitude
// 0x01E0 (0x01E0 - 0x0000)
struct FGameplayEffectModifierMagnitude final
{
public:
	EGameplayEffectMagnitudeCalculation           MagnitudeCalculationType;                          // 0x0000(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_12A9[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         ScalableFloatMagnitude;                            // 0x0008(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FAttributeBasedFloat                   AttributeBasedMagnitude;                           // 0x0030(0x0110)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FCustomCalculationBasedFloat           CustomMagnitude;                                   // 0x0140(0x0090)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSetByCallerFloat                      SetByCallerMagnitude;                              // 0x01D0(0x0010)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
};
static_assert(alignof(FGameplayEffectModifierMagnitude) == 0x000008, "Wrong alignment on FGameplayEffectModifierMagnitude");
static_assert(sizeof(FGameplayEffectModifierMagnitude) == 0x0001E0, "Wrong size on FGameplayEffectModifierMagnitude");
static_assert(offsetof(FGameplayEffectModifierMagnitude, MagnitudeCalculationType) == 0x000000, "Member 'FGameplayEffectModifierMagnitude::MagnitudeCalculationType' has a wrong offset!");
static_assert(offsetof(FGameplayEffectModifierMagnitude, ScalableFloatMagnitude) == 0x000008, "Member 'FGameplayEffectModifierMagnitude::ScalableFloatMagnitude' has a wrong offset!");
static_assert(offsetof(FGameplayEffectModifierMagnitude, AttributeBasedMagnitude) == 0x000030, "Member 'FGameplayEffectModifierMagnitude::AttributeBasedMagnitude' has a wrong offset!");
static_assert(offsetof(FGameplayEffectModifierMagnitude, CustomMagnitude) == 0x000140, "Member 'FGameplayEffectModifierMagnitude::CustomMagnitude' has a wrong offset!");
static_assert(offsetof(FGameplayEffectModifierMagnitude, SetByCallerMagnitude) == 0x0001D0, "Member 'FGameplayEffectModifierMagnitude::SetByCallerMagnitude' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayModEvaluationChannelSettings
// 0x0001 (0x0001 - 0x0000)
struct FGameplayModEvaluationChannelSettings final
{
public:
	EGameplayModEvaluationChannel                 Channel;                                           // 0x0000(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};
static_assert(alignof(FGameplayModEvaluationChannelSettings) == 0x000001, "Wrong alignment on FGameplayModEvaluationChannelSettings");
static_assert(sizeof(FGameplayModEvaluationChannelSettings) == 0x000001, "Wrong size on FGameplayModEvaluationChannelSettings");
static_assert(offsetof(FGameplayModEvaluationChannelSettings, Channel) == 0x000000, "Member 'FGameplayModEvaluationChannelSettings::Channel' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
// 0x02B8 (0x02B8 - 0x0000)
struct FGameplayEffectExecutionScopedModifierInfo final
{
public:
	struct FGameplayEffectAttributeCaptureDefinition CapturedAttribute;                                 // 0x0000(0x0040)(Edit, DisableEditOnInstance, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           TransientAggregatorIdentifier;                     // 0x0040(0x0008)(Edit, DisableEditOnInstance, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGameplayEffectScopedModifierAggregatorType   AggregatorType;                                    // 0x0048(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGameplayModOp                                ModifierOp;                                        // 0x0049(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12AA[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEffectModifierMagnitude       ModifierMagnitude;                                 // 0x0050(0x01E0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayModEvaluationChannelSettings  EvaluationChannelSettings;                         // 0x0230(0x0001)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_12AB[0x7];                                     // 0x0231(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagRequirements               SourceTags;                                        // 0x0238(0x0040)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements               TargetTags;                                        // 0x0278(0x0040)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameplayEffectExecutionScopedModifierInfo) == 0x000008, "Wrong alignment on FGameplayEffectExecutionScopedModifierInfo");
static_assert(sizeof(FGameplayEffectExecutionScopedModifierInfo) == 0x0002B8, "Wrong size on FGameplayEffectExecutionScopedModifierInfo");
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, CapturedAttribute) == 0x000000, "Member 'FGameplayEffectExecutionScopedModifierInfo::CapturedAttribute' has a wrong offset!");
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, TransientAggregatorIdentifier) == 0x000040, "Member 'FGameplayEffectExecutionScopedModifierInfo::TransientAggregatorIdentifier' has a wrong offset!");
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, AggregatorType) == 0x000048, "Member 'FGameplayEffectExecutionScopedModifierInfo::AggregatorType' has a wrong offset!");
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, ModifierOp) == 0x000049, "Member 'FGameplayEffectExecutionScopedModifierInfo::ModifierOp' has a wrong offset!");
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, ModifierMagnitude) == 0x000050, "Member 'FGameplayEffectExecutionScopedModifierInfo::ModifierMagnitude' has a wrong offset!");
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, EvaluationChannelSettings) == 0x000230, "Member 'FGameplayEffectExecutionScopedModifierInfo::EvaluationChannelSettings' has a wrong offset!");
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, SourceTags) == 0x000238, "Member 'FGameplayEffectExecutionScopedModifierInfo::SourceTags' has a wrong offset!");
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, TargetTags) == 0x000278, "Member 'FGameplayEffectExecutionScopedModifierInfo::TargetTags' has a wrong offset!");

// ScriptStruct GameplayAbilities.ConditionalGameplayEffect
// 0x0028 (0x0028 - 0x0000)
struct FConditionalGameplayEffect final
{
public:
	TSubclassOf<class UGameplayEffect>            EffectClass;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  RequiredSourceTags;                                // 0x0008(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};
static_assert(alignof(FConditionalGameplayEffect) == 0x000008, "Wrong alignment on FConditionalGameplayEffect");
static_assert(sizeof(FConditionalGameplayEffect) == 0x000028, "Wrong size on FConditionalGameplayEffect");
static_assert(offsetof(FConditionalGameplayEffect, EffectClass) == 0x000000, "Member 'FConditionalGameplayEffect::EffectClass' has a wrong offset!");
static_assert(offsetof(FConditionalGameplayEffect, RequiredSourceTags) == 0x000008, "Member 'FConditionalGameplayEffect::RequiredSourceTags' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayEffectExecutionDefinition
// 0x0058 (0x0058 - 0x0000)
struct FGameplayEffectExecutionDefinition final
{
public:
	TSubclassOf<class UGameplayEffectExecutionCalculation> CalculationClass;                                  // 0x0000(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  PassedInTags;                                      // 0x0008(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers;                              // 0x0028(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>    ConditionalGameplayEffectClasses;                  // 0x0038(0x0010)(ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FConditionalGameplayEffect>     ConditionalGameplayEffects;                        // 0x0048(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameplayEffectExecutionDefinition) == 0x000008, "Wrong alignment on FGameplayEffectExecutionDefinition");
static_assert(sizeof(FGameplayEffectExecutionDefinition) == 0x000058, "Wrong size on FGameplayEffectExecutionDefinition");
static_assert(offsetof(FGameplayEffectExecutionDefinition, CalculationClass) == 0x000000, "Member 'FGameplayEffectExecutionDefinition::CalculationClass' has a wrong offset!");
static_assert(offsetof(FGameplayEffectExecutionDefinition, PassedInTags) == 0x000008, "Member 'FGameplayEffectExecutionDefinition::PassedInTags' has a wrong offset!");
static_assert(offsetof(FGameplayEffectExecutionDefinition, CalculationModifiers) == 0x000028, "Member 'FGameplayEffectExecutionDefinition::CalculationModifiers' has a wrong offset!");
static_assert(offsetof(FGameplayEffectExecutionDefinition, ConditionalGameplayEffectClasses) == 0x000038, "Member 'FGameplayEffectExecutionDefinition::ConditionalGameplayEffectClasses' has a wrong offset!");
static_assert(offsetof(FGameplayEffectExecutionDefinition, ConditionalGameplayEffects) == 0x000048, "Member 'FGameplayEffectExecutionDefinition::ConditionalGameplayEffects' has a wrong offset!");

// ScriptStruct GameplayAbilities.ActiveGameplayCueContainer
// 0x0020 (0x0128 - 0x0108)
struct FActiveGameplayCueContainer final : public FFastArraySerializer
{
public:
	TArray<struct FActiveGameplayCue>             GameplayCues;                                      // 0x0108(0x0010)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                         Pad_12AC[0x8];                                     // 0x0118(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                Owner;                                             // 0x0120(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FActiveGameplayCueContainer) == 0x000008, "Wrong alignment on FActiveGameplayCueContainer");
static_assert(sizeof(FActiveGameplayCueContainer) == 0x000128, "Wrong size on FActiveGameplayCueContainer");
static_assert(offsetof(FActiveGameplayCueContainer, GameplayCues) == 0x000108, "Member 'FActiveGameplayCueContainer::GameplayCues' has a wrong offset!");
static_assert(offsetof(FActiveGameplayCueContainer, Owner) == 0x000120, "Member 'FActiveGameplayCueContainer::Owner' has a wrong offset!");

// ScriptStruct GameplayAbilities.ActiveGameplayEffectsContainer
// 0x0370 (0x0478 - 0x0108)
struct FActiveGameplayEffectsContainer final : public FFastArraySerializer
{
public:
	uint8                                         Pad_12AD[0x28];                                    // 0x0108(0x0028)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FActiveGameplayEffect>          GameplayEffects_Internal;                          // 0x0130(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_12AE[0x310];                                   // 0x0140(0x0310)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UGameplayEffect*>                ApplicationImmunityQueryEffects;                   // 0x0450(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_12AF[0x18];                                    // 0x0460(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FActiveGameplayEffectsContainer) == 0x000008, "Wrong alignment on FActiveGameplayEffectsContainer");
static_assert(sizeof(FActiveGameplayEffectsContainer) == 0x000478, "Wrong size on FActiveGameplayEffectsContainer");
static_assert(offsetof(FActiveGameplayEffectsContainer, GameplayEffects_Internal) == 0x000130, "Member 'FActiveGameplayEffectsContainer::GameplayEffects_Internal' has a wrong offset!");
static_assert(offsetof(FActiveGameplayEffectsContainer, ApplicationImmunityQueryEffects) == 0x000450, "Member 'FActiveGameplayEffectsContainer::ApplicationImmunityQueryEffects' has a wrong offset!");

// ScriptStruct GameplayAbilities.AttributeMetaData
// 0x0028 (0x0030 - 0x0008)
struct FAttributeMetaData final : public FTableRowBase
{
public:
	float                                         BaseValue;                                         // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinValue;                                          // 0x000C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxValue;                                          // 0x0010(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12B0[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 DerivedAttributeInfo;                              // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCanStack;                                         // 0x0028(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12B1[0x7];                                     // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAttributeMetaData) == 0x000008, "Wrong alignment on FAttributeMetaData");
static_assert(sizeof(FAttributeMetaData) == 0x000030, "Wrong size on FAttributeMetaData");
static_assert(offsetof(FAttributeMetaData, BaseValue) == 0x000008, "Member 'FAttributeMetaData::BaseValue' has a wrong offset!");
static_assert(offsetof(FAttributeMetaData, MinValue) == 0x00000C, "Member 'FAttributeMetaData::MinValue' has a wrong offset!");
static_assert(offsetof(FAttributeMetaData, MaxValue) == 0x000010, "Member 'FAttributeMetaData::MaxValue' has a wrong offset!");
static_assert(offsetof(FAttributeMetaData, DerivedAttributeInfo) == 0x000018, "Member 'FAttributeMetaData::DerivedAttributeInfo' has a wrong offset!");
static_assert(offsetof(FAttributeMetaData, bCanStack) == 0x000028, "Member 'FAttributeMetaData::bCanStack' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayAbilityLocalAnimMontage
// 0x0028 (0x0028 - 0x0000)
struct FGameplayAbilityLocalAnimMontage final
{
public:
	class UAnimMontage*                           AnimMontage;                                       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          PlayBit;                                           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12B2[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPredictionKey                         PredictionKey;                                     // 0x0010(0x0010)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayAbility*                       AnimatingAbility;                                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameplayAbilityLocalAnimMontage) == 0x000008, "Wrong alignment on FGameplayAbilityLocalAnimMontage");
static_assert(sizeof(FGameplayAbilityLocalAnimMontage) == 0x000028, "Wrong size on FGameplayAbilityLocalAnimMontage");
static_assert(offsetof(FGameplayAbilityLocalAnimMontage, AnimMontage) == 0x000000, "Member 'FGameplayAbilityLocalAnimMontage::AnimMontage' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityLocalAnimMontage, PlayBit) == 0x000008, "Member 'FGameplayAbilityLocalAnimMontage::PlayBit' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityLocalAnimMontage, PredictionKey) == 0x000010, "Member 'FGameplayAbilityLocalAnimMontage::PredictionKey' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityLocalAnimMontage, AnimatingAbility) == 0x000020, "Member 'FGameplayAbilityLocalAnimMontage::AnimatingAbility' has a wrong offset!");

// ScriptStruct GameplayAbilities.AttributeDefaults
// 0x0010 (0x0010 - 0x0000)
struct FAttributeDefaults final
{
public:
	TSubclassOf<class UAttributeSet>              Attributes;                                        // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                             DefaultStartingTable;                              // 0x0008(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAttributeDefaults) == 0x000008, "Wrong alignment on FAttributeDefaults");
static_assert(sizeof(FAttributeDefaults) == 0x000010, "Wrong size on FAttributeDefaults");
static_assert(offsetof(FAttributeDefaults, Attributes) == 0x000000, "Member 'FAttributeDefaults::Attributes' has a wrong offset!");
static_assert(offsetof(FAttributeDefaults, DefaultStartingTable) == 0x000008, "Member 'FAttributeDefaults::DefaultStartingTable' has a wrong offset!");

// ScriptStruct GameplayAbilities.NetSerializeScriptStructCache
// 0x0010 (0x0010 - 0x0000)
struct FNetSerializeScriptStructCache final
{
public:
	TArray<class UScriptStruct*>                  ScriptStructs;                                     // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FNetSerializeScriptStructCache) == 0x000008, "Wrong alignment on FNetSerializeScriptStructCache");
static_assert(sizeof(FNetSerializeScriptStructCache) == 0x000010, "Wrong size on FNetSerializeScriptStructCache");
static_assert(offsetof(FNetSerializeScriptStructCache, ScriptStructs) == 0x000000, "Member 'FNetSerializeScriptStructCache::ScriptStructs' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayAttributeData
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FGameplayAttributeData final
{
public:
	uint8                                         Pad_12B3[0x8];                                     // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BaseValue;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         CurrentValue;                                      // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};
static_assert(alignof(FGameplayAttributeData) == 0x000008, "Wrong alignment on FGameplayAttributeData");
static_assert(sizeof(FGameplayAttributeData) == 0x000010, "Wrong size on FGameplayAttributeData");
static_assert(offsetof(FGameplayAttributeData, BaseValue) == 0x000008, "Member 'FGameplayAttributeData::BaseValue' has a wrong offset!");
static_assert(offsetof(FGameplayAttributeData, CurrentValue) == 0x00000C, "Member 'FGameplayAttributeData::CurrentValue' has a wrong offset!");

// ScriptStruct GameplayAbilities.AbilityTriggerData
// 0x000C (0x000C - 0x0000)
struct FAbilityTriggerData final
{
public:
	struct FGameplayTag                           TriggerTag;                                        // 0x0000(0x0008)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGameplayAbilityTriggerSource                 TriggerSource;                                     // 0x0008(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12B4[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAbilityTriggerData) == 0x000004, "Wrong alignment on FAbilityTriggerData");
static_assert(sizeof(FAbilityTriggerData) == 0x00000C, "Wrong size on FAbilityTriggerData");
static_assert(offsetof(FAbilityTriggerData, TriggerTag) == 0x000000, "Member 'FAbilityTriggerData::TriggerTag' has a wrong offset!");
static_assert(offsetof(FAbilityTriggerData, TriggerSource) == 0x000008, "Member 'FAbilityTriggerData::TriggerSource' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayAbilityBindInfo
// 0x0010 (0x0010 - 0x0000)
struct FGameplayAbilityBindInfo final
{
public:
	EGameplayAbilityInputBinds                    Command;                                           // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12B5[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UGameplayAbility>           GameplayAbilityClass;                              // 0x0008(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameplayAbilityBindInfo) == 0x000008, "Wrong alignment on FGameplayAbilityBindInfo");
static_assert(sizeof(FGameplayAbilityBindInfo) == 0x000010, "Wrong size on FGameplayAbilityBindInfo");
static_assert(offsetof(FGameplayAbilityBindInfo, Command) == 0x000000, "Member 'FGameplayAbilityBindInfo::Command' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityBindInfo, GameplayAbilityClass) == 0x000008, "Member 'FGameplayAbilityBindInfo::GameplayAbilityClass' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
// 0x0090 (0x0098 - 0x0008)
struct FGameplayAbilityTargetData_SingleTargetHit final : public FGameplayAbilityTargetData
{
public:
	struct FHitResult                             HitResult;                                         // 0x0008(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                          bHitReplaced;                                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12B6[0x7];                                     // 0x0091(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayAbilityTargetData_SingleTargetHit) == 0x000008, "Wrong alignment on FGameplayAbilityTargetData_SingleTargetHit");
static_assert(sizeof(FGameplayAbilityTargetData_SingleTargetHit) == 0x000098, "Wrong size on FGameplayAbilityTargetData_SingleTargetHit");
static_assert(offsetof(FGameplayAbilityTargetData_SingleTargetHit, HitResult) == 0x000008, "Member 'FGameplayAbilityTargetData_SingleTargetHit::HitResult' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityTargetData_SingleTargetHit, bHitReplaced) == 0x000090, "Member 'FGameplayAbilityTargetData_SingleTargetHit::bHitReplaced' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_LocationInfo
// 0x00E8 (0x00F0 - 0x0008)
struct FGameplayAbilityTargetData_LocationInfo final : public FGameplayAbilityTargetData
{
public:
	uint8                                         Pad_12B7[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetingLocationInfo  SourceLocation;                                    // 0x0010(0x0070)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetingLocationInfo  TargetLocation;                                    // 0x0080(0x0070)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameplayAbilityTargetData_LocationInfo) == 0x000010, "Wrong alignment on FGameplayAbilityTargetData_LocationInfo");
static_assert(sizeof(FGameplayAbilityTargetData_LocationInfo) == 0x0000F0, "Wrong size on FGameplayAbilityTargetData_LocationInfo");
static_assert(offsetof(FGameplayAbilityTargetData_LocationInfo, SourceLocation) == 0x000010, "Member 'FGameplayAbilityTargetData_LocationInfo::SourceLocation' has a wrong offset!");
static_assert(offsetof(FGameplayAbilityTargetData_LocationInfo, TargetLocation) == 0x000080, "Member 'FGameplayAbilityTargetData_LocationInfo::TargetLocation' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
// 0x0008 (0x0008 - 0x0000)
struct FGameplayAbilitySpecHandleAndPredictionKey final
{
public:
	struct FGameplayAbilitySpecHandle             AbilityHandle;                                     // 0x0000(0x0004)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PredictionKeyAtCreation;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameplayAbilitySpecHandleAndPredictionKey) == 0x000004, "Wrong alignment on FGameplayAbilitySpecHandleAndPredictionKey");
static_assert(sizeof(FGameplayAbilitySpecHandleAndPredictionKey) == 0x000008, "Wrong size on FGameplayAbilitySpecHandleAndPredictionKey");
static_assert(offsetof(FGameplayAbilitySpecHandleAndPredictionKey, AbilityHandle) == 0x000000, "Member 'FGameplayAbilitySpecHandleAndPredictionKey::AbilityHandle' has a wrong offset!");
static_assert(offsetof(FGameplayAbilitySpecHandleAndPredictionKey, PredictionKeyAtCreation) == 0x000004, "Member 'FGameplayAbilitySpecHandleAndPredictionKey::PredictionKeyAtCreation' has a wrong offset!");

// ScriptStruct GameplayAbilities.AbilityTaskDebugMessage
// 0x0018 (0x0018 - 0x0000)
struct FAbilityTaskDebugMessage final
{
public:
	class UGameplayTask*                          FromTask;                                          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Message;                                           // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAbilityTaskDebugMessage) == 0x000008, "Wrong alignment on FAbilityTaskDebugMessage");
static_assert(sizeof(FAbilityTaskDebugMessage) == 0x000018, "Wrong size on FAbilityTaskDebugMessage");
static_assert(offsetof(FAbilityTaskDebugMessage, FromTask) == 0x000000, "Member 'FAbilityTaskDebugMessage::FromTask' has a wrong offset!");
static_assert(offsetof(FAbilityTaskDebugMessage, Message) == 0x000008, "Member 'FAbilityTaskDebugMessage::Message' has a wrong offset!");

// ScriptStruct GameplayAbilities.WorldReticleParameters
// 0x000C (0x000C - 0x0000)
struct FWorldReticleParameters final
{
public:
	struct FVector                                AOEScale;                                          // 0x0000(0x000C)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWorldReticleParameters) == 0x000004, "Wrong alignment on FWorldReticleParameters");
static_assert(sizeof(FWorldReticleParameters) == 0x00000C, "Wrong size on FWorldReticleParameters");
static_assert(offsetof(FWorldReticleParameters, AOEScale) == 0x000000, "Member 'FWorldReticleParameters::AOEScale' has a wrong offset!");

// ScriptStruct GameplayAbilities.PreallocationInfo
// 0x0068 (0x0068 - 0x0000)
struct FPreallocationInfo final
{
public:
	uint8                                         Pad_12B8[0x50];                                    // 0x0000(0x0050)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TSubclassOf<class AGameplayCueNotify_Actor>> ClassesNeedingPreallocation;                       // 0x0050(0x0010)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                         Pad_12B9[0x8];                                     // 0x0060(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPreallocationInfo) == 0x000008, "Wrong alignment on FPreallocationInfo");
static_assert(sizeof(FPreallocationInfo) == 0x000068, "Wrong size on FPreallocationInfo");
static_assert(offsetof(FPreallocationInfo, ClassesNeedingPreallocation) == 0x000050, "Member 'FPreallocationInfo::ClassesNeedingPreallocation' has a wrong offset!");

// ScriptStruct GameplayAbilities.MinimalGameplayCueReplicationProxy
// 0x0290 (0x0290 - 0x0000)
struct alignas(0x10) FMinimalGameplayCueReplicationProxy final
{
public:
	uint8                                         Pad_12BA[0x280];                                   // 0x0000(0x0280)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                Owner;                                             // 0x0280(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_12BB[0x8];                                     // 0x0288(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMinimalGameplayCueReplicationProxy) == 0x000010, "Wrong alignment on FMinimalGameplayCueReplicationProxy");
static_assert(sizeof(FMinimalGameplayCueReplicationProxy) == 0x000290, "Wrong size on FMinimalGameplayCueReplicationProxy");
static_assert(offsetof(FMinimalGameplayCueReplicationProxy, Owner) == 0x000280, "Member 'FMinimalGameplayCueReplicationProxy::Owner' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayCueTag
// 0x0008 (0x0008 - 0x0000)
struct FGameplayCueTag final
{
public:
	struct FGameplayTag                           GameplayCueTag;                                    // 0x0000(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameplayCueTag) == 0x000004, "Wrong alignment on FGameplayCueTag");
static_assert(sizeof(FGameplayCueTag) == 0x000008, "Wrong size on FGameplayCueTag");
static_assert(offsetof(FGameplayCueTag, GameplayCueTag) == 0x000000, "Member 'FGameplayCueTag::GameplayCueTag' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayCueObjectLibrary
// 0x0050 (0x0050 - 0x0000)
struct FGameplayCueObjectLibrary final
{
public:
	TArray<class FString>                         Paths;                                             // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_12BC[0x20];                                    // 0x0010(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	class UObjectLibrary*                         ActorObjectLibrary;                                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObjectLibrary*                         StaticObjectLibrary;                               // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayCueSet*                        CueSet;                                            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12BD[0x4];                                     // 0x0048(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bShouldSyncScan;                                   // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShouldAsyncLoad;                                  // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bShouldSyncLoad;                                   // 0x004E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bHasBeenInitialized;                               // 0x004F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameplayCueObjectLibrary) == 0x000008, "Wrong alignment on FGameplayCueObjectLibrary");
static_assert(sizeof(FGameplayCueObjectLibrary) == 0x000050, "Wrong size on FGameplayCueObjectLibrary");
static_assert(offsetof(FGameplayCueObjectLibrary, Paths) == 0x000000, "Member 'FGameplayCueObjectLibrary::Paths' has a wrong offset!");
static_assert(offsetof(FGameplayCueObjectLibrary, ActorObjectLibrary) == 0x000030, "Member 'FGameplayCueObjectLibrary::ActorObjectLibrary' has a wrong offset!");
static_assert(offsetof(FGameplayCueObjectLibrary, StaticObjectLibrary) == 0x000038, "Member 'FGameplayCueObjectLibrary::StaticObjectLibrary' has a wrong offset!");
static_assert(offsetof(FGameplayCueObjectLibrary, CueSet) == 0x000040, "Member 'FGameplayCueObjectLibrary::CueSet' has a wrong offset!");
static_assert(offsetof(FGameplayCueObjectLibrary, bShouldSyncScan) == 0x00004C, "Member 'FGameplayCueObjectLibrary::bShouldSyncScan' has a wrong offset!");
static_assert(offsetof(FGameplayCueObjectLibrary, bShouldAsyncLoad) == 0x00004D, "Member 'FGameplayCueObjectLibrary::bShouldAsyncLoad' has a wrong offset!");
static_assert(offsetof(FGameplayCueObjectLibrary, bShouldSyncLoad) == 0x00004E, "Member 'FGameplayCueObjectLibrary::bShouldSyncLoad' has a wrong offset!");
static_assert(offsetof(FGameplayCueObjectLibrary, bHasBeenInitialized) == 0x00004F, "Member 'FGameplayCueObjectLibrary::bHasBeenInitialized' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayCueNotifyData
// 0x0030 (0x0030 - 0x0000)
struct FGameplayCueNotifyData final
{
public:
	struct FGameplayTag                           GameplayCueTag;                                    // 0x0000(0x0008)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                        GameplayCueNotifyObj;                              // 0x0008(0x0018)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                 LoadedGameplayCueClass;                            // 0x0020(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12BE[0x8];                                     // 0x0028(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayCueNotifyData) == 0x000008, "Wrong alignment on FGameplayCueNotifyData");
static_assert(sizeof(FGameplayCueNotifyData) == 0x000030, "Wrong size on FGameplayCueNotifyData");
static_assert(offsetof(FGameplayCueNotifyData, GameplayCueTag) == 0x000000, "Member 'FGameplayCueNotifyData::GameplayCueTag' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotifyData, GameplayCueNotifyObj) == 0x000008, "Member 'FGameplayCueNotifyData::GameplayCueNotifyObj' has a wrong offset!");
static_assert(offsetof(FGameplayCueNotifyData, LoadedGameplayCueClass) == 0x000020, "Member 'FGameplayCueNotifyData::LoadedGameplayCueClass' has a wrong offset!");

// ScriptStruct GameplayAbilities.ActiveGameplayEffectQuery
// 0x0088 (0x0088 - 0x0000)
struct alignas(0x08) FActiveGameplayEffectQuery final
{
public:
	uint8                                         Pad_12BF[0x88];                                    // 0x0000(0x0088)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FActiveGameplayEffectQuery) == 0x000008, "Wrong alignment on FActiveGameplayEffectQuery");
static_assert(sizeof(FActiveGameplayEffectQuery) == 0x000088, "Wrong size on FActiveGameplayEffectQuery");

// ScriptStruct GameplayAbilities.GameplayModifierInfo
// 0x02D0 (0x02D0 - 0x0000)
struct FGameplayModifierInfo final
{
public:
	struct FGameplayAttribute                     Attribute;                                         // 0x0000(0x0038)(Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGameplayModOp                                ModifierOp;                                        // 0x0038(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12C0[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         Magnitude;                                         // 0x0040(0x0028)(NativeAccessSpecifierPublic)
	struct FGameplayEffectModifierMagnitude       ModifierMagnitude;                                 // 0x0068(0x01E0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayModEvaluationChannelSettings  EvaluationChannelSettings;                         // 0x0248(0x0001)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_12C1[0x7];                                     // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagRequirements               SourceTags;                                        // 0x0250(0x0040)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements               TargetTags;                                        // 0x0290(0x0040)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameplayModifierInfo) == 0x000008, "Wrong alignment on FGameplayModifierInfo");
static_assert(sizeof(FGameplayModifierInfo) == 0x0002D0, "Wrong size on FGameplayModifierInfo");
static_assert(offsetof(FGameplayModifierInfo, Attribute) == 0x000000, "Member 'FGameplayModifierInfo::Attribute' has a wrong offset!");
static_assert(offsetof(FGameplayModifierInfo, ModifierOp) == 0x000038, "Member 'FGameplayModifierInfo::ModifierOp' has a wrong offset!");
static_assert(offsetof(FGameplayModifierInfo, Magnitude) == 0x000040, "Member 'FGameplayModifierInfo::Magnitude' has a wrong offset!");
static_assert(offsetof(FGameplayModifierInfo, ModifierMagnitude) == 0x000068, "Member 'FGameplayModifierInfo::ModifierMagnitude' has a wrong offset!");
static_assert(offsetof(FGameplayModifierInfo, EvaluationChannelSettings) == 0x000248, "Member 'FGameplayModifierInfo::EvaluationChannelSettings' has a wrong offset!");
static_assert(offsetof(FGameplayModifierInfo, SourceTags) == 0x000250, "Member 'FGameplayModifierInfo::SourceTags' has a wrong offset!");
static_assert(offsetof(FGameplayModifierInfo, TargetTags) == 0x000290, "Member 'FGameplayModifierInfo::TargetTags' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayModifierEvaluatedData
// 0x0050 (0x0050 - 0x0000)
struct FGameplayModifierEvaluatedData final
{
public:
	struct FGameplayAttribute                     Attribute;                                         // 0x0000(0x0038)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EGameplayModOp                                ModifierOp;                                        // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12C2[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Magnitude;                                         // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle            Handle;                                            // 0x0040(0x0008)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsValid;                                           // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12C3[0x7];                                     // 0x0049(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayModifierEvaluatedData) == 0x000008, "Wrong alignment on FGameplayModifierEvaluatedData");
static_assert(sizeof(FGameplayModifierEvaluatedData) == 0x000050, "Wrong size on FGameplayModifierEvaluatedData");
static_assert(offsetof(FGameplayModifierEvaluatedData, Attribute) == 0x000000, "Member 'FGameplayModifierEvaluatedData::Attribute' has a wrong offset!");
static_assert(offsetof(FGameplayModifierEvaluatedData, ModifierOp) == 0x000038, "Member 'FGameplayModifierEvaluatedData::ModifierOp' has a wrong offset!");
static_assert(offsetof(FGameplayModifierEvaluatedData, Magnitude) == 0x00003C, "Member 'FGameplayModifierEvaluatedData::Magnitude' has a wrong offset!");
static_assert(offsetof(FGameplayModifierEvaluatedData, Handle) == 0x000040, "Member 'FGameplayModifierEvaluatedData::Handle' has a wrong offset!");
static_assert(offsetof(FGameplayModifierEvaluatedData, IsValid) == 0x000048, "Member 'FGameplayModifierEvaluatedData::IsValid' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionOutput
// 0x0018 (0x0018 - 0x0000)
struct FGameplayEffectCustomExecutionOutput final
{
public:
	TArray<struct FGameplayModifierEvaluatedData> OutputModifiers;                                   // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         bTriggerConditionalGameplayEffects : 1;            // 0x0010(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         bHandledStackCountManually : 1;                    // 0x0010(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         bHandledGameplayCuesManually : 1;                  // 0x0010(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate))
	uint8                                         Pad_12C4[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayEffectCustomExecutionOutput) == 0x000008, "Wrong alignment on FGameplayEffectCustomExecutionOutput");
static_assert(sizeof(FGameplayEffectCustomExecutionOutput) == 0x000018, "Wrong size on FGameplayEffectCustomExecutionOutput");
static_assert(offsetof(FGameplayEffectCustomExecutionOutput, OutputModifiers) == 0x000000, "Member 'FGameplayEffectCustomExecutionOutput::OutputModifiers' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionParameters
// 0x00F0 (0x00F0 - 0x0000)
struct alignas(0x08) FGameplayEffectCustomExecutionParameters final
{
public:
	uint8                                         Pad_12C5[0xF0];                                    // 0x0000(0x00F0)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayEffectCustomExecutionParameters) == 0x000008, "Wrong alignment on FGameplayEffectCustomExecutionParameters");
static_assert(sizeof(FGameplayEffectCustomExecutionParameters) == 0x0000F0, "Wrong size on FGameplayEffectCustomExecutionParameters");

// ScriptStruct GameplayAbilities.GameplayTagBlueprintPropertyMapping
// 0x0048 (0x0048 - 0x0000)
struct FGameplayTagBlueprintPropertyMapping final
{
public:
	struct FGameplayTag                           TagToMap;                                          // 0x0000(0x0008)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TFieldPath<struct FProperty>                  PropertyToEdit;                                    // 0x0008(0x0020)(Edit, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   PropertyName;                                      // 0x0028(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  PropertyGuid;                                      // 0x0030(0x0010)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12C6[0x8];                                     // 0x0040(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayTagBlueprintPropertyMapping) == 0x000008, "Wrong alignment on FGameplayTagBlueprintPropertyMapping");
static_assert(sizeof(FGameplayTagBlueprintPropertyMapping) == 0x000048, "Wrong size on FGameplayTagBlueprintPropertyMapping");
static_assert(offsetof(FGameplayTagBlueprintPropertyMapping, TagToMap) == 0x000000, "Member 'FGameplayTagBlueprintPropertyMapping::TagToMap' has a wrong offset!");
static_assert(offsetof(FGameplayTagBlueprintPropertyMapping, PropertyToEdit) == 0x000008, "Member 'FGameplayTagBlueprintPropertyMapping::PropertyToEdit' has a wrong offset!");
static_assert(offsetof(FGameplayTagBlueprintPropertyMapping, PropertyName) == 0x000028, "Member 'FGameplayTagBlueprintPropertyMapping::PropertyName' has a wrong offset!");
static_assert(offsetof(FGameplayTagBlueprintPropertyMapping, PropertyGuid) == 0x000030, "Member 'FGameplayTagBlueprintPropertyMapping::PropertyGuid' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayTagBlueprintPropertyMap
// 0x0020 (0x0020 - 0x0000)
struct FGameplayTagBlueprintPropertyMap final
{
public:
	uint8                                         Pad_12C7[0x10];                                    // 0x0000(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGameplayTagBlueprintPropertyMapping> PropertyMappings;                                  // 0x0010(0x0010)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};
static_assert(alignof(FGameplayTagBlueprintPropertyMap) == 0x000008, "Wrong alignment on FGameplayTagBlueprintPropertyMap");
static_assert(sizeof(FGameplayTagBlueprintPropertyMap) == 0x000020, "Wrong size on FGameplayTagBlueprintPropertyMap");
static_assert(offsetof(FGameplayTagBlueprintPropertyMap, PropertyMappings) == 0x000010, "Member 'FGameplayTagBlueprintPropertyMap::PropertyMappings' has a wrong offset!");

// ScriptStruct GameplayAbilities.GameplayEffectContext
// 0x0070 (0x0070 - 0x0000)
struct FGameplayEffectContext final
{
public:
	uint8                                         Pad_12C8[0x8];                                     // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TWeakObjectPtr<class AActor>                  Instigator;                                        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AActor>                  EffectCauser;                                      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UGameplayAbility>        AbilityCDO;                                        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UGameplayAbility>        AbilityInstanceNotReplicated;                      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         AbilityLevel;                                      // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UObject>                 SourceObject;                                      // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UAbilitySystemComponent> InstigatorAbilitySystemComponent;                  // 0x0034(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_12C9[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<TWeakObjectPtr<class AActor>>          Actors;                                            // 0x0040(0x0010)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                         Pad_12CA[0x10];                                    // 0x0050(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                WorldOrigin;                                       // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         bHasWorldOrigin : 1;                               // 0x006C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         bReplicateSourceObject : 1;                        // 0x006C(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected))
	uint8                                         Pad_12CB[0x3];                                     // 0x006D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameplayEffectContext) == 0x000008, "Wrong alignment on FGameplayEffectContext");
static_assert(sizeof(FGameplayEffectContext) == 0x000070, "Wrong size on FGameplayEffectContext");
static_assert(offsetof(FGameplayEffectContext, Instigator) == 0x000008, "Member 'FGameplayEffectContext::Instigator' has a wrong offset!");
static_assert(offsetof(FGameplayEffectContext, EffectCauser) == 0x000010, "Member 'FGameplayEffectContext::EffectCauser' has a wrong offset!");
static_assert(offsetof(FGameplayEffectContext, AbilityCDO) == 0x000018, "Member 'FGameplayEffectContext::AbilityCDO' has a wrong offset!");
static_assert(offsetof(FGameplayEffectContext, AbilityInstanceNotReplicated) == 0x000020, "Member 'FGameplayEffectContext::AbilityInstanceNotReplicated' has a wrong offset!");
static_assert(offsetof(FGameplayEffectContext, AbilityLevel) == 0x000028, "Member 'FGameplayEffectContext::AbilityLevel' has a wrong offset!");
static_assert(offsetof(FGameplayEffectContext, SourceObject) == 0x00002C, "Member 'FGameplayEffectContext::SourceObject' has a wrong offset!");
static_assert(offsetof(FGameplayEffectContext, InstigatorAbilitySystemComponent) == 0x000034, "Member 'FGameplayEffectContext::InstigatorAbilitySystemComponent' has a wrong offset!");
static_assert(offsetof(FGameplayEffectContext, Actors) == 0x000040, "Member 'FGameplayEffectContext::Actors' has a wrong offset!");
static_assert(offsetof(FGameplayEffectContext, WorldOrigin) == 0x000060, "Member 'FGameplayEffectContext::WorldOrigin' has a wrong offset!");

// ScriptStruct GameplayAbilities.MovieSceneGameplayCueKey
// 0x0078 (0x0078 - 0x0000)
struct FMovieSceneGameplayCueKey final
{
public:
	struct FGameplayCueTag                        Cue;                                               // 0x0000(0x0008)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                Location;                                          // 0x0008(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                Normal;                                            // 0x0014(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   AttachSocketName;                                  // 0x0020(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         NormalizedMagnitude;                               // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneObjectBindingID             Instigator;                                        // 0x002C(0x0018)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneObjectBindingID             EffectCauser;                                      // 0x0044(0x0018)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12CC[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      PhysicalMaterial;                                  // 0x0060(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         GameplayEffectLevel;                               // 0x0068(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AbilityLevel;                                      // 0x006C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAttachToBinding;                                  // 0x0070(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12CD[0x7];                                     // 0x0071(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMovieSceneGameplayCueKey) == 0x000008, "Wrong alignment on FMovieSceneGameplayCueKey");
static_assert(sizeof(FMovieSceneGameplayCueKey) == 0x000078, "Wrong size on FMovieSceneGameplayCueKey");
static_assert(offsetof(FMovieSceneGameplayCueKey, Cue) == 0x000000, "Member 'FMovieSceneGameplayCueKey::Cue' has a wrong offset!");
static_assert(offsetof(FMovieSceneGameplayCueKey, Location) == 0x000008, "Member 'FMovieSceneGameplayCueKey::Location' has a wrong offset!");
static_assert(offsetof(FMovieSceneGameplayCueKey, Normal) == 0x000014, "Member 'FMovieSceneGameplayCueKey::Normal' has a wrong offset!");
static_assert(offsetof(FMovieSceneGameplayCueKey, AttachSocketName) == 0x000020, "Member 'FMovieSceneGameplayCueKey::AttachSocketName' has a wrong offset!");
static_assert(offsetof(FMovieSceneGameplayCueKey, NormalizedMagnitude) == 0x000028, "Member 'FMovieSceneGameplayCueKey::NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(FMovieSceneGameplayCueKey, Instigator) == 0x00002C, "Member 'FMovieSceneGameplayCueKey::Instigator' has a wrong offset!");
static_assert(offsetof(FMovieSceneGameplayCueKey, EffectCauser) == 0x000044, "Member 'FMovieSceneGameplayCueKey::EffectCauser' has a wrong offset!");
static_assert(offsetof(FMovieSceneGameplayCueKey, PhysicalMaterial) == 0x000060, "Member 'FMovieSceneGameplayCueKey::PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(FMovieSceneGameplayCueKey, GameplayEffectLevel) == 0x000068, "Member 'FMovieSceneGameplayCueKey::GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(FMovieSceneGameplayCueKey, AbilityLevel) == 0x00006C, "Member 'FMovieSceneGameplayCueKey::AbilityLevel' has a wrong offset!");
static_assert(offsetof(FMovieSceneGameplayCueKey, bAttachToBinding) == 0x000070, "Member 'FMovieSceneGameplayCueKey::bAttachToBinding' has a wrong offset!");

// ScriptStruct GameplayAbilities.MovieSceneGameplayCueChannel
// 0x0080 (0x0088 - 0x0008)
struct FMovieSceneGameplayCueChannel final : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                   KeyTimes;                                          // 0x0008(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneGameplayCueKey>      KeyValues;                                         // 0x0018(0x0010)(ZeroConstructor, AssetRegistrySearchable, NativeAccessSpecifierPrivate)
	uint8                                         Pad_12CE[0x60];                                    // 0x0028(0x0060)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMovieSceneGameplayCueChannel) == 0x000008, "Wrong alignment on FMovieSceneGameplayCueChannel");
static_assert(sizeof(FMovieSceneGameplayCueChannel) == 0x000088, "Wrong size on FMovieSceneGameplayCueChannel");
static_assert(offsetof(FMovieSceneGameplayCueChannel, KeyTimes) == 0x000008, "Member 'FMovieSceneGameplayCueChannel::KeyTimes' has a wrong offset!");
static_assert(offsetof(FMovieSceneGameplayCueChannel, KeyValues) == 0x000018, "Member 'FMovieSceneGameplayCueChannel::KeyValues' has a wrong offset!");

}
