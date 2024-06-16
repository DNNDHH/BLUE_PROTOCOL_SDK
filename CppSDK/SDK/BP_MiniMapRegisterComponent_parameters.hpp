#pragma once

 

// Package: BP_MiniMapRegisterComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.ExecuteUbergraph_BP_MiniMapRegisterComponent
// 0x0078 (0x0078 - 0x0000)
struct BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_9ACC[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9ACD[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9ACE[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9ACF[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBEnemyCharacter*                      K2Node_DynamicCast_AsSBEnemy_Character;            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AD0[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBEnemyCharacter*                      K2Node_DynamicCast_AsSBEnemy_Character_1;          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CreateIcon_Result;                        // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent) == 0x000008, "Wrong alignment on BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent");
static_assert(sizeof(BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent) == 0x000078, "Wrong size on BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent, EntryPoint) == 0x000000, "Member 'BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000028, "Member 'BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent, K2Node_Event_EndPlayReason) == 0x000030, "Member 'BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent, K2Node_Event_DeltaSeconds) == 0x000034, "Member 'BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent, CallFunc_IsDedicatedServer_ReturnValue) == 0x000038, "Member 'BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent, CallFunc_GetOwner_ReturnValue) == 0x000040, "Member 'BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x000048, "Member 'BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent, K2Node_DynamicCast_AsSBEnemy_Character) == 0x000050, "Member 'BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent::K2Node_DynamicCast_AsSBEnemy_Character' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent, CallFunc_GetOwner_ReturnValue_1) == 0x000060, "Member 'BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent, K2Node_DynamicCast_AsSBEnemy_Character_1) == 0x000068, "Member 'BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent::K2Node_DynamicCast_AsSBEnemy_Character_1' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent, K2Node_DynamicCast_bSuccess_1) == 0x000070, "Member 'BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent, CallFunc_CreateIcon_Result) == 0x000071, "Member 'BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent::CallFunc_CreateIcon_Result' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x000072, "Member 'BP_MiniMapRegisterComponent_C_ExecuteUbergraph_BP_MiniMapRegisterComponent::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");

// Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_MiniMapRegisterComponent_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MiniMapRegisterComponent_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_MiniMapRegisterComponent_C_ReceiveTick");
static_assert(sizeof(BP_MiniMapRegisterComponent_C_ReceiveTick) == 0x000004, "Wrong size on BP_MiniMapRegisterComponent_C_ReceiveTick");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_MiniMapRegisterComponent_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_MiniMapRegisterComponent_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MiniMapRegisterComponent_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_MiniMapRegisterComponent_C_ReceiveEndPlay");
static_assert(sizeof(BP_MiniMapRegisterComponent_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_MiniMapRegisterComponent_C_ReceiveEndPlay");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_MiniMapRegisterComponent_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.CreateIcon
// 0x0006 (0x0006 - 0x0000)
struct BP_MiniMapRegisterComponent_C_CreateIcon final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsResultWholeMapIcon;                              // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsResultMiniMapIcon;                               // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CreateWholeMapIcon_Result;                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CreateMiniMapIcon_Result;                 // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MiniMapRegisterComponent_C_CreateIcon) == 0x000001, "Wrong alignment on BP_MiniMapRegisterComponent_C_CreateIcon");
static_assert(sizeof(BP_MiniMapRegisterComponent_C_CreateIcon) == 0x000006, "Wrong size on BP_MiniMapRegisterComponent_C_CreateIcon");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_CreateIcon, Result) == 0x000000, "Member 'BP_MiniMapRegisterComponent_C_CreateIcon::Result' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_CreateIcon, IsResultWholeMapIcon) == 0x000001, "Member 'BP_MiniMapRegisterComponent_C_CreateIcon::IsResultWholeMapIcon' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_CreateIcon, IsResultMiniMapIcon) == 0x000002, "Member 'BP_MiniMapRegisterComponent_C_CreateIcon::IsResultMiniMapIcon' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_CreateIcon, CallFunc_CreateWholeMapIcon_Result) == 0x000003, "Member 'BP_MiniMapRegisterComponent_C_CreateIcon::CallFunc_CreateWholeMapIcon_Result' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_CreateIcon, CallFunc_BooleanAND_ReturnValue) == 0x000004, "Member 'BP_MiniMapRegisterComponent_C_CreateIcon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_CreateIcon, CallFunc_CreateMiniMapIcon_Result) == 0x000005, "Member 'BP_MiniMapRegisterComponent_C_CreateIcon::CallFunc_CreateMiniMapIcon_Result' has a wrong offset!");

// Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.OnTick
// 0x0001 (0x0001 - 0x0000)
struct BP_MiniMapRegisterComponent_C_OnTick final
{
public:
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MiniMapRegisterComponent_C_OnTick) == 0x000001, "Wrong alignment on BP_MiniMapRegisterComponent_C_OnTick");
static_assert(sizeof(BP_MiniMapRegisterComponent_C_OnTick) == 0x000001, "Wrong size on BP_MiniMapRegisterComponent_C_OnTick");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_OnTick, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000000, "Member 'BP_MiniMapRegisterComponent_C_OnTick::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.CreateMiniMapIcon
// 0x0040 (0x0040 - 0x0000)
struct BP_MiniMapRegisterComponent_C_CreateMiniMapIcon final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AD1[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMiniMapWidget*                       CallFunc_GetMiniMapWidget_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AD2[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMiniMapIconsBase*                    CallFunc_GetIcons_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMiniMapIcons*                        K2Node_DynamicCast_AsSBMini_Map_Icons;             // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AD3[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMiniMapIconBase*                     CallFunc_CreateEnemyIcon_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MiniMapRegisterComponent_C_CreateMiniMapIcon) == 0x000008, "Wrong alignment on BP_MiniMapRegisterComponent_C_CreateMiniMapIcon");
static_assert(sizeof(BP_MiniMapRegisterComponent_C_CreateMiniMapIcon) == 0x000040, "Wrong size on BP_MiniMapRegisterComponent_C_CreateMiniMapIcon");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_CreateMiniMapIcon, Result) == 0x000000, "Member 'BP_MiniMapRegisterComponent_C_CreateMiniMapIcon::Result' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_CreateMiniMapIcon, CallFunc_GetMiniMapWidget_ReturnValue) == 0x000008, "Member 'BP_MiniMapRegisterComponent_C_CreateMiniMapIcon::CallFunc_GetMiniMapWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_CreateMiniMapIcon, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'BP_MiniMapRegisterComponent_C_CreateMiniMapIcon::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_CreateMiniMapIcon, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_MiniMapRegisterComponent_C_CreateMiniMapIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_CreateMiniMapIcon, CallFunc_GetIcons_ReturnValue) == 0x000020, "Member 'BP_MiniMapRegisterComponent_C_CreateMiniMapIcon::CallFunc_GetIcons_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_CreateMiniMapIcon, K2Node_DynamicCast_AsSBMini_Map_Icons) == 0x000028, "Member 'BP_MiniMapRegisterComponent_C_CreateMiniMapIcon::K2Node_DynamicCast_AsSBMini_Map_Icons' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_CreateMiniMapIcon, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_MiniMapRegisterComponent_C_CreateMiniMapIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_CreateMiniMapIcon, CallFunc_CreateEnemyIcon_ReturnValue) == 0x000038, "Member 'BP_MiniMapRegisterComponent_C_CreateMiniMapIcon::CallFunc_CreateEnemyIcon_ReturnValue' has a wrong offset!");

// Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.DeleteMiniMapIcon
// 0x0028 (0x0028 - 0x0000)
struct BP_MiniMapRegisterComponent_C_DeleteMiniMapIcon final
{
public:
	class USBMiniMapWidget*                       CallFunc_GetMiniMapWidget_ReturnValue;             // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AD4[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMiniMapIconsBase*                    CallFunc_GetIcons_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMiniMapIcons*                        K2Node_DynamicCast_AsSBMini_Map_Icons;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MiniMapRegisterComponent_C_DeleteMiniMapIcon) == 0x000008, "Wrong alignment on BP_MiniMapRegisterComponent_C_DeleteMiniMapIcon");
static_assert(sizeof(BP_MiniMapRegisterComponent_C_DeleteMiniMapIcon) == 0x000028, "Wrong size on BP_MiniMapRegisterComponent_C_DeleteMiniMapIcon");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_DeleteMiniMapIcon, CallFunc_GetMiniMapWidget_ReturnValue) == 0x000000, "Member 'BP_MiniMapRegisterComponent_C_DeleteMiniMapIcon::CallFunc_GetMiniMapWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_DeleteMiniMapIcon, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_MiniMapRegisterComponent_C_DeleteMiniMapIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_DeleteMiniMapIcon, CallFunc_IsValid_ReturnValue_1) == 0x000009, "Member 'BP_MiniMapRegisterComponent_C_DeleteMiniMapIcon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_DeleteMiniMapIcon, CallFunc_GetIcons_ReturnValue) == 0x000010, "Member 'BP_MiniMapRegisterComponent_C_DeleteMiniMapIcon::CallFunc_GetIcons_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_DeleteMiniMapIcon, K2Node_DynamicCast_AsSBMini_Map_Icons) == 0x000018, "Member 'BP_MiniMapRegisterComponent_C_DeleteMiniMapIcon::K2Node_DynamicCast_AsSBMini_Map_Icons' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_DeleteMiniMapIcon, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_MiniMapRegisterComponent_C_DeleteMiniMapIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.CreateWholeMapIcon
// 0x0040 (0x0040 - 0x0000)
struct BP_MiniMapRegisterComponent_C_CreateWholeMapIcon final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AD5[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBWholeMap*                            CallFunc_GetWholeMapWidget_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AD6[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMiniMapIconsBase*                    CallFunc_GetIcons_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBWholeIcons*                          K2Node_DynamicCast_AsSBWhole_Icons;                // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AD7[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMapIcon*                             CallFunc_CreateEnemyIcon_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MiniMapRegisterComponent_C_CreateWholeMapIcon) == 0x000008, "Wrong alignment on BP_MiniMapRegisterComponent_C_CreateWholeMapIcon");
static_assert(sizeof(BP_MiniMapRegisterComponent_C_CreateWholeMapIcon) == 0x000040, "Wrong size on BP_MiniMapRegisterComponent_C_CreateWholeMapIcon");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_CreateWholeMapIcon, Result) == 0x000000, "Member 'BP_MiniMapRegisterComponent_C_CreateWholeMapIcon::Result' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_CreateWholeMapIcon, CallFunc_GetWholeMapWidget_ReturnValue) == 0x000008, "Member 'BP_MiniMapRegisterComponent_C_CreateWholeMapIcon::CallFunc_GetWholeMapWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_CreateWholeMapIcon, CallFunc_GetOwner_ReturnValue) == 0x000010, "Member 'BP_MiniMapRegisterComponent_C_CreateWholeMapIcon::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_CreateWholeMapIcon, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'BP_MiniMapRegisterComponent_C_CreateWholeMapIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_CreateWholeMapIcon, CallFunc_GetIcons_ReturnValue) == 0x000020, "Member 'BP_MiniMapRegisterComponent_C_CreateWholeMapIcon::CallFunc_GetIcons_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_CreateWholeMapIcon, K2Node_DynamicCast_AsSBWhole_Icons) == 0x000028, "Member 'BP_MiniMapRegisterComponent_C_CreateWholeMapIcon::K2Node_DynamicCast_AsSBWhole_Icons' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_CreateWholeMapIcon, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'BP_MiniMapRegisterComponent_C_CreateWholeMapIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_CreateWholeMapIcon, CallFunc_CreateEnemyIcon_ReturnValue) == 0x000038, "Member 'BP_MiniMapRegisterComponent_C_CreateWholeMapIcon::CallFunc_CreateEnemyIcon_ReturnValue' has a wrong offset!");

// Function BP_MiniMapRegisterComponent.BP_MiniMapRegisterComponent_C.DeleteWholeMapIcon
// 0x0028 (0x0028 - 0x0000)
struct BP_MiniMapRegisterComponent_C_DeleteWholeMapIcon final
{
public:
	class USBWholeMap*                            CallFunc_GetWholeMapWidget_ReturnValue;            // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AD8[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMiniMapIconsBase*                    CallFunc_GetIcons_ReturnValue;                     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBWholeIcons*                          K2Node_DynamicCast_AsSBWhole_Icons;                // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MiniMapRegisterComponent_C_DeleteWholeMapIcon) == 0x000008, "Wrong alignment on BP_MiniMapRegisterComponent_C_DeleteWholeMapIcon");
static_assert(sizeof(BP_MiniMapRegisterComponent_C_DeleteWholeMapIcon) == 0x000028, "Wrong size on BP_MiniMapRegisterComponent_C_DeleteWholeMapIcon");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_DeleteWholeMapIcon, CallFunc_GetWholeMapWidget_ReturnValue) == 0x000000, "Member 'BP_MiniMapRegisterComponent_C_DeleteWholeMapIcon::CallFunc_GetWholeMapWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_DeleteWholeMapIcon, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_MiniMapRegisterComponent_C_DeleteWholeMapIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_DeleteWholeMapIcon, CallFunc_IsValid_ReturnValue_1) == 0x000009, "Member 'BP_MiniMapRegisterComponent_C_DeleteWholeMapIcon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_DeleteWholeMapIcon, CallFunc_GetIcons_ReturnValue) == 0x000010, "Member 'BP_MiniMapRegisterComponent_C_DeleteWholeMapIcon::CallFunc_GetIcons_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_DeleteWholeMapIcon, K2Node_DynamicCast_AsSBWhole_Icons) == 0x000018, "Member 'BP_MiniMapRegisterComponent_C_DeleteWholeMapIcon::K2Node_DynamicCast_AsSBWhole_Icons' has a wrong offset!");
static_assert(offsetof(BP_MiniMapRegisterComponent_C_DeleteWholeMapIcon, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_MiniMapRegisterComponent_C_DeleteWholeMapIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

