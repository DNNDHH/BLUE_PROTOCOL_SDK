#pragma once

 

// Package: ObjectSelectCursorComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.ExecuteUbergraph_ObjectSelectCursorComponent
// 0x000C (0x000C - 0x0000)
struct ObjectSelectCursorComponent_C_ExecuteUbergraph_ObjectSelectCursorComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ObjectSelectCursorComponent_C_ExecuteUbergraph_ObjectSelectCursorComponent) == 0x000004, "Wrong alignment on ObjectSelectCursorComponent_C_ExecuteUbergraph_ObjectSelectCursorComponent");
static_assert(sizeof(ObjectSelectCursorComponent_C_ExecuteUbergraph_ObjectSelectCursorComponent) == 0x00000C, "Wrong size on ObjectSelectCursorComponent_C_ExecuteUbergraph_ObjectSelectCursorComponent");
static_assert(offsetof(ObjectSelectCursorComponent_C_ExecuteUbergraph_ObjectSelectCursorComponent, EntryPoint) == 0x000000, "Member 'ObjectSelectCursorComponent_C_ExecuteUbergraph_ObjectSelectCursorComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_ExecuteUbergraph_ObjectSelectCursorComponent, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'ObjectSelectCursorComponent_C_ExecuteUbergraph_ObjectSelectCursorComponent::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_ExecuteUbergraph_ObjectSelectCursorComponent, CallFunc_IsDedicatedServer_ReturnValue) == 0x000008, "Member 'ObjectSelectCursorComponent_C_ExecuteUbergraph_ObjectSelectCursorComponent::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");

// Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct ObjectSelectCursorComponent_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ObjectSelectCursorComponent_C_ReceiveTick) == 0x000004, "Wrong alignment on ObjectSelectCursorComponent_C_ReceiveTick");
static_assert(sizeof(ObjectSelectCursorComponent_C_ReceiveTick) == 0x000004, "Wrong size on ObjectSelectCursorComponent_C_ReceiveTick");
static_assert(offsetof(ObjectSelectCursorComponent_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'ObjectSelectCursorComponent_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.GetDisplayLocation
// 0x0038 (0x0038 - 0x0000)
struct ObjectSelectCursorComponent_C_GetDisplayLocation final
{
public:
	struct FSBInteractionInfo                     InteractionInfo;                                   // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	struct FVector                                DisplayLocation;                                   // 0x0018(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D88[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetSelectCursorLocation_ReturnValue;      // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ObjectSelectCursorComponent_C_GetDisplayLocation) == 0x000004, "Wrong alignment on ObjectSelectCursorComponent_C_GetDisplayLocation");
static_assert(sizeof(ObjectSelectCursorComponent_C_GetDisplayLocation) == 0x000038, "Wrong size on ObjectSelectCursorComponent_C_GetDisplayLocation");
static_assert(offsetof(ObjectSelectCursorComponent_C_GetDisplayLocation, InteractionInfo) == 0x000000, "Member 'ObjectSelectCursorComponent_C_GetDisplayLocation::InteractionInfo' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_GetDisplayLocation, DisplayLocation) == 0x000018, "Member 'ObjectSelectCursorComponent_C_GetDisplayLocation::DisplayLocation' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_GetDisplayLocation, CallFunc_IsValid_ReturnValue) == 0x000024, "Member 'ObjectSelectCursorComponent_C_GetDisplayLocation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_GetDisplayLocation, CallFunc_GetSelectCursorLocation_ReturnValue) == 0x000028, "Member 'ObjectSelectCursorComponent_C_GetDisplayLocation::CallFunc_GetSelectCursorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_GetDisplayLocation, K2Node_SwitchEnum_CmpSuccess) == 0x000034, "Member 'ObjectSelectCursorComponent_C_GetDisplayLocation::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.UpdateDisplayLocation
// 0x0118 (0x0118 - 0x0000)
struct ObjectSelectCursorComponent_C_UpdateDisplayLocation final
{
public:
	bool                                          bSucs;                                             // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetUIVisibleSetting_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D89[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9D8A[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D8B[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D8C[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerInteractionComponent*          CallFunc_GetPlayerInteractionComponent_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D8D[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBInteractionInfo                     CallFunc_GetCurrentInteractionInfo_ReturnValue;    // 0x0054(0x0018)(NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_GetDisplayLocation_DisplayLocation;       // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D8E[0x2];                                     // 0x007A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x007C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult; // 0x0088(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ObjectSelectCursorComponent_C_UpdateDisplayLocation) == 0x000008, "Wrong alignment on ObjectSelectCursorComponent_C_UpdateDisplayLocation");
static_assert(sizeof(ObjectSelectCursorComponent_C_UpdateDisplayLocation) == 0x000118, "Wrong size on ObjectSelectCursorComponent_C_UpdateDisplayLocation");
static_assert(offsetof(ObjectSelectCursorComponent_C_UpdateDisplayLocation, bSucs) == 0x000000, "Member 'ObjectSelectCursorComponent_C_UpdateDisplayLocation::bSucs' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_UpdateDisplayLocation, Temp_byte_Variable) == 0x000001, "Member 'ObjectSelectCursorComponent_C_UpdateDisplayLocation::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_UpdateDisplayLocation, Temp_byte_Variable_1) == 0x000002, "Member 'ObjectSelectCursorComponent_C_UpdateDisplayLocation::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_UpdateDisplayLocation, Temp_bool_Variable) == 0x000003, "Member 'ObjectSelectCursorComponent_C_UpdateDisplayLocation::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_UpdateDisplayLocation, CallFunc_GetUIVisibleSetting_ReturnValue) == 0x000004, "Member 'ObjectSelectCursorComponent_C_UpdateDisplayLocation::CallFunc_GetUIVisibleSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_UpdateDisplayLocation, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'ObjectSelectCursorComponent_C_UpdateDisplayLocation::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_UpdateDisplayLocation, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000008, "Member 'ObjectSelectCursorComponent_C_UpdateDisplayLocation::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_UpdateDisplayLocation, K2Node_Select_Default) == 0x000010, "Member 'ObjectSelectCursorComponent_C_UpdateDisplayLocation::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_UpdateDisplayLocation, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000018, "Member 'ObjectSelectCursorComponent_C_UpdateDisplayLocation::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_UpdateDisplayLocation, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'ObjectSelectCursorComponent_C_UpdateDisplayLocation::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_UpdateDisplayLocation, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000028, "Member 'ObjectSelectCursorComponent_C_UpdateDisplayLocation::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_UpdateDisplayLocation, CallFunc_IsValid_ReturnValue) == 0x000034, "Member 'ObjectSelectCursorComponent_C_UpdateDisplayLocation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_UpdateDisplayLocation, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000038, "Member 'ObjectSelectCursorComponent_C_UpdateDisplayLocation::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_UpdateDisplayLocation, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'ObjectSelectCursorComponent_C_UpdateDisplayLocation::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_UpdateDisplayLocation, CallFunc_GetPlayerInteractionComponent_ReturnValue) == 0x000048, "Member 'ObjectSelectCursorComponent_C_UpdateDisplayLocation::CallFunc_GetPlayerInteractionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_UpdateDisplayLocation, CallFunc_IsLocallyControlled_ReturnValue) == 0x000050, "Member 'ObjectSelectCursorComponent_C_UpdateDisplayLocation::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_UpdateDisplayLocation, CallFunc_IsValid_ReturnValue_1) == 0x000051, "Member 'ObjectSelectCursorComponent_C_UpdateDisplayLocation::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_UpdateDisplayLocation, CallFunc_GetCurrentInteractionInfo_ReturnValue) == 0x000054, "Member 'ObjectSelectCursorComponent_C_UpdateDisplayLocation::CallFunc_GetCurrentInteractionInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_UpdateDisplayLocation, CallFunc_GetDisplayLocation_DisplayLocation) == 0x00006C, "Member 'ObjectSelectCursorComponent_C_UpdateDisplayLocation::CallFunc_GetDisplayLocation_DisplayLocation' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_UpdateDisplayLocation, CallFunc_IsValid_ReturnValue_2) == 0x000078, "Member 'ObjectSelectCursorComponent_C_UpdateDisplayLocation::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_UpdateDisplayLocation, CallFunc_BooleanOR_ReturnValue) == 0x000079, "Member 'ObjectSelectCursorComponent_C_UpdateDisplayLocation::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_UpdateDisplayLocation, CallFunc_FindLookAtRotation_ReturnValue) == 0x00007C, "Member 'ObjectSelectCursorComponent_C_UpdateDisplayLocation::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_UpdateDisplayLocation, CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult) == 0x000088, "Member 'ObjectSelectCursorComponent_C_UpdateDisplayLocation::CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_UpdateDisplayLocation, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000110, "Member 'ObjectSelectCursorComponent_C_UpdateDisplayLocation::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.InitializeAtFirstLoadingComplete
// 0x0018 (0x0018 - 0x0000)
struct ObjectSelectCursorComponent_C_InitializeAtFirstLoadingComplete final
{
public:
	bool                                          CallFunc_IsLocallyControlled_bIsLocallyControlled; // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D8F[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ObjectSelectCursorComponent_C_InitializeAtFirstLoadingComplete) == 0x000008, "Wrong alignment on ObjectSelectCursorComponent_C_InitializeAtFirstLoadingComplete");
static_assert(sizeof(ObjectSelectCursorComponent_C_InitializeAtFirstLoadingComplete) == 0x000018, "Wrong size on ObjectSelectCursorComponent_C_InitializeAtFirstLoadingComplete");
static_assert(offsetof(ObjectSelectCursorComponent_C_InitializeAtFirstLoadingComplete, CallFunc_IsLocallyControlled_bIsLocallyControlled) == 0x000000, "Member 'ObjectSelectCursorComponent_C_InitializeAtFirstLoadingComplete::CallFunc_IsLocallyControlled_bIsLocallyControlled' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_InitializeAtFirstLoadingComplete, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000008, "Member 'ObjectSelectCursorComponent_C_InitializeAtFirstLoadingComplete::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_InitializeAtFirstLoadingComplete, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'ObjectSelectCursorComponent_C_InitializeAtFirstLoadingComplete::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function ObjectSelectCursorComponent.ObjectSelectCursorComponent_C.IsLocallyControlled
// 0x0020 (0x0020 - 0x0000)
struct ObjectSelectCursorComponent_C_IsLocallyControlled final
{
public:
	bool                                          bIsLocallyControlled;                              // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D90[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_DynamicCast_AsPawn;                         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ObjectSelectCursorComponent_C_IsLocallyControlled) == 0x000008, "Wrong alignment on ObjectSelectCursorComponent_C_IsLocallyControlled");
static_assert(sizeof(ObjectSelectCursorComponent_C_IsLocallyControlled) == 0x000020, "Wrong size on ObjectSelectCursorComponent_C_IsLocallyControlled");
static_assert(offsetof(ObjectSelectCursorComponent_C_IsLocallyControlled, bIsLocallyControlled) == 0x000000, "Member 'ObjectSelectCursorComponent_C_IsLocallyControlled::bIsLocallyControlled' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_IsLocallyControlled, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'ObjectSelectCursorComponent_C_IsLocallyControlled::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_IsLocallyControlled, K2Node_DynamicCast_AsPawn) == 0x000010, "Member 'ObjectSelectCursorComponent_C_IsLocallyControlled::K2Node_DynamicCast_AsPawn' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_IsLocallyControlled, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ObjectSelectCursorComponent_C_IsLocallyControlled::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ObjectSelectCursorComponent_C_IsLocallyControlled, CallFunc_IsLocallyControlled_ReturnValue) == 0x000019, "Member 'ObjectSelectCursorComponent_C_IsLocallyControlled::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");

}

