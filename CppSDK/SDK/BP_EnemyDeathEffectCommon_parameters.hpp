#pragma once

 

// Package: BP_EnemyDeathEffectCommon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ExecuteUbergraph_BP_EnemyDeathEffectCommon
// 0x02C0 (0x02C0 - 0x0000)
struct BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_6;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_7;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MinTime;                     // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MaxTime;                     // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_561A[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBEnemyCharacter*                      K2Node_CustomEvent_Enemy_3;                        // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_561B[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNumMaterials_ReturnValue;              // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_6;                               // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_8;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_561C[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBEnemyCharacter*                      K2Node_CustomEvent_Enemy_2;                        // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBInventoryWeapon>             CallFunc_GetInventoryWeapons_ReturnValue;          // 0x0088(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_561D[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBInventoryWeapon                     CallFunc_Array_Get_Item;                           // 0x00A0(0x0068)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x010D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_561E[0x2];                                     // 0x010E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSkeletalMeshComponent*               CallFunc_GetSkeletalMeshComponent_ReturnValue;     // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item_1;                         // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumMaterials_ReturnValue_1;            // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0135(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_561F[0x2];                                     // 0x0136(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item_2;                         // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5620[0x3];                                     // 0x0145(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5621[0x4];                                     // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBEnemyCharacter*                      K2Node_Event_OwnerEnemyCharacter_6;                // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime_2;                          // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5622[0x4];                                     // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBEnemyCharacter*                      K2Node_Event_OwnerEnemyCharacter_5;                // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5623[0x4];                                     // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBEnemyCharacter*                      K2Node_Event_OwnerEnemyCharacter_4;                // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime_1;                          // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5624[0x4];                                     // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBEnemyCharacter*                      K2Node_Event_OwnerEnemyCharacter_3;                // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5625[0x4];                                     // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item_3;                         // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x019C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5626[0x3];                                     // 0x019D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetTimeRange_MinTime_1;                   // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MaxTime_1;                   // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;    // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDeathEffectType                              K2Node_Event_DeathEffectType;                      // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5627[0x6];                                     // 0x01AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBEnemyCharacter*                      K2Node_Event_OwnerEnemyCharacter_2;                // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_1;              // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_2;             // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_WaitTime;                             // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5628[0x4];                                     // 0x01D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBEnemyCharacter*                      K2Node_Event_OwnerEnemyCharacter_1;                // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_2;              // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBEnemyCharacter*                      K2Node_Event_OwnerEnemyCharacter;                  // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item_4;                         // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_3;             // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_5;               // 0x01FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_2;    // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5629[0x6];                                     // 0x0202(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBEnemyCharacter*                      K2Node_CustomEvent_Enemy_1;                        // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetAttachedActors_OutActors;              // 0x0210(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsDemoPlayingOnClient_ReturnValue;        // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_562A[0x7];                                     // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item_5;                         // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASkeletalMeshActor*                     K2Node_DynamicCast_AsSkeletal_Mesh_Actor;          // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_562B[0x3];                                     // 0x0239(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_6;               // 0x023C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_5;                // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_562C[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumMaterials_ReturnValue_2;            // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_7;                               // 0x0254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_562D[0x4];                                     // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_2; // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_562E[0x3];                                     // 0x0269(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue_1;            // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_562F[0x3];                                     // 0x0271(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_9;                 // 0x0274(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_8;                               // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue_2;            // 0x027C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_10;                // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5630[0x4];                                     // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item_6;                         // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_6;                // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5631[0x7];                                     // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBEnemyCharacter*                      K2Node_CustomEvent_Enemy;                          // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumMaterials_ReturnValue_3;            // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5632[0x4];                                     // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_3; // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue_3;            // 0x02B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_3;           // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon) == 0x000008, "Wrong alignment on BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon");
static_assert(sizeof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon) == 0x0002C0, "Wrong size on BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, EntryPoint) == 0x000000, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, Temp_int_Variable) == 0x000004, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, Temp_int_Variable_1) == 0x000008, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Add_IntInt_ReturnValue_1) == 0x000010, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, Temp_int_Variable_2) == 0x000014, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, Temp_int_Array_Index_Variable) == 0x000018, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Add_IntInt_ReturnValue_2) == 0x00001C, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, Temp_int_Variable_3) == 0x000020, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Add_IntInt_ReturnValue_3) == 0x000024, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Add_IntInt_ReturnValue_4) == 0x00002C, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, Temp_int_Array_Index_Variable_1) == 0x000030, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, Temp_int_Loop_Counter_Variable_1) == 0x000034, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Add_IntInt_ReturnValue_5) == 0x000038, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, Temp_int_Variable_4) == 0x00003C, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Add_IntInt_ReturnValue_6) == 0x000040, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Add_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, Temp_int_Variable_5) == 0x000044, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Add_IntInt_ReturnValue_7) == 0x000048, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Add_IntInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_GetFloatValue_ReturnValue) == 0x00004C, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000050, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_GetTimeRange_MinTime) == 0x000054, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_GetTimeRange_MinTime' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_GetTimeRange_MaxTime) == 0x000058, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_GetTimeRange_MaxTime' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, K2Node_CustomEvent_Enemy_3) == 0x000060, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::K2Node_CustomEvent_Enemy_3' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000068, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_GetNumMaterials_ReturnValue) == 0x00006C, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_GetNumMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, Temp_int_Variable_6) == 0x000070, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Subtract_IntInt_ReturnValue) == 0x000074, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Add_IntInt_ReturnValue_8) == 0x000078, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Add_IntInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, K2Node_CustomEvent_Enemy_2) == 0x000080, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::K2Node_CustomEvent_Enemy_2' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_GetInventoryWeapons_ReturnValue) == 0x000088, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_GetInventoryWeapons_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Array_Length_ReturnValue) == 0x000098, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Array_Get_Item) == 0x0000A0, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Array_Length_ReturnValue_1) == 0x000108, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Less_IntInt_ReturnValue) == 0x00010C, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_IsValid_ReturnValue) == 0x00010D, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_GetSkeletalMeshComponent_ReturnValue) == 0x000110, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_GetSkeletalMeshComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Array_Get_Item_1) == 0x000118, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000120, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_GetNumMaterials_ReturnValue_1) == 0x000128, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_GetNumMaterials_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Array_Length_ReturnValue_2) == 0x00012C, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000130, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Less_IntInt_ReturnValue_1) == 0x000134, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000135, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Array_Get_Item_2) == 0x000138, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Array_Length_ReturnValue_3) == 0x000140, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Less_IntInt_ReturnValue_2) == 0x000144, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Array_AddUnique_ReturnValue) == 0x000148, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, K2Node_Event_OwnerEnemyCharacter_6) == 0x000150, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::K2Node_Event_OwnerEnemyCharacter_6' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, K2Node_Event_DeltaTime_2) == 0x000158, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::K2Node_Event_DeltaTime_2' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, K2Node_Event_OwnerEnemyCharacter_5) == 0x000160, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::K2Node_Event_OwnerEnemyCharacter_5' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Add_FloatFloat_ReturnValue) == 0x000168, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, K2Node_Event_OwnerEnemyCharacter_4) == 0x000170, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::K2Node_Event_OwnerEnemyCharacter_4' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, K2Node_Event_DeltaTime_1) == 0x000178, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::K2Node_Event_DeltaTime_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, K2Node_Event_OwnerEnemyCharacter_3) == 0x000180, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::K2Node_Event_OwnerEnemyCharacter_3' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000188, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Array_Get_Item_3) == 0x000190, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Array_Length_ReturnValue_4) == 0x000198, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Less_IntInt_ReturnValue_3) == 0x00019C, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_GetTimeRange_MinTime_1) == 0x0001A0, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_GetTimeRange_MinTime_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_GetTimeRange_MaxTime_1) == 0x0001A4, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_GetTimeRange_MaxTime_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_GreaterEqual_FloatFloat_ReturnValue_1) == 0x0001A8, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_GreaterEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, K2Node_Event_DeathEffectType) == 0x0001A9, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::K2Node_Event_DeathEffectType' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, K2Node_Event_OwnerEnemyCharacter_2) == 0x0001B0, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::K2Node_Event_OwnerEnemyCharacter_2' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0001B8, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x0001BC, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_GetFloatValue_ReturnValue_1) == 0x0001C0, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_GetFloatValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x0001C4, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Multiply_FloatFloat_ReturnValue_3) == 0x0001C8, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Multiply_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Add_FloatFloat_ReturnValue_2) == 0x0001CC, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Add_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, K2Node_Event_WaitTime) == 0x0001D0, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::K2Node_Event_WaitTime' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, K2Node_Event_OwnerEnemyCharacter_1) == 0x0001D8, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::K2Node_Event_OwnerEnemyCharacter_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_GetFloatValue_ReturnValue_2) == 0x0001E0, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_GetFloatValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, K2Node_Event_DeltaTime) == 0x0001E4, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, K2Node_Event_OwnerEnemyCharacter) == 0x0001E8, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::K2Node_Event_OwnerEnemyCharacter' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Array_Get_Item_4) == 0x0001F0, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Add_FloatFloat_ReturnValue_3) == 0x0001F8, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Add_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Array_Length_ReturnValue_5) == 0x0001FC, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Array_Length_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Less_IntInt_ReturnValue_4) == 0x000200, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_GreaterEqual_FloatFloat_ReturnValue_2) == 0x000201, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_GreaterEqual_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, K2Node_CustomEvent_Enemy_1) == 0x000208, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::K2Node_CustomEvent_Enemy_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_GetAttachedActors_OutActors) == 0x000210, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_GetAttachedActors_OutActors' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_IsDemoPlayingOnClient_ReturnValue) == 0x000220, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_IsDemoPlayingOnClient_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Array_Get_Item_5) == 0x000228, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, K2Node_DynamicCast_AsSkeletal_Mesh_Actor) == 0x000230, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::K2Node_DynamicCast_AsSkeletal_Mesh_Actor' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, K2Node_DynamicCast_bSuccess) == 0x000238, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Array_Length_ReturnValue_6) == 0x00023C, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Array_Length_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Less_IntInt_ReturnValue_5) == 0x000240, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Less_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x000248, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_GetNumMaterials_ReturnValue_2) == 0x000250, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_GetNumMaterials_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, Temp_int_Variable_7) == 0x000254, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x000258, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_CreateDynamicMaterialInstance_ReturnValue_2) == 0x000260, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_CreateDynamicMaterialInstance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000268, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Array_AddUnique_ReturnValue_1) == 0x00026C, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Array_AddUnique_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x000270, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Add_IntInt_ReturnValue_9) == 0x000274, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Add_IntInt_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, Temp_int_Variable_8) == 0x000278, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Array_AddUnique_ReturnValue_2) == 0x00027C, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Array_AddUnique_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Add_IntInt_ReturnValue_10) == 0x000280, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Add_IntInt_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Array_Get_Item_6) == 0x000288, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Array_Get_Item_6' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Less_IntInt_ReturnValue_6) == 0x000290, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Less_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, K2Node_CustomEvent_Enemy) == 0x000298, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::K2Node_CustomEvent_Enemy' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_GetNumMaterials_ReturnValue_3) == 0x0002A0, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_GetNumMaterials_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_CreateDynamicMaterialInstance_ReturnValue_3) == 0x0002A8, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_CreateDynamicMaterialInstance_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Subtract_IntInt_ReturnValue_3) == 0x0002B0, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Subtract_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_Array_AddUnique_ReturnValue_3) == 0x0002B4, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_Array_AddUnique_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon, CallFunc_LessEqual_IntInt_ReturnValue_3) == 0x0002B8, "Member 'BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon::CallFunc_LessEqual_IntInt_ReturnValue_3' has a wrong offset!");

// Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.SetFaceMaterial
// 0x0008 (0x0008 - 0x0000)
struct BP_EnemyDeathEffectCommon_C_SetFaceMaterial final
{
public:
	class ASBEnemyCharacter*                      Enemy;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnemyDeathEffectCommon_C_SetFaceMaterial) == 0x000008, "Wrong alignment on BP_EnemyDeathEffectCommon_C_SetFaceMaterial");
static_assert(sizeof(BP_EnemyDeathEffectCommon_C_SetFaceMaterial) == 0x000008, "Wrong size on BP_EnemyDeathEffectCommon_C_SetFaceMaterial");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_SetFaceMaterial, Enemy) == 0x000000, "Member 'BP_EnemyDeathEffectCommon_C_SetFaceMaterial::Enemy' has a wrong offset!");

// Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.SetAttachedMeshMaterial
// 0x0008 (0x0008 - 0x0000)
struct BP_EnemyDeathEffectCommon_C_SetAttachedMeshMaterial final
{
public:
	class ASBEnemyCharacter*                      Enemy;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnemyDeathEffectCommon_C_SetAttachedMeshMaterial) == 0x000008, "Wrong alignment on BP_EnemyDeathEffectCommon_C_SetAttachedMeshMaterial");
static_assert(sizeof(BP_EnemyDeathEffectCommon_C_SetAttachedMeshMaterial) == 0x000008, "Wrong size on BP_EnemyDeathEffectCommon_C_SetAttachedMeshMaterial");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_SetAttachedMeshMaterial, Enemy) == 0x000000, "Member 'BP_EnemyDeathEffectCommon_C_SetAttachedMeshMaterial::Enemy' has a wrong offset!");

// Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveTickVanish
// 0x0010 (0x0010 - 0x0000)
struct BP_EnemyDeathEffectCommon_C_ReceiveTickVanish final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5633[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBEnemyCharacter*                      OwnerEnemyCharacter;                               // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnemyDeathEffectCommon_C_ReceiveTickVanish) == 0x000008, "Wrong alignment on BP_EnemyDeathEffectCommon_C_ReceiveTickVanish");
static_assert(sizeof(BP_EnemyDeathEffectCommon_C_ReceiveTickVanish) == 0x000010, "Wrong size on BP_EnemyDeathEffectCommon_C_ReceiveTickVanish");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ReceiveTickVanish, DeltaTime) == 0x000000, "Member 'BP_EnemyDeathEffectCommon_C_ReceiveTickVanish::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ReceiveTickVanish, OwnerEnemyCharacter) == 0x000008, "Member 'BP_EnemyDeathEffectCommon_C_ReceiveTickVanish::OwnerEnemyCharacter' has a wrong offset!");

// Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveBeginVanish
// 0x0010 (0x0010 - 0x0000)
struct BP_EnemyDeathEffectCommon_C_ReceiveBeginVanish final
{
public:
	float                                         WaitTime;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5634[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBEnemyCharacter*                      OwnerEnemyCharacter;                               // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnemyDeathEffectCommon_C_ReceiveBeginVanish) == 0x000008, "Wrong alignment on BP_EnemyDeathEffectCommon_C_ReceiveBeginVanish");
static_assert(sizeof(BP_EnemyDeathEffectCommon_C_ReceiveBeginVanish) == 0x000010, "Wrong size on BP_EnemyDeathEffectCommon_C_ReceiveBeginVanish");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ReceiveBeginVanish, WaitTime) == 0x000000, "Member 'BP_EnemyDeathEffectCommon_C_ReceiveBeginVanish::WaitTime' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ReceiveBeginVanish, OwnerEnemyCharacter) == 0x000008, "Member 'BP_EnemyDeathEffectCommon_C_ReceiveBeginVanish::OwnerEnemyCharacter' has a wrong offset!");

// Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveMaterialUpdated
// 0x0010 (0x0010 - 0x0000)
struct BP_EnemyDeathEffectCommon_C_ReceiveMaterialUpdated final
{
public:
	EDeathEffectType                              DeathEffectType;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5635[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBEnemyCharacter*                      OwnerEnemyCharacter;                               // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnemyDeathEffectCommon_C_ReceiveMaterialUpdated) == 0x000008, "Wrong alignment on BP_EnemyDeathEffectCommon_C_ReceiveMaterialUpdated");
static_assert(sizeof(BP_EnemyDeathEffectCommon_C_ReceiveMaterialUpdated) == 0x000010, "Wrong size on BP_EnemyDeathEffectCommon_C_ReceiveMaterialUpdated");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ReceiveMaterialUpdated, DeathEffectType) == 0x000000, "Member 'BP_EnemyDeathEffectCommon_C_ReceiveMaterialUpdated::DeathEffectType' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ReceiveMaterialUpdated, OwnerEnemyCharacter) == 0x000008, "Member 'BP_EnemyDeathEffectCommon_C_ReceiveMaterialUpdated::OwnerEnemyCharacter' has a wrong offset!");

// Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveTickFadeOut
// 0x0010 (0x0010 - 0x0000)
struct BP_EnemyDeathEffectCommon_C_ReceiveTickFadeOut final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5636[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBEnemyCharacter*                      OwnerEnemyCharacter;                               // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnemyDeathEffectCommon_C_ReceiveTickFadeOut) == 0x000008, "Wrong alignment on BP_EnemyDeathEffectCommon_C_ReceiveTickFadeOut");
static_assert(sizeof(BP_EnemyDeathEffectCommon_C_ReceiveTickFadeOut) == 0x000010, "Wrong size on BP_EnemyDeathEffectCommon_C_ReceiveTickFadeOut");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ReceiveTickFadeOut, DeltaTime) == 0x000000, "Member 'BP_EnemyDeathEffectCommon_C_ReceiveTickFadeOut::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ReceiveTickFadeOut, OwnerEnemyCharacter) == 0x000008, "Member 'BP_EnemyDeathEffectCommon_C_ReceiveTickFadeOut::OwnerEnemyCharacter' has a wrong offset!");

// Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveBeginFadeOut
// 0x0008 (0x0008 - 0x0000)
struct BP_EnemyDeathEffectCommon_C_ReceiveBeginFadeOut final
{
public:
	class ASBEnemyCharacter*                      OwnerEnemyCharacter;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnemyDeathEffectCommon_C_ReceiveBeginFadeOut) == 0x000008, "Wrong alignment on BP_EnemyDeathEffectCommon_C_ReceiveBeginFadeOut");
static_assert(sizeof(BP_EnemyDeathEffectCommon_C_ReceiveBeginFadeOut) == 0x000008, "Wrong size on BP_EnemyDeathEffectCommon_C_ReceiveBeginFadeOut");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ReceiveBeginFadeOut, OwnerEnemyCharacter) == 0x000000, "Member 'BP_EnemyDeathEffectCommon_C_ReceiveBeginFadeOut::OwnerEnemyCharacter' has a wrong offset!");

// Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveTick
// 0x0010 (0x0010 - 0x0000)
struct BP_EnemyDeathEffectCommon_C_ReceiveTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5637[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBEnemyCharacter*                      OwnerEnemyCharacter;                               // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnemyDeathEffectCommon_C_ReceiveTick) == 0x000008, "Wrong alignment on BP_EnemyDeathEffectCommon_C_ReceiveTick");
static_assert(sizeof(BP_EnemyDeathEffectCommon_C_ReceiveTick) == 0x000010, "Wrong size on BP_EnemyDeathEffectCommon_C_ReceiveTick");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ReceiveTick, DeltaTime) == 0x000000, "Member 'BP_EnemyDeathEffectCommon_C_ReceiveTick::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ReceiveTick, OwnerEnemyCharacter) == 0x000008, "Member 'BP_EnemyDeathEffectCommon_C_ReceiveTick::OwnerEnemyCharacter' has a wrong offset!");

// Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveBegin
// 0x0008 (0x0008 - 0x0000)
struct BP_EnemyDeathEffectCommon_C_ReceiveBegin final
{
public:
	class ASBEnemyCharacter*                      OwnerEnemyCharacter;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnemyDeathEffectCommon_C_ReceiveBegin) == 0x000008, "Wrong alignment on BP_EnemyDeathEffectCommon_C_ReceiveBegin");
static_assert(sizeof(BP_EnemyDeathEffectCommon_C_ReceiveBegin) == 0x000008, "Wrong size on BP_EnemyDeathEffectCommon_C_ReceiveBegin");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_ReceiveBegin, OwnerEnemyCharacter) == 0x000000, "Member 'BP_EnemyDeathEffectCommon_C_ReceiveBegin::OwnerEnemyCharacter' has a wrong offset!");

// Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.SetWeaponMatrial
// 0x0008 (0x0008 - 0x0000)
struct BP_EnemyDeathEffectCommon_C_SetWeaponMatrial final
{
public:
	class ASBEnemyCharacter*                      Enemy;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnemyDeathEffectCommon_C_SetWeaponMatrial) == 0x000008, "Wrong alignment on BP_EnemyDeathEffectCommon_C_SetWeaponMatrial");
static_assert(sizeof(BP_EnemyDeathEffectCommon_C_SetWeaponMatrial) == 0x000008, "Wrong size on BP_EnemyDeathEffectCommon_C_SetWeaponMatrial");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_SetWeaponMatrial, Enemy) == 0x000000, "Member 'BP_EnemyDeathEffectCommon_C_SetWeaponMatrial::Enemy' has a wrong offset!");

// Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.SetEnemyMatrial
// 0x0008 (0x0008 - 0x0000)
struct BP_EnemyDeathEffectCommon_C_SetEnemyMatrial final
{
public:
	class ASBEnemyCharacter*                      Enemy;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EnemyDeathEffectCommon_C_SetEnemyMatrial) == 0x000008, "Wrong alignment on BP_EnemyDeathEffectCommon_C_SetEnemyMatrial");
static_assert(sizeof(BP_EnemyDeathEffectCommon_C_SetEnemyMatrial) == 0x000008, "Wrong size on BP_EnemyDeathEffectCommon_C_SetEnemyMatrial");
static_assert(offsetof(BP_EnemyDeathEffectCommon_C_SetEnemyMatrial, Enemy) == 0x000000, "Member 'BP_EnemyDeathEffectCommon_C_SetEnemyMatrial::Enemy' has a wrong offset!");

}

