#pragma once

 

// Package: Fang_expedition_ProbabilityList

#include "Basic.hpp"

#include "E_SBDetailsZoomIn_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.ExecuteUbergraph_Fang_expedition_ProbabilityList
// 0x0050 (0x0050 - 0x0000)
struct Fang_expedition_ProbabilityList_C_ExecuteUbergraph_Fang_expedition_ProbabilityList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5FE0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_ProductDetailMenu_C*               CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5FE1[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                K2Node_ComponentBoundEvent_Data;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UUMG_ProductDetailMenu_C* Sender)> K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FE2[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ProductDetailMenu_C*               K2Node_CustomEvent_Sender;                         // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_SBDetailsZoomIn                             K2Node_ComponentBoundEvent_Type;                   // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_ProbabilityList_C_ExecuteUbergraph_Fang_expedition_ProbabilityList) == 0x000008, "Wrong alignment on Fang_expedition_ProbabilityList_C_ExecuteUbergraph_Fang_expedition_ProbabilityList");
static_assert(sizeof(Fang_expedition_ProbabilityList_C_ExecuteUbergraph_Fang_expedition_ProbabilityList) == 0x000050, "Wrong size on Fang_expedition_ProbabilityList_C_ExecuteUbergraph_Fang_expedition_ProbabilityList");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_ExecuteUbergraph_Fang_expedition_ProbabilityList, EntryPoint) == 0x000000, "Member 'Fang_expedition_ProbabilityList_C_ExecuteUbergraph_Fang_expedition_ProbabilityList::EntryPoint' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_ExecuteUbergraph_Fang_expedition_ProbabilityList, CallFunc_Create_ReturnValue) == 0x000008, "Member 'Fang_expedition_ProbabilityList_C_ExecuteUbergraph_Fang_expedition_ProbabilityList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_ExecuteUbergraph_Fang_expedition_ProbabilityList, CallFunc_PlaySE_ReturnValue) == 0x000010, "Member 'Fang_expedition_ProbabilityList_C_ExecuteUbergraph_Fang_expedition_ProbabilityList::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_ExecuteUbergraph_Fang_expedition_ProbabilityList, K2Node_ComponentBoundEvent_Data) == 0x000018, "Member 'Fang_expedition_ProbabilityList_C_ExecuteUbergraph_Fang_expedition_ProbabilityList::K2Node_ComponentBoundEvent_Data' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_ExecuteUbergraph_Fang_expedition_ProbabilityList, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'Fang_expedition_ProbabilityList_C_ExecuteUbergraph_Fang_expedition_ProbabilityList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_ExecuteUbergraph_Fang_expedition_ProbabilityList, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'Fang_expedition_ProbabilityList_C_ExecuteUbergraph_Fang_expedition_ProbabilityList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_ExecuteUbergraph_Fang_expedition_ProbabilityList, CallFunc_AddChildToCanvas_ReturnValue) == 0x000038, "Member 'Fang_expedition_ProbabilityList_C_ExecuteUbergraph_Fang_expedition_ProbabilityList::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_ExecuteUbergraph_Fang_expedition_ProbabilityList, K2Node_CustomEvent_Sender) == 0x000040, "Member 'Fang_expedition_ProbabilityList_C_ExecuteUbergraph_Fang_expedition_ProbabilityList::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_ExecuteUbergraph_Fang_expedition_ProbabilityList, CallFunc_IsValid_ReturnValue_1) == 0x000048, "Member 'Fang_expedition_ProbabilityList_C_ExecuteUbergraph_Fang_expedition_ProbabilityList::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_ExecuteUbergraph_Fang_expedition_ProbabilityList, K2Node_ComponentBoundEvent_Type) == 0x000049, "Member 'Fang_expedition_ProbabilityList_C_ExecuteUbergraph_Fang_expedition_ProbabilityList::K2Node_ComponentBoundEvent_Type' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_ExecuteUbergraph_Fang_expedition_ProbabilityList, CallFunc_IsValid_ReturnValue_2) == 0x00004A, "Member 'Fang_expedition_ProbabilityList_C_ExecuteUbergraph_Fang_expedition_ProbabilityList::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.BndEvt__Fang_expedition_ProbabilityList_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Fang_expedition_ProbabilityList_C_BndEvt__Fang_expedition_ProbabilityList_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature final
{
public:
	E_SBDetailsZoomIn                             Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_ProbabilityList_C_BndEvt__Fang_expedition_ProbabilityList_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature) == 0x000001, "Wrong alignment on Fang_expedition_ProbabilityList_C_BndEvt__Fang_expedition_ProbabilityList_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature");
static_assert(sizeof(Fang_expedition_ProbabilityList_C_BndEvt__Fang_expedition_ProbabilityList_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature) == 0x000001, "Wrong size on Fang_expedition_ProbabilityList_C_BndEvt__Fang_expedition_ProbabilityList_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_BndEvt__Fang_expedition_ProbabilityList_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature, Type) == 0x000000, "Member 'Fang_expedition_ProbabilityList_C_BndEvt__Fang_expedition_ProbabilityList_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature::Type' has a wrong offset!");

// Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.OnBoxDetailClosed
// 0x0008 (0x0008 - 0x0000)
struct Fang_expedition_ProbabilityList_C_OnBoxDetailClosed final
{
public:
	class UUMG_ProductDetailMenu_C*               Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_ProbabilityList_C_OnBoxDetailClosed) == 0x000008, "Wrong alignment on Fang_expedition_ProbabilityList_C_OnBoxDetailClosed");
static_assert(sizeof(Fang_expedition_ProbabilityList_C_OnBoxDetailClosed) == 0x000008, "Wrong size on Fang_expedition_ProbabilityList_C_OnBoxDetailClosed");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_OnBoxDetailClosed, Sender) == 0x000000, "Member 'Fang_expedition_ProbabilityList_C_OnBoxDetailClosed::Sender' has a wrong offset!");

// Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.BndEvt__Fang_expedition_ProbabilityList_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct Fang_expedition_ProbabilityList_C_BndEvt__Fang_expedition_ProbabilityList_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature final
{
public:
	class UBP_SBProductItemData_C*                Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_ProbabilityList_C_BndEvt__Fang_expedition_ProbabilityList_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature) == 0x000008, "Wrong alignment on Fang_expedition_ProbabilityList_C_BndEvt__Fang_expedition_ProbabilityList_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature");
static_assert(sizeof(Fang_expedition_ProbabilityList_C_BndEvt__Fang_expedition_ProbabilityList_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature) == 0x000008, "Wrong size on Fang_expedition_ProbabilityList_C_BndEvt__Fang_expedition_ProbabilityList_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_BndEvt__Fang_expedition_ProbabilityList_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature, Data) == 0x000000, "Member 'Fang_expedition_ProbabilityList_C_BndEvt__Fang_expedition_ProbabilityList_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature::Data' has a wrong offset!");

// Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.SetData
// 0x0188 (0x0188 - 0x0000)
struct Fang_expedition_ProbabilityList_C_SetData final
{
public:
	struct FSBFang_expeditionAreaData             AreaData;                                          // 0x0000(0x00A8)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         TimeIndex;                                         // 0x00A8(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FangIndex;                                         // 0x00AC(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 TypeCountCheck;                                    // 0x00B0(0x0010)(Edit, BlueprintVisible)
	int32                                         TypeIndex;                                         // 0x00C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5FE3[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_ProbabilityListItem_C* Widget;                                            // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopEnd2;                                          // 0x00D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FangTypeIndex;                                     // 0x00D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBFang_expeditionRandomRewardData> ListData;                                          // 0x00D8(0x0010)(Edit, BlueprintVisible)
	int32                                         LoopEnd;                                           // 0x00E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AllListup;                                         // 0x00EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FE4[0x3];                                     // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBFang_expeditionRewardData           TimeRewardData;                                    // 0x00F0(0x0020)(Edit, BlueprintVisible)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FE5[0x3];                                     // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FSBMasterReward& RewardData)> K2Node_CreateDelegate_OutputDelegate;              // 0x0128(0x0010)(ZeroConstructor, NoDestructor)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FE6[0x3];                                     // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FE7[0x3];                                     // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFang_expedition_ProbabilityListItem_C* CallFunc_Create_ReturnValue;                       // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FE8[0x2];                                     // 0x015A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue_1;            // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FE9[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0168(0x0018)()
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_ProbabilityList_C_SetData) == 0x000008, "Wrong alignment on Fang_expedition_ProbabilityList_C_SetData");
static_assert(sizeof(Fang_expedition_ProbabilityList_C_SetData) == 0x000188, "Wrong size on Fang_expedition_ProbabilityList_C_SetData");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetData, AreaData) == 0x000000, "Member 'Fang_expedition_ProbabilityList_C_SetData::AreaData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetData, TimeIndex) == 0x0000A8, "Member 'Fang_expedition_ProbabilityList_C_SetData::TimeIndex' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetData, FangIndex) == 0x0000AC, "Member 'Fang_expedition_ProbabilityList_C_SetData::FangIndex' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetData, TypeCountCheck) == 0x0000B0, "Member 'Fang_expedition_ProbabilityList_C_SetData::TypeCountCheck' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetData, TypeIndex) == 0x0000C0, "Member 'Fang_expedition_ProbabilityList_C_SetData::TypeIndex' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetData, Widget) == 0x0000C8, "Member 'Fang_expedition_ProbabilityList_C_SetData::Widget' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetData, LoopEnd2) == 0x0000D0, "Member 'Fang_expedition_ProbabilityList_C_SetData::LoopEnd2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetData, FangTypeIndex) == 0x0000D4, "Member 'Fang_expedition_ProbabilityList_C_SetData::FangTypeIndex' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetData, ListData) == 0x0000D8, "Member 'Fang_expedition_ProbabilityList_C_SetData::ListData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetData, LoopEnd) == 0x0000E8, "Member 'Fang_expedition_ProbabilityList_C_SetData::LoopEnd' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetData, AllListup) == 0x0000EC, "Member 'Fang_expedition_ProbabilityList_C_SetData::AllListup' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetData, TimeRewardData) == 0x0000F0, "Member 'Fang_expedition_ProbabilityList_C_SetData::TimeRewardData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetData, CallFunc_Array_Add_ReturnValue) == 0x000110, "Member 'Fang_expedition_ProbabilityList_C_SetData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetData, CallFunc_Array_Find_ReturnValue) == 0x000114, "Member 'Fang_expedition_ProbabilityList_C_SetData::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetData, Temp_int_Variable) == 0x000118, "Member 'Fang_expedition_ProbabilityList_C_SetData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00011C, "Member 'Fang_expedition_ProbabilityList_C_SetData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetData, CallFunc_Add_IntInt_ReturnValue) == 0x000120, "Member 'Fang_expedition_ProbabilityList_C_SetData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetData, CallFunc_Array_LastIndex_ReturnValue) == 0x000124, "Member 'Fang_expedition_ProbabilityList_C_SetData::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetData, K2Node_CreateDelegate_OutputDelegate) == 0x000128, "Member 'Fang_expedition_ProbabilityList_C_SetData::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetData, CallFunc_AddChild_ReturnValue) == 0x000138, "Member 'Fang_expedition_ProbabilityList_C_SetData::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000140, "Member 'Fang_expedition_ProbabilityList_C_SetData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetData, Temp_int_Variable_1) == 0x000144, "Member 'Fang_expedition_ProbabilityList_C_SetData::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetData, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000148, "Member 'Fang_expedition_ProbabilityList_C_SetData::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetData, CallFunc_Add_IntInt_ReturnValue_1) == 0x00014C, "Member 'Fang_expedition_ProbabilityList_C_SetData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetData, CallFunc_Create_ReturnValue) == 0x000150, "Member 'Fang_expedition_ProbabilityList_C_SetData::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetData, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000158, "Member 'Fang_expedition_ProbabilityList_C_SetData::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetData, CallFunc_BooleanOR_ReturnValue) == 0x000159, "Member 'Fang_expedition_ProbabilityList_C_SetData::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetData, CallFunc_Array_LastIndex_ReturnValue_1) == 0x00015C, "Member 'Fang_expedition_ProbabilityList_C_SetData::CallFunc_Array_LastIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetData, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x000160, "Member 'Fang_expedition_ProbabilityList_C_SetData::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetData, CallFunc_Conv_StringToText_ReturnValue) == 0x000168, "Member 'Fang_expedition_ProbabilityList_C_SetData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetData, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000180, "Member 'Fang_expedition_ProbabilityList_C_SetData::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

// Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.ClearListData
// 0x0030 (0x0030 - 0x0000)
struct Fang_expedition_ProbabilityList_C_ClearListData final
{
public:
	int32                                         LoopEnd;                                           // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5FEA[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFang_expedition_ProbabilityListItem_C* K2Node_DynamicCast_AsFang_Expedition_Probability_List_Item; // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FEB[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_ProbabilityList_C_ClearListData) == 0x000008, "Wrong alignment on Fang_expedition_ProbabilityList_C_ClearListData");
static_assert(sizeof(Fang_expedition_ProbabilityList_C_ClearListData) == 0x000030, "Wrong size on Fang_expedition_ProbabilityList_C_ClearListData");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_ClearListData, LoopEnd) == 0x000000, "Member 'Fang_expedition_ProbabilityList_C_ClearListData::LoopEnd' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_ClearListData, Temp_int_Variable) == 0x000004, "Member 'Fang_expedition_ProbabilityList_C_ClearListData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_ClearListData, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'Fang_expedition_ProbabilityList_C_ClearListData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_ClearListData, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'Fang_expedition_ProbabilityList_C_ClearListData::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_ClearListData, K2Node_DynamicCast_AsFang_Expedition_Probability_List_Item) == 0x000018, "Member 'Fang_expedition_ProbabilityList_C_ClearListData::K2Node_DynamicCast_AsFang_Expedition_Probability_List_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_ClearListData, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'Fang_expedition_ProbabilityList_C_ClearListData::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_ClearListData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000021, "Member 'Fang_expedition_ProbabilityList_C_ClearListData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_ClearListData, CallFunc_GetChildrenCount_ReturnValue) == 0x000024, "Member 'Fang_expedition_ProbabilityList_C_ClearListData::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_ClearListData, CallFunc_Subtract_IntInt_ReturnValue) == 0x000028, "Member 'Fang_expedition_ProbabilityList_C_ClearListData::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

// Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.CB_OnListItemClick
// 0x0020 (0x0020 - 0x0000)
struct Fang_expedition_ProbabilityList_C_CB_OnListItemClick final
{
public:
	struct FSBMasterReward                        MasterReward;                                      // 0x0000(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	uint8                                         Pad_5FEC[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                CallFunc_SpawnObject_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_ProbabilityList_C_CB_OnListItemClick) == 0x000008, "Wrong alignment on Fang_expedition_ProbabilityList_C_CB_OnListItemClick");
static_assert(sizeof(Fang_expedition_ProbabilityList_C_CB_OnListItemClick) == 0x000020, "Wrong size on Fang_expedition_ProbabilityList_C_CB_OnListItemClick");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_CB_OnListItemClick, MasterReward) == 0x000000, "Member 'Fang_expedition_ProbabilityList_C_CB_OnListItemClick::MasterReward' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_CB_OnListItemClick, CallFunc_SpawnObject_ReturnValue) == 0x000018, "Member 'Fang_expedition_ProbabilityList_C_CB_OnListItemClick::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");

// Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.Open
// 0x0010 (0x0010 - 0x0000)
struct Fang_expedition_ProbabilityList_C_Open final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(Fang_expedition_ProbabilityList_C_Open) == 0x000004, "Wrong alignment on Fang_expedition_ProbabilityList_C_Open");
static_assert(sizeof(Fang_expedition_ProbabilityList_C_Open) == 0x000010, "Wrong size on Fang_expedition_ProbabilityList_C_Open");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_Open, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'Fang_expedition_ProbabilityList_C_Open::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function Fang_expedition_ProbabilityList.Fang_expedition_ProbabilityList_C.SetPlayData
// 0x0198 (0x0198 - 0x0000)
struct Fang_expedition_ProbabilityList_C_SetPlayData final
{
public:
	struct FSBFang_expeditionPlayData             PlayData;                                          // 0x0000(0x0120)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UFang_expedition_ProbabilityListItem_C* Widget;                                            // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x0128(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FSBMasterReward& RewardData)> K2Node_CreateDelegate_OutputDelegate;              // 0x012C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_5FED[0x4];                                     // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5FEE[0x4];                                     // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_ProbabilityListItem_C* CallFunc_Create_ReturnValue;                       // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FEF[0x3];                                     // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0160(0x0018)()
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBFang_expeditionRandomRewardData> CallFunc_GetExpeditionDetailRewardData_RewardData; // 0x0180(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_ProbabilityList_C_SetPlayData) == 0x000008, "Wrong alignment on Fang_expedition_ProbabilityList_C_SetPlayData");
static_assert(sizeof(Fang_expedition_ProbabilityList_C_SetPlayData) == 0x000198, "Wrong size on Fang_expedition_ProbabilityList_C_SetPlayData");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetPlayData, PlayData) == 0x000000, "Member 'Fang_expedition_ProbabilityList_C_SetPlayData::PlayData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetPlayData, Widget) == 0x000120, "Member 'Fang_expedition_ProbabilityList_C_SetPlayData::Widget' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetPlayData, LoopEnd) == 0x000128, "Member 'Fang_expedition_ProbabilityList_C_SetPlayData::LoopEnd' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetPlayData, K2Node_CreateDelegate_OutputDelegate) == 0x00012C, "Member 'Fang_expedition_ProbabilityList_C_SetPlayData::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetPlayData, CallFunc_AddChild_ReturnValue) == 0x000140, "Member 'Fang_expedition_ProbabilityList_C_SetPlayData::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetPlayData, Temp_int_Variable) == 0x000148, "Member 'Fang_expedition_ProbabilityList_C_SetPlayData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetPlayData, CallFunc_Create_ReturnValue) == 0x000150, "Member 'Fang_expedition_ProbabilityList_C_SetPlayData::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetPlayData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000158, "Member 'Fang_expedition_ProbabilityList_C_SetPlayData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetPlayData, CallFunc_Add_IntInt_ReturnValue) == 0x00015C, "Member 'Fang_expedition_ProbabilityList_C_SetPlayData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetPlayData, CallFunc_Conv_StringToText_ReturnValue) == 0x000160, "Member 'Fang_expedition_ProbabilityList_C_SetPlayData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetPlayData, CallFunc_GetSBPlayerController_ReturnValue) == 0x000178, "Member 'Fang_expedition_ProbabilityList_C_SetPlayData::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetPlayData, CallFunc_GetExpeditionDetailRewardData_RewardData) == 0x000180, "Member 'Fang_expedition_ProbabilityList_C_SetPlayData::CallFunc_GetExpeditionDetailRewardData_RewardData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_ProbabilityList_C_SetPlayData, CallFunc_Array_LastIndex_ReturnValue) == 0x000190, "Member 'Fang_expedition_ProbabilityList_C_SetPlayData::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");

}

