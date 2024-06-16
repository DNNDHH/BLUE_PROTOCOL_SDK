#pragma once

 

// Package: BP_CharacterSelectCaptureOne

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.ExecuteUbergraph_BP_CharacterSelectCaptureOne
// 0x0630 (0x0630 - 0x0000)
struct BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_VectorToString_ReturnValue;          // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_VectorToString_ReturnValue_1;        // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_VectorToString_ReturnValue_2;        // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_VectorToString_ReturnValue_3;        // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue;           // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue_1;         // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBCharaCreateParameter                K2Node_CustomEvent_CharaCreateParameter;           // 0x0088(0x03C0)()
	int32                                         K2Node_CustomEvent_Number;                         // 0x0448(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E63[0x4];                                     // 0x044C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_CharacterId;                    // 0x0450(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_PoseID;                         // 0x0460(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_CharaIndex;                     // 0x0464(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0468(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0474(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0480(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E64[0x4];                                     // 0x048C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0490(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue;               // 0x0498(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E65[0x7];                                     // 0x0499(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x04A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue_1;             // 0x04A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E66[0x3];                                     // 0x04A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;           // 0x04AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_3;           // 0x04B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E67[0x4];                                     // 0x04C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x04C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue_2;             // 0x04D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E68[0x7];                                     // 0x04D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_3;        // 0x04D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue_3;             // 0x04E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E69[0x3];                                     // 0x04E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_4;           // 0x04E4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 Temp_object_Variable_2;                            // 0x04F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 Temp_object_Variable_3;                            // 0x04F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result;                         // 0x0500(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E6A[0x7];                                     // 0x0501(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextureRenderTarget2D*                 Temp_object_Variable_4;                            // 0x0508(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_DeltaTime;                      // 0x0510(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_SelectICharandex_1;             // 0x0514(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 Temp_object_Variable_5;                            // 0x0518(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_SelectICharandex;               // 0x0520(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E6B[0x4];                                     // 0x0524(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSelectCaptureCharacter_C*     K2Node_DynamicCast_AsBP_Player_Select_Capture_Character; // 0x0528(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0530(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E6C[0x3];                                     // 0x0531(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0534(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0538(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x053C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0540(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E6D[0x7];                                     // 0x0541(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_4;        // 0x0548(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_5;        // 0x0550(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue_4;             // 0x0558(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue_5;             // 0x0559(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E6E[0x2];                                     // 0x055A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x055C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0560(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E6F[0x4];                                     // 0x0564(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextureRenderTarget2D*                 Temp_object_Variable_6;                            // 0x0568(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0570(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsEditor_ReturnValue;                     // 0x05F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E70[0x7];                                     // 0x05F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextureRenderTarget2D*                 Temp_object_Variable_7;                            // 0x0600(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0608(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0609(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x060A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x060B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x060C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9E71[0x3];                                     // 0x060D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextureRenderTarget2D*                 Temp_object_Variable_8;                            // 0x0610(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 Temp_object_Variable_9;                            // 0x0618(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 K2Node_Select_Default;                             // 0x0620(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_2;             // 0x0628(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x062C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x062D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne) == 0x000008, "Wrong alignment on BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne");
static_assert(sizeof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne) == 0x000630, "Wrong size on BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, EntryPoint) == 0x000000, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, Temp_int_Variable) == 0x000004, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, Temp_object_Variable) == 0x000008, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, Temp_object_Variable_1) == 0x000010, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_Conv_VectorToString_ReturnValue) == 0x000018, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_Conv_VectorToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_Conv_VectorToString_ReturnValue_1) == 0x000028, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_Conv_VectorToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_Conv_VectorToString_ReturnValue_2) == 0x000038, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_Conv_VectorToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_Conv_VectorToString_ReturnValue_3) == 0x000048, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_Conv_VectorToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, K2Node_CreateDelegate_OutputDelegate) == 0x000058, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_Conv_FloatToString_ReturnValue) == 0x000068, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_Conv_FloatToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_Conv_FloatToString_ReturnValue_1) == 0x000078, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_Conv_FloatToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, K2Node_CustomEvent_CharaCreateParameter) == 0x000088, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::K2Node_CustomEvent_CharaCreateParameter' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, K2Node_CustomEvent_Number) == 0x000448, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::K2Node_CustomEvent_Number' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, K2Node_CustomEvent_CharacterId) == 0x000450, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::K2Node_CustomEvent_CharacterId' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, K2Node_CustomEvent_PoseID) == 0x000460, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::K2Node_CustomEvent_PoseID' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, K2Node_CustomEvent_CharaIndex) == 0x000464, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::K2Node_CustomEvent_CharaIndex' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000468, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_Add_VectorVector_ReturnValue) == 0x000474, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000480, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_GetPlayerController_ReturnValue) == 0x000490, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_IsInputKeyDown_ReturnValue) == 0x000498, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_IsInputKeyDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_GetPlayerController_ReturnValue_1) == 0x0004A0, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_IsInputKeyDown_ReturnValue_1) == 0x0004A8, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_IsInputKeyDown_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_Add_VectorVector_ReturnValue_2) == 0x0004AC, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_Add_VectorVector_ReturnValue_3) == 0x0004B8, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_Add_VectorVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_GetPlayerController_ReturnValue_2) == 0x0004C8, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_IsInputKeyDown_ReturnValue_2) == 0x0004D0, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_IsInputKeyDown_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_GetPlayerController_ReturnValue_3) == 0x0004D8, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_GetPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_IsInputKeyDown_ReturnValue_3) == 0x0004E0, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_IsInputKeyDown_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_Add_VectorVector_ReturnValue_4) == 0x0004E4, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_Add_VectorVector_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, Temp_object_Variable_2) == 0x0004F0, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, Temp_object_Variable_3) == 0x0004F8, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, K2Node_CustomEvent_Result) == 0x000500, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, Temp_object_Variable_4) == 0x000508, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, K2Node_CustomEvent_DeltaTime) == 0x000510, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::K2Node_CustomEvent_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, K2Node_CustomEvent_SelectICharandex_1) == 0x000514, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::K2Node_CustomEvent_SelectICharandex_1' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, Temp_object_Variable_5) == 0x000518, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, K2Node_CustomEvent_SelectICharandex) == 0x000520, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::K2Node_CustomEvent_SelectICharandex' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, K2Node_DynamicCast_AsBP_Player_Select_Capture_Character) == 0x000528, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::K2Node_DynamicCast_AsBP_Player_Select_Capture_Character' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, K2Node_DynamicCast_bSuccess) == 0x000530, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_Array_Length_ReturnValue) == 0x000534, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_Subtract_IntInt_ReturnValue) == 0x000538, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_RandomIntegerInRange_ReturnValue) == 0x00053C, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000540, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_GetPlayerController_ReturnValue_4) == 0x000548, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_GetPlayerController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_GetPlayerController_ReturnValue_5) == 0x000550, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_GetPlayerController_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_IsInputKeyDown_ReturnValue_4) == 0x000558, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_IsInputKeyDown_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_IsInputKeyDown_ReturnValue_5) == 0x000559, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_IsInputKeyDown_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_Add_FloatFloat_ReturnValue) == 0x00055C, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000560, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, Temp_object_Variable_6) == 0x000568, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::Temp_object_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000570, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_IsEditor_ReturnValue) == 0x0005F8, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_IsEditor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, Temp_object_Variable_7) == 0x000600, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::Temp_object_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_IsValid_ReturnValue) == 0x000608, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_IsValid_ReturnValue_1) == 0x000609, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_Not_PreBool_ReturnValue) == 0x00060A, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_IsValid_ReturnValue_2) == 0x00060B, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_IsValid_ReturnValue_3) == 0x00060C, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, Temp_object_Variable_8) == 0x000610, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::Temp_object_Variable_8' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, Temp_object_Variable_9) == 0x000618, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::Temp_object_Variable_9' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, K2Node_Select_Default) == 0x000620, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_Add_FloatFloat_ReturnValue_2) == 0x000628, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_Add_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00062C, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x00062D, "Member 'BP_CharacterSelectCaptureOne_C_ExecuteUbergraph_BP_CharacterSelectCaptureOne::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");

// Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.GameStartPlay
// 0x0004 (0x0004 - 0x0000)
struct BP_CharacterSelectCaptureOne_C_GameStartPlay final
{
public:
	int32                                         SelectICharandex;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CharacterSelectCaptureOne_C_GameStartPlay) == 0x000004, "Wrong alignment on BP_CharacterSelectCaptureOne_C_GameStartPlay");
static_assert(sizeof(BP_CharacterSelectCaptureOne_C_GameStartPlay) == 0x000004, "Wrong size on BP_CharacterSelectCaptureOne_C_GameStartPlay");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_GameStartPlay, SelectICharandex) == 0x000000, "Member 'BP_CharacterSelectCaptureOne_C_GameStartPlay::SelectICharandex' has a wrong offset!");

// Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.Update
// 0x0008 (0x0008 - 0x0000)
struct BP_CharacterSelectCaptureOne_C_Update final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectICharandex;                                  // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CharacterSelectCaptureOne_C_Update) == 0x000004, "Wrong alignment on BP_CharacterSelectCaptureOne_C_Update");
static_assert(sizeof(BP_CharacterSelectCaptureOne_C_Update) == 0x000008, "Wrong size on BP_CharacterSelectCaptureOne_C_Update");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_Update, DeltaTime) == 0x000000, "Member 'BP_CharacterSelectCaptureOne_C_Update::DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_Update, SelectICharandex) == 0x000004, "Member 'BP_CharacterSelectCaptureOne_C_Update::SelectICharandex' has a wrong offset!");

// Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.CustomEvent_1
// 0x0001 (0x0001 - 0x0000)
struct BP_CharacterSelectCaptureOne_C_CustomEvent_1 final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CharacterSelectCaptureOne_C_CustomEvent_1) == 0x000001, "Wrong alignment on BP_CharacterSelectCaptureOne_C_CustomEvent_1");
static_assert(sizeof(BP_CharacterSelectCaptureOne_C_CustomEvent_1) == 0x000001, "Wrong size on BP_CharacterSelectCaptureOne_C_CustomEvent_1");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_CustomEvent_1, Result) == 0x000000, "Member 'BP_CharacterSelectCaptureOne_C_CustomEvent_1::Result' has a wrong offset!");

// Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.Initialize
// 0x03E0 (0x03E0 - 0x0000)
struct BP_CharacterSelectCaptureOne_C_Initialize final
{
public:
	struct FSBCharaCreateParameter                CharaCreateParameter;                              // 0x0000(0x03C0)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         Number;                                            // 0x03C0(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E72[0x4];                                     // 0x03C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CharacterId;                                       // 0x03C8(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Param_PoseID;                                      // 0x03D8(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_CharaIndex;                                  // 0x03DC(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CharacterSelectCaptureOne_C_Initialize) == 0x000008, "Wrong alignment on BP_CharacterSelectCaptureOne_C_Initialize");
static_assert(sizeof(BP_CharacterSelectCaptureOne_C_Initialize) == 0x0003E0, "Wrong size on BP_CharacterSelectCaptureOne_C_Initialize");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_Initialize, CharaCreateParameter) == 0x000000, "Member 'BP_CharacterSelectCaptureOne_C_Initialize::CharaCreateParameter' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_Initialize, Number) == 0x0003C0, "Member 'BP_CharacterSelectCaptureOne_C_Initialize::Number' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_Initialize, CharacterId) == 0x0003C8, "Member 'BP_CharacterSelectCaptureOne_C_Initialize::CharacterId' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_Initialize, Param_PoseID) == 0x0003D8, "Member 'BP_CharacterSelectCaptureOne_C_Initialize::Param_PoseID' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_Initialize, Param_CharaIndex) == 0x0003DC, "Member 'BP_CharacterSelectCaptureOne_C_Initialize::Param_CharaIndex' has a wrong offset!");

// Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.GetNumber
// 0x0004 (0x0004 - 0x0000)
struct BP_CharacterSelectCaptureOne_C_GetNumber final
{
public:
	int32                                         Param_MyNumber;                                    // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CharacterSelectCaptureOne_C_GetNumber) == 0x000004, "Wrong alignment on BP_CharacterSelectCaptureOne_C_GetNumber");
static_assert(sizeof(BP_CharacterSelectCaptureOne_C_GetNumber) == 0x000004, "Wrong size on BP_CharacterSelectCaptureOne_C_GetNumber");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_GetNumber, Param_MyNumber) == 0x000000, "Member 'BP_CharacterSelectCaptureOne_C_GetNumber::Param_MyNumber' has a wrong offset!");

// Function BP_CharacterSelectCaptureOne.BP_CharacterSelectCaptureOne_C.Is Load Now
// 0x0003 (0x0003 - 0x0000)
struct BP_CharacterSelectCaptureOne_C_Is_Load_Now final
{
public:
	bool                                          Param_bLoad;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_CharacterSelectCaptureOne_C_Is_Load_Now) == 0x000001, "Wrong alignment on BP_CharacterSelectCaptureOne_C_Is_Load_Now");
static_assert(sizeof(BP_CharacterSelectCaptureOne_C_Is_Load_Now) == 0x000003, "Wrong size on BP_CharacterSelectCaptureOne_C_Is_Load_Now");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_Is_Load_Now, Param_bLoad) == 0x000000, "Member 'BP_CharacterSelectCaptureOne_C_Is_Load_Now::Param_bLoad' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_Is_Load_Now, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'BP_CharacterSelectCaptureOne_C_Is_Load_Now::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterSelectCaptureOne_C_Is_Load_Now, CallFunc_BooleanOR_ReturnValue) == 0x000002, "Member 'BP_CharacterSelectCaptureOne_C_Is_Load_Now::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}

