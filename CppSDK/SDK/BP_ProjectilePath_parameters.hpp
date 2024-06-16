#pragma once

 

// Package: BP_ProjectilePath

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_ProjectilePath.BP_ProjectilePath_C.ExecuteUbergraph_BP_ProjectilePath
// 0x01B0 (0x01B0 - 0x0000)
struct BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9F89[0xC];                                     // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Temp_struct_Variable;                              // 0x0010(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplineMeshComponent*                   CallFunc_AddComponent_ReturnValue;                 // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSplineDirection_ReturnValue;           // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x005C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplineMeshComponent*                   CallFunc_GetSplineMeshComponentIndex_ReturnValue;  // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSplineDirection_ReturnValue_1;         // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F8A[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Normal_ReturnValue_1;                     // 0x0084(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F8B[0x2];                                     // 0x00A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       CallFunc_GetSplineComponent_ReturnValue;           // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Location; // 0x00B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Tangent; // 0x00BC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Location_1; // 0x00C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1; // 0x00D4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Location_2; // 0x00E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_2; // 0x00EC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x0104(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue_2;                     // 0x0110(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue_3;                     // 0x011C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0128(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0134(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue_4;                     // 0x0140(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue_5;                     // 0x014C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue_1;                      // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0160(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x016C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue;      // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            CallFunc_GetProjectilePathMesh_ReturnValue;        // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x018A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F8C[0x5];                                     // 0x018B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterial*                              CallFunc_GetProjectilePathMaterial_ReturnValue;    // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F8D[0x3];                                     // 0x0199(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRegisterSplineMeshComponentNum_ReturnValue; // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath) == 0x000010, "Wrong alignment on BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath");
static_assert(sizeof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath) == 0x0001B0, "Wrong size on BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, EntryPoint) == 0x000000, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, Temp_struct_Variable) == 0x000010, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, Temp_int_Variable) == 0x000040, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_AddComponent_ReturnValue) == 0x000048, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_GetSplineDirection_ReturnValue) == 0x000050, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_GetSplineDirection_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_Normal_ReturnValue) == 0x00005C, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_GetSplineMeshComponentIndex_ReturnValue) == 0x000068, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_GetSplineMeshComponentIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_Add_IntInt_ReturnValue_1) == 0x000070, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_GetSplineDirection_ReturnValue_1) == 0x000074, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_GetSplineDirection_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_Normal_ReturnValue_1) == 0x000084, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_Normal_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_Add_IntInt_ReturnValue_2) == 0x000090, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, Temp_int_Variable_1) == 0x000094, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000098, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_K2_AttachToComponent_ReturnValue) == 0x0000A0, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000A1, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_Add_IntInt_ReturnValue_3) == 0x0000A4, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_GetSplineComponent_ReturnValue) == 0x0000A8, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_GetSplineComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_GetLocationAndTangentAtSplinePoint_Location) == 0x0000B0, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_GetLocationAndTangentAtSplinePoint_Location' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_GetLocationAndTangentAtSplinePoint_Tangent) == 0x0000BC, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_GetLocationAndTangentAtSplinePoint_Tangent' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_GetLocationAndTangentAtSplinePoint_Location_1) == 0x0000C8, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_GetLocationAndTangentAtSplinePoint_Location_1' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1) == 0x0000D4, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_GetLocationAndTangentAtSplinePoint_Location_2) == 0x0000E0, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_GetLocationAndTangentAtSplinePoint_Location_2' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_2) == 0x0000EC, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_2' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000F8, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x000104, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_Normal_ReturnValue_2) == 0x000110, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_Normal_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_Normal_ReturnValue_3) == 0x00011C, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_Normal_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_Add_VectorVector_ReturnValue) == 0x000128, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000134, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_Normal_ReturnValue_4) == 0x000140, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_Normal_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_Normal_ReturnValue_5) == 0x00014C, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_Normal_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_VSize_ReturnValue) == 0x000158, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_VSize_ReturnValue_1) == 0x00015C, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_VSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000160, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x00016C, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_GetNumberOfSplinePoints_ReturnValue) == 0x000178, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_GetNumberOfSplinePoints_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_Subtract_IntInt_ReturnValue) == 0x00017C, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_GetProjectilePathMesh_ReturnValue) == 0x000180, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_GetProjectilePathMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000188, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_SetStaticMesh_ReturnValue) == 0x000189, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_IsValid_ReturnValue_1) == 0x00018A, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_GetProjectilePathMaterial_ReturnValue) == 0x000190, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_GetProjectilePathMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_IsValid_ReturnValue_2) == 0x000198, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_GetRegisterSplineMeshComponentNum_ReturnValue) == 0x00019C, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_GetRegisterSplineMeshComponentNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath, CallFunc_Less_IntInt_ReturnValue) == 0x0001A0, "Member 'BP_ProjectilePath_C_ExecuteUbergraph_BP_ProjectilePath::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

