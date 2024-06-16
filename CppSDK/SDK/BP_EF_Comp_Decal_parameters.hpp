#pragma once

 

// Package: BP_EF_Comp_Decal

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_EF_Comp_Decal.BP_EF_Comp_Decal_C.SpawnDecal
// 0x02E8 (0x02E8 - 0x0000)
struct BP_EF_Comp_Decal_C_SpawnDecal final
{
public:
	class USceneComponent*                        EffectComp;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InitialLifeTime;                                   // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                AttackCollision;                                   // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CollisionScale;                                    // 0x0018(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBEffectVisibleType                          VisibleType;                                       // 0x0024(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7131[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UDecalComponent*>                Param_DecalComponent;                              // 0x0028(0x0010)(Parm, OutParm, ContainsInstancedReference)
	float                                         DestroyOderTime;                                   // 0x0038(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DestroyGrace;                                      // 0x003C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NewLocalVar_0;                                     // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentScale_ReturnValue;         // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwnerCharacter_OwnerCharacter;         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue;                         // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0080(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0090(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_NormalizedDeltaRotator_ReturnValue;       // 0x009C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_NormalizedDeltaRotator_ReturnValue_1;     // 0x00AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_NormalizedDeltaRotator_ReturnValue_2;     // 0x00B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7132[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue_1;                       // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7133[0x2];                                     // 0x00DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetTimeRange_MinTime;                     // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MaxTime;                     // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MinTime_1;                   // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MaxTime_1;                   // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7134[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;                           // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7135[0x2];                                     // 0x00FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector_X_1;                          // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x010C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0118(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0124(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x0130(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7136[0x4];                                     // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSpawnDecalAttachedParam             K2Node_MakeStruct_SBSpawnDecalAttachedParam;       // 0x0140(0x0050)(NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x0190(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7137[0x4];                                     // 0x019C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDecalComponent*                        CallFunc_SpawnDecalAttached_ReturnValue;           // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBSpawnDecalAttachedParam             K2Node_MakeStruct_SBSpawnDecalAttachedParam_1;     // 0x01A8(0x0050)(NoDestructor, ContainsInstancedReference)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7138[0x4];                                     // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDecalComponent*                        CallFunc_SpawnDecalAttached_ReturnValue_1;         // 0x0200(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_2;                          // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_2;                          // 0x020C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_2;                          // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_2;                 // 0x0218(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7139[0x4];                                     // 0x0224(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloat_ReturnValue;                  // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_713A[0x4];                                     // 0x0234(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSpawnDecalAttachedParam             K2Node_MakeStruct_SBSpawnDecalAttachedParam_2;     // 0x0238(0x0050)(NoDestructor, ContainsInstancedReference)
	class UDecalComponent*                        CallFunc_SpawnDecalAttached_ReturnValue_2;         // 0x0288(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBSpawnDecalAtLocationParam           K2Node_MakeStruct_SBSpawnDecalAtLocationParam;     // 0x0290(0x0040)(NoDestructor)
	int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_713B[0x4];                                     // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDecalComponent*                        CallFunc_SpawnDecalAtLocation_ReturnValue;         // 0x02D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_4;                  // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_5;                  // 0x02E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EF_Comp_Decal_C_SpawnDecal) == 0x000008, "Wrong alignment on BP_EF_Comp_Decal_C_SpawnDecal");
static_assert(sizeof(BP_EF_Comp_Decal_C_SpawnDecal) == 0x0002E8, "Wrong size on BP_EF_Comp_Decal_C_SpawnDecal");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, EffectComp) == 0x000000, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::EffectComp' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, InitialLifeTime) == 0x000008, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::InitialLifeTime' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, AttackCollision) == 0x00000C, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::AttackCollision' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CollisionScale) == 0x000018, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CollisionScale' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, VisibleType) == 0x000024, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::VisibleType' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, Param_DecalComponent) == 0x000028, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::Param_DecalComponent' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, DestroyOderTime) == 0x000038, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::DestroyOderTime' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, DestroyGrace) == 0x00003C, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::DestroyGrace' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, NewLocalVar_0) == 0x000040, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_K2_GetComponentScale_ReturnValue) == 0x000044, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_K2_GetComponentScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000050, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_BreakVector_X) == 0x00005C, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_BreakVector_Y) == 0x000060, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_BreakVector_Z) == 0x000064, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_GetOwnerCharacter_OwnerCharacter) == 0x000068, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_GetOwnerCharacter_OwnerCharacter' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, Temp_int_Loop_Counter_Variable) == 0x000070, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_Add_IntInt_ReturnValue) == 0x000074, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_FMax_ReturnValue) == 0x000078, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_Add_FloatFloat_ReturnValue) == 0x00007C, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000080, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_RandomFloatInRange_ReturnValue) == 0x00008C, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_MakeRotator_ReturnValue) == 0x000090, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_NormalizedDeltaRotator_ReturnValue) == 0x00009C, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_NormalizedDeltaRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, Temp_int_Array_Index_Variable) == 0x0000A8, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_NormalizedDeltaRotator_ReturnValue_1) == 0x0000AC, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_NormalizedDeltaRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_NormalizedDeltaRotator_ReturnValue_2) == 0x0000B8, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_NormalizedDeltaRotator_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_IsValid_ReturnValue) == 0x0000C4, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x0000C8, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_Array_Add_ReturnValue) == 0x0000D0, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_FMax_ReturnValue_1) == 0x0000D4, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_FMax_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_IsValid_ReturnValue_1) == 0x0000D8, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_IsValid_ReturnValue_2) == 0x0000D9, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_GetTimeRange_MinTime) == 0x0000DC, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_GetTimeRange_MinTime' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_GetTimeRange_MaxTime) == 0x0000E0, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_GetTimeRange_MaxTime' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_GetTimeRange_MinTime_1) == 0x0000E4, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_GetTimeRange_MinTime_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_GetTimeRange_MaxTime_1) == 0x0000E8, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_GetTimeRange_MaxTime_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_Array_Get_Item) == 0x0000F0, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_Array_Length_ReturnValue) == 0x0000F8, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_IsValid_ReturnValue_3) == 0x0000FC, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_Less_IntInt_ReturnValue) == 0x0000FD, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_BreakVector_X_1) == 0x000100, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_BreakVector_Y_1) == 0x000104, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_BreakVector_Z_1) == 0x000108, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_Multiply_VectorVector_ReturnValue_1) == 0x00010C, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_Multiply_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_MakeVector_ReturnValue) == 0x000118, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000124, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_MakeVector_ReturnValue_1) == 0x000130, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, K2Node_MakeStruct_SBSpawnDecalAttachedParam) == 0x000140, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::K2Node_MakeStruct_SBSpawnDecalAttachedParam' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x000190, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_SpawnDecalAttached_ReturnValue) == 0x0001A0, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_SpawnDecalAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, K2Node_MakeStruct_SBSpawnDecalAttachedParam_1) == 0x0001A8, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::K2Node_MakeStruct_SBSpawnDecalAttachedParam_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_Array_Add_ReturnValue_1) == 0x0001F8, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_SpawnDecalAttached_ReturnValue_1) == 0x000200, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_SpawnDecalAttached_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_BreakVector_X_2) == 0x000208, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_BreakVector_Y_2) == 0x00020C, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_BreakVector_Z_2) == 0x000210, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_Array_Add_ReturnValue_2) == 0x000214, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_MakeVector_ReturnValue_2) == 0x000218, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_MakeVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x000228, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_RandomFloat_ReturnValue) == 0x000230, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_RandomFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, K2Node_MakeStruct_SBSpawnDecalAttachedParam_2) == 0x000238, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::K2Node_MakeStruct_SBSpawnDecalAttachedParam_2' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_SpawnDecalAttached_ReturnValue_2) == 0x000288, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_SpawnDecalAttached_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, K2Node_MakeStruct_SBSpawnDecalAtLocationParam) == 0x000290, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::K2Node_MakeStruct_SBSpawnDecalAtLocationParam' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_Array_Add_ReturnValue_3) == 0x0002D0, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_SpawnDecalAtLocation_ReturnValue) == 0x0002D8, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_SpawnDecalAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_Array_Add_ReturnValue_4) == 0x0002E0, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_Array_Add_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_SpawnDecal, CallFunc_Array_Add_ReturnValue_5) == 0x0002E4, "Member 'BP_EF_Comp_Decal_C_SpawnDecal::CallFunc_Array_Add_ReturnValue_5' has a wrong offset!");

// Function BP_EF_Comp_Decal.BP_EF_Comp_Decal_C.DecalScaleCTRL
// 0x0030 (0x0030 - 0x0000)
struct BP_EF_Comp_Decal_C_DecalScaleCTRL final
{
public:
	struct FVector                                Scale;                                             // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_EF_Comp_Decal_C_DecalScaleCTRL) == 0x000008, "Wrong alignment on BP_EF_Comp_Decal_C_DecalScaleCTRL");
static_assert(sizeof(BP_EF_Comp_Decal_C_DecalScaleCTRL) == 0x000030, "Wrong size on BP_EF_Comp_Decal_C_DecalScaleCTRL");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalScaleCTRL, Scale) == 0x000000, "Member 'BP_EF_Comp_Decal_C_DecalScaleCTRL::Scale' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalScaleCTRL, Temp_int_Variable) == 0x00000C, "Member 'BP_EF_Comp_Decal_C_DecalScaleCTRL::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalScaleCTRL, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_EF_Comp_Decal_C_DecalScaleCTRL::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalScaleCTRL, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000014, "Member 'BP_EF_Comp_Decal_C_DecalScaleCTRL::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalScaleCTRL, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_EF_Comp_Decal_C_DecalScaleCTRL::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalScaleCTRL, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_EF_Comp_Decal_C_DecalScaleCTRL::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalScaleCTRL, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'BP_EF_Comp_Decal_C_DecalScaleCTRL::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function BP_EF_Comp_Decal.BP_EF_Comp_Decal_C.DecalAnimCTRL
// 0x00A0 (0x00A0 - 0x0000)
struct BP_EF_Comp_Decal_C_DecalAnimCTRL final
{
public:
	float                                         Time;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_713C[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_713D[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item_1;                         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_713E[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_713F[0x2];                                     // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetTimeRange_MinTime;                     // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MaxTime;                     // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_2;        // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_1;              // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7140[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatValue_ReturnValue_2;              // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_3;        // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7141[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatValue_ReturnValue_3;              // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MinTime_1;                   // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRange_MaxTime_1;                   // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_4;        // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7142[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_5;        // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_4;              // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue_5;              // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EF_Comp_Decal_C_DecalAnimCTRL) == 0x000008, "Wrong alignment on BP_EF_Comp_Decal_C_DecalAnimCTRL");
static_assert(sizeof(BP_EF_Comp_Decal_C_DecalAnimCTRL) == 0x0000A0, "Wrong size on BP_EF_Comp_Decal_C_DecalAnimCTRL");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, Time) == 0x000000, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::Time' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, Temp_int_Loop_Counter_Variable_1) == 0x000008, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_Add_IntInt_ReturnValue_1) == 0x000010, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, Temp_int_Array_Index_Variable) == 0x000014, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, Temp_int_Array_Index_Variable_1) == 0x000018, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_Array_Get_Item) == 0x000020, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_IsValid_ReturnValue) == 0x00002C, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_Less_IntInt_ReturnValue) == 0x00002D, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_Array_Get_Item_1) == 0x000030, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000038, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_IsValid_ReturnValue_1) == 0x00003C, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_Array_Length_ReturnValue_1) == 0x000040, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_Less_IntInt_ReturnValue_1) == 0x000044, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_IsValid_ReturnValue_2) == 0x000045, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_GetTimeRange_MinTime) == 0x000048, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_GetTimeRange_MinTime' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_GetTimeRange_MaxTime) == 0x00004C, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_GetTimeRange_MaxTime' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000050, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_GetFloatValue_ReturnValue) == 0x000054, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_Subtract_FloatFloat_ReturnValue_2) == 0x000058, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_Subtract_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_GetFloatValue_ReturnValue_1) == 0x00005C, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_GetFloatValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_IsValid_ReturnValue_3) == 0x000060, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_GetFloatValue_ReturnValue_2) == 0x000064, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_GetFloatValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000068, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x00006C, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_Subtract_FloatFloat_ReturnValue_3) == 0x000070, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_Subtract_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_IsValid_ReturnValue_4) == 0x000074, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_GetFloatValue_ReturnValue_3) == 0x000078, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_GetFloatValue_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_GetTimeRange_MinTime_1) == 0x00007C, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_GetTimeRange_MinTime_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_GetTimeRange_MaxTime_1) == 0x000080, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_GetTimeRange_MaxTime_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_Subtract_FloatFloat_ReturnValue_4) == 0x000084, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_Subtract_FloatFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_IsValid_ReturnValue_5) == 0x000088, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_Subtract_FloatFloat_ReturnValue_5) == 0x00008C, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_Subtract_FloatFloat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_GetFloatValue_ReturnValue_4) == 0x000090, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_GetFloatValue_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_GetFloatValue_ReturnValue_5) == 0x000094, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_GetFloatValue_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x000098, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalAnimCTRL, CallFunc_Multiply_FloatFloat_ReturnValue_3) == 0x00009C, "Member 'BP_EF_Comp_Decal_C_DecalAnimCTRL::CallFunc_Multiply_FloatFloat_ReturnValue_3' has a wrong offset!");

// Function BP_EF_Comp_Decal.BP_EF_Comp_Decal_C.DecalEndCTRL
// 0x0004 (0x0004 - 0x0000)
struct BP_EF_Comp_Decal_C_DecalEndCTRL final
{
public:
	float                                         Time;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EF_Comp_Decal_C_DecalEndCTRL) == 0x000004, "Wrong alignment on BP_EF_Comp_Decal_C_DecalEndCTRL");
static_assert(sizeof(BP_EF_Comp_Decal_C_DecalEndCTRL) == 0x000004, "Wrong size on BP_EF_Comp_Decal_C_DecalEndCTRL");
static_assert(offsetof(BP_EF_Comp_Decal_C_DecalEndCTRL, Time) == 0x000000, "Member 'BP_EF_Comp_Decal_C_DecalEndCTRL::Time' has a wrong offset!");

// Function BP_EF_Comp_Decal.BP_EF_Comp_Decal_C.GetOwnerCharacter
// 0x0058 (0x0058 - 0x0000)
struct BP_EF_Comp_Decal_C_GetOwnerCharacter final
{
public:
	class AActor*                                 OwnerCharacter;                                    // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CheckNum;                                          // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7143[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 OwnerActor;                                        // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7144[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7145[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7146[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AASCharacterBase*                       K2Node_DynamicCast_AsASCharacter_Base;             // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7147[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;                   // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EF_Comp_Decal_C_GetOwnerCharacter) == 0x000008, "Wrong alignment on BP_EF_Comp_Decal_C_GetOwnerCharacter");
static_assert(sizeof(BP_EF_Comp_Decal_C_GetOwnerCharacter) == 0x000058, "Wrong size on BP_EF_Comp_Decal_C_GetOwnerCharacter");
static_assert(offsetof(BP_EF_Comp_Decal_C_GetOwnerCharacter, OwnerCharacter) == 0x000000, "Member 'BP_EF_Comp_Decal_C_GetOwnerCharacter::OwnerCharacter' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_GetOwnerCharacter, CheckNum) == 0x000008, "Member 'BP_EF_Comp_Decal_C_GetOwnerCharacter::CheckNum' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_GetOwnerCharacter, OwnerActor) == 0x000010, "Member 'BP_EF_Comp_Decal_C_GetOwnerCharacter::OwnerActor' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_GetOwnerCharacter, Temp_int_Variable) == 0x000018, "Member 'BP_EF_Comp_Decal_C_GetOwnerCharacter::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_GetOwnerCharacter, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'BP_EF_Comp_Decal_C_GetOwnerCharacter::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_GetOwnerCharacter, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'BP_EF_Comp_Decal_C_GetOwnerCharacter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_GetOwnerCharacter, CallFunc_Greater_IntInt_ReturnValue) == 0x000029, "Member 'BP_EF_Comp_Decal_C_GetOwnerCharacter::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_GetOwnerCharacter, CallFunc_Subtract_IntInt_ReturnValue) == 0x00002C, "Member 'BP_EF_Comp_Decal_C_GetOwnerCharacter::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_GetOwnerCharacter, CallFunc_BooleanAND_ReturnValue) == 0x000030, "Member 'BP_EF_Comp_Decal_C_GetOwnerCharacter::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_GetOwnerCharacter, CallFunc_GetOwner_ReturnValue_1) == 0x000038, "Member 'BP_EF_Comp_Decal_C_GetOwnerCharacter::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_GetOwnerCharacter, K2Node_DynamicCast_AsASCharacter_Base) == 0x000040, "Member 'BP_EF_Comp_Decal_C_GetOwnerCharacter::K2Node_DynamicCast_AsASCharacter_Base' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_GetOwnerCharacter, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BP_EF_Comp_Decal_C_GetOwnerCharacter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_GetOwnerCharacter, CallFunc_IsValid_ReturnValue_1) == 0x000049, "Member 'BP_EF_Comp_Decal_C_GetOwnerCharacter::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_GetOwnerCharacter, CallFunc_GetOwner_ReturnValue_2) == 0x000050, "Member 'BP_EF_Comp_Decal_C_GetOwnerCharacter::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");

// Function BP_EF_Comp_Decal.BP_EF_Comp_Decal_C.DestroyDecal
// 0x0028 (0x0028 - 0x0000)
struct BP_EF_Comp_Decal_C_DestroyDecal final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7148[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDecalComponent*                        CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7149[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_714A[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_EF_Comp_Decal_C_DestroyDecal) == 0x000008, "Wrong alignment on BP_EF_Comp_Decal_C_DestroyDecal");
static_assert(sizeof(BP_EF_Comp_Decal_C_DestroyDecal) == 0x000028, "Wrong size on BP_EF_Comp_Decal_C_DestroyDecal");
static_assert(offsetof(BP_EF_Comp_Decal_C_DestroyDecal, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_EF_Comp_Decal_C_DestroyDecal::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DestroyDecal, CallFunc_Array_Get_Item) == 0x000008, "Member 'BP_EF_Comp_Decal_C_DestroyDecal::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DestroyDecal, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'BP_EF_Comp_Decal_C_DestroyDecal::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DestroyDecal, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'BP_EF_Comp_Decal_C_DestroyDecal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DestroyDecal, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'BP_EF_Comp_Decal_C_DestroyDecal::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DestroyDecal, CallFunc_Less_IntInt_ReturnValue) == 0x00001C, "Member 'BP_EF_Comp_Decal_C_DestroyDecal::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_EF_Comp_Decal_C_DestroyDecal, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'BP_EF_Comp_Decal_C_DestroyDecal::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}

