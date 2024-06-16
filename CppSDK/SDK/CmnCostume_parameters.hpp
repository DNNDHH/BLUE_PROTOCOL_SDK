#pragma once

 

// Package: CmnCostume

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function CmnCostume.CmnCostume_C.OnCreatePlayerCapture__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CmnCostume_C_OnCreatePlayerCapture__DelegateSignature final
{
public:
	class ABP_PlayerSceneCapture2D_Studio_C*      PlayerCapture;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnCostume_C_OnCreatePlayerCapture__DelegateSignature) == 0x000008, "Wrong alignment on CmnCostume_C_OnCreatePlayerCapture__DelegateSignature");
static_assert(sizeof(CmnCostume_C_OnCreatePlayerCapture__DelegateSignature) == 0x000008, "Wrong size on CmnCostume_C_OnCreatePlayerCapture__DelegateSignature");
static_assert(offsetof(CmnCostume_C_OnCreatePlayerCapture__DelegateSignature, PlayerCapture) == 0x000000, "Member 'CmnCostume_C_OnCreatePlayerCapture__DelegateSignature::PlayerCapture' has a wrong offset!");

// Function CmnCostume.CmnCostume_C.OnTrying__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CmnCostume_C_OnTrying__DelegateSignature final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTrying;                                           // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnCostume_C_OnTrying__DelegateSignature) == 0x000004, "Wrong alignment on CmnCostume_C_OnTrying__DelegateSignature");
static_assert(sizeof(CmnCostume_C_OnTrying__DelegateSignature) == 0x000008, "Wrong size on CmnCostume_C_OnTrying__DelegateSignature");
static_assert(offsetof(CmnCostume_C_OnTrying__DelegateSignature, ItemIndex) == 0x000000, "Member 'CmnCostume_C_OnTrying__DelegateSignature::ItemIndex' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_OnTrying__DelegateSignature, bTrying) == 0x000004, "Member 'CmnCostume_C_OnTrying__DelegateSignature::bTrying' has a wrong offset!");

// Function CmnCostume.CmnCostume_C.ExecuteUbergraph_CmnCostume
// 0x00D0 (0x00D0 - 0x0000)
struct CmnCostume_C_ExecuteUbergraph_CmnCostume final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93E8[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_93E9[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93EA[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array_1;                          // 0x0050(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;        // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93EB[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_Studio_C*      CallFunc_SpawnPlayerCaptureStudio_ReturnValue;     // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bZoomIn;                        // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bAnimation;                     // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0093(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_93EC[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEndTime_ReturnValue_1;                 // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_LayoutType;                     // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnCostume_C_ExecuteUbergraph_CmnCostume) == 0x000008, "Wrong alignment on CmnCostume_C_ExecuteUbergraph_CmnCostume");
static_assert(sizeof(CmnCostume_C_ExecuteUbergraph_CmnCostume) == 0x0000D0, "Wrong size on CmnCostume_C_ExecuteUbergraph_CmnCostume");
static_assert(offsetof(CmnCostume_C_ExecuteUbergraph_CmnCostume, EntryPoint) == 0x000000, "Member 'CmnCostume_C_ExecuteUbergraph_CmnCostume::EntryPoint' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ExecuteUbergraph_CmnCostume, Temp_byte_Variable) == 0x000004, "Member 'CmnCostume_C_ExecuteUbergraph_CmnCostume::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ExecuteUbergraph_CmnCostume, Temp_bool_Variable) == 0x000005, "Member 'CmnCostume_C_ExecuteUbergraph_CmnCostume::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ExecuteUbergraph_CmnCostume, Temp_byte_Variable_1) == 0x000006, "Member 'CmnCostume_C_ExecuteUbergraph_CmnCostume::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ExecuteUbergraph_CmnCostume, Temp_byte_Variable_2) == 0x000007, "Member 'CmnCostume_C_ExecuteUbergraph_CmnCostume::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ExecuteUbergraph_CmnCostume, K2Node_MakeArray_Array) == 0x000008, "Member 'CmnCostume_C_ExecuteUbergraph_CmnCostume::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ExecuteUbergraph_CmnCostume, CallFunc_Not_PreBool_ReturnValue) == 0x000018, "Member 'CmnCostume_C_ExecuteUbergraph_CmnCostume::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ExecuteUbergraph_CmnCostume, CallFunc_Array_Get_Item) == 0x000020, "Member 'CmnCostume_C_ExecuteUbergraph_CmnCostume::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ExecuteUbergraph_CmnCostume, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000028, "Member 'CmnCostume_C_ExecuteUbergraph_CmnCostume::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ExecuteUbergraph_CmnCostume, Temp_byte_Variable_3) == 0x000030, "Member 'CmnCostume_C_ExecuteUbergraph_CmnCostume::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ExecuteUbergraph_CmnCostume, CallFunc_GetDisplayName_ReturnValue) == 0x000038, "Member 'CmnCostume_C_ExecuteUbergraph_CmnCostume::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ExecuteUbergraph_CmnCostume, CallFunc_IsEmpty_ReturnValue) == 0x000048, "Member 'CmnCostume_C_ExecuteUbergraph_CmnCostume::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ExecuteUbergraph_CmnCostume, Temp_bool_Variable_1) == 0x000049, "Member 'CmnCostume_C_ExecuteUbergraph_CmnCostume::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ExecuteUbergraph_CmnCostume, K2Node_MakeArray_Array_1) == 0x000050, "Member 'CmnCostume_C_ExecuteUbergraph_CmnCostume::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ExecuteUbergraph_CmnCostume, CallFunc_Array_Get_Item_1) == 0x000060, "Member 'CmnCostume_C_ExecuteUbergraph_CmnCostume::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ExecuteUbergraph_CmnCostume, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x000068, "Member 'CmnCostume_C_ExecuteUbergraph_CmnCostume::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ExecuteUbergraph_CmnCostume, CallFunc_GetDisplayName_ReturnValue_1) == 0x000070, "Member 'CmnCostume_C_ExecuteUbergraph_CmnCostume::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ExecuteUbergraph_CmnCostume, CallFunc_IsEmpty_ReturnValue_1) == 0x000080, "Member 'CmnCostume_C_ExecuteUbergraph_CmnCostume::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ExecuteUbergraph_CmnCostume, CallFunc_SpawnPlayerCaptureStudio_ReturnValue) == 0x000088, "Member 'CmnCostume_C_ExecuteUbergraph_CmnCostume::CallFunc_SpawnPlayerCaptureStudio_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ExecuteUbergraph_CmnCostume, K2Node_CustomEvent_bZoomIn) == 0x000090, "Member 'CmnCostume_C_ExecuteUbergraph_CmnCostume::K2Node_CustomEvent_bZoomIn' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ExecuteUbergraph_CmnCostume, K2Node_CustomEvent_bAnimation) == 0x000091, "Member 'CmnCostume_C_ExecuteUbergraph_CmnCostume::K2Node_CustomEvent_bAnimation' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ExecuteUbergraph_CmnCostume, K2Node_Select_Default) == 0x000092, "Member 'CmnCostume_C_ExecuteUbergraph_CmnCostume::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ExecuteUbergraph_CmnCostume, K2Node_Select_Default_1) == 0x000093, "Member 'CmnCostume_C_ExecuteUbergraph_CmnCostume::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ExecuteUbergraph_CmnCostume, CallFunc_PlayAnimation_ReturnValue) == 0x000098, "Member 'CmnCostume_C_ExecuteUbergraph_CmnCostume::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ExecuteUbergraph_CmnCostume, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000A0, "Member 'CmnCostume_C_ExecuteUbergraph_CmnCostume::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ExecuteUbergraph_CmnCostume, CallFunc_GetEndTime_ReturnValue) == 0x0000A8, "Member 'CmnCostume_C_ExecuteUbergraph_CmnCostume::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ExecuteUbergraph_CmnCostume, CallFunc_GetEndTime_ReturnValue_1) == 0x0000AC, "Member 'CmnCostume_C_ExecuteUbergraph_CmnCostume::CallFunc_GetEndTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ExecuteUbergraph_CmnCostume, CallFunc_PlayAnimation_ReturnValue_2) == 0x0000B0, "Member 'CmnCostume_C_ExecuteUbergraph_CmnCostume::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ExecuteUbergraph_CmnCostume, CallFunc_PlayAnimation_ReturnValue_3) == 0x0000B8, "Member 'CmnCostume_C_ExecuteUbergraph_CmnCostume::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ExecuteUbergraph_CmnCostume, K2Node_CustomEvent_LayoutType) == 0x0000C0, "Member 'CmnCostume_C_ExecuteUbergraph_CmnCostume::K2Node_CustomEvent_LayoutType' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ExecuteUbergraph_CmnCostume, K2Node_SwitchName_CmpSuccess) == 0x0000C8, "Member 'CmnCostume_C_ExecuteUbergraph_CmnCostume::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ExecuteUbergraph_CmnCostume, K2Node_SwitchInteger_CmpSuccess) == 0x0000C9, "Member 'CmnCostume_C_ExecuteUbergraph_CmnCostume::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function CmnCostume.CmnCostume_C.Init
// 0x0008 (0x0008 - 0x0000)
struct CmnCostume_C_Init final
{
public:
	class FName                                   Param_LayoutType;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnCostume_C_Init) == 0x000004, "Wrong alignment on CmnCostume_C_Init");
static_assert(sizeof(CmnCostume_C_Init) == 0x000008, "Wrong size on CmnCostume_C_Init");
static_assert(offsetof(CmnCostume_C_Init, Param_LayoutType) == 0x000000, "Member 'CmnCostume_C_Init::Param_LayoutType' has a wrong offset!");

// Function CmnCostume.CmnCostume_C.Zoom
// 0x0002 (0x0002 - 0x0000)
struct CmnCostume_C_Zoom final
{
public:
	bool                                          bZoomIn;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bAnimation;                                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnCostume_C_Zoom) == 0x000001, "Wrong alignment on CmnCostume_C_Zoom");
static_assert(sizeof(CmnCostume_C_Zoom) == 0x000002, "Wrong size on CmnCostume_C_Zoom");
static_assert(offsetof(CmnCostume_C_Zoom, bZoomIn) == 0x000000, "Member 'CmnCostume_C_Zoom::bZoomIn' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_Zoom, bAnimation) == 0x000001, "Member 'CmnCostume_C_Zoom::bAnimation' has a wrong offset!");

// Function CmnCostume.CmnCostume_C.SetTryingCostume
// 0x00A8 (0x00A8 - 0x0000)
struct CmnCostume_C_SetTryingCostume final
{
public:
	struct FSBMasterCostume                       CostumeData;                                       // 0x0000(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                 UniqueId;                                          // 0x0088(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          bTrying;                                           // 0x0098(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bUpdateCapture;                                    // 0x0099(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93ED[0x2];                                     // 0x009A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidCosutumeData_ReturnValue;          // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnCostume_C_SetTryingCostume) == 0x000008, "Wrong alignment on CmnCostume_C_SetTryingCostume");
static_assert(sizeof(CmnCostume_C_SetTryingCostume) == 0x0000A8, "Wrong size on CmnCostume_C_SetTryingCostume");
static_assert(offsetof(CmnCostume_C_SetTryingCostume, CostumeData) == 0x000000, "Member 'CmnCostume_C_SetTryingCostume::CostumeData' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_SetTryingCostume, UniqueId) == 0x000088, "Member 'CmnCostume_C_SetTryingCostume::UniqueId' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_SetTryingCostume, bTrying) == 0x000098, "Member 'CmnCostume_C_SetTryingCostume::bTrying' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_SetTryingCostume, bUpdateCapture) == 0x000099, "Member 'CmnCostume_C_SetTryingCostume::bUpdateCapture' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_SetTryingCostume, CallFunc_PlaySE_ReturnValue) == 0x00009C, "Member 'CmnCostume_C_SetTryingCostume::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_SetTryingCostume, CallFunc_IsValidCosutumeData_ReturnValue) == 0x0000A0, "Member 'CmnCostume_C_SetTryingCostume::CallFunc_IsValidCosutumeData_ReturnValue' has a wrong offset!");

// Function CmnCostume.CmnCostume_C.ResetTryingData
// 0x0014 (0x0014 - 0x0000)
struct CmnCostume_C_ResetTryingData final
{
public:
	bool                                          bUpdateCapture;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93EE[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         AboutFlag;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93EF[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnCostume_C_ResetTryingData) == 0x000004, "Wrong alignment on CmnCostume_C_ResetTryingData");
static_assert(sizeof(CmnCostume_C_ResetTryingData) == 0x000014, "Wrong size on CmnCostume_C_ResetTryingData");
static_assert(offsetof(CmnCostume_C_ResetTryingData, bUpdateCapture) == 0x000000, "Member 'CmnCostume_C_ResetTryingData::bUpdateCapture' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ResetTryingData, AboutFlag) == 0x000004, "Member 'CmnCostume_C_ResetTryingData::AboutFlag' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ResetTryingData, Temp_int_Variable) == 0x000008, "Member 'CmnCostume_C_ResetTryingData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ResetTryingData, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00000C, "Member 'CmnCostume_C_ResetTryingData::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ResetTryingData, CallFunc_Array_IsValidIndex_ReturnValue) == 0x00000D, "Member 'CmnCostume_C_ResetTryingData::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ResetTryingData, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'CmnCostume_C_ResetTryingData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function CmnCostume.CmnCostume_C.SetVisible
// 0x0006 (0x0006 - 0x0000)
struct CmnCostume_C_SetVisible final
{
public:
	bool                                          bInIsVisible;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bForceLightVisible;                                // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnCostume_C_SetVisible) == 0x000001, "Wrong alignment on CmnCostume_C_SetVisible");
static_assert(sizeof(CmnCostume_C_SetVisible) == 0x000006, "Wrong size on CmnCostume_C_SetVisible");
static_assert(offsetof(CmnCostume_C_SetVisible, bInIsVisible) == 0x000000, "Member 'CmnCostume_C_SetVisible::bInIsVisible' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_SetVisible, bForceLightVisible) == 0x000001, "Member 'CmnCostume_C_SetVisible::bForceLightVisible' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_SetVisible, CallFunc_MakeLiteralByte_ReturnValue) == 0x000002, "Member 'CmnCostume_C_SetVisible::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_SetVisible, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000003, "Member 'CmnCostume_C_SetVisible::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_SetVisible, Temp_bool_Variable) == 0x000004, "Member 'CmnCostume_C_SetVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_SetVisible, K2Node_Select_Default) == 0x000005, "Member 'CmnCostume_C_SetVisible::K2Node_Select_Default' has a wrong offset!");

// Function CmnCostume.CmnCostume_C.SetVisibleIfValidCostumeData
// 0x0090 (0x0090 - 0x0000)
struct CmnCostume_C_SetVisibleIfValidCostumeData final
{
public:
	struct FSBMasterCostume                       CostumeData;                                       // 0x0000(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bVisible;                                          // 0x0088(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bRet;                                              // 0x0089(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidCosutumeData_ReturnValue;          // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnCostume_C_SetVisibleIfValidCostumeData) == 0x000008, "Wrong alignment on CmnCostume_C_SetVisibleIfValidCostumeData");
static_assert(sizeof(CmnCostume_C_SetVisibleIfValidCostumeData) == 0x000090, "Wrong size on CmnCostume_C_SetVisibleIfValidCostumeData");
static_assert(offsetof(CmnCostume_C_SetVisibleIfValidCostumeData, CostumeData) == 0x000000, "Member 'CmnCostume_C_SetVisibleIfValidCostumeData::CostumeData' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_SetVisibleIfValidCostumeData, bVisible) == 0x000088, "Member 'CmnCostume_C_SetVisibleIfValidCostumeData::bVisible' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_SetVisibleIfValidCostumeData, bRet) == 0x000089, "Member 'CmnCostume_C_SetVisibleIfValidCostumeData::bRet' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_SetVisibleIfValidCostumeData, CallFunc_IsValidCosutumeData_ReturnValue) == 0x00008A, "Member 'CmnCostume_C_SetVisibleIfValidCostumeData::CallFunc_IsValidCosutumeData_ReturnValue' has a wrong offset!");

// Function CmnCostume.CmnCostume_C.IsValidCosutumeData
// 0x0098 (0x0098 - 0x0000)
struct CmnCostume_C_IsValidCosutumeData final
{
public:
	struct FSBMasterCostume                       CostumeData;                                       // 0x0000(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0088(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x008E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x008F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnCostume_C_IsValidCosutumeData) == 0x000008, "Wrong alignment on CmnCostume_C_IsValidCosutumeData");
static_assert(sizeof(CmnCostume_C_IsValidCosutumeData) == 0x000098, "Wrong size on CmnCostume_C_IsValidCosutumeData");
static_assert(offsetof(CmnCostume_C_IsValidCosutumeData, CostumeData) == 0x000000, "Member 'CmnCostume_C_IsValidCosutumeData::CostumeData' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsValidCosutumeData, ReturnValue) == 0x000088, "Member 'CmnCostume_C_IsValidCosutumeData::ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsValidCosutumeData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000089, "Member 'CmnCostume_C_IsValidCosutumeData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsValidCosutumeData, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00008A, "Member 'CmnCostume_C_IsValidCosutumeData::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsValidCosutumeData, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00008B, "Member 'CmnCostume_C_IsValidCosutumeData::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsValidCosutumeData, CallFunc_BooleanAND_ReturnValue) == 0x00008C, "Member 'CmnCostume_C_IsValidCosutumeData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsValidCosutumeData, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x00008D, "Member 'CmnCostume_C_IsValidCosutumeData::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsValidCosutumeData, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x00008E, "Member 'CmnCostume_C_IsValidCosutumeData::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsValidCosutumeData, CallFunc_BooleanAND_ReturnValue_1) == 0x00008F, "Member 'CmnCostume_C_IsValidCosutumeData::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsValidCosutumeData, CallFunc_BooleanOR_ReturnValue) == 0x000090, "Member 'CmnCostume_C_IsValidCosutumeData::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsValidCosutumeData, CallFunc_BooleanOR_ReturnValue_1) == 0x000091, "Member 'CmnCostume_C_IsValidCosutumeData::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");

// Function CmnCostume.CmnCostume_C.InitBaseData
// 0x03D8 (0x03D8 - 0x0000)
struct CmnCostume_C_InitBaseData final
{
public:
	struct FCharaEquipInfo                        CallFunc_GetEquipInfo_ReturnValue;                 // 0x0000(0x0010)()
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCharaCreateParameter                CallFunc_GetNakedCharaCreateParameter_ReturnValue; // 0x0018(0x03C0)()
};
static_assert(alignof(CmnCostume_C_InitBaseData) == 0x000008, "Wrong alignment on CmnCostume_C_InitBaseData");
static_assert(sizeof(CmnCostume_C_InitBaseData) == 0x0003D8, "Wrong size on CmnCostume_C_InitBaseData");
static_assert(offsetof(CmnCostume_C_InitBaseData, CallFunc_GetEquipInfo_ReturnValue) == 0x000000, "Member 'CmnCostume_C_InitBaseData::CallFunc_GetEquipInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_InitBaseData, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000010, "Member 'CmnCostume_C_InitBaseData::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_InitBaseData, CallFunc_GetNakedCharaCreateParameter_ReturnValue) == 0x000018, "Member 'CmnCostume_C_InitBaseData::CallFunc_GetNakedCharaCreateParameter_ReturnValue' has a wrong offset!");

// Function CmnCostume.CmnCostume_C.AddTryingCosutume
// 0x01A0 (0x01A0 - 0x0000)
struct CmnCostume_C_AddTryingCosutume final
{
public:
	struct FSBMasterCostume                       MasterCostume;                                     // 0x0000(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                 UniqueId;                                          // 0x0088(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_93F0[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00C0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00D8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00F0(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0130(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0170(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0180(0x0018)()
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x019C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnCostume_C_AddTryingCosutume) == 0x000008, "Wrong alignment on CmnCostume_C_AddTryingCosutume");
static_assert(sizeof(CmnCostume_C_AddTryingCosutume) == 0x0001A0, "Wrong size on CmnCostume_C_AddTryingCosutume");
static_assert(offsetof(CmnCostume_C_AddTryingCosutume, MasterCostume) == 0x000000, "Member 'CmnCostume_C_AddTryingCosutume::MasterCostume' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_AddTryingCosutume, UniqueId) == 0x000088, "Member 'CmnCostume_C_AddTryingCosutume::UniqueId' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_AddTryingCosutume, CallFunc_Array_Add_ReturnValue) == 0x000098, "Member 'CmnCostume_C_AddTryingCosutume::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_AddTryingCosutume, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x0000A0, "Member 'CmnCostume_C_AddTryingCosutume::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_AddTryingCosutume, CallFunc_Conv_IntToString_ReturnValue) == 0x0000B0, "Member 'CmnCostume_C_AddTryingCosutume::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_AddTryingCosutume, CallFunc_Conv_StringToText_ReturnValue) == 0x0000C0, "Member 'CmnCostume_C_AddTryingCosutume::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_AddTryingCosutume, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000D8, "Member 'CmnCostume_C_AddTryingCosutume::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_AddTryingCosutume, K2Node_MakeStruct_FormatArgumentData) == 0x0000F0, "Member 'CmnCostume_C_AddTryingCosutume::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_AddTryingCosutume, K2Node_MakeStruct_FormatArgumentData_1) == 0x000130, "Member 'CmnCostume_C_AddTryingCosutume::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_AddTryingCosutume, K2Node_MakeArray_Array) == 0x000170, "Member 'CmnCostume_C_AddTryingCosutume::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_AddTryingCosutume, CallFunc_Format_ReturnValue) == 0x000180, "Member 'CmnCostume_C_AddTryingCosutume::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_AddTryingCosutume, CallFunc_Array_Add_ReturnValue_1) == 0x000198, "Member 'CmnCostume_C_AddTryingCosutume::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_AddTryingCosutume, CallFunc_Array_IsValidIndex_ReturnValue) == 0x00019C, "Member 'CmnCostume_C_AddTryingCosutume::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

// Function CmnCostume.CmnCostume_C.RemoveTryingCostume
// 0x01C8 (0x01C8 - 0x0000)
struct CmnCostume_C_RemoveTryingCostume final
{
public:
	struct FSBMasterCostume                       MasterCostume;                                     // 0x0000(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0088(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B8(0x0018)()
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00E0(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0130(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0148(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93F1[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0190(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01A0(0x0018)()
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93F2[0x3];                                     // 0x01B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnCostume_C_RemoveTryingCostume) == 0x000008, "Wrong alignment on CmnCostume_C_RemoveTryingCostume");
static_assert(sizeof(CmnCostume_C_RemoveTryingCostume) == 0x0001C8, "Wrong size on CmnCostume_C_RemoveTryingCostume");
static_assert(offsetof(CmnCostume_C_RemoveTryingCostume, MasterCostume) == 0x000000, "Member 'CmnCostume_C_RemoveTryingCostume::MasterCostume' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_RemoveTryingCostume, K2Node_MakeArray_Array) == 0x000088, "Member 'CmnCostume_C_RemoveTryingCostume::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_RemoveTryingCostume, CallFunc_Array_Get_Item) == 0x000098, "Member 'CmnCostume_C_RemoveTryingCostume::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_RemoveTryingCostume, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x0000A0, "Member 'CmnCostume_C_RemoveTryingCostume::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_RemoveTryingCostume, CallFunc_K2_GetRootComponent_ReturnValue) == 0x0000B0, "Member 'CmnCostume_C_RemoveTryingCostume::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_RemoveTryingCostume, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B8, "Member 'CmnCostume_C_RemoveTryingCostume::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_RemoveTryingCostume, CallFunc_GetDisplayName_ReturnValue) == 0x0000D0, "Member 'CmnCostume_C_RemoveTryingCostume::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_RemoveTryingCostume, K2Node_MakeStruct_FormatArgumentData) == 0x0000E0, "Member 'CmnCostume_C_RemoveTryingCostume::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_RemoveTryingCostume, CallFunc_Conv_IntToString_ReturnValue) == 0x000120, "Member 'CmnCostume_C_RemoveTryingCostume::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_RemoveTryingCostume, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000130, "Member 'CmnCostume_C_RemoveTryingCostume::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_RemoveTryingCostume, K2Node_MakeStruct_FormatArgumentData_1) == 0x000148, "Member 'CmnCostume_C_RemoveTryingCostume::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_RemoveTryingCostume, CallFunc_IsEmpty_ReturnValue) == 0x000188, "Member 'CmnCostume_C_RemoveTryingCostume::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_RemoveTryingCostume, K2Node_MakeArray_Array_1) == 0x000190, "Member 'CmnCostume_C_RemoveTryingCostume::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_RemoveTryingCostume, CallFunc_Format_ReturnValue) == 0x0001A0, "Member 'CmnCostume_C_RemoveTryingCostume::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_RemoveTryingCostume, CallFunc_Array_RemoveItem_ReturnValue) == 0x0001B8, "Member 'CmnCostume_C_RemoveTryingCostume::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_RemoveTryingCostume, CallFunc_Array_Find_ReturnValue) == 0x0001BC, "Member 'CmnCostume_C_RemoveTryingCostume::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_RemoveTryingCostume, CallFunc_Array_IsValidIndex_ReturnValue) == 0x0001C0, "Member 'CmnCostume_C_RemoveTryingCostume::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

// Function CmnCostume.CmnCostume_C.OccupTryingLocation
// 0x0290 (0x0290 - 0x0000)
struct CmnCostume_C_OccupTryingLocation final
{
public:
	EProtectorCategory                            ProtectorCategory;                                 // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_93F3[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EProtectorCategory>                    RemoveKeys;                                        // 0x0008(0x0010)(Edit, BlueprintVisible)
	struct FSBMasterCostume                       Work;                                              // 0x0018(0x0088)(Edit, BlueprintVisible)
	bool                                          CallFunc_IsOccupiedTryingLocation_IsOccupied;      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93F4[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_IsOccupiedTryingLocation_MasterCostume;   // 0x00A8(0x0088)()
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0140(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0158(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1; // 0x0198(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x01A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01B8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x01D0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x01E8(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0228(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0268(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0278(0x0018)()
};
static_assert(alignof(CmnCostume_C_OccupTryingLocation) == 0x000008, "Wrong alignment on CmnCostume_C_OccupTryingLocation");
static_assert(sizeof(CmnCostume_C_OccupTryingLocation) == 0x000290, "Wrong size on CmnCostume_C_OccupTryingLocation");
static_assert(offsetof(CmnCostume_C_OccupTryingLocation, ProtectorCategory) == 0x000000, "Member 'CmnCostume_C_OccupTryingLocation::ProtectorCategory' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_OccupTryingLocation, RemoveKeys) == 0x000008, "Member 'CmnCostume_C_OccupTryingLocation::RemoveKeys' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_OccupTryingLocation, Work) == 0x000018, "Member 'CmnCostume_C_OccupTryingLocation::Work' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_OccupTryingLocation, CallFunc_IsOccupiedTryingLocation_IsOccupied) == 0x0000A0, "Member 'CmnCostume_C_OccupTryingLocation::CallFunc_IsOccupiedTryingLocation_IsOccupied' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_OccupTryingLocation, CallFunc_IsOccupiedTryingLocation_MasterCostume) == 0x0000A8, "Member 'CmnCostume_C_OccupTryingLocation::CallFunc_IsOccupiedTryingLocation_MasterCostume' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_OccupTryingLocation, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000130, "Member 'CmnCostume_C_OccupTryingLocation::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_OccupTryingLocation, CallFunc_Conv_StringToText_ReturnValue) == 0x000140, "Member 'CmnCostume_C_OccupTryingLocation::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_OccupTryingLocation, K2Node_MakeStruct_FormatArgumentData) == 0x000158, "Member 'CmnCostume_C_OccupTryingLocation::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_OccupTryingLocation, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1) == 0x000198, "Member 'CmnCostume_C_OccupTryingLocation::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_OccupTryingLocation, CallFunc_Conv_IntToString_ReturnValue) == 0x0001A8, "Member 'CmnCostume_C_OccupTryingLocation::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_OccupTryingLocation, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001B8, "Member 'CmnCostume_C_OccupTryingLocation::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_OccupTryingLocation, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0001D0, "Member 'CmnCostume_C_OccupTryingLocation::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_OccupTryingLocation, K2Node_MakeStruct_FormatArgumentData_1) == 0x0001E8, "Member 'CmnCostume_C_OccupTryingLocation::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_OccupTryingLocation, K2Node_MakeStruct_FormatArgumentData_2) == 0x000228, "Member 'CmnCostume_C_OccupTryingLocation::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_OccupTryingLocation, K2Node_MakeArray_Array) == 0x000268, "Member 'CmnCostume_C_OccupTryingLocation::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_OccupTryingLocation, CallFunc_Format_ReturnValue) == 0x000278, "Member 'CmnCostume_C_OccupTryingLocation::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function CmnCostume.CmnCostume_C.OccupTryingLocationByMasterCostume
// 0x00B0 (0x00B0 - 0x0000)
struct CmnCostume_C_OccupTryingLocationByMasterCostume final
{
public:
	struct FSBMasterCostume                       MasterCostume;                                     // 0x0000(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<EProtectorCategory>                    CallFunc_GetOccupiedLocation_Result;               // 0x0088(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            CallFunc_Array_Get_Item;                           // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_93F5[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93F6[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnCostume_C_OccupTryingLocationByMasterCostume) == 0x000008, "Wrong alignment on CmnCostume_C_OccupTryingLocationByMasterCostume");
static_assert(sizeof(CmnCostume_C_OccupTryingLocationByMasterCostume) == 0x0000B0, "Wrong size on CmnCostume_C_OccupTryingLocationByMasterCostume");
static_assert(offsetof(CmnCostume_C_OccupTryingLocationByMasterCostume, MasterCostume) == 0x000000, "Member 'CmnCostume_C_OccupTryingLocationByMasterCostume::MasterCostume' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_OccupTryingLocationByMasterCostume, CallFunc_GetOccupiedLocation_Result) == 0x000088, "Member 'CmnCostume_C_OccupTryingLocationByMasterCostume::CallFunc_GetOccupiedLocation_Result' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_OccupTryingLocationByMasterCostume, Temp_int_Array_Index_Variable) == 0x000098, "Member 'CmnCostume_C_OccupTryingLocationByMasterCostume::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_OccupTryingLocationByMasterCostume, CallFunc_Array_Length_ReturnValue) == 0x00009C, "Member 'CmnCostume_C_OccupTryingLocationByMasterCostume::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_OccupTryingLocationByMasterCostume, CallFunc_Array_Get_Item) == 0x0000A0, "Member 'CmnCostume_C_OccupTryingLocationByMasterCostume::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_OccupTryingLocationByMasterCostume, Temp_int_Loop_Counter_Variable) == 0x0000A4, "Member 'CmnCostume_C_OccupTryingLocationByMasterCostume::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_OccupTryingLocationByMasterCostume, CallFunc_Less_IntInt_ReturnValue) == 0x0000A8, "Member 'CmnCostume_C_OccupTryingLocationByMasterCostume::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_OccupTryingLocationByMasterCostume, CallFunc_Add_IntInt_ReturnValue) == 0x0000AC, "Member 'CmnCostume_C_OccupTryingLocationByMasterCostume::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function CmnCostume.CmnCostume_C.ApplyBaseEquip
// 0x02E0 (0x02E0 - 0x0000)
struct CmnCostume_C_ApplyBaseEquip final
{
public:
	struct FOwnItemInfo                           OwnItemData;                                       // 0x0000(0x0118)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x011D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_93F7[0x2];                                     // 0x011E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93F8[0x3];                                     // 0x0125(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharaEquipItemInfo                    CallFunc_Array_Get_Item;                           // 0x0130(0x0028)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsOccupiedTryingLocationByCostumeId_IsValid; // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsOccupiedTryingLocationByCostumeId_IsOccupied; // 0x015A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93F9[0x5];                                     // 0x015B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_IsOccupiedTryingLocationByCostumeId_MasterCostume; // 0x0160(0x0088)()
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x01E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x01F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0208(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0220(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0238(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0278(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x02B8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x02C8(0x0018)()
};
static_assert(alignof(CmnCostume_C_ApplyBaseEquip) == 0x000008, "Wrong alignment on CmnCostume_C_ApplyBaseEquip");
static_assert(sizeof(CmnCostume_C_ApplyBaseEquip) == 0x0002E0, "Wrong size on CmnCostume_C_ApplyBaseEquip");
static_assert(offsetof(CmnCostume_C_ApplyBaseEquip, OwnItemData) == 0x000000, "Member 'CmnCostume_C_ApplyBaseEquip::OwnItemData' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyBaseEquip, Temp_int_Array_Index_Variable) == 0x000118, "Member 'CmnCostume_C_ApplyBaseEquip::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyBaseEquip, CallFunc_Conv_IntToByte_ReturnValue) == 0x00011C, "Member 'CmnCostume_C_ApplyBaseEquip::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyBaseEquip, CallFunc_GetValidValue_ReturnValue) == 0x00011D, "Member 'CmnCostume_C_ApplyBaseEquip::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyBaseEquip, Temp_int_Loop_Counter_Variable) == 0x000120, "Member 'CmnCostume_C_ApplyBaseEquip::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyBaseEquip, K2Node_SwitchEnum_CmpSuccess) == 0x000124, "Member 'CmnCostume_C_ApplyBaseEquip::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyBaseEquip, CallFunc_Add_IntInt_ReturnValue) == 0x000128, "Member 'CmnCostume_C_ApplyBaseEquip::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyBaseEquip, CallFunc_Array_Length_ReturnValue) == 0x00012C, "Member 'CmnCostume_C_ApplyBaseEquip::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyBaseEquip, CallFunc_Array_Get_Item) == 0x000130, "Member 'CmnCostume_C_ApplyBaseEquip::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyBaseEquip, CallFunc_Less_IntInt_ReturnValue) == 0x000158, "Member 'CmnCostume_C_ApplyBaseEquip::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyBaseEquip, CallFunc_IsOccupiedTryingLocationByCostumeId_IsValid) == 0x000159, "Member 'CmnCostume_C_ApplyBaseEquip::CallFunc_IsOccupiedTryingLocationByCostumeId_IsValid' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyBaseEquip, CallFunc_IsOccupiedTryingLocationByCostumeId_IsOccupied) == 0x00015A, "Member 'CmnCostume_C_ApplyBaseEquip::CallFunc_IsOccupiedTryingLocationByCostumeId_IsOccupied' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyBaseEquip, CallFunc_IsOccupiedTryingLocationByCostumeId_MasterCostume) == 0x000160, "Member 'CmnCostume_C_ApplyBaseEquip::CallFunc_IsOccupiedTryingLocationByCostumeId_MasterCostume' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyBaseEquip, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x0001E8, "Member 'CmnCostume_C_ApplyBaseEquip::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyBaseEquip, CallFunc_Conv_IntToString_ReturnValue) == 0x0001F8, "Member 'CmnCostume_C_ApplyBaseEquip::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyBaseEquip, CallFunc_Conv_StringToText_ReturnValue) == 0x000208, "Member 'CmnCostume_C_ApplyBaseEquip::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyBaseEquip, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000220, "Member 'CmnCostume_C_ApplyBaseEquip::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyBaseEquip, K2Node_MakeStruct_FormatArgumentData) == 0x000238, "Member 'CmnCostume_C_ApplyBaseEquip::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyBaseEquip, K2Node_MakeStruct_FormatArgumentData_1) == 0x000278, "Member 'CmnCostume_C_ApplyBaseEquip::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyBaseEquip, K2Node_MakeArray_Array) == 0x0002B8, "Member 'CmnCostume_C_ApplyBaseEquip::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyBaseEquip, CallFunc_Format_ReturnValue) == 0x0002C8, "Member 'CmnCostume_C_ApplyBaseEquip::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function CmnCostume.CmnCostume_C.ApplyTryingCostumeData
// 0x01A8 (0x01A8 - 0x0000)
struct CmnCostume_C_ApplyTryingCostumeData final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_93FA[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_Array_Get_Item;                           // 0x0010(0x0088)()
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93FB[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00C0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00D8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00F0(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0130(0x0040)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_93FC[0x4];                                     // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0178(0x0010)(ReferenceParm)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93FD[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0190(0x0018)()
};
static_assert(alignof(CmnCostume_C_ApplyTryingCostumeData) == 0x000008, "Wrong alignment on CmnCostume_C_ApplyTryingCostumeData");
static_assert(sizeof(CmnCostume_C_ApplyTryingCostumeData) == 0x0001A8, "Wrong size on CmnCostume_C_ApplyTryingCostumeData");
static_assert(offsetof(CmnCostume_C_ApplyTryingCostumeData, Temp_int_Array_Index_Variable) == 0x000000, "Member 'CmnCostume_C_ApplyTryingCostumeData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyTryingCostumeData, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'CmnCostume_C_ApplyTryingCostumeData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyTryingCostumeData, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'CmnCostume_C_ApplyTryingCostumeData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyTryingCostumeData, CallFunc_Array_Get_Item) == 0x000010, "Member 'CmnCostume_C_ApplyTryingCostumeData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyTryingCostumeData, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000098, "Member 'CmnCostume_C_ApplyTryingCostumeData::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyTryingCostumeData, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x0000A0, "Member 'CmnCostume_C_ApplyTryingCostumeData::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyTryingCostumeData, CallFunc_Conv_IntToString_ReturnValue) == 0x0000B0, "Member 'CmnCostume_C_ApplyTryingCostumeData::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyTryingCostumeData, CallFunc_Conv_StringToText_ReturnValue) == 0x0000C0, "Member 'CmnCostume_C_ApplyTryingCostumeData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyTryingCostumeData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000D8, "Member 'CmnCostume_C_ApplyTryingCostumeData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyTryingCostumeData, K2Node_MakeStruct_FormatArgumentData) == 0x0000F0, "Member 'CmnCostume_C_ApplyTryingCostumeData::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyTryingCostumeData, K2Node_MakeStruct_FormatArgumentData_1) == 0x000130, "Member 'CmnCostume_C_ApplyTryingCostumeData::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyTryingCostumeData, CallFunc_Array_Length_ReturnValue) == 0x000170, "Member 'CmnCostume_C_ApplyTryingCostumeData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyTryingCostumeData, K2Node_MakeArray_Array) == 0x000178, "Member 'CmnCostume_C_ApplyTryingCostumeData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyTryingCostumeData, CallFunc_Less_IntInt_ReturnValue) == 0x000188, "Member 'CmnCostume_C_ApplyTryingCostumeData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_ApplyTryingCostumeData, CallFunc_Format_ReturnValue) == 0x000190, "Member 'CmnCostume_C_ApplyTryingCostumeData::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function CmnCostume.CmnCostume_C.IsOccupiedTryingLocation
// 0x0148 (0x0148 - 0x0000)
struct CmnCostume_C_IsOccupiedTryingLocation final
{
public:
	EProtectorCategory                            ProtectorCategory;                                 // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOccupied;                                        // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93FE[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       MasterCostume;                                     // 0x0008(0x0088)(Parm, OutParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_93FF[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_Array_Get_Item;                           // 0x00A0(0x0088)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9400[0x3];                                     // 0x012D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EProtectorCategory>                    CallFunc_GetOccupiedLocation_Result;               // 0x0130(0x0010)(ReferenceParm)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnCostume_C_IsOccupiedTryingLocation) == 0x000008, "Wrong alignment on CmnCostume_C_IsOccupiedTryingLocation");
static_assert(sizeof(CmnCostume_C_IsOccupiedTryingLocation) == 0x000148, "Wrong size on CmnCostume_C_IsOccupiedTryingLocation");
static_assert(offsetof(CmnCostume_C_IsOccupiedTryingLocation, ProtectorCategory) == 0x000000, "Member 'CmnCostume_C_IsOccupiedTryingLocation::ProtectorCategory' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsOccupiedTryingLocation, IsOccupied) == 0x000001, "Member 'CmnCostume_C_IsOccupiedTryingLocation::IsOccupied' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsOccupiedTryingLocation, MasterCostume) == 0x000008, "Member 'CmnCostume_C_IsOccupiedTryingLocation::MasterCostume' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsOccupiedTryingLocation, Temp_int_Array_Index_Variable) == 0x000090, "Member 'CmnCostume_C_IsOccupiedTryingLocation::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsOccupiedTryingLocation, Temp_int_Loop_Counter_Variable) == 0x000094, "Member 'CmnCostume_C_IsOccupiedTryingLocation::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsOccupiedTryingLocation, CallFunc_Add_IntInt_ReturnValue) == 0x000098, "Member 'CmnCostume_C_IsOccupiedTryingLocation::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsOccupiedTryingLocation, CallFunc_Array_Get_Item) == 0x0000A0, "Member 'CmnCostume_C_IsOccupiedTryingLocation::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsOccupiedTryingLocation, CallFunc_Array_Length_ReturnValue) == 0x000128, "Member 'CmnCostume_C_IsOccupiedTryingLocation::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsOccupiedTryingLocation, CallFunc_Less_IntInt_ReturnValue) == 0x00012C, "Member 'CmnCostume_C_IsOccupiedTryingLocation::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsOccupiedTryingLocation, CallFunc_GetOccupiedLocation_Result) == 0x000130, "Member 'CmnCostume_C_IsOccupiedTryingLocation::CallFunc_GetOccupiedLocation_Result' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsOccupiedTryingLocation, CallFunc_Array_Contains_ReturnValue) == 0x000140, "Member 'CmnCostume_C_IsOccupiedTryingLocation::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");

// Function CmnCostume.CmnCostume_C.IsOccupiedTryingLocationByCostumeId
// 0x01D0 (0x01D0 - 0x0000)
struct CmnCostume_C_IsOccupiedTryingLocationByCostumeId final
{
public:
	int32                                         CostumeId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsValid;                                           // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsOccupied;                                        // 0x0005(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9401[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       MasterCostume;                                     // 0x0008(0x0088)(Parm, OutParm)
	bool                                          CallFunc_GetOccupiedLocationByCostumeId_bIsValid;  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9402[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EProtectorCategory>                    CallFunc_GetOccupiedLocationByCostumeId_Result;    // 0x0098(0x0010)(ReferenceParm)
	struct FSBMasterCostume                       CallFunc_GetOccupiedLocationByCostumeId_MasterCostume; // 0x00A8(0x0088)()
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            CallFunc_Array_Get_Item;                           // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOccupiedTryingLocation_IsOccupied;      // 0x0135(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9403[0x2];                                     // 0x0136(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_IsOccupiedTryingLocation_MasterCostume;   // 0x0138(0x0088)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9404[0x3];                                     // 0x01C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnCostume_C_IsOccupiedTryingLocationByCostumeId) == 0x000008, "Wrong alignment on CmnCostume_C_IsOccupiedTryingLocationByCostumeId");
static_assert(sizeof(CmnCostume_C_IsOccupiedTryingLocationByCostumeId) == 0x0001D0, "Wrong size on CmnCostume_C_IsOccupiedTryingLocationByCostumeId");
static_assert(offsetof(CmnCostume_C_IsOccupiedTryingLocationByCostumeId, CostumeId) == 0x000000, "Member 'CmnCostume_C_IsOccupiedTryingLocationByCostumeId::CostumeId' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsOccupiedTryingLocationByCostumeId, IsValid) == 0x000004, "Member 'CmnCostume_C_IsOccupiedTryingLocationByCostumeId::IsValid' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsOccupiedTryingLocationByCostumeId, IsOccupied) == 0x000005, "Member 'CmnCostume_C_IsOccupiedTryingLocationByCostumeId::IsOccupied' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsOccupiedTryingLocationByCostumeId, MasterCostume) == 0x000008, "Member 'CmnCostume_C_IsOccupiedTryingLocationByCostumeId::MasterCostume' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsOccupiedTryingLocationByCostumeId, CallFunc_GetOccupiedLocationByCostumeId_bIsValid) == 0x000090, "Member 'CmnCostume_C_IsOccupiedTryingLocationByCostumeId::CallFunc_GetOccupiedLocationByCostumeId_bIsValid' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsOccupiedTryingLocationByCostumeId, CallFunc_GetOccupiedLocationByCostumeId_Result) == 0x000098, "Member 'CmnCostume_C_IsOccupiedTryingLocationByCostumeId::CallFunc_GetOccupiedLocationByCostumeId_Result' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsOccupiedTryingLocationByCostumeId, CallFunc_GetOccupiedLocationByCostumeId_MasterCostume) == 0x0000A8, "Member 'CmnCostume_C_IsOccupiedTryingLocationByCostumeId::CallFunc_GetOccupiedLocationByCostumeId_MasterCostume' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsOccupiedTryingLocationByCostumeId, Temp_int_Array_Index_Variable) == 0x000130, "Member 'CmnCostume_C_IsOccupiedTryingLocationByCostumeId::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsOccupiedTryingLocationByCostumeId, CallFunc_Array_Get_Item) == 0x000134, "Member 'CmnCostume_C_IsOccupiedTryingLocationByCostumeId::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsOccupiedTryingLocationByCostumeId, CallFunc_IsOccupiedTryingLocation_IsOccupied) == 0x000135, "Member 'CmnCostume_C_IsOccupiedTryingLocationByCostumeId::CallFunc_IsOccupiedTryingLocation_IsOccupied' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsOccupiedTryingLocationByCostumeId, CallFunc_IsOccupiedTryingLocation_MasterCostume) == 0x000138, "Member 'CmnCostume_C_IsOccupiedTryingLocationByCostumeId::CallFunc_IsOccupiedTryingLocation_MasterCostume' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsOccupiedTryingLocationByCostumeId, CallFunc_Array_Length_ReturnValue) == 0x0001C0, "Member 'CmnCostume_C_IsOccupiedTryingLocationByCostumeId::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsOccupiedTryingLocationByCostumeId, Temp_int_Loop_Counter_Variable) == 0x0001C4, "Member 'CmnCostume_C_IsOccupiedTryingLocationByCostumeId::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsOccupiedTryingLocationByCostumeId, CallFunc_Less_IntInt_ReturnValue) == 0x0001C8, "Member 'CmnCostume_C_IsOccupiedTryingLocationByCostumeId::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_IsOccupiedTryingLocationByCostumeId, CallFunc_Add_IntInt_ReturnValue) == 0x0001CC, "Member 'CmnCostume_C_IsOccupiedTryingLocationByCostumeId::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function CmnCostume.CmnCostume_C.SetButtonPosition_Posing
// 0x0010 (0x0010 - 0x0000)
struct CmnCostume_C_SetButtonPosition_Posing final
{
public:
	EShopType                                     ShopType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9405[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnCostume_C_SetButtonPosition_Posing) == 0x000008, "Wrong alignment on CmnCostume_C_SetButtonPosition_Posing");
static_assert(sizeof(CmnCostume_C_SetButtonPosition_Posing) == 0x000010, "Wrong size on CmnCostume_C_SetButtonPosition_Posing");
static_assert(offsetof(CmnCostume_C_SetButtonPosition_Posing, ShopType) == 0x000000, "Member 'CmnCostume_C_SetButtonPosition_Posing::ShopType' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_SetButtonPosition_Posing, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'CmnCostume_C_SetButtonPosition_Posing::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CmnCostume_C_SetButtonPosition_Posing, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'CmnCostume_C_SetButtonPosition_Posing::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

}

