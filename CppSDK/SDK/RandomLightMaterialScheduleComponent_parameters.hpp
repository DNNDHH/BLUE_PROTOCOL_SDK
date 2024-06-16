#pragma once

 

// Package: RandomLightMaterialScheduleComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "RandomLightMaterialScheduleParam_structs.hpp"


namespace SDK::Params
{

// Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.ExecuteUbergraph_RandomLightMaterialScheduleComponent
// 0x0160 (0x0160 - 0x0000)
struct RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RewriteMaterialsOfDecals_ReturnValue;     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0010(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SchedulableMaterialParam_C*         CallFunc_FinishSpawningActor_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomInteger_ReturnValue;                // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomInteger_ReturnValue_1;              // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_1;             // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue_1;              // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_1;            // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98DB[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRandomLightMaterialScheduleParam      K2Node_MakeStruct_RandomLightMaterialScheduleParam; // 0x0090(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRandomLightMaterialScheduleParam      CallFunc_Array_Get_Item;                           // 0x00A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomInteger_ReturnValue_2;              // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98DC[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   K2Node_Event_MeshComp;                             // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      K2Node_Event_TargetMaterial;                       // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_idx;                                  // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_98DD[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIntFromActorName_ReturnValue;          // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98DE[0x3];                                     // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_2;             // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RewriteMaterialsOfStaticMeshes_ReturnValue; // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SchedulableMaterialParam_C*         CallFunc_Array_Get_Item_1;                         // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98DF[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetVariableMaterialInstance_MaterialInstanceDynamic; // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98E0[0x3];                                     // 0x012D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_6;                 // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98E1[0x3];                                     // 0x0135(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98E2[0x3];                                     // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;                   // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_LightSchedule_C*                    K2Node_DynamicCast_AsBP_Light_Schedule;            // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98E3[0x3];                                     // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MeshesResetToDefaultMaterials_ReturnValue; // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent) == 0x000010, "Wrong alignment on RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent");
static_assert(sizeof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent) == 0x000160, "Wrong size on RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, EntryPoint) == 0x000000, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_RewriteMaterialsOfDecals_ReturnValue) == 0x000004, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_RewriteMaterialsOfDecals_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_GetTransform_ReturnValue) == 0x000010, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000040, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_FinishSpawningActor_ReturnValue) == 0x000048, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_Array_Add_ReturnValue) == 0x000050, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_RandomInteger_ReturnValue) == 0x000054, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_RandomInteger_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_RandomInteger_ReturnValue_1) == 0x000058, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_RandomInteger_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_Percent_IntInt_ReturnValue) == 0x00005C, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_Percent_IntInt_ReturnValue_1) == 0x000060, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_Percent_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_Divide_IntInt_ReturnValue) == 0x000064, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_Divide_IntInt_ReturnValue_1) == 0x000068, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_Divide_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_Multiply_IntInt_ReturnValue) == 0x00006C, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_Multiply_IntInt_ReturnValue_1) == 0x000070, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_Multiply_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_Add_IntInt_ReturnValue) == 0x000074, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_Add_IntInt_ReturnValue_1) == 0x000078, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_Add_IntInt_ReturnValue_2) == 0x00007C, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_Add_IntInt_ReturnValue_3) == 0x000080, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_RandomFloatInRange_ReturnValue) == 0x000084, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_Add_FloatFloat_ReturnValue) == 0x000088, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_IsServer_ReturnValue) == 0x00008C, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, K2Node_MakeStruct_RandomLightMaterialScheduleParam) == 0x000090, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::K2Node_MakeStruct_RandomLightMaterialScheduleParam' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_Array_Add_ReturnValue_1) == 0x00009C, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, Temp_int_Array_Index_Variable) == 0x0000A0, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_Array_Length_ReturnValue) == 0x0000A4, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_Array_Get_Item) == 0x0000A8, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x0000B4, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_Array_Length_ReturnValue_1) == 0x0000B8, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_Multiply_IntFloat_ReturnValue) == 0x0000BC, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_RandomInteger_ReturnValue_2) == 0x0000C0, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_RandomInteger_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_FTrunc_ReturnValue) == 0x0000C4, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_IsDedicatedServer_ReturnValue) == 0x0000C8, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, K2Node_Event_MeshComp) == 0x0000D0, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::K2Node_Event_MeshComp' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, K2Node_Event_TargetMaterial) == 0x0000D8, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::K2Node_Event_TargetMaterial' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, K2Node_Event_idx) == 0x0000E0, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::K2Node_Event_idx' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_GetOwner_ReturnValue_1) == 0x0000E8, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_GetIntFromActorName_ReturnValue) == 0x0000F0, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_GetIntFromActorName_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_Array_Length_ReturnValue_2) == 0x0000F4, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, Temp_int_Loop_Counter_Variable) == 0x0000F8, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_Less_IntInt_ReturnValue) == 0x0000FC, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_Add_IntInt_ReturnValue_4) == 0x000100, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_Add_IntInt_ReturnValue_5) == 0x000104, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_Percent_IntInt_ReturnValue_2) == 0x000108, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_Percent_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_RewriteMaterialsOfStaticMeshes_ReturnValue) == 0x00010C, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_RewriteMaterialsOfStaticMeshes_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_Array_Get_Item_1) == 0x000110, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_Greater_IntInt_ReturnValue) == 0x000118, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_GetVariableMaterialInstance_MaterialInstanceDynamic) == 0x000120, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_GetVariableMaterialInstance_MaterialInstanceDynamic' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, Temp_int_Variable) == 0x000128, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00012C, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_Add_IntInt_ReturnValue_6) == 0x000130, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_Add_IntInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_IsDedicatedServer_ReturnValue_1) == 0x000134, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_IsDedicatedServer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_Array_Length_ReturnValue_3) == 0x000138, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00013C, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_GetOwner_ReturnValue_2) == 0x000140, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, K2Node_DynamicCast_AsBP_Light_Schedule) == 0x000148, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::K2Node_DynamicCast_AsBP_Light_Schedule' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, K2Node_DynamicCast_bSuccess) == 0x000150, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent, CallFunc_MeshesResetToDefaultMaterials_ReturnValue) == 0x000154, "Member 'RandomLightMaterialScheduleComponent_C_ExecuteUbergraph_RandomLightMaterialScheduleComponent::CallFunc_MeshesResetToDefaultMaterials_ReturnValue' has a wrong offset!");

// Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.RewriteMaterialsCore
// 0x0018 (0x0018 - 0x0000)
struct RandomLightMaterialScheduleComponent_C_RewriteMaterialsCore final
{
public:
	class UStaticMeshComponent*                   MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      TargetMaterial;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Idx;                                               // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RandomLightMaterialScheduleComponent_C_RewriteMaterialsCore) == 0x000008, "Wrong alignment on RandomLightMaterialScheduleComponent_C_RewriteMaterialsCore");
static_assert(sizeof(RandomLightMaterialScheduleComponent_C_RewriteMaterialsCore) == 0x000018, "Wrong size on RandomLightMaterialScheduleComponent_C_RewriteMaterialsCore");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_RewriteMaterialsCore, MeshComp) == 0x000000, "Member 'RandomLightMaterialScheduleComponent_C_RewriteMaterialsCore::MeshComp' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_RewriteMaterialsCore, TargetMaterial) == 0x000008, "Member 'RandomLightMaterialScheduleComponent_C_RewriteMaterialsCore::TargetMaterial' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_RewriteMaterialsCore, Idx) == 0x000010, "Member 'RandomLightMaterialScheduleComponent_C_RewriteMaterialsCore::Idx' has a wrong offset!");

// Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.EditorPreview
// 0x00C8 (0x00C8 - 0x0000)
struct RandomLightMaterialScheduleComponent_C_EditorPreview final
{
public:
	float                                         TimeRate;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Preview;                                           // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98E4[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PrevIntensity;                                     // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OnTimeMin;                                         // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OffTimeMin;                                        // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NowTime;                                           // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_98E5[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UStaticMeshComponent*>           Static_Meshes;                                     // 0x0020(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	float                                         Rate;                                              // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Tmp_Index;                                         // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CalcPreviewFade_Available;                // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98E6[0x2];                                     // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_CalcPreviewFade_Rate;                     // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CalcPreviewFade_Available_1;              // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98E7[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_CalcPreviewFade_Rate_1;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InRange_FloatFloat_ReturnValue;           // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_InRange_FloatFloat_ReturnValue_1;         // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98E8[0x2];                                     // 0x0056(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue_1;              // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue_1;             // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue_1;                      // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayGame_ReturnValue;                   // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98E9[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_Array_Get_Item;                           // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98EA[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue_1;                     // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_3;            // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RandomLightMaterialScheduleComponent_C_EditorPreview) == 0x000008, "Wrong alignment on RandomLightMaterialScheduleComponent_C_EditorPreview");
static_assert(sizeof(RandomLightMaterialScheduleComponent_C_EditorPreview) == 0x0000C8, "Wrong size on RandomLightMaterialScheduleComponent_C_EditorPreview");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, TimeRate) == 0x000000, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::TimeRate' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, Preview) == 0x000004, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::Preview' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, ReturnValue) == 0x000008, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, PrevIntensity) == 0x00000C, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::PrevIntensity' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, OnTimeMin) == 0x000010, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::OnTimeMin' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, OffTimeMin) == 0x000014, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::OffTimeMin' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, NowTime) == 0x000018, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::NowTime' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, Static_Meshes) == 0x000020, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::Static_Meshes' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, Rate) == 0x000030, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::Rate' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, Tmp_Index) == 0x000034, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::Tmp_Index' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, Temp_int_Array_Index_Variable) == 0x000040, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000044, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_CalcPreviewFade_Available) == 0x000045, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_CalcPreviewFade_Available' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_CalcPreviewFade_Rate) == 0x000048, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_CalcPreviewFade_Rate' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_CalcPreviewFade_Available_1) == 0x00004C, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_CalcPreviewFade_Available_1' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_CalcPreviewFade_Rate_1) == 0x000050, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_CalcPreviewFade_Rate_1' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_InRange_FloatFloat_ReturnValue) == 0x000054, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_InRange_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_InRange_FloatFloat_ReturnValue_1) == 0x000055, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_InRange_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000058, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_Divide_IntInt_ReturnValue) == 0x00005C, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_Divide_IntInt_ReturnValue_1) == 0x000060, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_Divide_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000064, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_Multiply_IntFloat_ReturnValue_1) == 0x000068, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_Multiply_IntFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_Percent_IntInt_ReturnValue) == 0x00006C, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_Percent_IntInt_ReturnValue_1) == 0x000070, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_Percent_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_Clamp_ReturnValue) == 0x000074, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_Clamp_ReturnValue_1) == 0x000078, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_Clamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_Conv_IntToFloat_ReturnValue) == 0x00007C, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000080, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_Add_FloatFloat_ReturnValue) == 0x000084, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000088, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_IsPlayGame_ReturnValue) == 0x00008C, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_IsPlayGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_Array_Get_Item) == 0x000090, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_Array_Length_ReturnValue) == 0x000098, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_Less_IntInt_ReturnValue) == 0x00009C, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x0000A0, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_FFloor_ReturnValue) == 0x0000A4, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_Multiply_IntInt_ReturnValue) == 0x0000A8, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x0000AC, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0000B0, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x0000B4, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_FFloor_ReturnValue_1) == 0x0000B8, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_FFloor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000BC, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_EditorPreview, CallFunc_Conv_IntToFloat_ReturnValue_3) == 0x0000C0, "Member 'RandomLightMaterialScheduleComponent_C_EditorPreview::CallFunc_Conv_IntToFloat_ReturnValue_3' has a wrong offset!");

// Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.InitEditorPreview
// 0x0048 (0x0048 - 0x0000)
struct RandomLightMaterialScheduleComponent_C_InitEditorPreview final
{
public:
	bool                                          Sw;                                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98EB[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UStaticMeshComponent*>           StaticMeshes;                                      // 0x0008(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98EC[0x2];                                     // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MeshesResetToDefaultMaterials_ReturnValue; // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RewriteMaterialsOfStaticMeshesForPreview_ReturnValue; // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RandomLightMaterialScheduleComponent_C_InitEditorPreview) == 0x000008, "Wrong alignment on RandomLightMaterialScheduleComponent_C_InitEditorPreview");
static_assert(sizeof(RandomLightMaterialScheduleComponent_C_InitEditorPreview) == 0x000048, "Wrong size on RandomLightMaterialScheduleComponent_C_InitEditorPreview");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_InitEditorPreview, Sw) == 0x000000, "Member 'RandomLightMaterialScheduleComponent_C_InitEditorPreview::Sw' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_InitEditorPreview, StaticMeshes) == 0x000008, "Member 'RandomLightMaterialScheduleComponent_C_InitEditorPreview::StaticMeshes' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_InitEditorPreview, Temp_int_Array_Index_Variable) == 0x000018, "Member 'RandomLightMaterialScheduleComponent_C_InitEditorPreview::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_InitEditorPreview, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'RandomLightMaterialScheduleComponent_C_InitEditorPreview::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_InitEditorPreview, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'RandomLightMaterialScheduleComponent_C_InitEditorPreview::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_InitEditorPreview, CallFunc_Not_PreBool_ReturnValue) == 0x000024, "Member 'RandomLightMaterialScheduleComponent_C_InitEditorPreview::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_InitEditorPreview, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000025, "Member 'RandomLightMaterialScheduleComponent_C_InitEditorPreview::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_InitEditorPreview, CallFunc_MeshesResetToDefaultMaterials_ReturnValue) == 0x000028, "Member 'RandomLightMaterialScheduleComponent_C_InitEditorPreview::CallFunc_MeshesResetToDefaultMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_InitEditorPreview, CallFunc_RewriteMaterialsOfStaticMeshesForPreview_ReturnValue) == 0x00002C, "Member 'RandomLightMaterialScheduleComponent_C_InitEditorPreview::CallFunc_RewriteMaterialsOfStaticMeshesForPreview_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_InitEditorPreview, CallFunc_Array_Get_Item) == 0x000030, "Member 'RandomLightMaterialScheduleComponent_C_InitEditorPreview::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_InitEditorPreview, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000038, "Member 'RandomLightMaterialScheduleComponent_C_InitEditorPreview::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_InitEditorPreview, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'RandomLightMaterialScheduleComponent_C_InitEditorPreview::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_InitEditorPreview, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'RandomLightMaterialScheduleComponent_C_InitEditorPreview::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.CalcPreviewFade
// 0x0038 (0x0038 - 0x0000)
struct RandomLightMaterialScheduleComponent_C_CalcPreviewFade final
{
public:
	float                                         NowTime;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeStart;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Duration;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Sw;                                                // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Available;                                         // 0x000D(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98ED[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Rate;                                              // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TmpFade;                                           // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98EE[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_InRange_FloatFloat_ReturnValue;           // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RandomLightMaterialScheduleComponent_C_CalcPreviewFade) == 0x000004, "Wrong alignment on RandomLightMaterialScheduleComponent_C_CalcPreviewFade");
static_assert(sizeof(RandomLightMaterialScheduleComponent_C_CalcPreviewFade) == 0x000038, "Wrong size on RandomLightMaterialScheduleComponent_C_CalcPreviewFade");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_CalcPreviewFade, NowTime) == 0x000000, "Member 'RandomLightMaterialScheduleComponent_C_CalcPreviewFade::NowTime' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_CalcPreviewFade, FadeStart) == 0x000004, "Member 'RandomLightMaterialScheduleComponent_C_CalcPreviewFade::FadeStart' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_CalcPreviewFade, Duration) == 0x000008, "Member 'RandomLightMaterialScheduleComponent_C_CalcPreviewFade::Duration' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_CalcPreviewFade, Sw) == 0x00000C, "Member 'RandomLightMaterialScheduleComponent_C_CalcPreviewFade::Sw' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_CalcPreviewFade, Available) == 0x00000D, "Member 'RandomLightMaterialScheduleComponent_C_CalcPreviewFade::Available' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_CalcPreviewFade, Rate) == 0x000010, "Member 'RandomLightMaterialScheduleComponent_C_CalcPreviewFade::Rate' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_CalcPreviewFade, TmpFade) == 0x000014, "Member 'RandomLightMaterialScheduleComponent_C_CalcPreviewFade::TmpFade' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_CalcPreviewFade, CallFunc_FMax_ReturnValue) == 0x000018, "Member 'RandomLightMaterialScheduleComponent_C_CalcPreviewFade::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_CalcPreviewFade, CallFunc_Less_FloatFloat_ReturnValue) == 0x00001C, "Member 'RandomLightMaterialScheduleComponent_C_CalcPreviewFade::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_CalcPreviewFade, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000020, "Member 'RandomLightMaterialScheduleComponent_C_CalcPreviewFade::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_CalcPreviewFade, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000024, "Member 'RandomLightMaterialScheduleComponent_C_CalcPreviewFade::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_CalcPreviewFade, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000028, "Member 'RandomLightMaterialScheduleComponent_C_CalcPreviewFade::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_CalcPreviewFade, CallFunc_SelectFloat_ReturnValue) == 0x00002C, "Member 'RandomLightMaterialScheduleComponent_C_CalcPreviewFade::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_CalcPreviewFade, CallFunc_Add_FloatFloat_ReturnValue) == 0x000030, "Member 'RandomLightMaterialScheduleComponent_C_CalcPreviewFade::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_CalcPreviewFade, CallFunc_InRange_FloatFloat_ReturnValue) == 0x000034, "Member 'RandomLightMaterialScheduleComponent_C_CalcPreviewFade::CallFunc_InRange_FloatFloat_ReturnValue' has a wrong offset!");

// Function RandomLightMaterialScheduleComponent.RandomLightMaterialScheduleComponent_C.FindDecalsMaterial
// 0x0068 (0x0068 - 0x0000)
struct RandomLightMaterialScheduleComponent_C_FindDecalsMaterial final
{
public:
	class UDecalComponent*                        DecalComp;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      TargetMaterial;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Idx;                                               // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_98EF[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               ReturnValue;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Temp_object_Variable;                              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIntFromActorName_ReturnValue;          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98F0[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_98F1[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SchedulableMaterialParam_C*         CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_98F2[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetVariableMaterialInstance_MaterialInstanceDynamic; // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               K2Node_Select_Default;                             // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RandomLightMaterialScheduleComponent_C_FindDecalsMaterial) == 0x000008, "Wrong alignment on RandomLightMaterialScheduleComponent_C_FindDecalsMaterial");
static_assert(sizeof(RandomLightMaterialScheduleComponent_C_FindDecalsMaterial) == 0x000068, "Wrong size on RandomLightMaterialScheduleComponent_C_FindDecalsMaterial");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_FindDecalsMaterial, DecalComp) == 0x000000, "Member 'RandomLightMaterialScheduleComponent_C_FindDecalsMaterial::DecalComp' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_FindDecalsMaterial, TargetMaterial) == 0x000008, "Member 'RandomLightMaterialScheduleComponent_C_FindDecalsMaterial::TargetMaterial' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_FindDecalsMaterial, Idx) == 0x000010, "Member 'RandomLightMaterialScheduleComponent_C_FindDecalsMaterial::Idx' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_FindDecalsMaterial, ReturnValue) == 0x000018, "Member 'RandomLightMaterialScheduleComponent_C_FindDecalsMaterial::ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_FindDecalsMaterial, Temp_object_Variable) == 0x000020, "Member 'RandomLightMaterialScheduleComponent_C_FindDecalsMaterial::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_FindDecalsMaterial, CallFunc_GetOwner_ReturnValue) == 0x000028, "Member 'RandomLightMaterialScheduleComponent_C_FindDecalsMaterial::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_FindDecalsMaterial, CallFunc_GetIntFromActorName_ReturnValue) == 0x000030, "Member 'RandomLightMaterialScheduleComponent_C_FindDecalsMaterial::CallFunc_GetIntFromActorName_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_FindDecalsMaterial, Temp_bool_Variable) == 0x000034, "Member 'RandomLightMaterialScheduleComponent_C_FindDecalsMaterial::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_FindDecalsMaterial, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'RandomLightMaterialScheduleComponent_C_FindDecalsMaterial::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_FindDecalsMaterial, CallFunc_Percent_IntInt_ReturnValue) == 0x00003C, "Member 'RandomLightMaterialScheduleComponent_C_FindDecalsMaterial::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_FindDecalsMaterial, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'RandomLightMaterialScheduleComponent_C_FindDecalsMaterial::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_FindDecalsMaterial, CallFunc_Array_Get_Item) == 0x000048, "Member 'RandomLightMaterialScheduleComponent_C_FindDecalsMaterial::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_FindDecalsMaterial, CallFunc_Greater_IntInt_ReturnValue) == 0x000050, "Member 'RandomLightMaterialScheduleComponent_C_FindDecalsMaterial::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_FindDecalsMaterial, CallFunc_GetVariableMaterialInstance_MaterialInstanceDynamic) == 0x000058, "Member 'RandomLightMaterialScheduleComponent_C_FindDecalsMaterial::CallFunc_GetVariableMaterialInstance_MaterialInstanceDynamic' has a wrong offset!");
static_assert(offsetof(RandomLightMaterialScheduleComponent_C_FindDecalsMaterial, K2Node_Select_Default) == 0x000060, "Member 'RandomLightMaterialScheduleComponent_C_FindDecalsMaterial::K2Node_Select_Default' has a wrong offset!");

}

