#pragma once

 

// Package: BP_EnemyExitEffectCommon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.ExecuteUbergraph_BP_EnemyExitEffectCommon
// 0x01D0 (0x01D0 - 0x0000)
struct BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBEnemyCharacter*                      K2Node_Event_OwnerEnemyCharacter_1;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBEnemyCharacter*                      K2Node_CustomEvent_Enemy_3;                        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumMaterials_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBEnemyCharacter*                      K2Node_CustomEvent_Enemy_2;                        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBInventoryWeapon>             CallFunc_GetInventoryWeapons_ReturnValue;          // 0x0048(0x0010)(ReferenceParm)
	class ASBEnemyCharacter*                      K2Node_CustomEvent_Enemy_1;                        // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9ABE[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetAttachedActors_OutActors;              // 0x0068(0x0010)(ReferenceParm)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9ABF[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASkeletalMeshActor*                     K2Node_DynamicCast_AsSkeletal_Mesh_Actor;          // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AC0[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AC1[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumMaterials_ReturnValue_1;            // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDemoPlayingOnClient_ReturnValue;        // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AC2[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AC3[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9AC4[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AC5[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue_1;            // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9AC6[0x4];                                     // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBEnemyCharacter*                      K2Node_Event_OwnerEnemyCharacter;                  // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MinTime;                     // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MaxTime;                     // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEnd_ReturnValue;                        // 0x00FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AC7[0x2];                                     // 0x00FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_3;                               // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBInventoryWeapon                     CallFunc_Array_Get_Item_1;                         // 0x0108(0x0068)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AC8[0x7];                                     // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSkeletalMeshComponent*               CallFunc_GetSkeletalMeshComponent_ReturnValue;     // 0x0178(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_2; // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumMaterials_ReturnValue_2;            // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue_2;            // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AC9[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBEnemyCharacter*                      K2Node_CustomEvent_Enemy;                          // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_6;                 // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_3; // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue_3;            // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumMaterials_ReturnValue_3;            // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item_2;                         // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_3;           // 0x01CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x01CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon) == 0x000008, "Wrong alignment on BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon");
static_assert(sizeof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon) == 0x0001D0, "Wrong size on BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, EntryPoint) == 0x000000, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, Temp_int_Loop_Counter_Variable_1) == 0x000010, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, Temp_int_Variable) == 0x000018, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_Add_IntInt_ReturnValue_2) == 0x00001C, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, Temp_int_Variable_1) == 0x000020, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_Add_IntInt_ReturnValue_3) == 0x000024, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, K2Node_Event_OwnerEnemyCharacter_1) == 0x000028, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::K2Node_Event_OwnerEnemyCharacter_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, K2Node_CustomEvent_Enemy_3) == 0x000030, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::K2Node_CustomEvent_Enemy_3' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_GetNumMaterials_ReturnValue) == 0x000038, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_GetNumMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_Subtract_IntInt_ReturnValue) == 0x00003C, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, K2Node_CustomEvent_Enemy_2) == 0x000040, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::K2Node_CustomEvent_Enemy_2' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_GetInventoryWeapons_ReturnValue) == 0x000048, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_GetInventoryWeapons_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, K2Node_CustomEvent_Enemy_1) == 0x000058, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::K2Node_CustomEvent_Enemy_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_GetAttachedActors_OutActors) == 0x000068, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_GetAttachedActors_OutActors' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_Less_IntInt_ReturnValue) == 0x000078, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_Array_Get_Item) == 0x000080, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, K2Node_DynamicCast_AsSkeletal_Mesh_Actor) == 0x000088, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::K2Node_DynamicCast_AsSkeletal_Mesh_Actor' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, K2Node_DynamicCast_bSuccess) == 0x000090, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_Array_Length_ReturnValue_1) == 0x000094, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_Less_IntInt_ReturnValue_1) == 0x000098, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x0000A0, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_GetNumMaterials_ReturnValue_1) == 0x0000A8, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_GetNumMaterials_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_IsDemoPlayingOnClient_ReturnValue) == 0x0000AC, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_IsDemoPlayingOnClient_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0000B0, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000B4, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, Temp_int_Variable_2) == 0x0000B8, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x0000C0, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_Array_AddUnique_ReturnValue) == 0x0000C8, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x0000CC, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_Add_IntInt_ReturnValue_4) == 0x0000D0, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_Array_AddUnique_ReturnValue_1) == 0x0000D4, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_Array_AddUnique_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, K2Node_Event_DeltaTime) == 0x0000D8, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, K2Node_Event_OwnerEnemyCharacter) == 0x0000E0, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::K2Node_Event_OwnerEnemyCharacter' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_Array_Length_ReturnValue_2) == 0x0000E8, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000EC, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_GetFloatValue_ReturnValue) == 0x0000F0, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_GetTimeRange_MinTime) == 0x0000F4, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_GetTimeRange_MinTime' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_GetTimeRange_MaxTime) == 0x0000F8, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_GetTimeRange_MaxTime' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x0000FC, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_IsEnd_ReturnValue) == 0x0000FD, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_IsEnd_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, Temp_int_Variable_3) == 0x000100, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, Temp_int_Array_Index_Variable_1) == 0x000104, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_Array_Get_Item_1) == 0x000108, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_IsValid_ReturnValue) == 0x000170, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_GetSkeletalMeshComponent_ReturnValue) == 0x000178, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_GetSkeletalMeshComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_CreateDynamicMaterialInstance_ReturnValue_2) == 0x000180, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_CreateDynamicMaterialInstance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_GetNumMaterials_ReturnValue_2) == 0x000188, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_GetNumMaterials_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_Array_AddUnique_ReturnValue_2) == 0x00018C, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_Array_AddUnique_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x000190, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_Add_IntInt_ReturnValue_5) == 0x000194, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x000198, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, K2Node_CustomEvent_Enemy) == 0x0001A0, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::K2Node_CustomEvent_Enemy' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, Temp_int_Variable_4) == 0x0001A8, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_Add_IntInt_ReturnValue_6) == 0x0001AC, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_Add_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_CreateDynamicMaterialInstance_ReturnValue_3) == 0x0001B0, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_CreateDynamicMaterialInstance_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_Array_AddUnique_ReturnValue_3) == 0x0001B8, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_Array_AddUnique_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_GetNumMaterials_ReturnValue_3) == 0x0001BC, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_GetNumMaterials_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_Array_Get_Item_2) == 0x0001C0, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_Subtract_IntInt_ReturnValue_3) == 0x0001C8, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_Subtract_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_LessEqual_IntInt_ReturnValue_3) == 0x0001CC, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_LessEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon, CallFunc_Less_IntInt_ReturnValue_2) == 0x0001CD, "Member 'BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");

// Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.SetFaceMaterial
// 0x0008 (0x0008 - 0x0000)
struct BP_EnemyExitEffectCommon_C_SetFaceMaterial final
{
public:
	class ASBEnemyCharacter*                      Enemy;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnemyExitEffectCommon_C_SetFaceMaterial) == 0x000008, "Wrong alignment on BP_EnemyExitEffectCommon_C_SetFaceMaterial");
static_assert(sizeof(BP_EnemyExitEffectCommon_C_SetFaceMaterial) == 0x000008, "Wrong size on BP_EnemyExitEffectCommon_C_SetFaceMaterial");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_SetFaceMaterial, Enemy) == 0x000000, "Member 'BP_EnemyExitEffectCommon_C_SetFaceMaterial::Enemy' has a wrong offset!");

// Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.ReceiveTick
// 0x0010 (0x0010 - 0x0000)
struct BP_EnemyExitEffectCommon_C_ReceiveTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9ACA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBEnemyCharacter*                      OwnerEnemyCharacter;                               // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnemyExitEffectCommon_C_ReceiveTick) == 0x000008, "Wrong alignment on BP_EnemyExitEffectCommon_C_ReceiveTick");
static_assert(sizeof(BP_EnemyExitEffectCommon_C_ReceiveTick) == 0x000010, "Wrong size on BP_EnemyExitEffectCommon_C_ReceiveTick");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ReceiveTick, DeltaTime) == 0x000000, "Member 'BP_EnemyExitEffectCommon_C_ReceiveTick::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ReceiveTick, OwnerEnemyCharacter) == 0x000008, "Member 'BP_EnemyExitEffectCommon_C_ReceiveTick::OwnerEnemyCharacter' has a wrong offset!");

// Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.SetAttachedMeshMaterial
// 0x0008 (0x0008 - 0x0000)
struct BP_EnemyExitEffectCommon_C_SetAttachedMeshMaterial final
{
public:
	class ASBEnemyCharacter*                      Enemy;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnemyExitEffectCommon_C_SetAttachedMeshMaterial) == 0x000008, "Wrong alignment on BP_EnemyExitEffectCommon_C_SetAttachedMeshMaterial");
static_assert(sizeof(BP_EnemyExitEffectCommon_C_SetAttachedMeshMaterial) == 0x000008, "Wrong size on BP_EnemyExitEffectCommon_C_SetAttachedMeshMaterial");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_SetAttachedMeshMaterial, Enemy) == 0x000000, "Member 'BP_EnemyExitEffectCommon_C_SetAttachedMeshMaterial::Enemy' has a wrong offset!");

// Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.SetWeaponMatrial
// 0x0008 (0x0008 - 0x0000)
struct BP_EnemyExitEffectCommon_C_SetWeaponMatrial final
{
public:
	class ASBEnemyCharacter*                      Enemy;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnemyExitEffectCommon_C_SetWeaponMatrial) == 0x000008, "Wrong alignment on BP_EnemyExitEffectCommon_C_SetWeaponMatrial");
static_assert(sizeof(BP_EnemyExitEffectCommon_C_SetWeaponMatrial) == 0x000008, "Wrong size on BP_EnemyExitEffectCommon_C_SetWeaponMatrial");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_SetWeaponMatrial, Enemy) == 0x000000, "Member 'BP_EnemyExitEffectCommon_C_SetWeaponMatrial::Enemy' has a wrong offset!");

// Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.SetEnemyMaterial
// 0x0008 (0x0008 - 0x0000)
struct BP_EnemyExitEffectCommon_C_SetEnemyMaterial final
{
public:
	class ASBEnemyCharacter*                      Enemy;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnemyExitEffectCommon_C_SetEnemyMaterial) == 0x000008, "Wrong alignment on BP_EnemyExitEffectCommon_C_SetEnemyMaterial");
static_assert(sizeof(BP_EnemyExitEffectCommon_C_SetEnemyMaterial) == 0x000008, "Wrong size on BP_EnemyExitEffectCommon_C_SetEnemyMaterial");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_SetEnemyMaterial, Enemy) == 0x000000, "Member 'BP_EnemyExitEffectCommon_C_SetEnemyMaterial::Enemy' has a wrong offset!");

// Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.ReceiveBegin
// 0x0008 (0x0008 - 0x0000)
struct BP_EnemyExitEffectCommon_C_ReceiveBegin final
{
public:
	class ASBEnemyCharacter*                      OwnerEnemyCharacter;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnemyExitEffectCommon_C_ReceiveBegin) == 0x000008, "Wrong alignment on BP_EnemyExitEffectCommon_C_ReceiveBegin");
static_assert(sizeof(BP_EnemyExitEffectCommon_C_ReceiveBegin) == 0x000008, "Wrong size on BP_EnemyExitEffectCommon_C_ReceiveBegin");
static_assert(offsetof(BP_EnemyExitEffectCommon_C_ReceiveBegin, OwnerEnemyCharacter) == 0x000000, "Member 'BP_EnemyExitEffectCommon_C_ReceiveBegin::OwnerEnemyCharacter' has a wrong offset!");

}

