#pragma once

 

// Package: BP_MannequinForCapture_Studio

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "ST_MannequinForCapture_ArrangementInfo_structs.hpp"
#include "ST_MannequinForCapture_CameraSettingInfo_structs.hpp"
#include "ST_MannequinForCapture_Info_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CharaParts_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.ExecuteUbergraph_BP_MannequinForCapture_Studio
// 0x03F0 (0x03F0 - 0x0000)
struct BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsVisible;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DEA[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsMaleActive_1;                 // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EProtectorCategory                            K2Node_CustomEvent_InProtectorCategory_1;          // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DEB[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InCostumeItemId_1;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InIsNoResetLocAndRot_1;         // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DEC[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InCostumeItemIndex;             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsOwnItem;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DED[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InOwnCostumeColorId;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InOwnCostumeColorS;             // 0x002C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InOwnCostumeColorV;             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InOwnCostumeMaterialId;         // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MannequinForCapture_C*              K2Node_DynamicCast_AsBP_Mannequin_for_Capture;     // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DEE[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharaCreateComponent*                CallFunc_GetComponentByClass_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DEF[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MannequinForCapture_C*              K2Node_DynamicCast_AsBP_Mannequin_for_Capture_1;   // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DF0[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharaCreateComponent*                CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DF1[0x6];                                     // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MannequinForCapture_C*              K2Node_DynamicCast_AsBP_Mannequin_for_Capture_2;   // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DF2[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MannequinForCapture_C*              K2Node_DynamicCast_AsBP_Mannequin_for_Capture_3;   // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0093(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DF3[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MannequinForCapture_C*              K2Node_DynamicCast_AsBP_Mannequin_for_Capture_4;   // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DF4[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MannequinForCapture_C*              K2Node_DynamicCast_AsBP_Mannequin_for_Capture_5;   // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x00B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                           CallFunc_GetVectorParameterValue_ReturnValue;      // 0x00B4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetVectorParameterValue_ReturnValue_1;    // 0x00C4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DF5[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x00D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DF6[0x3];                                     // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00E8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0100(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_1;                          // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_12;                   // 0x0135(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DF7[0xA];                                     // 0x0136(0x000A)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetRelativeTransform_ReturnValue;         // 0x0140(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location_1;                // 0x0170(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;                // 0x017C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_1;                   // 0x0188(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DF8[0xC];                                     // 0x0194(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetRelativeTransform_ReturnValue_1;       // 0x01A0(0x0030)(IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue;              // 0x01D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location_2;                // 0x01DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_2;                // 0x01E8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_2;                   // 0x01F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0200(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_ComposeRotators_ReturnValue_1;            // 0x020C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DF9[0x8];                                     // 0x0218(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0220(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0250(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DFA[0x4];                                     // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x0260(0x0030)(IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeTransform_SweepHitResult;   // 0x0290(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          K2Node_CustomEvent_Result_1;                       // 0x0318(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DFB[0x3];                                     // 0x0319(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeTransform_SweepHitResult_1; // 0x031C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          Temp_bool_Variable_1;                              // 0x03A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DFC[0x3];                                     // 0x03A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x03A8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsPartsLoaded_Result;                     // 0x03B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPartsLoaded_Result_1;                   // 0x03B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Result;                         // 0x03BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x03BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsMaleActive;                   // 0x03BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EProtectorCategory                            K2Node_CustomEvent_InProtectorCategory;            // 0x03BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DFD[0x2];                                     // 0x03BE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InCostumeItemId;                // 0x03C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_InIsNoResetLocAndRot;           // 0x03C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DFE[0x3];                                     // 0x03C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate_1;            // 0x03C8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x03D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DFF[0x3];                                     // 0x03D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x03DC(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x03EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_13;                   // 0x03ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_14;                   // 0x03EE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio) == 0x000010, "Wrong alignment on BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio");
static_assert(sizeof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio) == 0x0003F0, "Wrong size on BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, EntryPoint) == 0x000000, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_CustomEvent_IsVisible) == 0x000004, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_CustomEvent_IsVisible' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_Event_EndPlayReason) == 0x000005, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_IsDedicatedServer_ReturnValue) == 0x000006, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000008, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_IsLocallyControlled_ReturnValue) == 0x000012, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_BooleanAND_ReturnValue) == 0x000013, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_CustomEvent_IsMaleActive_1) == 0x000014, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_CustomEvent_IsMaleActive_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_CustomEvent_InProtectorCategory_1) == 0x000015, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_CustomEvent_InProtectorCategory_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_CustomEvent_InCostumeItemId_1) == 0x000018, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_CustomEvent_InCostumeItemId_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_CustomEvent_InIsNoResetLocAndRot_1) == 0x00001C, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_CustomEvent_InIsNoResetLocAndRot_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_Not_PreBool_ReturnValue_1) == 0x00001D, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_CustomEvent_InCostumeItemIndex) == 0x000020, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_CustomEvent_InCostumeItemIndex' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_CustomEvent_IsOwnItem) == 0x000024, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_CustomEvent_IsOwnItem' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_CustomEvent_InOwnCostumeColorId) == 0x000028, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_CustomEvent_InOwnCostumeColorId' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_CustomEvent_InOwnCostumeColorS) == 0x00002C, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_CustomEvent_InOwnCostumeColorS' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_CustomEvent_InOwnCostumeColorV) == 0x000030, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_CustomEvent_InOwnCostumeColorV' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_CustomEvent_InOwnCostumeMaterialId) == 0x000034, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_CustomEvent_InOwnCostumeMaterialId' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_DynamicCast_AsBP_Mannequin_for_Capture) == 0x000038, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_DynamicCast_AsBP_Mannequin_for_Capture' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_GetComponentByClass_ReturnValue) == 0x000048, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_IsValid_ReturnValue_1) == 0x000050, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_IsValid_ReturnValue_2) == 0x000051, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_DynamicCast_AsBP_Mannequin_for_Capture_1) == 0x000058, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_DynamicCast_AsBP_Mannequin_for_Capture_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_DynamicCast_bSuccess_1) == 0x000060, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000068, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_IsValid_ReturnValue_3) == 0x000070, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_IsValid_ReturnValue_4) == 0x000071, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_DynamicCast_AsBP_Mannequin_for_Capture_2) == 0x000078, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_DynamicCast_AsBP_Mannequin_for_Capture_2' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_DynamicCast_bSuccess_2) == 0x000080, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_DynamicCast_AsBP_Mannequin_for_Capture_3) == 0x000088, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_DynamicCast_AsBP_Mannequin_for_Capture_3' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_DynamicCast_bSuccess_3) == 0x000090, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_IsValid_ReturnValue_5) == 0x000091, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_IsValid_ReturnValue_6) == 0x000092, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_Not_PreBool_ReturnValue_2) == 0x000093, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_Not_PreBool_ReturnValue_3) == 0x000094, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_DynamicCast_AsBP_Mannequin_for_Capture_4) == 0x000098, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_DynamicCast_AsBP_Mannequin_for_Capture_4' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_DynamicCast_bSuccess_4) == 0x0000A0, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_DynamicCast_AsBP_Mannequin_for_Capture_5) == 0x0000A8, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_DynamicCast_AsBP_Mannequin_for_Capture_5' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_DynamicCast_bSuccess_5) == 0x0000B0, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_IsValid_ReturnValue_7) == 0x0000B1, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_IsValid_ReturnValue_8) == 0x0000B2, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, Temp_bool_Variable) == 0x0000B3, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_GetVectorParameterValue_ReturnValue) == 0x0000B4, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_GetVectorParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_GetVectorParameterValue_ReturnValue_1) == 0x0000C4, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_GetVectorParameterValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_IsValid_ReturnValue_9) == 0x0000D4, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_Conv_FloatToVector_ReturnValue) == 0x0000D8, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_IsValid_ReturnValue_10) == 0x0000E4, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_BreakTransform_Location) == 0x0000E8, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_BreakTransform_Rotation) == 0x0000F4, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_BreakTransform_Scale) == 0x000100, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_BreakVector_X) == 0x00010C, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_BreakVector_Y) == 0x000110, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_BreakVector_Z) == 0x000114, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000118, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_BreakVector_X_1) == 0x00011C, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_BreakVector_Y_1) == 0x000120, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_BreakVector_Z_1) == 0x000124, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_Add_FloatFloat_ReturnValue) == 0x000128, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x00012C, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000130, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_IsValid_ReturnValue_11) == 0x000134, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_IsValid_ReturnValue_12) == 0x000135, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_GetRelativeTransform_ReturnValue) == 0x000140, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_GetRelativeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_BreakTransform_Location_1) == 0x000170, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_BreakTransform_Rotation_1) == 0x00017C, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_BreakTransform_Scale_1) == 0x000188, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_GetRelativeTransform_ReturnValue_1) == 0x0001A0, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_GetRelativeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_ComposeRotators_ReturnValue) == 0x0001D0, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_ComposeRotators_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_BreakTransform_Location_2) == 0x0001DC, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_BreakTransform_Location_2' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_BreakTransform_Rotation_2) == 0x0001E8, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_BreakTransform_Rotation_2' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_BreakTransform_Scale_2) == 0x0001F4, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_BreakTransform_Scale_2' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_Add_VectorVector_ReturnValue) == 0x000200, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_ComposeRotators_ReturnValue_1) == 0x00020C, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_ComposeRotators_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_MakeTransform_ReturnValue) == 0x000220, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000250, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_MakeTransform_ReturnValue_1) == 0x000260, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_K2_SetRelativeTransform_SweepHitResult) == 0x000290, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_K2_SetRelativeTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_CustomEvent_Result_1) == 0x000318, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_K2_SetRelativeTransform_SweepHitResult_1) == 0x00031C, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_K2_SetRelativeTransform_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, Temp_bool_Variable_1) == 0x0003A4, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_CreateDelegate_OutputDelegate) == 0x0003A8, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_IsPartsLoaded_Result) == 0x0003B8, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_IsPartsLoaded_Result' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_IsPartsLoaded_Result_1) == 0x0003B9, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_IsPartsLoaded_Result_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_CustomEvent_Result) == 0x0003BA, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_BooleanAND_ReturnValue_1) == 0x0003BB, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_CustomEvent_IsMaleActive) == 0x0003BC, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_CustomEvent_IsMaleActive' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_CustomEvent_InProtectorCategory) == 0x0003BD, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_CustomEvent_InProtectorCategory' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_CustomEvent_InCostumeItemId) == 0x0003C0, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_CustomEvent_InCostumeItemId' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_CustomEvent_InIsNoResetLocAndRot) == 0x0003C4, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_CustomEvent_InIsNoResetLocAndRot' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_CreateDelegate_OutputDelegate_1) == 0x0003C8, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, Temp_bool_Variable_2) == 0x0003D8, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_CreateDelegate_OutputDelegate_2) == 0x0003DC, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, K2Node_Select_Default) == 0x0003EC, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_IsValid_ReturnValue_13) == 0x0003ED, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_IsValid_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio, CallFunc_IsValid_ReturnValue_14) == 0x0003EE, "Member 'BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio::CallFunc_IsValid_ReturnValue_14' has a wrong offset!");

// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.SwitchActiveMannequin_LoadAssetAfter
// 0x000C (0x000C - 0x0000)
struct BP_MannequinForCapture_Studio_C_SwitchActiveMannequin_LoadAssetAfter final
{
public:
	bool                                          Param_IsMaleActive;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EProtectorCategory                            InProtectorCategory;                               // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E00[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InCostumeItemId;                                   // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsNoResetLocAndRot;                              // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MannequinForCapture_Studio_C_SwitchActiveMannequin_LoadAssetAfter) == 0x000004, "Wrong alignment on BP_MannequinForCapture_Studio_C_SwitchActiveMannequin_LoadAssetAfter");
static_assert(sizeof(BP_MannequinForCapture_Studio_C_SwitchActiveMannequin_LoadAssetAfter) == 0x00000C, "Wrong size on BP_MannequinForCapture_Studio_C_SwitchActiveMannequin_LoadAssetAfter");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SwitchActiveMannequin_LoadAssetAfter, Param_IsMaleActive) == 0x000000, "Member 'BP_MannequinForCapture_Studio_C_SwitchActiveMannequin_LoadAssetAfter::Param_IsMaleActive' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SwitchActiveMannequin_LoadAssetAfter, InProtectorCategory) == 0x000001, "Member 'BP_MannequinForCapture_Studio_C_SwitchActiveMannequin_LoadAssetAfter::InProtectorCategory' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SwitchActiveMannequin_LoadAssetAfter, InCostumeItemId) == 0x000004, "Member 'BP_MannequinForCapture_Studio_C_SwitchActiveMannequin_LoadAssetAfter::InCostumeItemId' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SwitchActiveMannequin_LoadAssetAfter, InIsNoResetLocAndRot) == 0x000008, "Member 'BP_MannequinForCapture_Studio_C_SwitchActiveMannequin_LoadAssetAfter::InIsNoResetLocAndRot' has a wrong offset!");

// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.CostumeFemaleLoadEnd
// 0x0001 (0x0001 - 0x0000)
struct BP_MannequinForCapture_Studio_C_CostumeFemaleLoadEnd final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MannequinForCapture_Studio_C_CostumeFemaleLoadEnd) == 0x000001, "Wrong alignment on BP_MannequinForCapture_Studio_C_CostumeFemaleLoadEnd");
static_assert(sizeof(BP_MannequinForCapture_Studio_C_CostumeFemaleLoadEnd) == 0x000001, "Wrong size on BP_MannequinForCapture_Studio_C_CostumeFemaleLoadEnd");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_CostumeFemaleLoadEnd, Result) == 0x000000, "Member 'BP_MannequinForCapture_Studio_C_CostumeFemaleLoadEnd::Result' has a wrong offset!");

// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.CostumeMaleLoadEnd
// 0x0001 (0x0001 - 0x0000)
struct BP_MannequinForCapture_Studio_C_CostumeMaleLoadEnd final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MannequinForCapture_Studio_C_CostumeMaleLoadEnd) == 0x000001, "Wrong alignment on BP_MannequinForCapture_Studio_C_CostumeMaleLoadEnd");
static_assert(sizeof(BP_MannequinForCapture_Studio_C_CostumeMaleLoadEnd) == 0x000001, "Wrong size on BP_MannequinForCapture_Studio_C_CostumeMaleLoadEnd");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_CostumeMaleLoadEnd, Result) == 0x000000, "Member 'BP_MannequinForCapture_Studio_C_CostumeMaleLoadEnd::Result' has a wrong offset!");

// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.SetCostumeToMannequin
// 0x0018 (0x0018 - 0x0000)
struct BP_MannequinForCapture_Studio_C_SetCostumeToMannequin final
{
public:
	int32                                         InCostumeItemIndex;                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOwnItem;                                         // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E01[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InOwnCostumeColorId;                               // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InOwnCostumeColorS;                                // 0x000C(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InOwnCostumeColorV;                                // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InOwnCostumeMaterialId;                            // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MannequinForCapture_Studio_C_SetCostumeToMannequin) == 0x000004, "Wrong alignment on BP_MannequinForCapture_Studio_C_SetCostumeToMannequin");
static_assert(sizeof(BP_MannequinForCapture_Studio_C_SetCostumeToMannequin) == 0x000018, "Wrong size on BP_MannequinForCapture_Studio_C_SetCostumeToMannequin");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetCostumeToMannequin, InCostumeItemIndex) == 0x000000, "Member 'BP_MannequinForCapture_Studio_C_SetCostumeToMannequin::InCostumeItemIndex' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetCostumeToMannequin, IsOwnItem) == 0x000004, "Member 'BP_MannequinForCapture_Studio_C_SetCostumeToMannequin::IsOwnItem' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetCostumeToMannequin, InOwnCostumeColorId) == 0x000008, "Member 'BP_MannequinForCapture_Studio_C_SetCostumeToMannequin::InOwnCostumeColorId' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetCostumeToMannequin, InOwnCostumeColorS) == 0x00000C, "Member 'BP_MannequinForCapture_Studio_C_SetCostumeToMannequin::InOwnCostumeColorS' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetCostumeToMannequin, InOwnCostumeColorV) == 0x000010, "Member 'BP_MannequinForCapture_Studio_C_SetCostumeToMannequin::InOwnCostumeColorV' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetCostumeToMannequin, InOwnCostumeMaterialId) == 0x000014, "Member 'BP_MannequinForCapture_Studio_C_SetCostumeToMannequin::InOwnCostumeMaterialId' has a wrong offset!");

// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.SwitchActiveMannequin
// 0x000C (0x000C - 0x0000)
struct BP_MannequinForCapture_Studio_C_SwitchActiveMannequin final
{
public:
	bool                                          Param_IsMaleActive;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EProtectorCategory                            InProtectorCategory;                               // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E02[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InCostumeItemId;                                   // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsNoResetLocAndRot;                              // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MannequinForCapture_Studio_C_SwitchActiveMannequin) == 0x000004, "Wrong alignment on BP_MannequinForCapture_Studio_C_SwitchActiveMannequin");
static_assert(sizeof(BP_MannequinForCapture_Studio_C_SwitchActiveMannequin) == 0x00000C, "Wrong size on BP_MannequinForCapture_Studio_C_SwitchActiveMannequin");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SwitchActiveMannequin, Param_IsMaleActive) == 0x000000, "Member 'BP_MannequinForCapture_Studio_C_SwitchActiveMannequin::Param_IsMaleActive' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SwitchActiveMannequin, InProtectorCategory) == 0x000001, "Member 'BP_MannequinForCapture_Studio_C_SwitchActiveMannequin::InProtectorCategory' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SwitchActiveMannequin, InCostumeItemId) == 0x000004, "Member 'BP_MannequinForCapture_Studio_C_SwitchActiveMannequin::InCostumeItemId' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SwitchActiveMannequin, InIsNoResetLocAndRot) == 0x000008, "Member 'BP_MannequinForCapture_Studio_C_SwitchActiveMannequin::InIsNoResetLocAndRot' has a wrong offset!");

// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_MannequinForCapture_Studio_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MannequinForCapture_Studio_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_MannequinForCapture_Studio_C_ReceiveEndPlay");
static_assert(sizeof(BP_MannequinForCapture_Studio_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_MannequinForCapture_Studio_C_ReceiveEndPlay");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_MannequinForCapture_Studio_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.SetMannequinVisibility
// 0x0001 (0x0001 - 0x0000)
struct BP_MannequinForCapture_Studio_C_SetMannequinVisibility final
{
public:
	bool                                          IsVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MannequinForCapture_Studio_C_SetMannequinVisibility) == 0x000001, "Wrong alignment on BP_MannequinForCapture_Studio_C_SetMannequinVisibility");
static_assert(sizeof(BP_MannequinForCapture_Studio_C_SetMannequinVisibility) == 0x000001, "Wrong size on BP_MannequinForCapture_Studio_C_SetMannequinVisibility");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinVisibility, IsVisible) == 0x000000, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinVisibility::IsVisible' has a wrong offset!");

// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.UserConstructionScript
// 0x0040 (0x0040 - 0x0000)
struct BP_MannequinForCapture_Studio_C_UserConstructionScript final
{
public:
	bool                                          IsMannFemaleCompValid;                             // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsMannMaleCompValid;                               // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E03[0xC];                                     // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetRelativeTransform_ReturnValue;         // 0x0010(0x0030)(IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MannequinForCapture_Studio_C_UserConstructionScript) == 0x000010, "Wrong alignment on BP_MannequinForCapture_Studio_C_UserConstructionScript");
static_assert(sizeof(BP_MannequinForCapture_Studio_C_UserConstructionScript) == 0x000040, "Wrong size on BP_MannequinForCapture_Studio_C_UserConstructionScript");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_UserConstructionScript, IsMannFemaleCompValid) == 0x000000, "Member 'BP_MannequinForCapture_Studio_C_UserConstructionScript::IsMannFemaleCompValid' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_UserConstructionScript, IsMannMaleCompValid) == 0x000001, "Member 'BP_MannequinForCapture_Studio_C_UserConstructionScript::IsMannMaleCompValid' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_UserConstructionScript, CallFunc_IsValid_ReturnValue) == 0x000002, "Member 'BP_MannequinForCapture_Studio_C_UserConstructionScript::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_UserConstructionScript, CallFunc_IsValid_ReturnValue_1) == 0x000003, "Member 'BP_MannequinForCapture_Studio_C_UserConstructionScript::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_UserConstructionScript, CallFunc_GetRelativeTransform_ReturnValue) == 0x000010, "Member 'BP_MannequinForCapture_Studio_C_UserConstructionScript::CallFunc_GetRelativeTransform_ReturnValue' has a wrong offset!");

// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.ResetMannequinAndCameraToDefaultTrans
// 0x0228 (0x0228 - 0x0000)
struct BP_MannequinForCapture_Studio_C_ResetMannequinAndCameraToDefaultTrans final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E04[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeTransform_SweepHitResult;   // 0x0004(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeTransform_SweepHitResult_1; // 0x008C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0115(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E05[0x2];                                     // 0x0116(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeTransform_SweepHitResult_2; // 0x0118(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeTransform_SweepHitResult_3; // 0x01A0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_MannequinForCapture_Studio_C_ResetMannequinAndCameraToDefaultTrans) == 0x000004, "Wrong alignment on BP_MannequinForCapture_Studio_C_ResetMannequinAndCameraToDefaultTrans");
static_assert(sizeof(BP_MannequinForCapture_Studio_C_ResetMannequinAndCameraToDefaultTrans) == 0x000228, "Wrong size on BP_MannequinForCapture_Studio_C_ResetMannequinAndCameraToDefaultTrans");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ResetMannequinAndCameraToDefaultTrans, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_MannequinForCapture_Studio_C_ResetMannequinAndCameraToDefaultTrans::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ResetMannequinAndCameraToDefaultTrans, CallFunc_IsValid_ReturnValue_1) == 0x000001, "Member 'BP_MannequinForCapture_Studio_C_ResetMannequinAndCameraToDefaultTrans::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ResetMannequinAndCameraToDefaultTrans, CallFunc_K2_SetRelativeTransform_SweepHitResult) == 0x000004, "Member 'BP_MannequinForCapture_Studio_C_ResetMannequinAndCameraToDefaultTrans::CallFunc_K2_SetRelativeTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ResetMannequinAndCameraToDefaultTrans, CallFunc_K2_SetRelativeTransform_SweepHitResult_1) == 0x00008C, "Member 'BP_MannequinForCapture_Studio_C_ResetMannequinAndCameraToDefaultTrans::CallFunc_K2_SetRelativeTransform_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ResetMannequinAndCameraToDefaultTrans, CallFunc_IsValid_ReturnValue_2) == 0x000114, "Member 'BP_MannequinForCapture_Studio_C_ResetMannequinAndCameraToDefaultTrans::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ResetMannequinAndCameraToDefaultTrans, CallFunc_IsValid_ReturnValue_3) == 0x000115, "Member 'BP_MannequinForCapture_Studio_C_ResetMannequinAndCameraToDefaultTrans::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ResetMannequinAndCameraToDefaultTrans, CallFunc_K2_SetRelativeTransform_SweepHitResult_2) == 0x000118, "Member 'BP_MannequinForCapture_Studio_C_ResetMannequinAndCameraToDefaultTrans::CallFunc_K2_SetRelativeTransform_SweepHitResult_2' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_ResetMannequinAndCameraToDefaultTrans, CallFunc_K2_SetRelativeTransform_SweepHitResult_3) == 0x0001A0, "Member 'BP_MannequinForCapture_Studio_C_ResetMannequinAndCameraToDefaultTrans::CallFunc_K2_SetRelativeTransform_SweepHitResult_3' has a wrong offset!");

// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.DestroyAllChildComponents
// 0x0005 (0x0005 - 0x0000)
struct BP_MannequinForCapture_Studio_C_DestroyAllChildComponents final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MannequinForCapture_Studio_C_DestroyAllChildComponents) == 0x000001, "Wrong alignment on BP_MannequinForCapture_Studio_C_DestroyAllChildComponents");
static_assert(sizeof(BP_MannequinForCapture_Studio_C_DestroyAllChildComponents) == 0x000005, "Wrong size on BP_MannequinForCapture_Studio_C_DestroyAllChildComponents");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_DestroyAllChildComponents, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_MannequinForCapture_Studio_C_DestroyAllChildComponents::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_DestroyAllChildComponents, CallFunc_IsValid_ReturnValue_1) == 0x000001, "Member 'BP_MannequinForCapture_Studio_C_DestroyAllChildComponents::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_DestroyAllChildComponents, CallFunc_IsValid_ReturnValue_2) == 0x000002, "Member 'BP_MannequinForCapture_Studio_C_DestroyAllChildComponents::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_DestroyAllChildComponents, CallFunc_IsValid_ReturnValue_3) == 0x000003, "Member 'BP_MannequinForCapture_Studio_C_DestroyAllChildComponents::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_DestroyAllChildComponents, CallFunc_IsValid_ReturnValue_4) == 0x000004, "Member 'BP_MannequinForCapture_Studio_C_DestroyAllChildComponents::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");

// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.GetMannequinCameraSettingInfoFromType
// 0x0140 (0x0140 - 0x0000)
struct BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType final
{
public:
	EProtectorCategory                            InCostumType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsMale;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E06[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_MannequinForCapture_Info           OutCostumeMannequinInfo;                           // 0x0004(0x0030)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_MannequinForCapture_Info           LocalInfo;                                         // 0x0034(0x0030)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   LocalRowName;                                      // 0x0064(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E07[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           LocalRowNames;                                     // 0x0070(0x0010)(Edit, BlueprintVisible)
	bool                                          LocalIsMale;                                       // 0x0080(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	EProtectorCategory                            LocalCostumeType;                                  // 0x0081(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E08[0x6];                                     // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_1;                            // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E09[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x00B4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E0A[0x3];                                     // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E0B[0x2];                                     // 0x00C6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E0C[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_MannequinForCapture_Info           CallFunc_GetDataTableRowFromName_OutRow;           // 0x00D0(0x0030)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E0D[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default;                             // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E0E[0x6];                                     // 0x012A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0130(0x0010)(ReferenceParm)
};
static_assert(alignof(BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType) == 0x000008, "Wrong alignment on BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType");
static_assert(sizeof(BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType) == 0x000140, "Wrong size on BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType, InCostumType) == 0x000000, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType::InCostumType' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType, InIsMale) == 0x000001, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType::InIsMale' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType, OutCostumeMannequinInfo) == 0x000004, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType::OutCostumeMannequinInfo' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType, LocalInfo) == 0x000034, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType::LocalInfo' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType, LocalRowName) == 0x000064, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType::LocalRowName' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType, LocalRowNames) == 0x000070, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType::LocalRowNames' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType, LocalIsMale) == 0x000080, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType::LocalIsMale' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType, LocalCostumeType) == 0x000081, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType::LocalCostumeType' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType, Temp_string_Variable) == 0x000088, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType, Temp_string_Variable_1) == 0x000098, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType, CallFunc_Array_Length_ReturnValue) == 0x0000A8, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType, Temp_bool_True_if_break_was_hit_Variable) == 0x0000AC, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType, Temp_int_Array_Index_Variable) == 0x0000B0, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType, CallFunc_Array_Get_Item) == 0x0000B4, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType, CallFunc_Not_PreBool_ReturnValue) == 0x0000BC, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType, Temp_int_Loop_Counter_Variable) == 0x0000C0, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType, Temp_bool_Variable) == 0x0000C4, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType, CallFunc_Less_IntInt_ReturnValue) == 0x0000C5, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType, CallFunc_Add_IntInt_ReturnValue) == 0x0000C8, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType, CallFunc_BooleanAND_ReturnValue) == 0x0000CC, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType, CallFunc_GetDataTableRowFromName_OutRow) == 0x0000D0, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000100, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType, K2Node_Select_Default) == 0x000108, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType, CallFunc_Conv_NameToString_ReturnValue) == 0x000118, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType, CallFunc_Contains_ReturnValue) == 0x000128, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000129, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000130, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");

// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.SetMannequinAndCameraByCostumeType
// 0x0300 (0x0300 - 0x0000)
struct BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType final
{
public:
	EProtectorCategory                            InCostumeType;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E0F[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InCostumeId;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   LocalCameraSettingInfoRowNameForComposite;         // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_MannequinForCapture_CameraSettingInfo LocalCameraSettingInfo;                            // 0x0010(0x002C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E10[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ECharaPartsLocation>                   TmpOccupiedPartsLocations;                         // 0x0040(0x0010)(Edit, BlueprintVisible)
	EProtectorCategory                            TmpProtectorCategory;                              // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E11[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalCostumeId;                                    // 0x0054(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            LocalCostumeType;                                  // 0x0058(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable;                                // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_1;                              // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_2;                              // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_3;                              // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_4;                              // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_5;                              // 0x005E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_6;                              // 0x005F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_7;                              // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_8;                              // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_9;                              // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_10;                             // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_11;                             // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_12;                             // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_13;                             // 0x0066(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_14;                             // 0x0067(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_15;                             // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharacterGender                            Temp_byte_Variable_16;                             // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            Temp_byte_Variable_17;                             // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x006E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E12[0x1];                                     // 0x006F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECharaPartsLocation                           Temp_byte_Variable_18;                             // 0x0075(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_19;                             // 0x0076(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_20;                             // 0x0077(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_21;                             // 0x0078(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_22;                             // 0x0079(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_23;                             // 0x007A(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E13[0x1];                                     // 0x007B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x007C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0084(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMannequinArrangementCameraSettingInfo_IsValid; // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E14[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_MannequinForCapture_CameraSettingInfo CallFunc_GetMannequinArrangementCameraSettingInfo_OutArrangementCameraSettingInfo; // 0x0090(0x002C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E15[0x2];                                     // 0x00BE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default;                             // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_2;                              // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue_1;                 // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E16[0x1];                                     // 0x00DB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue_2;                 // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E17[0x3];                                     // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue_3;                 // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E18[0x2];                                     // 0x00EE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E19[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x00F8(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_MannequinForCapture_CameraSettingInfo CallFunc_GetDataTableRowFromName_OutRow;           // 0x0114(0x002C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0141(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0142(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E1A[0x1];                                     // 0x0143(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_MannequinForCapture_Info           K2Node_MakeStruct_ST_MannequinForCapture_Info;     // 0x0144(0x0030)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0174(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E1B[0x3];                                     // 0x0175(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue_4;                 // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue_5;                 // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_2;        // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_3;        // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0182(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E1C[0x1];                                     // 0x0183(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable_3;                              // 0x0184(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           K2Node_Select_Default_1;                           // 0x018C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E1D[0x3];                                     // 0x018D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E1E[0x3];                                     // 0x0195(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable_4;                              // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default_2;                           // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_5;                              // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue_6;                 // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x01B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x01B6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x01B7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x01B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x01BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x01BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x01BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x01BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x01BE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharacterGender                            K2Node_Select_Default_3;                           // 0x01BF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCompositeWearByCostumeId_bIsValid;      // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCompositeWearByCostumeId_IsCompositeWear; // 0x01C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E1F[0x5];                                     // 0x01C3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ECharaPartsLocation>                   CallFunc_IsCompositeWearByCostumeId_OccupiedPartsLocations; // 0x01C8(0x0010)(ReferenceParm)
	struct FSBMasterCostume                       CallFunc_IsCompositeWearByCostumeId_MasterCostume; // 0x01D8(0x0088)()
	bool                                          CallFunc_GetMannequinArrangementCameraSettingInfo_IsValid_1; // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E20[0x3];                                     // 0x0261(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_MannequinForCapture_CameraSettingInfo CallFunc_GetMannequinArrangementCameraSettingInfo_OutArrangementCameraSettingInfo_1; // 0x0264(0x002C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_MannequinForCapture_Info           K2Node_MakeStruct_ST_MannequinForCapture_Info_1;   // 0x0290(0x0030)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_MannequinForCapture_Info           CallFunc_GetMannequinCameraSettingInfoFromType_OutCostumeMannequinInfo; // 0x02C0(0x0030)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E21[0x3];                                     // 0x02F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default_4;                           // 0x02F4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType) == 0x000008, "Wrong alignment on BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType");
static_assert(sizeof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType) == 0x000300, "Wrong size on BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, InCostumeType) == 0x000000, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::InCostumeType' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, InCostumeId) == 0x000004, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::InCostumeId' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, LocalCameraSettingInfoRowNameForComposite) == 0x000008, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::LocalCameraSettingInfoRowNameForComposite' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, LocalCameraSettingInfo) == 0x000010, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::LocalCameraSettingInfo' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, TmpOccupiedPartsLocations) == 0x000040, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::TmpOccupiedPartsLocations' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, TmpProtectorCategory) == 0x000050, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::TmpProtectorCategory' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, LocalCostumeId) == 0x000054, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::LocalCostumeId' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, LocalCostumeType) == 0x000058, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::LocalCostumeType' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_byte_Variable) == 0x000059, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_byte_Variable_1) == 0x00005A, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_byte_Variable_2) == 0x00005B, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_byte_Variable_3) == 0x00005C, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_byte_Variable_4) == 0x00005D, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_byte_Variable_5) == 0x00005E, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_byte_Variable_6) == 0x00005F, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_byte_Variable_7) == 0x000060, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_byte_Variable_8) == 0x000061, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_byte_Variable_9) == 0x000062, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_byte_Variable_10) == 0x000063, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_byte_Variable_11) == 0x000064, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_byte_Variable_12) == 0x000065, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_byte_Variable_13) == 0x000066, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_byte_Variable_13' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_byte_Variable_14) == 0x000067, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_byte_Variable_14' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_byte_Variable_15) == 0x000068, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_byte_Variable_15' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_MakeLiteralByte_ReturnValue) == 0x000069, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_bool_Variable) == 0x00006A, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_byte_Variable_16) == 0x00006B, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_byte_Variable_16' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_byte_Variable_17) == 0x00006C, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_byte_Variable_17' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00006D, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_bool_True_if_break_was_hit_Variable) == 0x00006E, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_int_Array_Index_Variable) == 0x000070, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_Not_PreBool_ReturnValue) == 0x000074, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_byte_Variable_18) == 0x000075, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_byte_Variable_18' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_byte_Variable_19) == 0x000076, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_byte_Variable_19' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_byte_Variable_20) == 0x000077, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_byte_Variable_20' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_byte_Variable_21) == 0x000078, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_byte_Variable_21' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_byte_Variable_22) == 0x000079, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_byte_Variable_22' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_byte_Variable_23) == 0x00007A, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_byte_Variable_23' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_name_Variable) == 0x00007C, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_name_Variable_1) == 0x000084, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_GetMannequinArrangementCameraSettingInfo_IsValid) == 0x00008C, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_GetMannequinArrangementCameraSettingInfo_IsValid' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_GetMannequinArrangementCameraSettingInfo_OutArrangementCameraSettingInfo) == 0x000090, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_GetMannequinArrangementCameraSettingInfo_OutArrangementCameraSettingInfo' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_bool_Variable_1) == 0x0000BC, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000BD, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, K2Node_Select_Default) == 0x0000C0, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_name_Variable_2) == 0x0000C8, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_Array_Find_ReturnValue) == 0x0000D0, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_Array_Find_ReturnValue_1) == 0x0000D4, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_Array_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000D8, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000D9, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_BooleanAND_ReturnValue) == 0x0000DA, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_Array_Find_ReturnValue_2) == 0x0000DC, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_Array_Find_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0000E0, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_Array_Find_ReturnValue_3) == 0x0000E4, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_Array_Find_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_int_Loop_Counter_Variable) == 0x0000E8, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x0000EC, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_BooleanAND_ReturnValue_1) == 0x0000ED, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_Add_IntInt_ReturnValue) == 0x0000F0, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_GetDataTableRowNames_OutRowNames) == 0x0000F8, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_Array_Get_Item) == 0x000108, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_Array_Length_ReturnValue) == 0x000110, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_GetDataTableRowFromName_OutRow) == 0x000114, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000140, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_Less_IntInt_ReturnValue) == 0x000141, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_BooleanAND_ReturnValue_2) == 0x000142, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, K2Node_MakeStruct_ST_MannequinForCapture_Info) == 0x000144, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::K2Node_MakeStruct_ST_MannequinForCapture_Info' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000174, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_Array_Find_ReturnValue_4) == 0x000178, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_Array_Find_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_Array_Find_ReturnValue_5) == 0x00017C, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_Array_Find_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_GreaterEqual_IntInt_ReturnValue_2) == 0x000180, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_GreaterEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_GreaterEqual_IntInt_ReturnValue_3) == 0x000181, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_GreaterEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_BooleanAND_ReturnValue_3) == 0x000182, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_name_Variable_3) == 0x000184, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_name_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, K2Node_Select_Default_1) == 0x00018C, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_Array_Add_ReturnValue) == 0x000190, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_bool_Variable_2) == 0x000194, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_name_Variable_4) == 0x000198, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_name_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, K2Node_Select_Default_2) == 0x0001A0, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_name_Variable_5) == 0x0001A8, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_name_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_Array_Find_ReturnValue_6) == 0x0001B0, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_Array_Find_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001B4, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x0001B5, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0001B6, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0001B7, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x0001B8, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x0001B9, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x0001BA, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_BooleanOR_ReturnValue) == 0x0001BB, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_BooleanOR_ReturnValue_1) == 0x0001BC, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_BooleanOR_ReturnValue_2) == 0x0001BD, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_BooleanOR_ReturnValue_3) == 0x0001BE, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, K2Node_Select_Default_3) == 0x0001BF, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_BooleanAND_ReturnValue_4) == 0x0001C0, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_BooleanAND_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_IsCompositeWearByCostumeId_bIsValid) == 0x0001C1, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_IsCompositeWearByCostumeId_bIsValid' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_IsCompositeWearByCostumeId_IsCompositeWear) == 0x0001C2, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_IsCompositeWearByCostumeId_IsCompositeWear' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_IsCompositeWearByCostumeId_OccupiedPartsLocations) == 0x0001C8, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_IsCompositeWearByCostumeId_OccupiedPartsLocations' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_IsCompositeWearByCostumeId_MasterCostume) == 0x0001D8, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_IsCompositeWearByCostumeId_MasterCostume' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_GetMannequinArrangementCameraSettingInfo_IsValid_1) == 0x000260, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_GetMannequinArrangementCameraSettingInfo_IsValid_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_GetMannequinArrangementCameraSettingInfo_OutArrangementCameraSettingInfo_1) == 0x000264, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_GetMannequinArrangementCameraSettingInfo_OutArrangementCameraSettingInfo_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, K2Node_MakeStruct_ST_MannequinForCapture_Info_1) == 0x000290, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::K2Node_MakeStruct_ST_MannequinForCapture_Info_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, CallFunc_GetMannequinCameraSettingInfoFromType_OutCostumeMannequinInfo) == 0x0002C0, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::CallFunc_GetMannequinCameraSettingInfoFromType_OutCostumeMannequinInfo' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, Temp_bool_Variable_3) == 0x0002F0, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType, K2Node_Select_Default_4) == 0x0002F4, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType::K2Node_Select_Default_4' has a wrong offset!");

// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.SetMannequinGradationEnable
// 0x0048 (0x0048 - 0x0000)
struct BP_MannequinForCapture_Studio_C_SetMannequinGradationEnable final
{
public:
	bool                                          InIsEnable;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E22[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           TmpLinearColor_White;                              // 0x0004(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E23[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_DynamicSky_C*                       CallFunc_GetActorOfClass_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E24[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0024(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E25[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x0038(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MannequinForCapture_Studio_C_SetMannequinGradationEnable) == 0x000008, "Wrong alignment on BP_MannequinForCapture_Studio_C_SetMannequinGradationEnable");
static_assert(sizeof(BP_MannequinForCapture_Studio_C_SetMannequinGradationEnable) == 0x000048, "Wrong size on BP_MannequinForCapture_Studio_C_SetMannequinGradationEnable");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinGradationEnable, InIsEnable) == 0x000000, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinGradationEnable::InIsEnable' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinGradationEnable, TmpLinearColor_White) == 0x000004, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinGradationEnable::TmpLinearColor_White' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinGradationEnable, Temp_bool_Variable) == 0x000014, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinGradationEnable::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinGradationEnable, CallFunc_Not_PreBool_ReturnValue) == 0x000015, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinGradationEnable::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinGradationEnable, CallFunc_GetActorOfClass_ReturnValue) == 0x000018, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinGradationEnable::CallFunc_GetActorOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinGradationEnable, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinGradationEnable::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinGradationEnable, K2Node_Select_Default) == 0x000024, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinGradationEnable::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinGradationEnable, Temp_bool_Variable_1) == 0x000034, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinGradationEnable::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_SetMannequinGradationEnable, K2Node_Select_Default_1) == 0x000038, "Member 'BP_MannequinForCapture_Studio_C_SetMannequinGradationEnable::K2Node_Select_Default_1' has a wrong offset!");

// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.IsPartsLoaded
// 0x0030 (0x0030 - 0x0000)
struct BP_MannequinForCapture_Studio_C_IsPartsLoaded final
{
public:
	class UChildActorComponent*                   Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E26[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MannequinForCapture_C*              K2Node_DynamicCast_AsBP_Mannequin_for_Capture;     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E27[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharaCreateComponent*                CallFunc_GetComponentByClass_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPartsLoaded_ReturnValue;                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MannequinForCapture_Studio_C_IsPartsLoaded) == 0x000008, "Wrong alignment on BP_MannequinForCapture_Studio_C_IsPartsLoaded");
static_assert(sizeof(BP_MannequinForCapture_Studio_C_IsPartsLoaded) == 0x000030, "Wrong size on BP_MannequinForCapture_Studio_C_IsPartsLoaded");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_IsPartsLoaded, Target) == 0x000000, "Member 'BP_MannequinForCapture_Studio_C_IsPartsLoaded::Target' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_IsPartsLoaded, Result) == 0x000008, "Member 'BP_MannequinForCapture_Studio_C_IsPartsLoaded::Result' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_IsPartsLoaded, K2Node_DynamicCast_AsBP_Mannequin_for_Capture) == 0x000010, "Member 'BP_MannequinForCapture_Studio_C_IsPartsLoaded::K2Node_DynamicCast_AsBP_Mannequin_for_Capture' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_IsPartsLoaded, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_MannequinForCapture_Studio_C_IsPartsLoaded::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_IsPartsLoaded, CallFunc_GetComponentByClass_ReturnValue) == 0x000020, "Member 'BP_MannequinForCapture_Studio_C_IsPartsLoaded::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_IsPartsLoaded, CallFunc_IsPartsLoaded_ReturnValue) == 0x000028, "Member 'BP_MannequinForCapture_Studio_C_IsPartsLoaded::CallFunc_IsPartsLoaded_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_IsPartsLoaded, CallFunc_IsValid_ReturnValue) == 0x000029, "Member 'BP_MannequinForCapture_Studio_C_IsPartsLoaded::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.GetMannequinArrangementCameraSettingInfo
// 0x0140 (0x0140 - 0x0000)
struct BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo final
{
public:
	int32                                         InCostumeId;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsMale;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsValid;                                           // 0x0005(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E28[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_MannequinForCapture_CameraSettingInfo OutArrangementCameraSettingInfo;                   // 0x0008(0x002C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E29[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           LocalRowNames;                                     // 0x0038(0x0010)(Edit, BlueprintVisible)
	bool                                          LocalIsMale;                                       // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E2A[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalCostumeId;                                    // 0x004C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E2B[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E2C[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E2D[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_MannequinForCapture_ArrangementInfo CallFunc_GetDataTableRowFromName_OutRow;           // 0x0070(0x0018)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E2E[0x1];                                     // 0x008B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable;                              // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_1;                            // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E2F[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E30[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0100(0x0010)(ReferenceParm)
	struct FST_MannequinForCapture_CameraSettingInfo CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x0110(0x002C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo) == 0x000008, "Wrong alignment on BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo");
static_assert(sizeof(BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo) == 0x000140, "Wrong size on BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo, InCostumeId) == 0x000000, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo::InCostumeId' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo, InIsMale) == 0x000004, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo::InIsMale' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo, IsValid) == 0x000005, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo::IsValid' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo, OutArrangementCameraSettingInfo) == 0x000008, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo::OutArrangementCameraSettingInfo' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo, LocalRowNames) == 0x000038, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo::LocalRowNames' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo, LocalIsMale) == 0x000048, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo::LocalIsMale' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo, LocalCostumeId) == 0x00004C, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo::LocalCostumeId' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo, Temp_bool_True_if_break_was_hit_Variable) == 0x000050, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo, Temp_int_Array_Index_Variable) == 0x000054, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo, CallFunc_Not_PreBool_ReturnValue) == 0x000058, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo, Temp_int_Loop_Counter_Variable) == 0x00005C, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo, CallFunc_Array_Get_Item) == 0x000060, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo, CallFunc_GetDataTableRowFromName_OutRow) == 0x000070, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000088, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo, CallFunc_Less_IntInt_ReturnValue) == 0x000089, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo, CallFunc_BooleanAND_ReturnValue) == 0x00008A, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo, CallFunc_Add_IntInt_ReturnValue) == 0x00008C, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo, Temp_string_Variable) == 0x000090, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo, Temp_string_Variable_1) == 0x0000A0, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo, Temp_bool_Variable) == 0x0000B0, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo, CallFunc_Conv_IntToString_ReturnValue) == 0x0000B8, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo, CallFunc_Conv_StringToName_ReturnValue) == 0x0000C8, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo, K2Node_Select_Default) == 0x0000D0, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo, CallFunc_EqualEqual_NameName_ReturnValue) == 0x0000E0, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo, CallFunc_Concat_StrStr_ReturnValue) == 0x0000E8, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo, CallFunc_Conv_StringToName_ReturnValue_1) == 0x0000F8, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000100, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x000110, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x00013C, "Member 'BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");

// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.GetActiveMannequin
// 0x0028 (0x0028 - 0x0000)
struct BP_MannequinForCapture_Studio_C_GetActiveMannequin final
{
public:
	class ASBCharaCreateCharacter*                AsSBChara_Create_Character;                        // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBCharaCreateCharacter*                K2Node_DynamicCast_AsSBChara_Create_Character;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E31[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBCharaCreateCharacter*                K2Node_DynamicCast_AsSBChara_Create_Character_1;   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MannequinForCapture_Studio_C_GetActiveMannequin) == 0x000008, "Wrong alignment on BP_MannequinForCapture_Studio_C_GetActiveMannequin");
static_assert(sizeof(BP_MannequinForCapture_Studio_C_GetActiveMannequin) == 0x000028, "Wrong size on BP_MannequinForCapture_Studio_C_GetActiveMannequin");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetActiveMannequin, AsSBChara_Create_Character) == 0x000000, "Member 'BP_MannequinForCapture_Studio_C_GetActiveMannequin::AsSBChara_Create_Character' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetActiveMannequin, K2Node_DynamicCast_AsSBChara_Create_Character) == 0x000008, "Member 'BP_MannequinForCapture_Studio_C_GetActiveMannequin::K2Node_DynamicCast_AsSBChara_Create_Character' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetActiveMannequin, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_MannequinForCapture_Studio_C_GetActiveMannequin::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetActiveMannequin, K2Node_DynamicCast_AsSBChara_Create_Character_1) == 0x000018, "Member 'BP_MannequinForCapture_Studio_C_GetActiveMannequin::K2Node_DynamicCast_AsSBChara_Create_Character_1' has a wrong offset!");
static_assert(offsetof(BP_MannequinForCapture_Studio_C_GetActiveMannequin, K2Node_DynamicCast_bSuccess_1) == 0x000020, "Member 'BP_MannequinForCapture_Studio_C_GetActiveMannequin::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

