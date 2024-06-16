#pragma once

 

// Package: BP_MountImagineForCapture

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.OnSetImagineData__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_MountImagineForCapture_C_OnSetImagineData__DelegateSignature final
{
public:
	bool                                          bResult;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MountImagineForCapture_C_OnSetImagineData__DelegateSignature) == 0x000001, "Wrong alignment on BP_MountImagineForCapture_C_OnSetImagineData__DelegateSignature");
static_assert(sizeof(BP_MountImagineForCapture_C_OnSetImagineData__DelegateSignature) == 0x000001, "Wrong size on BP_MountImagineForCapture_C_OnSetImagineData__DelegateSignature");
static_assert(offsetof(BP_MountImagineForCapture_C_OnSetImagineData__DelegateSignature, bResult) == 0x000000, "Member 'BP_MountImagineForCapture_C_OnSetImagineData__DelegateSignature::bResult' has a wrong offset!");

// Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.ExecuteUbergraph_BP_MountImagineForCapture
// 0x0188 (0x0188 - 0x0000)
struct BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InImagineId;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bInResult;                            // 0x0038(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B18[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCaptureStudioImagineData            CallFunc_FindCaptureImagineData_ImagineData;       // 0x0040(0x00D8)()
	bool                                          CallFunc_FindCaptureImagineData_bExist;            // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B19[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USBSkeletalMeshComponent*>       K2Node_MakeArray_Array;                            // 0x0120(0x0010)(ReferenceParm, ContainsInstancedReference)
	class USBSkeletalMeshComponent*               CallFunc_Array_Get_Item;                           // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x013D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B1A[0x2];                                     // 0x013E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B1B[0x3];                                     // 0x0145(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B1C[0x3];                                     // 0x014D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSkeletalMeshComponent*               CallFunc_Array_Get_Item_1;                         // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLoadedAllMipTexture_ReturnValue;        // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B1D[0x3];                                     // 0x015D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0164(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B1E[0x3];                                     // 0x0165(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 CallFunc_Array_Get_Item_2;                         // 0x0168(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0174(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0175(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RequestLoadAsset_Imagine_ReturnValue;     // 0x0176(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B1F[0x1];                                     // 0x0177(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSkeletalMeshComponent*               CallFunc_Array_Get_Item_3;                         // 0x0178(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x0184(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0185(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture) == 0x000008, "Wrong alignment on BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture");
static_assert(sizeof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture) == 0x000188, "Wrong size on BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, EntryPoint) == 0x000000, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, Temp_int_Loop_Counter_Variable_1) == 0x00000C, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, Temp_int_Loop_Counter_Variable_2) == 0x000010, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, CallFunc_Add_IntInt_ReturnValue_2) == 0x000018, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, Temp_int_Array_Index_Variable_1) == 0x000020, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, Temp_int_Loop_Counter_Variable_3) == 0x000024, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, CallFunc_Add_IntInt_ReturnValue_3) == 0x000028, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, Temp_int_Array_Index_Variable_2) == 0x00002C, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, Temp_int_Array_Index_Variable_3) == 0x000030, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, K2Node_CustomEvent_InImagineId) == 0x000034, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::K2Node_CustomEvent_InImagineId' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, K2Node_Event_bInResult) == 0x000038, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::K2Node_Event_bInResult' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, CallFunc_FindCaptureImagineData_ImagineData) == 0x000040, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::CallFunc_FindCaptureImagineData_ImagineData' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, CallFunc_FindCaptureImagineData_bExist) == 0x000118, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::CallFunc_FindCaptureImagineData_bExist' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, K2Node_MakeArray_Array) == 0x000120, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, CallFunc_Array_Get_Item) == 0x000130, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, CallFunc_Array_Length_ReturnValue) == 0x000138, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, CallFunc_Less_IntInt_ReturnValue) == 0x00013C, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00013D, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, K2Node_Event_DeltaSeconds) == 0x000140, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, CallFunc_Not_PreBool_ReturnValue) == 0x000144, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, CallFunc_Array_Length_ReturnValue_1) == 0x000148, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, CallFunc_Greater_IntInt_ReturnValue) == 0x00014C, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, CallFunc_Array_Get_Item_1) == 0x000150, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, CallFunc_Add_FloatFloat_ReturnValue) == 0x000158, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, CallFunc_IsLoadedAllMipTexture_ReturnValue) == 0x00015C, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::CallFunc_IsLoadedAllMipTexture_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, CallFunc_Array_Length_ReturnValue_2) == 0x000160, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, CallFunc_Less_IntInt_ReturnValue_1) == 0x000164, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, CallFunc_Array_Get_Item_2) == 0x000168, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, CallFunc_Array_Length_ReturnValue_3) == 0x000170, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, CallFunc_Less_IntInt_ReturnValue_2) == 0x000174, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, CallFunc_Not_PreBool_ReturnValue_1) == 0x000175, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, CallFunc_RequestLoadAsset_Imagine_ReturnValue) == 0x000176, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::CallFunc_RequestLoadAsset_Imagine_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, CallFunc_Array_Get_Item_3) == 0x000178, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, CallFunc_Array_Length_ReturnValue_4) == 0x000180, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, CallFunc_Less_IntInt_ReturnValue_3) == 0x000184, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture, CallFunc_BooleanAND_ReturnValue) == 0x000185, "Member 'BP_MountImagineForCapture_C_ExecuteUbergraph_BP_MountImagineForCapture::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_MountImagineForCapture_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MountImagineForCapture_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_MountImagineForCapture_C_ReceiveTick");
static_assert(sizeof(BP_MountImagineForCapture_C_ReceiveTick) == 0x000004, "Wrong size on BP_MountImagineForCapture_C_ReceiveTick");
static_assert(offsetof(BP_MountImagineForCapture_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_MountImagineForCapture_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.OnAssetLoaded
// 0x0001 (0x0001 - 0x0000)
struct BP_MountImagineForCapture_C_OnAssetLoaded final
{
public:
	bool                                          bInResult;                                         // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MountImagineForCapture_C_OnAssetLoaded) == 0x000001, "Wrong alignment on BP_MountImagineForCapture_C_OnAssetLoaded");
static_assert(sizeof(BP_MountImagineForCapture_C_OnAssetLoaded) == 0x000001, "Wrong size on BP_MountImagineForCapture_C_OnAssetLoaded");
static_assert(offsetof(BP_MountImagineForCapture_C_OnAssetLoaded, bInResult) == 0x000000, "Member 'BP_MountImagineForCapture_C_OnAssetLoaded::bInResult' has a wrong offset!");

// Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.SetImagineData
// 0x0004 (0x0004 - 0x0000)
struct BP_MountImagineForCapture_C_SetImagineData final
{
public:
	int32                                         InImagineId;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MountImagineForCapture_C_SetImagineData) == 0x000004, "Wrong alignment on BP_MountImagineForCapture_C_SetImagineData");
static_assert(sizeof(BP_MountImagineForCapture_C_SetImagineData) == 0x000004, "Wrong size on BP_MountImagineForCapture_C_SetImagineData");
static_assert(offsetof(BP_MountImagineForCapture_C_SetImagineData, InImagineId) == 0x000000, "Member 'BP_MountImagineForCapture_C_SetImagineData::InImagineId' has a wrong offset!");

// Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.Set Weapons
// 0x01C0 (0x01C0 - 0x0000)
struct BP_MountImagineForCapture_C_Set_Weapons final
{
public:
	class USBSkeletalMeshComponent*               CurrentWeapon;                                     // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBSkeletalMeshComponent*               CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B20[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSkeletalMeshComponent*               CallFunc_Array_Get_Item_1;                         // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B21[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCaptureStudioCharacterWeaponData    CallFunc_Array_Get_Item_2;                         // 0x0040(0x0048)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B22[0x2];                                     // 0x008E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0090(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0118(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B23[0x4];                                     // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMesh*                          K2Node_DynamicCast_AsSkeletal_Mesh;                // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B24[0x3];                                     // 0x01B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MountImagineForCapture_C_Set_Weapons) == 0x000008, "Wrong alignment on BP_MountImagineForCapture_C_Set_Weapons");
static_assert(sizeof(BP_MountImagineForCapture_C_Set_Weapons) == 0x0001C0, "Wrong size on BP_MountImagineForCapture_C_Set_Weapons");
static_assert(offsetof(BP_MountImagineForCapture_C_Set_Weapons, CurrentWeapon) == 0x000000, "Member 'BP_MountImagineForCapture_C_Set_Weapons::CurrentWeapon' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_Set_Weapons, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_MountImagineForCapture_C_Set_Weapons::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_Set_Weapons, Temp_int_Variable) == 0x00000C, "Member 'BP_MountImagineForCapture_C_Set_Weapons::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_Set_Weapons, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_MountImagineForCapture_C_Set_Weapons::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_Set_Weapons, CallFunc_Array_AddUnique_ReturnValue) == 0x000014, "Member 'BP_MountImagineForCapture_C_Set_Weapons::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_Set_Weapons, CallFunc_Array_Get_Item) == 0x000018, "Member 'BP_MountImagineForCapture_C_Set_Weapons::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_Set_Weapons, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'BP_MountImagineForCapture_C_Set_Weapons::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_Set_Weapons, CallFunc_Subtract_IntInt_ReturnValue) == 0x000024, "Member 'BP_MountImagineForCapture_C_Set_Weapons::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_Set_Weapons, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000028, "Member 'BP_MountImagineForCapture_C_Set_Weapons::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_Set_Weapons, CallFunc_Array_Get_Item_1) == 0x000030, "Member 'BP_MountImagineForCapture_C_Set_Weapons::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_Set_Weapons, Temp_int_Loop_Counter_Variable) == 0x000038, "Member 'BP_MountImagineForCapture_C_Set_Weapons::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_Set_Weapons, CallFunc_Array_Get_Item_2) == 0x000040, "Member 'BP_MountImagineForCapture_C_Set_Weapons::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_Set_Weapons, CallFunc_Array_Length_ReturnValue_1) == 0x000088, "Member 'BP_MountImagineForCapture_C_Set_Weapons::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_Set_Weapons, CallFunc_Less_IntInt_ReturnValue) == 0x00008C, "Member 'BP_MountImagineForCapture_C_Set_Weapons::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_Set_Weapons, CallFunc_K2_AttachToComponent_ReturnValue) == 0x00008D, "Member 'BP_MountImagineForCapture_C_Set_Weapons::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_Set_Weapons, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000090, "Member 'BP_MountImagineForCapture_C_Set_Weapons::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_Set_Weapons, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000118, "Member 'BP_MountImagineForCapture_C_Set_Weapons::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_Set_Weapons, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x0001A0, "Member 'BP_MountImagineForCapture_C_Set_Weapons::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_Set_Weapons, CallFunc_Array_Length_ReturnValue_2) == 0x0001A8, "Member 'BP_MountImagineForCapture_C_Set_Weapons::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_Set_Weapons, K2Node_DynamicCast_AsSkeletal_Mesh) == 0x0001B0, "Member 'BP_MountImagineForCapture_C_Set_Weapons::K2Node_DynamicCast_AsSkeletal_Mesh' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_Set_Weapons, K2Node_DynamicCast_bSuccess) == 0x0001B8, "Member 'BP_MountImagineForCapture_C_Set_Weapons::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_Set_Weapons, CallFunc_Add_IntInt_ReturnValue_1) == 0x0001BC, "Member 'BP_MountImagineForCapture_C_Set_Weapons::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.FindCaptureImagineData
// 0x0258 (0x0258 - 0x0000)
struct BP_MountImagineForCapture_C_FindCaptureImagineData final
{
public:
	int32                                         InImagineId;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B25[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCaptureStudioImagineData            Param_ImagineData;                                 // 0x0008(0x00D8)(Parm, OutParm)
	bool                                          bExist;                                            // 0x00E0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B26[0x3];                                     // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00F0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0130(0x0010)(ReferenceParm)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0140(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0150(0x0018)()
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCaptureStudioImagineData            CallFunc_GetDataTableRowFromName_OutRow;           // 0x0170(0x00D8)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B27[0x3];                                     // 0x0249(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x024C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0251(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_MountImagineForCapture_C_FindCaptureImagineData) == 0x000008, "Wrong alignment on BP_MountImagineForCapture_C_FindCaptureImagineData");
static_assert(sizeof(BP_MountImagineForCapture_C_FindCaptureImagineData) == 0x000258, "Wrong size on BP_MountImagineForCapture_C_FindCaptureImagineData");
static_assert(offsetof(BP_MountImagineForCapture_C_FindCaptureImagineData, InImagineId) == 0x000000, "Member 'BP_MountImagineForCapture_C_FindCaptureImagineData::InImagineId' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_FindCaptureImagineData, Param_ImagineData) == 0x000008, "Member 'BP_MountImagineForCapture_C_FindCaptureImagineData::Param_ImagineData' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_FindCaptureImagineData, bExist) == 0x0000E0, "Member 'BP_MountImagineForCapture_C_FindCaptureImagineData::bExist' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_FindCaptureImagineData, Temp_int_Array_Index_Variable) == 0x0000E4, "Member 'BP_MountImagineForCapture_C_FindCaptureImagineData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_FindCaptureImagineData, Temp_int_Loop_Counter_Variable) == 0x0000E8, "Member 'BP_MountImagineForCapture_C_FindCaptureImagineData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_FindCaptureImagineData, CallFunc_Add_IntInt_ReturnValue) == 0x0000EC, "Member 'BP_MountImagineForCapture_C_FindCaptureImagineData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_FindCaptureImagineData, K2Node_MakeStruct_FormatArgumentData) == 0x0000F0, "Member 'BP_MountImagineForCapture_C_FindCaptureImagineData::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_FindCaptureImagineData, K2Node_MakeArray_Array) == 0x000130, "Member 'BP_MountImagineForCapture_C_FindCaptureImagineData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_FindCaptureImagineData, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000140, "Member 'BP_MountImagineForCapture_C_FindCaptureImagineData::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_FindCaptureImagineData, CallFunc_Format_ReturnValue) == 0x000150, "Member 'BP_MountImagineForCapture_C_FindCaptureImagineData::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_FindCaptureImagineData, CallFunc_Array_Get_Item) == 0x000168, "Member 'BP_MountImagineForCapture_C_FindCaptureImagineData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_FindCaptureImagineData, CallFunc_GetDataTableRowFromName_OutRow) == 0x000170, "Member 'BP_MountImagineForCapture_C_FindCaptureImagineData::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_FindCaptureImagineData, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000248, "Member 'BP_MountImagineForCapture_C_FindCaptureImagineData::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_FindCaptureImagineData, CallFunc_Array_Length_ReturnValue) == 0x00024C, "Member 'BP_MountImagineForCapture_C_FindCaptureImagineData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_FindCaptureImagineData, CallFunc_Less_IntInt_ReturnValue) == 0x000250, "Member 'BP_MountImagineForCapture_C_FindCaptureImagineData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_FindCaptureImagineData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000251, "Member 'BP_MountImagineForCapture_C_FindCaptureImagineData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_MountImagineForCapture.BP_MountImagineForCapture_C.ApplyImagineData
// 0x01F0 (0x01F0 - 0x0000)
struct BP_MountImagineForCapture_C_ApplyImagineData final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBSkeletalMeshComponent*               CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBSkeletalMeshComponent*               CallFunc_Array_Get_Item_1;                         // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B28[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B29[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimationAsset*                        K2Node_DynamicCast_AsAnimation_Asset;              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B2A[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UMaterialInterface>      CallFunc_Array_Get_Item_2;                         // 0x0078(0x0028)(HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1; // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2; // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                          K2Node_DynamicCast_AsSkeletal_Mesh;                // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B2B[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     K2Node_DynamicCast_AsMaterial_Interface;           // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B2C[0x2];                                     // 0x00CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x00D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B2D[0x3];                                     // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x00E0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0168(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_MountImagineForCapture_C_ApplyImagineData) == 0x000008, "Wrong alignment on BP_MountImagineForCapture_C_ApplyImagineData");
static_assert(sizeof(BP_MountImagineForCapture_C_ApplyImagineData) == 0x0001F0, "Wrong size on BP_MountImagineForCapture_C_ApplyImagineData");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, Temp_int_Array_Index_Variable_1) == 0x000004, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, Temp_int_Array_Index_Variable_2) == 0x000010, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, Temp_int_Loop_Counter_Variable_1) == 0x000014, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, CallFunc_BreakVector_X) == 0x000024, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, CallFunc_BreakVector_Y) == 0x000028, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, CallFunc_BreakVector_Z) == 0x00002C, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, CallFunc_Add_IntInt_ReturnValue_1) == 0x000030, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000034, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, CallFunc_Array_Get_Item) == 0x000038, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, CallFunc_Array_Get_Item_1) == 0x000040, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, CallFunc_Array_Length_ReturnValue_1) == 0x00004C, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, CallFunc_Array_AddUnique_ReturnValue) == 0x000054, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, Temp_int_Loop_Counter_Variable_2) == 0x000058, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, CallFunc_Less_IntInt_ReturnValue_1) == 0x00005C, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000060, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, K2Node_DynamicCast_AsAnimation_Asset) == 0x000068, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::K2Node_DynamicCast_AsAnimation_Asset' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, CallFunc_Add_IntInt_ReturnValue_2) == 0x000074, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, CallFunc_Array_Get_Item_2) == 0x000078, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1) == 0x0000A0, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2) == 0x0000A8, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, K2Node_DynamicCast_AsSkeletal_Mesh) == 0x0000B0, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::K2Node_DynamicCast_AsSkeletal_Mesh' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, K2Node_DynamicCast_bSuccess_1) == 0x0000B8, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, K2Node_DynamicCast_AsMaterial_Interface) == 0x0000C0, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::K2Node_DynamicCast_AsMaterial_Interface' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, K2Node_DynamicCast_bSuccess_2) == 0x0000C8, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, CallFunc_IsValid_ReturnValue) == 0x0000C9, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, CallFunc_Array_Length_ReturnValue_2) == 0x0000CC, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, CallFunc_Conv_FloatToVector_ReturnValue) == 0x0000D0, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, CallFunc_Less_IntInt_ReturnValue_2) == 0x0000DC, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x0000E0, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_MountImagineForCapture_C_ApplyImagineData, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000168, "Member 'BP_MountImagineForCapture_C_ApplyImagineData::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");

}

