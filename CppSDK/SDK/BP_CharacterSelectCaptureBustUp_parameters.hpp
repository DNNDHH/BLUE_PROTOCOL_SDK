#pragma once

 

// Package: BP_CharacterSelectCaptureBustUp

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.ExecuteUbergraph_BP_CharacterSelectCaptureBustUp
// 0x05C0 (0x05C0 - 0x0000)
struct BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BD5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharaCreateParameter                K2Node_CustomEvent_CharaCreateParameter;           // 0x0008(0x03C0)()
	class FString                                 K2Node_CustomEvent_CharacterShortID;               // 0x03C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x03D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Hidden;                         // 0x03DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x03DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Result;                         // 0x03DE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BD6[0x1];                                     // 0x03DF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSelectCaptureCharacter_C*     K2Node_DynamicCast_AsBP_Player_Select_Capture_Character; // 0x03E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x03E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BD7[0x3];                                     // 0x03E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x03EC(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x03FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BD8[0x3];                                     // 0x03FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0400(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x040C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0418(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_FacialNum;                      // 0x041C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue_1;          // 0x0420(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x042C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<ESBFacialType>                         Temp_byte_Variable;                                // 0x0438(0x0010)(ReferenceParm)
	ESBCharacterGender                            Temp_byte_Variable_1;                              // 0x0448(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BD9[0x3];                                     // 0x0449(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Map_Find_Value;                           // 0x044C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0450(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BDA[0x3];                                     // 0x0451(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Map_Find_Value_1;                         // 0x0454(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0458(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BDB[0x3];                                     // 0x0459(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_DeltaTime;                      // 0x045C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharaPartsFaceComponent*             CallFunc_GetComponentByClass_ReturnValue;          // 0x0460(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0468(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x046C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0470(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BDC[0x7];                                     // 0x0471(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBFacialType>                         K2Node_Select_Default;                             // 0x0478(0x0010)(ReferenceParm)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0488(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0510(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x051C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x0528(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x0534(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp) == 0x000008, "Wrong alignment on BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp");
static_assert(sizeof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp) == 0x0005C0, "Wrong size on BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, EntryPoint) == 0x000000, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, K2Node_CustomEvent_CharaCreateParameter) == 0x000008, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::K2Node_CustomEvent_CharaCreateParameter' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, K2Node_CustomEvent_CharacterShortID) == 0x0003C8, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::K2Node_CustomEvent_CharacterShortID' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, CallFunc_Add_IntInt_ReturnValue) == 0x0003D8, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, K2Node_CustomEvent_Hidden) == 0x0003DC, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::K2Node_CustomEvent_Hidden' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, CallFunc_Not_PreBool_ReturnValue) == 0x0003DD, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, K2Node_CustomEvent_Result) == 0x0003DE, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, K2Node_DynamicCast_AsBP_Player_Select_Capture_Character) == 0x0003E0, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::K2Node_DynamicCast_AsBP_Player_Select_Capture_Character' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, K2Node_DynamicCast_bSuccess) == 0x0003E8, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, K2Node_CreateDelegate_OutputDelegate) == 0x0003EC, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, CallFunc_K2_SetActorRotation_ReturnValue) == 0x0003FC, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, CallFunc_GetSocketLocation_ReturnValue) == 0x000400, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, CallFunc_Add_VectorVector_ReturnValue) == 0x00040C, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, Temp_int_Variable) == 0x000418, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, K2Node_CustomEvent_FacialNum) == 0x00041C, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::K2Node_CustomEvent_FacialNum' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, CallFunc_GetSocketLocation_ReturnValue_1) == 0x000420, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::CallFunc_GetSocketLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, CallFunc_Add_VectorVector_ReturnValue_1) == 0x00042C, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, Temp_byte_Variable) == 0x000438, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, Temp_byte_Variable_1) == 0x000448, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, CallFunc_Map_Find_Value) == 0x00044C, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, CallFunc_Map_Find_ReturnValue) == 0x000450, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, CallFunc_Map_Find_Value_1) == 0x000454, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, CallFunc_Map_Find_ReturnValue_1) == 0x000458, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, K2Node_CustomEvent_DeltaTime) == 0x00045C, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::K2Node_CustomEvent_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, CallFunc_GetComponentByClass_ReturnValue) == 0x000460, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, Temp_int_Variable_1) == 0x000468, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, CallFunc_Array_Length_ReturnValue) == 0x00046C, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000470, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, K2Node_Select_Default) == 0x000478, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000488, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000510, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, CallFunc_Subtract_VectorVector_ReturnValue) == 0x00051C, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000528, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000534, "Member 'BP_CharacterSelectCaptureBustUp_C_ExecuteUbergraph_BP_CharacterSelectCaptureBustUp::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");

// Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.Update
// 0x0004 (0x0004 - 0x0000)
struct BP_CharacterSelectCaptureBustUp_C_Update final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CharacterSelectCaptureBustUp_C_Update) == 0x000004, "Wrong alignment on BP_CharacterSelectCaptureBustUp_C_Update");
static_assert(sizeof(BP_CharacterSelectCaptureBustUp_C_Update) == 0x000004, "Wrong size on BP_CharacterSelectCaptureBustUp_C_Update");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_Update, DeltaTime) == 0x000000, "Member 'BP_CharacterSelectCaptureBustUp_C_Update::DeltaTime' has a wrong offset!");

// Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.SetFacial
// 0x0004 (0x0004 - 0x0000)
struct BP_CharacterSelectCaptureBustUp_C_SetFacial final
{
public:
	int32                                         Param_FacialNum;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CharacterSelectCaptureBustUp_C_SetFacial) == 0x000004, "Wrong alignment on BP_CharacterSelectCaptureBustUp_C_SetFacial");
static_assert(sizeof(BP_CharacterSelectCaptureBustUp_C_SetFacial) == 0x000004, "Wrong size on BP_CharacterSelectCaptureBustUp_C_SetFacial");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_SetFacial, Param_FacialNum) == 0x000000, "Member 'BP_CharacterSelectCaptureBustUp_C_SetFacial::Param_FacialNum' has a wrong offset!");

// Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.CustomEvent_1
// 0x0001 (0x0001 - 0x0000)
struct BP_CharacterSelectCaptureBustUp_C_CustomEvent_1 final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CharacterSelectCaptureBustUp_C_CustomEvent_1) == 0x000001, "Wrong alignment on BP_CharacterSelectCaptureBustUp_C_CustomEvent_1");
static_assert(sizeof(BP_CharacterSelectCaptureBustUp_C_CustomEvent_1) == 0x000001, "Wrong size on BP_CharacterSelectCaptureBustUp_C_CustomEvent_1");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_CustomEvent_1, Result) == 0x000000, "Member 'BP_CharacterSelectCaptureBustUp_C_CustomEvent_1::Result' has a wrong offset!");

// Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.BustUpInitialize
// 0x03D0 (0x03D0 - 0x0000)
struct BP_CharacterSelectCaptureBustUp_C_BustUpInitialize final
{
public:
	struct FSBCharaCreateParameter                CharaCreateParameter;                              // 0x0000(0x03C0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 CharacterShortId;                                  // 0x03C0(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CharacterSelectCaptureBustUp_C_BustUpInitialize) == 0x000008, "Wrong alignment on BP_CharacterSelectCaptureBustUp_C_BustUpInitialize");
static_assert(sizeof(BP_CharacterSelectCaptureBustUp_C_BustUpInitialize) == 0x0003D0, "Wrong size on BP_CharacterSelectCaptureBustUp_C_BustUpInitialize");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_BustUpInitialize, CharaCreateParameter) == 0x000000, "Member 'BP_CharacterSelectCaptureBustUp_C_BustUpInitialize::CharaCreateParameter' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_BustUpInitialize, CharacterShortId) == 0x0003C0, "Member 'BP_CharacterSelectCaptureBustUp_C_BustUpInitialize::CharacterShortId' has a wrong offset!");

// Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.SetRender
// 0x0001 (0x0001 - 0x0000)
struct BP_CharacterSelectCaptureBustUp_C_SetRender final
{
public:
	bool                                          Hidden;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CharacterSelectCaptureBustUp_C_SetRender) == 0x000001, "Wrong alignment on BP_CharacterSelectCaptureBustUp_C_SetRender");
static_assert(sizeof(BP_CharacterSelectCaptureBustUp_C_SetRender) == 0x000001, "Wrong size on BP_CharacterSelectCaptureBustUp_C_SetRender");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_SetRender, Hidden) == 0x000000, "Member 'BP_CharacterSelectCaptureBustUp_C_SetRender::Hidden' has a wrong offset!");

// Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.IsLoad
// 0x0001 (0x0001 - 0x0000)
struct BP_CharacterSelectCaptureBustUp_C_IsLoad final
{
public:
	bool                                          Param_bLoad;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CharacterSelectCaptureBustUp_C_IsLoad) == 0x000001, "Wrong alignment on BP_CharacterSelectCaptureBustUp_C_IsLoad");
static_assert(sizeof(BP_CharacterSelectCaptureBustUp_C_IsLoad) == 0x000001, "Wrong size on BP_CharacterSelectCaptureBustUp_C_IsLoad");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_IsLoad, Param_bLoad) == 0x000000, "Member 'BP_CharacterSelectCaptureBustUp_C_IsLoad::Param_bLoad' has a wrong offset!");

// Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.Load Facial Num
// 0x0020 (0x0020 - 0x0000)
struct BP_CharacterSelectCaptureBustUp_C_Load_Facial_Num final
{
public:
	class UBP_CharaSelectSaveGameObject_C*        CallFunc_CreateSaveGameObject_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USaveGame*                              CallFunc_LoadGameFromSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_CharaSelectSaveGameObject_C*        K2Node_DynamicCast_AsBP_Chara_Select_Save_Game_Object; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CharacterSelectCaptureBustUp_C_Load_Facial_Num) == 0x000008, "Wrong alignment on BP_CharacterSelectCaptureBustUp_C_Load_Facial_Num");
static_assert(sizeof(BP_CharacterSelectCaptureBustUp_C_Load_Facial_Num) == 0x000020, "Wrong size on BP_CharacterSelectCaptureBustUp_C_Load_Facial_Num");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_Load_Facial_Num, CallFunc_CreateSaveGameObject_ReturnValue) == 0x000000, "Member 'BP_CharacterSelectCaptureBustUp_C_Load_Facial_Num::CallFunc_CreateSaveGameObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_Load_Facial_Num, CallFunc_LoadGameFromSlot_ReturnValue) == 0x000008, "Member 'BP_CharacterSelectCaptureBustUp_C_Load_Facial_Num::CallFunc_LoadGameFromSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_Load_Facial_Num, K2Node_DynamicCast_AsBP_Chara_Select_Save_Game_Object) == 0x000010, "Member 'BP_CharacterSelectCaptureBustUp_C_Load_Facial_Num::K2Node_DynamicCast_AsBP_Chara_Select_Save_Game_Object' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_Load_Facial_Num, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_CharacterSelectCaptureBustUp_C_Load_Facial_Num::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_CharacterSelectCaptureBustUp.BP_CharacterSelectCaptureBustUp_C.Save Facial Num
// 0x0008 (0x0008 - 0x0000)
struct BP_CharacterSelectCaptureBustUp_C_Save_Facial_Num final
{
public:
	int32                                         Param_FacialNum;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SaveGameToSlot_ReturnValue;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CharacterSelectCaptureBustUp_C_Save_Facial_Num) == 0x000004, "Wrong alignment on BP_CharacterSelectCaptureBustUp_C_Save_Facial_Num");
static_assert(sizeof(BP_CharacterSelectCaptureBustUp_C_Save_Facial_Num) == 0x000008, "Wrong size on BP_CharacterSelectCaptureBustUp_C_Save_Facial_Num");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_Save_Facial_Num, Param_FacialNum) == 0x000000, "Member 'BP_CharacterSelectCaptureBustUp_C_Save_Facial_Num::Param_FacialNum' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureBustUp_C_Save_Facial_Num, CallFunc_SaveGameToSlot_ReturnValue) == 0x000004, "Member 'BP_CharacterSelectCaptureBustUp_C_Save_Facial_Num::CallFunc_SaveGameToSlot_ReturnValue' has a wrong offset!");

}

