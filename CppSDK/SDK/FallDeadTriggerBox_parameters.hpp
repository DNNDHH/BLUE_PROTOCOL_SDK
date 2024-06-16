#pragma once

 

// Package: FallDeadTriggerBox

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function FallDeadTriggerBox.FallDeadTriggerBox_C.ExecuteUbergraph_FallDeadTriggerBox
// 0x0050 (0x0050 - 0x0000)
struct FallDeadTriggerBox_C_ExecuteUbergraph_FallDeadTriggerBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSoundManager_IsValid;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A64[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSoundManager*                        CallFunc_GetSoundManager_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APlayerStart*>                   CallFunc_GetAllActorsOfClass_OutActors;            // 0x0018(0x0010)(ReferenceParm)
	class ASBEnemyCharacter*                      K2Node_DynamicCast_AsSBEnemy_Character;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A65[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A66[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBCharacter*                           K2Node_DynamicCast_AsSBCharacter;                  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FallDeadTriggerBox_C_ExecuteUbergraph_FallDeadTriggerBox) == 0x000008, "Wrong alignment on FallDeadTriggerBox_C_ExecuteUbergraph_FallDeadTriggerBox");
static_assert(sizeof(FallDeadTriggerBox_C_ExecuteUbergraph_FallDeadTriggerBox) == 0x000050, "Wrong size on FallDeadTriggerBox_C_ExecuteUbergraph_FallDeadTriggerBox");
static_assert(offsetof(FallDeadTriggerBox_C_ExecuteUbergraph_FallDeadTriggerBox, EntryPoint) == 0x000000, "Member 'FallDeadTriggerBox_C_ExecuteUbergraph_FallDeadTriggerBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(FallDeadTriggerBox_C_ExecuteUbergraph_FallDeadTriggerBox, CallFunc_GetSoundManager_IsValid) == 0x000004, "Member 'FallDeadTriggerBox_C_ExecuteUbergraph_FallDeadTriggerBox::CallFunc_GetSoundManager_IsValid' has a wrong offset!");
static_assert(offsetof(FallDeadTriggerBox_C_ExecuteUbergraph_FallDeadTriggerBox, CallFunc_GetSoundManager_ReturnValue) == 0x000008, "Member 'FallDeadTriggerBox_C_ExecuteUbergraph_FallDeadTriggerBox::CallFunc_GetSoundManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FallDeadTriggerBox_C_ExecuteUbergraph_FallDeadTriggerBox, K2Node_Event_OtherActor) == 0x000010, "Member 'FallDeadTriggerBox_C_ExecuteUbergraph_FallDeadTriggerBox::K2Node_Event_OtherActor' has a wrong offset!");
static_assert(offsetof(FallDeadTriggerBox_C_ExecuteUbergraph_FallDeadTriggerBox, CallFunc_GetAllActorsOfClass_OutActors) == 0x000018, "Member 'FallDeadTriggerBox_C_ExecuteUbergraph_FallDeadTriggerBox::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(FallDeadTriggerBox_C_ExecuteUbergraph_FallDeadTriggerBox, K2Node_DynamicCast_AsSBEnemy_Character) == 0x000028, "Member 'FallDeadTriggerBox_C_ExecuteUbergraph_FallDeadTriggerBox::K2Node_DynamicCast_AsSBEnemy_Character' has a wrong offset!");
static_assert(offsetof(FallDeadTriggerBox_C_ExecuteUbergraph_FallDeadTriggerBox, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'FallDeadTriggerBox_C_ExecuteUbergraph_FallDeadTriggerBox::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(FallDeadTriggerBox_C_ExecuteUbergraph_FallDeadTriggerBox, CallFunc_Array_Length_ReturnValue) == 0x000034, "Member 'FallDeadTriggerBox_C_ExecuteUbergraph_FallDeadTriggerBox::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FallDeadTriggerBox_C_ExecuteUbergraph_FallDeadTriggerBox, CallFunc_Greater_IntInt_ReturnValue) == 0x000038, "Member 'FallDeadTriggerBox_C_ExecuteUbergraph_FallDeadTriggerBox::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FallDeadTriggerBox_C_ExecuteUbergraph_FallDeadTriggerBox, K2Node_DynamicCast_AsSBCharacter) == 0x000040, "Member 'FallDeadTriggerBox_C_ExecuteUbergraph_FallDeadTriggerBox::K2Node_DynamicCast_AsSBCharacter' has a wrong offset!");
static_assert(offsetof(FallDeadTriggerBox_C_ExecuteUbergraph_FallDeadTriggerBox, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'FallDeadTriggerBox_C_ExecuteUbergraph_FallDeadTriggerBox::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(FallDeadTriggerBox_C_ExecuteUbergraph_FallDeadTriggerBox, CallFunc_IsLocallyControlled_ReturnValue) == 0x000049, "Member 'FallDeadTriggerBox_C_ExecuteUbergraph_FallDeadTriggerBox::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");

// Function FallDeadTriggerBox.FallDeadTriggerBox_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct FallDeadTriggerBox_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FallDeadTriggerBox_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on FallDeadTriggerBox_C_ReceiveActorBeginOverlap");
static_assert(sizeof(FallDeadTriggerBox_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on FallDeadTriggerBox_C_ReceiveActorBeginOverlap");
static_assert(offsetof(FallDeadTriggerBox_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'FallDeadTriggerBox_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

// Function FallDeadTriggerBox.FallDeadTriggerBox_C.SetStaticMeshScale
// 0x0018 (0x0018 - 0x0000)
struct FallDeadTriggerBox_C_SetStaticMeshScale final
{
public:
	class UBoxComponent*                          K2Node_DynamicCast_AsBox_Collision;                // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9A67[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Divide_VectorFloat_ReturnValue;           // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FallDeadTriggerBox_C_SetStaticMeshScale) == 0x000008, "Wrong alignment on FallDeadTriggerBox_C_SetStaticMeshScale");
static_assert(sizeof(FallDeadTriggerBox_C_SetStaticMeshScale) == 0x000018, "Wrong size on FallDeadTriggerBox_C_SetStaticMeshScale");
static_assert(offsetof(FallDeadTriggerBox_C_SetStaticMeshScale, K2Node_DynamicCast_AsBox_Collision) == 0x000000, "Member 'FallDeadTriggerBox_C_SetStaticMeshScale::K2Node_DynamicCast_AsBox_Collision' has a wrong offset!");
static_assert(offsetof(FallDeadTriggerBox_C_SetStaticMeshScale, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'FallDeadTriggerBox_C_SetStaticMeshScale::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(FallDeadTriggerBox_C_SetStaticMeshScale, CallFunc_Divide_VectorFloat_ReturnValue) == 0x00000C, "Member 'FallDeadTriggerBox_C_SetStaticMeshScale::CallFunc_Divide_VectorFloat_ReturnValue' has a wrong offset!");

}

