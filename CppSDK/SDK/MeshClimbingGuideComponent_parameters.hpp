#pragma once

 

// Package: MeshClimbingGuideComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function MeshClimbingGuideComponent.MeshClimbingGuideComponent_C.ExecuteUbergraph_MeshClimbingGuideComponent
// 0x0020 (0x0020 - 0x0000)
struct MeshClimbingGuideComponent_C_ExecuteUbergraph_MeshClimbingGuideComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MeshClimbingGuideComponent_C_ExecuteUbergraph_MeshClimbingGuideComponent) == 0x000008, "Wrong alignment on MeshClimbingGuideComponent_C_ExecuteUbergraph_MeshClimbingGuideComponent");
static_assert(sizeof(MeshClimbingGuideComponent_C_ExecuteUbergraph_MeshClimbingGuideComponent) == 0x000020, "Wrong size on MeshClimbingGuideComponent_C_ExecuteUbergraph_MeshClimbingGuideComponent");
static_assert(offsetof(MeshClimbingGuideComponent_C_ExecuteUbergraph_MeshClimbingGuideComponent, EntryPoint) == 0x000000, "Member 'MeshClimbingGuideComponent_C_ExecuteUbergraph_MeshClimbingGuideComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(MeshClimbingGuideComponent_C_ExecuteUbergraph_MeshClimbingGuideComponent, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'MeshClimbingGuideComponent_C_ExecuteUbergraph_MeshClimbingGuideComponent::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(MeshClimbingGuideComponent_C_ExecuteUbergraph_MeshClimbingGuideComponent, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'MeshClimbingGuideComponent_C_ExecuteUbergraph_MeshClimbingGuideComponent::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(MeshClimbingGuideComponent_C_ExecuteUbergraph_MeshClimbingGuideComponent, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000010, "Member 'MeshClimbingGuideComponent_C_ExecuteUbergraph_MeshClimbingGuideComponent::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(MeshClimbingGuideComponent_C_ExecuteUbergraph_MeshClimbingGuideComponent, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'MeshClimbingGuideComponent_C_ExecuteUbergraph_MeshClimbingGuideComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MeshClimbingGuideComponent_C_ExecuteUbergraph_MeshClimbingGuideComponent, K2Node_Event_EndPlayReason) == 0x000019, "Member 'MeshClimbingGuideComponent_C_ExecuteUbergraph_MeshClimbingGuideComponent::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(MeshClimbingGuideComponent_C_ExecuteUbergraph_MeshClimbingGuideComponent, CallFunc_IsLocallyControlled_ReturnValue) == 0x00001A, "Member 'MeshClimbingGuideComponent_C_ExecuteUbergraph_MeshClimbingGuideComponent::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(MeshClimbingGuideComponent_C_ExecuteUbergraph_MeshClimbingGuideComponent, CallFunc_IsDedicatedServer_ReturnValue) == 0x00001B, "Member 'MeshClimbingGuideComponent_C_ExecuteUbergraph_MeshClimbingGuideComponent::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");

// Function MeshClimbingGuideComponent.MeshClimbingGuideComponent_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct MeshClimbingGuideComponent_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MeshClimbingGuideComponent_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on MeshClimbingGuideComponent_C_ReceiveEndPlay");
static_assert(sizeof(MeshClimbingGuideComponent_C_ReceiveEndPlay) == 0x000001, "Wrong size on MeshClimbingGuideComponent_C_ReceiveEndPlay");
static_assert(offsetof(MeshClimbingGuideComponent_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'MeshClimbingGuideComponent_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function MeshClimbingGuideComponent.MeshClimbingGuideComponent_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct MeshClimbingGuideComponent_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MeshClimbingGuideComponent_C_ReceiveTick) == 0x000004, "Wrong alignment on MeshClimbingGuideComponent_C_ReceiveTick");
static_assert(sizeof(MeshClimbingGuideComponent_C_ReceiveTick) == 0x000004, "Wrong size on MeshClimbingGuideComponent_C_ReceiveTick");
static_assert(offsetof(MeshClimbingGuideComponent_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'MeshClimbingGuideComponent_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function MeshClimbingGuideComponent.MeshClimbingGuideComponent_C.UpdateIcon
// 0x0001 (0x0001 - 0x0000)
struct MeshClimbingGuideComponent_C_UpdateIcon final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MeshClimbingGuideComponent_C_UpdateIcon) == 0x000001, "Wrong alignment on MeshClimbingGuideComponent_C_UpdateIcon");
static_assert(sizeof(MeshClimbingGuideComponent_C_UpdateIcon) == 0x000001, "Wrong size on MeshClimbingGuideComponent_C_UpdateIcon");
static_assert(offsetof(MeshClimbingGuideComponent_C_UpdateIcon, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'MeshClimbingGuideComponent_C_UpdateIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MeshClimbingGuideComponent.MeshClimbingGuideComponent_C.UpdateIcon_Climbing
// 0x0038 (0x0038 - 0x0000)
struct MeshClimbingGuideComponent_C_UpdateIcon_Climbing final
{
public:
	struct FVector                                ClimbingPointUILocation;                           // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSetClimbingPointUILocation;                      // 0x000C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D91[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D92[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMeshClimbingComponent*               CallFunc_GetMeshClimbingComponent_ReturnValue;     // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetPointLocation_Condition;               // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MeshClimbingGuideComponent_C_UpdateIcon_Climbing) == 0x000008, "Wrong alignment on MeshClimbingGuideComponent_C_UpdateIcon_Climbing");
static_assert(sizeof(MeshClimbingGuideComponent_C_UpdateIcon_Climbing) == 0x000038, "Wrong size on MeshClimbingGuideComponent_C_UpdateIcon_Climbing");
static_assert(offsetof(MeshClimbingGuideComponent_C_UpdateIcon_Climbing, ClimbingPointUILocation) == 0x000000, "Member 'MeshClimbingGuideComponent_C_UpdateIcon_Climbing::ClimbingPointUILocation' has a wrong offset!");
static_assert(offsetof(MeshClimbingGuideComponent_C_UpdateIcon_Climbing, IsSetClimbingPointUILocation) == 0x00000C, "Member 'MeshClimbingGuideComponent_C_UpdateIcon_Climbing::IsSetClimbingPointUILocation' has a wrong offset!");
static_assert(offsetof(MeshClimbingGuideComponent_C_UpdateIcon_Climbing, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000010, "Member 'MeshClimbingGuideComponent_C_UpdateIcon_Climbing::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MeshClimbingGuideComponent_C_UpdateIcon_Climbing, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000018, "Member 'MeshClimbingGuideComponent_C_UpdateIcon_Climbing::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(MeshClimbingGuideComponent_C_UpdateIcon_Climbing, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'MeshClimbingGuideComponent_C_UpdateIcon_Climbing::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MeshClimbingGuideComponent_C_UpdateIcon_Climbing, CallFunc_GetMeshClimbingComponent_ReturnValue) == 0x000028, "Member 'MeshClimbingGuideComponent_C_UpdateIcon_Climbing::CallFunc_GetMeshClimbingComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MeshClimbingGuideComponent_C_UpdateIcon_Climbing, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'MeshClimbingGuideComponent_C_UpdateIcon_Climbing::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MeshClimbingGuideComponent_C_UpdateIcon_Climbing, CallFunc_SetPointLocation_Condition) == 0x000031, "Member 'MeshClimbingGuideComponent_C_UpdateIcon_Climbing::CallFunc_SetPointLocation_Condition' has a wrong offset!");
static_assert(offsetof(MeshClimbingGuideComponent_C_UpdateIcon_Climbing, CallFunc_IsValid_ReturnValue_1) == 0x000032, "Member 'MeshClimbingGuideComponent_C_UpdateIcon_Climbing::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function MeshClimbingGuideComponent.MeshClimbingGuideComponent_C.RemoveWidgets
// 0x0001 (0x0001 - 0x0000)
struct MeshClimbingGuideComponent_C_RemoveWidgets final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MeshClimbingGuideComponent_C_RemoveWidgets) == 0x000001, "Wrong alignment on MeshClimbingGuideComponent_C_RemoveWidgets");
static_assert(sizeof(MeshClimbingGuideComponent_C_RemoveWidgets) == 0x000001, "Wrong size on MeshClimbingGuideComponent_C_RemoveWidgets");
static_assert(offsetof(MeshClimbingGuideComponent_C_RemoveWidgets, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'MeshClimbingGuideComponent_C_RemoveWidgets::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MeshClimbingGuideComponent.MeshClimbingGuideComponent_C.InitializeAtFirstLoadingComplete
// 0x0038 (0x0038 - 0x0000)
struct MeshClimbingGuideComponent_C_InitializeAtFirstLoadingComplete final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanBattleCurrentMapLevel_ReturnValue;     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D93[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9D94[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPointClimbingClimbingPoint_C*          CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D95[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MeshClimbingGuideComponent_C_InitializeAtFirstLoadingComplete) == 0x000008, "Wrong alignment on MeshClimbingGuideComponent_C_InitializeAtFirstLoadingComplete");
static_assert(sizeof(MeshClimbingGuideComponent_C_InitializeAtFirstLoadingComplete) == 0x000038, "Wrong size on MeshClimbingGuideComponent_C_InitializeAtFirstLoadingComplete");
static_assert(offsetof(MeshClimbingGuideComponent_C_InitializeAtFirstLoadingComplete, Temp_int_Variable) == 0x000000, "Member 'MeshClimbingGuideComponent_C_InitializeAtFirstLoadingComplete::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MeshClimbingGuideComponent_C_InitializeAtFirstLoadingComplete, CallFunc_CanBattleCurrentMapLevel_ReturnValue) == 0x000004, "Member 'MeshClimbingGuideComponent_C_InitializeAtFirstLoadingComplete::CallFunc_CanBattleCurrentMapLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(MeshClimbingGuideComponent_C_InitializeAtFirstLoadingComplete, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000005, "Member 'MeshClimbingGuideComponent_C_InitializeAtFirstLoadingComplete::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MeshClimbingGuideComponent_C_InitializeAtFirstLoadingComplete, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'MeshClimbingGuideComponent_C_InitializeAtFirstLoadingComplete::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MeshClimbingGuideComponent_C_InitializeAtFirstLoadingComplete, CallFunc_Create_ReturnValue) == 0x000010, "Member 'MeshClimbingGuideComponent_C_InitializeAtFirstLoadingComplete::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MeshClimbingGuideComponent_C_InitializeAtFirstLoadingComplete, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'MeshClimbingGuideComponent_C_InitializeAtFirstLoadingComplete::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MeshClimbingGuideComponent_C_InitializeAtFirstLoadingComplete, CallFunc_IsDedicatedServer_ReturnValue) == 0x000019, "Member 'MeshClimbingGuideComponent_C_InitializeAtFirstLoadingComplete::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(MeshClimbingGuideComponent_C_InitializeAtFirstLoadingComplete, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'MeshClimbingGuideComponent_C_InitializeAtFirstLoadingComplete::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(MeshClimbingGuideComponent_C_InitializeAtFirstLoadingComplete, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000028, "Member 'MeshClimbingGuideComponent_C_InitializeAtFirstLoadingComplete::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(MeshClimbingGuideComponent_C_InitializeAtFirstLoadingComplete, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'MeshClimbingGuideComponent_C_InitializeAtFirstLoadingComplete::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MeshClimbingGuideComponent_C_InitializeAtFirstLoadingComplete, CallFunc_IsLocallyControlled_ReturnValue) == 0x000031, "Member 'MeshClimbingGuideComponent_C_InitializeAtFirstLoadingComplete::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");

}

