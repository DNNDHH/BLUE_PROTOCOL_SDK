#pragma once

 

// Package: BP_CampDeactivateStatusAliment

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_CampDeactivateStatusAliment.BP_CampDeactivateStatusAliment_C.Received_Notify
// 0x0078 (0x0078 - 0x0000)
struct BP_CampDeactivateStatusAliment_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AE0[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCampCollisionCount_ReturnValue;         // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSheathe_ReturnValue;                    // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFindByEnemy_ReturnValue;                // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AE1[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;              // 0x0030(0x0010)(NoDestructor)
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle_1;            // 0x0040(0x0010)(NoDestructor)
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle_2;            // 0x0050(0x0010)(NoDestructor)
	bool                                          CallFunc_IsCurrentMapLevel_ReturnValue;            // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AE2[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle_3;            // 0x0068(0x0010)(NoDestructor)
};
static_assert(alignof(BP_CampDeactivateStatusAliment_C_Received_Notify) == 0x000008, "Wrong alignment on BP_CampDeactivateStatusAliment_C_Received_Notify");
static_assert(sizeof(BP_CampDeactivateStatusAliment_C_Received_Notify) == 0x000078, "Wrong size on BP_CampDeactivateStatusAliment_C_Received_Notify");
static_assert(offsetof(BP_CampDeactivateStatusAliment_C_Received_Notify, MeshComp) == 0x000000, "Member 'BP_CampDeactivateStatusAliment_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(BP_CampDeactivateStatusAliment_C_Received_Notify, Animation) == 0x000008, "Member 'BP_CampDeactivateStatusAliment_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(BP_CampDeactivateStatusAliment_C_Received_Notify, ReturnValue) == 0x000010, "Member 'BP_CampDeactivateStatusAliment_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampDeactivateStatusAliment_C_Received_Notify, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'BP_CampDeactivateStatusAliment_C_Received_Notify::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampDeactivateStatusAliment_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'BP_CampDeactivateStatusAliment_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampDeactivateStatusAliment_C_Received_Notify, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000020, "Member 'BP_CampDeactivateStatusAliment_C_Received_Notify::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(BP_CampDeactivateStatusAliment_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_CampDeactivateStatusAliment_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_CampDeactivateStatusAliment_C_Received_Notify, CallFunc_IsCampCollisionCount_ReturnValue) == 0x000029, "Member 'BP_CampDeactivateStatusAliment_C_Received_Notify::CallFunc_IsCampCollisionCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampDeactivateStatusAliment_C_Received_Notify, CallFunc_IsSheathe_ReturnValue) == 0x00002A, "Member 'BP_CampDeactivateStatusAliment_C_Received_Notify::CallFunc_IsSheathe_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampDeactivateStatusAliment_C_Received_Notify, CallFunc_IsFindByEnemy_ReturnValue) == 0x00002B, "Member 'BP_CampDeactivateStatusAliment_C_Received_Notify::CallFunc_IsFindByEnemy_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampDeactivateStatusAliment_C_Received_Notify, CallFunc_Greater_IntInt_ReturnValue) == 0x00002C, "Member 'BP_CampDeactivateStatusAliment_C_Received_Notify::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampDeactivateStatusAliment_C_Received_Notify, K2Node_MakeStruct_DataTableRowHandle) == 0x000030, "Member 'BP_CampDeactivateStatusAliment_C_Received_Notify::K2Node_MakeStruct_DataTableRowHandle' has a wrong offset!");
static_assert(offsetof(BP_CampDeactivateStatusAliment_C_Received_Notify, K2Node_MakeStruct_DataTableRowHandle_1) == 0x000040, "Member 'BP_CampDeactivateStatusAliment_C_Received_Notify::K2Node_MakeStruct_DataTableRowHandle_1' has a wrong offset!");
static_assert(offsetof(BP_CampDeactivateStatusAliment_C_Received_Notify, K2Node_MakeStruct_DataTableRowHandle_2) == 0x000050, "Member 'BP_CampDeactivateStatusAliment_C_Received_Notify::K2Node_MakeStruct_DataTableRowHandle_2' has a wrong offset!");
static_assert(offsetof(BP_CampDeactivateStatusAliment_C_Received_Notify, CallFunc_IsCurrentMapLevel_ReturnValue) == 0x000060, "Member 'BP_CampDeactivateStatusAliment_C_Received_Notify::CallFunc_IsCurrentMapLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CampDeactivateStatusAliment_C_Received_Notify, K2Node_MakeStruct_DataTableRowHandle_3) == 0x000068, "Member 'BP_CampDeactivateStatusAliment_C_Received_Notify::K2Node_MakeStruct_DataTableRowHandle_3' has a wrong offset!");

// Function BP_CampDeactivateStatusAliment.BP_CampDeactivateStatusAliment_C.GetNotifyName
// 0x0010 (0x0010 - 0x0000)
struct BP_CampDeactivateStatusAliment_C_GetNotifyName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(BP_CampDeactivateStatusAliment_C_GetNotifyName) == 0x000008, "Wrong alignment on BP_CampDeactivateStatusAliment_C_GetNotifyName");
static_assert(sizeof(BP_CampDeactivateStatusAliment_C_GetNotifyName) == 0x000010, "Wrong size on BP_CampDeactivateStatusAliment_C_GetNotifyName");
static_assert(offsetof(BP_CampDeactivateStatusAliment_C_GetNotifyName, ReturnValue) == 0x000000, "Member 'BP_CampDeactivateStatusAliment_C_GetNotifyName::ReturnValue' has a wrong offset!");

}

