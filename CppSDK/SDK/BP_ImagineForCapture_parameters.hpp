#pragma once

 

// Package: BP_ImagineForCapture

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_ImagineForCapture.BP_ImagineForCapture_C.OnSetImagineData__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_ImagineForCapture_C_OnSetImagineData__DelegateSignature final
{
public:
	bool                                          bResult;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ImagineForCapture_C_OnSetImagineData__DelegateSignature) == 0x000001, "Wrong alignment on BP_ImagineForCapture_C_OnSetImagineData__DelegateSignature");
static_assert(sizeof(BP_ImagineForCapture_C_OnSetImagineData__DelegateSignature) == 0x000001, "Wrong size on BP_ImagineForCapture_C_OnSetImagineData__DelegateSignature");
static_assert(offsetof(BP_ImagineForCapture_C_OnSetImagineData__DelegateSignature, bResult) == 0x000000, "Member 'BP_ImagineForCapture_C_OnSetImagineData__DelegateSignature::bResult' has a wrong offset!");

// Function BP_ImagineForCapture.BP_ImagineForCapture_C.ExecuteUbergraph_BP_ImagineForCapture
// 0x0190 (0x0190 - 0x0000)
struct BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InImagineId;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bInResult_1;                          // 0x0034(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90D9[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCaptureStudioImagineData            CallFunc_FindCaptureImagineData_ImagineData;       // 0x0038(0x00D8)()
	bool                                          CallFunc_FindCaptureImagineData_bExist;            // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90DA[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USBSkeletalMeshComponent*>       K2Node_MakeArray_Array;                            // 0x0118(0x0010)(ReferenceParm, ContainsInstancedReference)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90DB[0x2];                                     // 0x0132(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90DC[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSkeletalMeshComponent*               CallFunc_Array_Get_Item;                           // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLoadedAllMipTexture_ReturnValue;        // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x014D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90DD[0x2];                                     // 0x014E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBSkeletalMeshComponent*               CallFunc_Array_Get_Item_1;                         // 0x0158(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90DE[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSkeletalMeshComponent*               CallFunc_Array_Get_Item_2;                         // 0x0168(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0174(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0175(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bInResult;                            // 0x0176(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Update_Chara_Create_Component_ReturnValue; // 0x0177(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90DF[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 CallFunc_Array_Get_Item_3;                         // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x018C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_RequestLoadAsset_Imagine_ReturnValue;     // 0x018D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture) == 0x000008, "Wrong alignment on BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture");
static_assert(sizeof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture) == 0x000190, "Wrong size on BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, EntryPoint) == 0x000000, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, Temp_int_Loop_Counter_Variable_1) == 0x000010, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, Temp_int_Loop_Counter_Variable_2) == 0x000018, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, CallFunc_Add_IntInt_ReturnValue_2) == 0x00001C, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, Temp_int_Loop_Counter_Variable_3) == 0x000020, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, CallFunc_Add_IntInt_ReturnValue_3) == 0x000024, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, Temp_int_Array_Index_Variable_1) == 0x000028, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, Temp_int_Array_Index_Variable_2) == 0x00002C, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, K2Node_CustomEvent_InImagineId) == 0x000030, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::K2Node_CustomEvent_InImagineId' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, K2Node_Event_bInResult_1) == 0x000034, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::K2Node_Event_bInResult_1' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, CallFunc_FindCaptureImagineData_ImagineData) == 0x000038, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::CallFunc_FindCaptureImagineData_ImagineData' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, CallFunc_FindCaptureImagineData_bExist) == 0x000110, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::CallFunc_FindCaptureImagineData_bExist' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, K2Node_MakeArray_Array) == 0x000118, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, K2Node_Event_DeltaSeconds) == 0x000128, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, CallFunc_Array_Length_ReturnValue) == 0x00012C, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, CallFunc_Less_IntInt_ReturnValue) == 0x000130, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, CallFunc_Not_PreBool_ReturnValue) == 0x000131, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, CallFunc_Array_Length_ReturnValue_1) == 0x000134, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, CallFunc_Greater_IntInt_ReturnValue) == 0x000138, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, CallFunc_Array_Get_Item) == 0x000140, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, CallFunc_Array_Length_ReturnValue_2) == 0x000148, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, CallFunc_IsLoadedAllMipTexture_ReturnValue) == 0x00014C, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::CallFunc_IsLoadedAllMipTexture_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, CallFunc_Less_IntInt_ReturnValue_1) == 0x00014D, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, Temp_int_Array_Index_Variable_3) == 0x000150, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, CallFunc_Add_FloatFloat_ReturnValue) == 0x000154, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, CallFunc_Array_Get_Item_1) == 0x000158, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, CallFunc_Not_PreBool_ReturnValue_1) == 0x000160, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, CallFunc_Array_Get_Item_2) == 0x000168, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, CallFunc_Array_Length_ReturnValue_3) == 0x000170, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, CallFunc_Less_IntInt_ReturnValue_2) == 0x000174, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, CallFunc_BooleanAND_ReturnValue) == 0x000175, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, K2Node_Event_bInResult) == 0x000176, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::K2Node_Event_bInResult' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, CallFunc_Update_Chara_Create_Component_ReturnValue) == 0x000177, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::CallFunc_Update_Chara_Create_Component_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000178, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, CallFunc_Array_Get_Item_3) == 0x000180, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, CallFunc_Array_Length_ReturnValue_4) == 0x000188, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, CallFunc_Less_IntInt_ReturnValue_3) == 0x00018C, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture, CallFunc_RequestLoadAsset_Imagine_ReturnValue) == 0x00018D, "Member 'BP_ImagineForCapture_C_ExecuteUbergraph_BP_ImagineForCapture::CallFunc_RequestLoadAsset_Imagine_ReturnValue' has a wrong offset!");

// Function BP_ImagineForCapture.BP_ImagineForCapture_C.OnCreateLoaded
// 0x0001 (0x0001 - 0x0000)
struct BP_ImagineForCapture_C_OnCreateLoaded final
{
public:
	bool                                          bInResult;                                         // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ImagineForCapture_C_OnCreateLoaded) == 0x000001, "Wrong alignment on BP_ImagineForCapture_C_OnCreateLoaded");
static_assert(sizeof(BP_ImagineForCapture_C_OnCreateLoaded) == 0x000001, "Wrong size on BP_ImagineForCapture_C_OnCreateLoaded");
static_assert(offsetof(BP_ImagineForCapture_C_OnCreateLoaded, bInResult) == 0x000000, "Member 'BP_ImagineForCapture_C_OnCreateLoaded::bInResult' has a wrong offset!");

// Function BP_ImagineForCapture.BP_ImagineForCapture_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_ImagineForCapture_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ImagineForCapture_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_ImagineForCapture_C_ReceiveTick");
static_assert(sizeof(BP_ImagineForCapture_C_ReceiveTick) == 0x000004, "Wrong size on BP_ImagineForCapture_C_ReceiveTick");
static_assert(offsetof(BP_ImagineForCapture_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_ImagineForCapture_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_ImagineForCapture.BP_ImagineForCapture_C.OnAssetLoaded
// 0x0001 (0x0001 - 0x0000)
struct BP_ImagineForCapture_C_OnAssetLoaded final
{
public:
	bool                                          bInResult;                                         // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ImagineForCapture_C_OnAssetLoaded) == 0x000001, "Wrong alignment on BP_ImagineForCapture_C_OnAssetLoaded");
static_assert(sizeof(BP_ImagineForCapture_C_OnAssetLoaded) == 0x000001, "Wrong size on BP_ImagineForCapture_C_OnAssetLoaded");
static_assert(offsetof(BP_ImagineForCapture_C_OnAssetLoaded, bInResult) == 0x000000, "Member 'BP_ImagineForCapture_C_OnAssetLoaded::bInResult' has a wrong offset!");

// Function BP_ImagineForCapture.BP_ImagineForCapture_C.SetImagineData
// 0x0004 (0x0004 - 0x0000)
struct BP_ImagineForCapture_C_SetImagineData final
{
public:
	int32                                         InImagineId;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ImagineForCapture_C_SetImagineData) == 0x000004, "Wrong alignment on BP_ImagineForCapture_C_SetImagineData");
static_assert(sizeof(BP_ImagineForCapture_C_SetImagineData) == 0x000004, "Wrong size on BP_ImagineForCapture_C_SetImagineData");
static_assert(offsetof(BP_ImagineForCapture_C_SetImagineData, InImagineId) == 0x000000, "Member 'BP_ImagineForCapture_C_SetImagineData::InImagineId' has a wrong offset!");

// Function BP_ImagineForCapture.BP_ImagineForCapture_C.SetWeapons
// 0x01D0 (0x01D0 - 0x0000)
struct BP_ImagineForCapture_C_SetWeapons final
{
public:
	class USBSkeletalMeshComponent*               CurrentWeapon;                                     // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_90E0[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSkeletalMeshComponent*               CallFunc_GetTargetBodyMesh_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_90E1[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSkeletalMeshComponent*               CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90E2[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSkeletalMeshComponent*               CallFunc_Array_Get_Item_1;                         // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_90E3[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCaptureStudioCharacterWeaponData    CallFunc_Array_Get_Item_2;                         // 0x0050(0x0048)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90E4[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                          K2Node_DynamicCast_AsSkeletal_Mesh;                // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90E5[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x00BC(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0144(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x01CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ImagineForCapture_C_SetWeapons) == 0x000008, "Wrong alignment on BP_ImagineForCapture_C_SetWeapons");
static_assert(sizeof(BP_ImagineForCapture_C_SetWeapons) == 0x0001D0, "Wrong size on BP_ImagineForCapture_C_SetWeapons");
static_assert(offsetof(BP_ImagineForCapture_C_SetWeapons, CurrentWeapon) == 0x000000, "Member 'BP_ImagineForCapture_C_SetWeapons::CurrentWeapon' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_SetWeapons, Temp_int_Array_Index_Variable) == 0x000008, "Member 'BP_ImagineForCapture_C_SetWeapons::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_SetWeapons, Temp_int_Variable) == 0x00000C, "Member 'BP_ImagineForCapture_C_SetWeapons::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_SetWeapons, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_ImagineForCapture_C_SetWeapons::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_SetWeapons, CallFunc_GetTargetBodyMesh_ReturnValue) == 0x000018, "Member 'BP_ImagineForCapture_C_SetWeapons::CallFunc_GetTargetBodyMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_SetWeapons, CallFunc_Array_AddUnique_ReturnValue) == 0x000020, "Member 'BP_ImagineForCapture_C_SetWeapons::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_SetWeapons, CallFunc_Array_Get_Item) == 0x000028, "Member 'BP_ImagineForCapture_C_SetWeapons::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_SetWeapons, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'BP_ImagineForCapture_C_SetWeapons::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_SetWeapons, CallFunc_Subtract_IntInt_ReturnValue) == 0x000034, "Member 'BP_ImagineForCapture_C_SetWeapons::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_SetWeapons, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000038, "Member 'BP_ImagineForCapture_C_SetWeapons::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_SetWeapons, CallFunc_Array_Get_Item_1) == 0x000040, "Member 'BP_ImagineForCapture_C_SetWeapons::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_SetWeapons, Temp_int_Loop_Counter_Variable) == 0x000048, "Member 'BP_ImagineForCapture_C_SetWeapons::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_SetWeapons, CallFunc_Array_Get_Item_2) == 0x000050, "Member 'BP_ImagineForCapture_C_SetWeapons::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_SetWeapons, CallFunc_Array_Length_ReturnValue_1) == 0x000098, "Member 'BP_ImagineForCapture_C_SetWeapons::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_SetWeapons, CallFunc_Less_IntInt_ReturnValue) == 0x00009C, "Member 'BP_ImagineForCapture_C_SetWeapons::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_SetWeapons, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x0000A0, "Member 'BP_ImagineForCapture_C_SetWeapons::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_SetWeapons, K2Node_DynamicCast_AsSkeletal_Mesh) == 0x0000A8, "Member 'BP_ImagineForCapture_C_SetWeapons::K2Node_DynamicCast_AsSkeletal_Mesh' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_SetWeapons, K2Node_DynamicCast_bSuccess) == 0x0000B0, "Member 'BP_ImagineForCapture_C_SetWeapons::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_SetWeapons, CallFunc_Array_Length_ReturnValue_2) == 0x0000B4, "Member 'BP_ImagineForCapture_C_SetWeapons::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_SetWeapons, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000B8, "Member 'BP_ImagineForCapture_C_SetWeapons::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_SetWeapons, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x0000BC, "Member 'BP_ImagineForCapture_C_SetWeapons::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_SetWeapons, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000144, "Member 'BP_ImagineForCapture_C_SetWeapons::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_SetWeapons, CallFunc_K2_AttachToComponent_ReturnValue) == 0x0001CC, "Member 'BP_ImagineForCapture_C_SetWeapons::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");

// Function BP_ImagineForCapture.BP_ImagineForCapture_C.FindCaptureImagineData
// 0x0260 (0x0260 - 0x0000)
struct BP_ImagineForCapture_C_FindCaptureImagineData final
{
public:
	int32                                         InImagineId;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_90E6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCaptureStudioImagineData            Param_ImagineData;                                 // 0x0008(0x00D8)(Parm, OutParm)
	bool                                          bExist;                                            // 0x00E0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90E7[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00E8(0x0040)(HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_90E8[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0130(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0140(0x0018)()
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0160(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_90E9[0x4];                                     // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCaptureStudioImagineData            CallFunc_GetDataTableRowFromName_OutRow;           // 0x0180(0x00D8)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0259(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x025A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ImagineForCapture_C_FindCaptureImagineData) == 0x000008, "Wrong alignment on BP_ImagineForCapture_C_FindCaptureImagineData");
static_assert(sizeof(BP_ImagineForCapture_C_FindCaptureImagineData) == 0x000260, "Wrong size on BP_ImagineForCapture_C_FindCaptureImagineData");
static_assert(offsetof(BP_ImagineForCapture_C_FindCaptureImagineData, InImagineId) == 0x000000, "Member 'BP_ImagineForCapture_C_FindCaptureImagineData::InImagineId' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_FindCaptureImagineData, Param_ImagineData) == 0x000008, "Member 'BP_ImagineForCapture_C_FindCaptureImagineData::Param_ImagineData' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_FindCaptureImagineData, bExist) == 0x0000E0, "Member 'BP_ImagineForCapture_C_FindCaptureImagineData::bExist' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_FindCaptureImagineData, K2Node_MakeStruct_FormatArgumentData) == 0x0000E8, "Member 'BP_ImagineForCapture_C_FindCaptureImagineData::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_FindCaptureImagineData, Temp_int_Array_Index_Variable) == 0x000128, "Member 'BP_ImagineForCapture_C_FindCaptureImagineData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_FindCaptureImagineData, K2Node_MakeArray_Array) == 0x000130, "Member 'BP_ImagineForCapture_C_FindCaptureImagineData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_FindCaptureImagineData, CallFunc_Format_ReturnValue) == 0x000140, "Member 'BP_ImagineForCapture_C_FindCaptureImagineData::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_FindCaptureImagineData, Temp_int_Loop_Counter_Variable) == 0x000158, "Member 'BP_ImagineForCapture_C_FindCaptureImagineData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_FindCaptureImagineData, CallFunc_Add_IntInt_ReturnValue) == 0x00015C, "Member 'BP_ImagineForCapture_C_FindCaptureImagineData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_FindCaptureImagineData, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000160, "Member 'BP_ImagineForCapture_C_FindCaptureImagineData::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_FindCaptureImagineData, CallFunc_Array_Get_Item) == 0x000170, "Member 'BP_ImagineForCapture_C_FindCaptureImagineData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_FindCaptureImagineData, CallFunc_Array_Length_ReturnValue) == 0x000178, "Member 'BP_ImagineForCapture_C_FindCaptureImagineData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_FindCaptureImagineData, CallFunc_GetDataTableRowFromName_OutRow) == 0x000180, "Member 'BP_ImagineForCapture_C_FindCaptureImagineData::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_FindCaptureImagineData, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000258, "Member 'BP_ImagineForCapture_C_FindCaptureImagineData::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_FindCaptureImagineData, CallFunc_Less_IntInt_ReturnValue) == 0x000259, "Member 'BP_ImagineForCapture_C_FindCaptureImagineData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_FindCaptureImagineData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00025A, "Member 'BP_ImagineForCapture_C_FindCaptureImagineData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_ImagineForCapture.BP_ImagineForCapture_C.ApplyImagineData
// 0x0248 (0x0248 - 0x0000)
struct BP_ImagineForCapture_C_ApplyImagineData final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_90EA[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSkeletalMeshComponent*               CallFunc_GetTargetBodyMesh_ReturnValue;            // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBSkeletalMeshComponent*               CallFunc_GetTargetBodyMesh_ReturnValue_1;          // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBSkeletalMeshComponent*               CallFunc_GetTargetBodyMesh_ReturnValue_2;          // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBSkeletalMeshComponent*               CallFunc_GetTargetBodyMesh_ReturnValue_3;          // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;        // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>             CallFunc_GetMaterials_ReturnValue;                 // 0x0068(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90EB[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSkeletalMeshComponent*               CallFunc_GetTargetBodyMesh_ReturnValue_4;          // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBSkeletalMeshComponent*               CallFunc_Array_Get_Item;                           // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue_1;            // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90EC[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimationAsset*                        K2Node_DynamicCast_AsAnimation_Asset;              // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90ED[0x3];                                     // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Get_Item_1;                         // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_90EE[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UMaterialInterface>      CallFunc_Array_Get_Item_2;                         // 0x00C0(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90EF[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1; // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     K2Node_DynamicCast_AsMaterial_Interface;           // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90F0[0x3];                                     // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90F1[0x3];                                     // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x010C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0118(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_2;        // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x01A8(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2; // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                          K2Node_DynamicCast_AsSkeletal_Mesh;                // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0241(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ImagineForCapture_C_ApplyImagineData) == 0x000008, "Wrong alignment on BP_ImagineForCapture_C_ApplyImagineData");
static_assert(sizeof(BP_ImagineForCapture_C_ApplyImagineData) == 0x000248, "Wrong size on BP_ImagineForCapture_C_ApplyImagineData");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, Temp_int_Array_Index_Variable) == 0x000000, "Member 'BP_ImagineForCapture_C_ApplyImagineData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, Temp_int_Array_Index_Variable_1) == 0x000004, "Member 'BP_ImagineForCapture_C_ApplyImagineData::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000008, "Member 'BP_ImagineForCapture_C_ApplyImagineData::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'BP_ImagineForCapture_C_ApplyImagineData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, Temp_int_Loop_Counter_Variable_1) == 0x000014, "Member 'BP_ImagineForCapture_C_ApplyImagineData::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'BP_ImagineForCapture_C_ApplyImagineData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, CallFunc_Add_IntInt_ReturnValue_1) == 0x00001C, "Member 'BP_ImagineForCapture_C_ApplyImagineData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, Temp_int_Loop_Counter_Variable_2) == 0x000020, "Member 'BP_ImagineForCapture_C_ApplyImagineData::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, CallFunc_Add_IntInt_ReturnValue_2) == 0x000024, "Member 'BP_ImagineForCapture_C_ApplyImagineData::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, Temp_int_Array_Index_Variable_2) == 0x000028, "Member 'BP_ImagineForCapture_C_ApplyImagineData::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, Temp_int_Loop_Counter_Variable_3) == 0x00002C, "Member 'BP_ImagineForCapture_C_ApplyImagineData::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, CallFunc_Add_IntInt_ReturnValue_3) == 0x000030, "Member 'BP_ImagineForCapture_C_ApplyImagineData::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, Temp_int_Array_Index_Variable_3) == 0x000034, "Member 'BP_ImagineForCapture_C_ApplyImagineData::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, CallFunc_Array_AddUnique_ReturnValue) == 0x000038, "Member 'BP_ImagineForCapture_C_ApplyImagineData::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, CallFunc_GetTargetBodyMesh_ReturnValue) == 0x000040, "Member 'BP_ImagineForCapture_C_ApplyImagineData::CallFunc_GetTargetBodyMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, CallFunc_GetTargetBodyMesh_ReturnValue_1) == 0x000048, "Member 'BP_ImagineForCapture_C_ApplyImagineData::CallFunc_GetTargetBodyMesh_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, CallFunc_GetTargetBodyMesh_ReturnValue_2) == 0x000050, "Member 'BP_ImagineForCapture_C_ApplyImagineData::CallFunc_GetTargetBodyMesh_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, CallFunc_GetTargetBodyMesh_ReturnValue_3) == 0x000058, "Member 'BP_ImagineForCapture_C_ApplyImagineData::CallFunc_GetTargetBodyMesh_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x000060, "Member 'BP_ImagineForCapture_C_ApplyImagineData::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, CallFunc_GetMaterials_ReturnValue) == 0x000068, "Member 'BP_ImagineForCapture_C_ApplyImagineData::CallFunc_GetMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, CallFunc_Array_Length_ReturnValue) == 0x000078, "Member 'BP_ImagineForCapture_C_ApplyImagineData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, CallFunc_Less_IntInt_ReturnValue) == 0x00007C, "Member 'BP_ImagineForCapture_C_ApplyImagineData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, CallFunc_GetTargetBodyMesh_ReturnValue_4) == 0x000080, "Member 'BP_ImagineForCapture_C_ApplyImagineData::CallFunc_GetTargetBodyMesh_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, CallFunc_Array_Get_Item) == 0x000088, "Member 'BP_ImagineForCapture_C_ApplyImagineData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, CallFunc_Array_AddUnique_ReturnValue_1) == 0x000090, "Member 'BP_ImagineForCapture_C_ApplyImagineData::CallFunc_Array_AddUnique_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, CallFunc_Array_Length_ReturnValue_1) == 0x000094, "Member 'BP_ImagineForCapture_C_ApplyImagineData::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, CallFunc_Less_IntInt_ReturnValue_1) == 0x000098, "Member 'BP_ImagineForCapture_C_ApplyImagineData::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x0000A0, "Member 'BP_ImagineForCapture_C_ApplyImagineData::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, K2Node_DynamicCast_AsAnimation_Asset) == 0x0000A8, "Member 'BP_ImagineForCapture_C_ApplyImagineData::K2Node_DynamicCast_AsAnimation_Asset' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, K2Node_DynamicCast_bSuccess) == 0x0000B0, "Member 'BP_ImagineForCapture_C_ApplyImagineData::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, CallFunc_Array_Get_Item_1) == 0x0000B4, "Member 'BP_ImagineForCapture_C_ApplyImagineData::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, CallFunc_Array_Length_ReturnValue_2) == 0x0000B8, "Member 'BP_ImagineForCapture_C_ApplyImagineData::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, CallFunc_Array_Get_Item_2) == 0x0000C0, "Member 'BP_ImagineForCapture_C_ApplyImagineData::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, CallFunc_Less_IntInt_ReturnValue_2) == 0x0000E8, "Member 'BP_ImagineForCapture_C_ApplyImagineData::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1) == 0x0000F0, "Member 'BP_ImagineForCapture_C_ApplyImagineData::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, K2Node_DynamicCast_AsMaterial_Interface) == 0x0000F8, "Member 'BP_ImagineForCapture_C_ApplyImagineData::K2Node_DynamicCast_AsMaterial_Interface' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, K2Node_DynamicCast_bSuccess_1) == 0x000100, "Member 'BP_ImagineForCapture_C_ApplyImagineData::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, CallFunc_Array_Length_ReturnValue_3) == 0x000104, "Member 'BP_ImagineForCapture_C_ApplyImagineData::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, CallFunc_Less_IntInt_ReturnValue_3) == 0x000108, "Member 'BP_ImagineForCapture_C_ApplyImagineData::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, CallFunc_Conv_FloatToVector_ReturnValue) == 0x00010C, "Member 'BP_ImagineForCapture_C_ApplyImagineData::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000118, "Member 'BP_ImagineForCapture_C_ApplyImagineData::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, CallFunc_K2_GetRootComponent_ReturnValue_2) == 0x0001A0, "Member 'BP_ImagineForCapture_C_ApplyImagineData::CallFunc_K2_GetRootComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x0001A8, "Member 'BP_ImagineForCapture_C_ApplyImagineData::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2) == 0x000230, "Member 'BP_ImagineForCapture_C_ApplyImagineData::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, K2Node_DynamicCast_AsSkeletal_Mesh) == 0x000238, "Member 'BP_ImagineForCapture_C_ApplyImagineData::K2Node_DynamicCast_AsSkeletal_Mesh' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, K2Node_DynamicCast_bSuccess_2) == 0x000240, "Member 'BP_ImagineForCapture_C_ApplyImagineData::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_ApplyImagineData, CallFunc_IsValid_ReturnValue) == 0x000241, "Member 'BP_ImagineForCapture_C_ApplyImagineData::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_ImagineForCapture.BP_ImagineForCapture_C.GetTargetBodyMesh
// 0x0018 (0x0018 - 0x0000)
struct BP_ImagineForCapture_C_GetTargetBodyMesh final
{
public:
	class USBSkeletalMeshComponent*               ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBSkeletalMeshComponent*               K2Node_DynamicCast_AsSBSkeletal_Mesh_Component;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ImagineForCapture_C_GetTargetBodyMesh) == 0x000008, "Wrong alignment on BP_ImagineForCapture_C_GetTargetBodyMesh");
static_assert(sizeof(BP_ImagineForCapture_C_GetTargetBodyMesh) == 0x000018, "Wrong size on BP_ImagineForCapture_C_GetTargetBodyMesh");
static_assert(offsetof(BP_ImagineForCapture_C_GetTargetBodyMesh, ReturnValue) == 0x000000, "Member 'BP_ImagineForCapture_C_GetTargetBodyMesh::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_GetTargetBodyMesh, K2Node_DynamicCast_AsSBSkeletal_Mesh_Component) == 0x000008, "Member 'BP_ImagineForCapture_C_GetTargetBodyMesh::K2Node_DynamicCast_AsSBSkeletal_Mesh_Component' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_GetTargetBodyMesh, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_ImagineForCapture_C_GetTargetBodyMesh::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_ImagineForCapture.BP_ImagineForCapture_C.Update Chara Create Component
// 0x0020 (0x0020 - 0x0000)
struct BP_ImagineForCapture_C_Update_Chara_Create_Component final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ApplyCharaCreateComponent_ReturnValue;    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_InitCharaCreateComponent_ReturnValue;     // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90F2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharaCreateData*                     K2Node_DynamicCast_AsSBChara_Create_Data;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetCharaCreateData_ReturnValue;           // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ImagineForCapture_C_Update_Chara_Create_Component) == 0x000008, "Wrong alignment on BP_ImagineForCapture_C_Update_Chara_Create_Component");
static_assert(sizeof(BP_ImagineForCapture_C_Update_Chara_Create_Component) == 0x000020, "Wrong size on BP_ImagineForCapture_C_Update_Chara_Create_Component");
static_assert(offsetof(BP_ImagineForCapture_C_Update_Chara_Create_Component, ReturnValue) == 0x000000, "Member 'BP_ImagineForCapture_C_Update_Chara_Create_Component::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_Update_Chara_Create_Component, CallFunc_ApplyCharaCreateComponent_ReturnValue) == 0x000001, "Member 'BP_ImagineForCapture_C_Update_Chara_Create_Component::CallFunc_ApplyCharaCreateComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_Update_Chara_Create_Component, CallFunc_InitCharaCreateComponent_ReturnValue) == 0x000002, "Member 'BP_ImagineForCapture_C_Update_Chara_Create_Component::CallFunc_InitCharaCreateComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_Update_Chara_Create_Component, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000003, "Member 'BP_ImagineForCapture_C_Update_Chara_Create_Component::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_Update_Chara_Create_Component, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000008, "Member 'BP_ImagineForCapture_C_Update_Chara_Create_Component::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_Update_Chara_Create_Component, K2Node_DynamicCast_AsSBChara_Create_Data) == 0x000010, "Member 'BP_ImagineForCapture_C_Update_Chara_Create_Component::K2Node_DynamicCast_AsSBChara_Create_Data' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_Update_Chara_Create_Component, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_ImagineForCapture_C_Update_Chara_Create_Component::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ImagineForCapture_C_Update_Chara_Create_Component, CallFunc_SetCharaCreateData_ReturnValue) == 0x000019, "Member 'BP_ImagineForCapture_C_Update_Chara_Create_Component::CallFunc_SetCharaCreateData_ReturnValue' has a wrong offset!");

}

