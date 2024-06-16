#pragma once

 

// Package: Fang_expedition_DetailHeader

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "ST_ItemIconData_structs.hpp"


namespace SDK::Params
{

// Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.ExecuteUbergraph_Fang_expedition_DetailHeader
// 0x0078 (0x0078 - 0x0000)
struct Fang_expedition_DetailHeader_C_ExecuteUbergraph_Fang_expedition_DetailHeader final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E85[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class UObject*                                Temp_object_Variable;                              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E86[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              K2Node_CustomEvent_Texture;                        // 0x0038(0x0028)(HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index;                          // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E87[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_DetailHeader_C_ExecuteUbergraph_Fang_expedition_DetailHeader) == 0x000008, "Wrong alignment on Fang_expedition_DetailHeader_C_ExecuteUbergraph_Fang_expedition_DetailHeader");
static_assert(sizeof(Fang_expedition_DetailHeader_C_ExecuteUbergraph_Fang_expedition_DetailHeader) == 0x000078, "Wrong size on Fang_expedition_DetailHeader_C_ExecuteUbergraph_Fang_expedition_DetailHeader");
static_assert(offsetof(Fang_expedition_DetailHeader_C_ExecuteUbergraph_Fang_expedition_DetailHeader, EntryPoint) == 0x000000, "Member 'Fang_expedition_DetailHeader_C_ExecuteUbergraph_Fang_expedition_DetailHeader::EntryPoint' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_ExecuteUbergraph_Fang_expedition_DetailHeader, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'Fang_expedition_DetailHeader_C_ExecuteUbergraph_Fang_expedition_DetailHeader::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_ExecuteUbergraph_Fang_expedition_DetailHeader, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'Fang_expedition_DetailHeader_C_ExecuteUbergraph_Fang_expedition_DetailHeader::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_ExecuteUbergraph_Fang_expedition_DetailHeader, Temp_object_Variable) == 0x000020, "Member 'Fang_expedition_DetailHeader_C_ExecuteUbergraph_Fang_expedition_DetailHeader::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_ExecuteUbergraph_Fang_expedition_DetailHeader, K2Node_DynamicCast_AsTexture_2D) == 0x000028, "Member 'Fang_expedition_DetailHeader_C_ExecuteUbergraph_Fang_expedition_DetailHeader::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_ExecuteUbergraph_Fang_expedition_DetailHeader, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'Fang_expedition_DetailHeader_C_ExecuteUbergraph_Fang_expedition_DetailHeader::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_ExecuteUbergraph_Fang_expedition_DetailHeader, K2Node_CustomEvent_Texture) == 0x000038, "Member 'Fang_expedition_DetailHeader_C_ExecuteUbergraph_Fang_expedition_DetailHeader::K2Node_CustomEvent_Texture' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_ExecuteUbergraph_Fang_expedition_DetailHeader, K2Node_CustomEvent_Index) == 0x000060, "Member 'Fang_expedition_DetailHeader_C_ExecuteUbergraph_Fang_expedition_DetailHeader::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_ExecuteUbergraph_Fang_expedition_DetailHeader, CallFunc_GetChildAt_ReturnValue) == 0x000068, "Member 'Fang_expedition_DetailHeader_C_ExecuteUbergraph_Fang_expedition_DetailHeader::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_ExecuteUbergraph_Fang_expedition_DetailHeader, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000070, "Member 'Fang_expedition_DetailHeader_C_ExecuteUbergraph_Fang_expedition_DetailHeader::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_ExecuteUbergraph_Fang_expedition_DetailHeader, K2Node_SwitchInteger_CmpSuccess) == 0x000071, "Member 'Fang_expedition_DetailHeader_C_ExecuteUbergraph_Fang_expedition_DetailHeader::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.FangImageLoad
// 0x0030 (0x0030 - 0x0000)
struct Fang_expedition_DetailHeader_C_FangImageLoad final
{
public:
	TSoftObjectPtr<class UTexture2D>              Texture;                                           // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0028(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DetailHeader_C_FangImageLoad) == 0x000008, "Wrong alignment on Fang_expedition_DetailHeader_C_FangImageLoad");
static_assert(sizeof(Fang_expedition_DetailHeader_C_FangImageLoad) == 0x000030, "Wrong size on Fang_expedition_DetailHeader_C_FangImageLoad");
static_assert(offsetof(Fang_expedition_DetailHeader_C_FangImageLoad, Texture) == 0x000000, "Member 'Fang_expedition_DetailHeader_C_FangImageLoad::Texture' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_FangImageLoad, Param_Index) == 0x000028, "Member 'Fang_expedition_DetailHeader_C_FangImageLoad::Param_Index' has a wrong offset!");

// Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.OnLoaded_9F74DC0840402151039A7F9243B7E826
// 0x0008 (0x0008 - 0x0000)
struct Fang_expedition_DetailHeader_C_OnLoaded_9F74DC0840402151039A7F9243B7E826 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DetailHeader_C_OnLoaded_9F74DC0840402151039A7F9243B7E826) == 0x000008, "Wrong alignment on Fang_expedition_DetailHeader_C_OnLoaded_9F74DC0840402151039A7F9243B7E826");
static_assert(sizeof(Fang_expedition_DetailHeader_C_OnLoaded_9F74DC0840402151039A7F9243B7E826) == 0x000008, "Wrong size on Fang_expedition_DetailHeader_C_OnLoaded_9F74DC0840402151039A7F9243B7E826");
static_assert(offsetof(Fang_expedition_DetailHeader_C_OnLoaded_9F74DC0840402151039A7F9243B7E826, Loaded) == 0x000000, "Member 'Fang_expedition_DetailHeader_C_OnLoaded_9F74DC0840402151039A7F9243B7E826::Loaded' has a wrong offset!");

// Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.SetStay
// 0x0020 (0x0020 - 0x0000)
struct Fang_expedition_DetailHeader_C_SetStay final
{
public:
	int32                                         Category;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E88[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DetailHeader_C_SetStay) == 0x000008, "Wrong alignment on Fang_expedition_DetailHeader_C_SetStay");
static_assert(sizeof(Fang_expedition_DetailHeader_C_SetStay) == 0x000020, "Wrong size on Fang_expedition_DetailHeader_C_SetStay");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetStay, Category) == 0x000000, "Member 'Fang_expedition_DetailHeader_C_SetStay::Category' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetStay, Temp_int_Variable) == 0x000004, "Member 'Fang_expedition_DetailHeader_C_SetStay::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetStay, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'Fang_expedition_DetailHeader_C_SetStay::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetStay, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000010, "Member 'Fang_expedition_DetailHeader_C_SetStay::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetStay, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'Fang_expedition_DetailHeader_C_SetStay::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetStay, CallFunc_Subtract_IntInt_ReturnValue) == 0x000018, "Member 'Fang_expedition_DetailHeader_C_SetStay::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetStay, CallFunc_Clamp_ReturnValue) == 0x00001C, "Member 'Fang_expedition_DetailHeader_C_SetStay::CallFunc_Clamp_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.SetPlayData
// 0x0130 (0x0130 - 0x0000)
struct Fang_expedition_DetailHeader_C_SetPlayData final
{
public:
	struct FSBFang_expeditionPlayData             PlayData;                                          // 0x0000(0x0120)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         WorkInt;                                           // 0x0120(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_DetailHeader_C_SetPlayData) == 0x000008, "Wrong alignment on Fang_expedition_DetailHeader_C_SetPlayData");
static_assert(sizeof(Fang_expedition_DetailHeader_C_SetPlayData) == 0x000130, "Wrong size on Fang_expedition_DetailHeader_C_SetPlayData");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetPlayData, PlayData) == 0x000000, "Member 'Fang_expedition_DetailHeader_C_SetPlayData::PlayData' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetPlayData, WorkInt) == 0x000120, "Member 'Fang_expedition_DetailHeader_C_SetPlayData::WorkInt' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetPlayData, CallFunc_Subtract_IntInt_ReturnValue) == 0x000124, "Member 'Fang_expedition_DetailHeader_C_SetPlayData::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetPlayData, CallFunc_Clamp_ReturnValue) == 0x000128, "Member 'Fang_expedition_DetailHeader_C_SetPlayData::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetPlayData, K2Node_SwitchEnum_CmpSuccess) == 0x00012C, "Member 'Fang_expedition_DetailHeader_C_SetPlayData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.SetFangData
// 0x0160 (0x0160 - 0x0000)
struct Fang_expedition_DetailHeader_C_SetFangData final
{
public:
	TArray<class FString>                         UniqueIds;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          UseAnimation;                                      // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E89[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_DetailFangImage_C*     TargetImage;                                       // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FindIndex;                                         // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopIndex;                                         // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 TargetId;                                          // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<class UFang_expedition_DetailFangImage_C*> ImageArray;                                        // 0x0038(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         LastIndex;                                         // 0x0048(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E8A[0x2];                                     // 0x005E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	class UFang_expedition_DetailFangImage_C*     CallFunc_Array_Get_Item;                           // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E8B[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UFang_expedition_DetailFangImage_C*> K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E8C[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E8D[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00A6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E8E[0x1];                                     // 0x00A7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_DetailFangImage_C*     CallFunc_Array_Get_Item_1;                         // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue_1;            // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E8F[0x3];                                     // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E90[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue_2;            // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x00CC(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Variable_2;                               // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E91[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_DetailFangImage_C*     CallFunc_Array_Get_Item_2;                         // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFang_expedition_DetailFangImage_C*     CallFunc_Array_Get_Item_3;                         // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E92[0x3];                                     // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_3;           // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E93[0x3];                                     // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue_3;            // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_5;               // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E94[0x3];                                     // 0x0115(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0118(0x0010)(ZeroConstructor, NoDestructor)
	class UFang_expedition_DetailFangImage_C*     CallFunc_Array_Get_Item_4;                         // 0x0128(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFang_expedition_DetailFangImage_C*> K2Node_MakeArray_Array_1;                          // 0x0130(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E95[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_DetailFangImage_C*     CallFunc_Array_Get_Item_5;                         // 0x0148(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E96[0x3];                                     // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue_4;            // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Min_ReturnValue;                          // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue_5;            // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DetailHeader_C_SetFangData) == 0x000008, "Wrong alignment on Fang_expedition_DetailHeader_C_SetFangData");
static_assert(sizeof(Fang_expedition_DetailHeader_C_SetFangData) == 0x000160, "Wrong size on Fang_expedition_DetailHeader_C_SetFangData");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, UniqueIds) == 0x000000, "Member 'Fang_expedition_DetailHeader_C_SetFangData::UniqueIds' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, UseAnimation) == 0x000010, "Member 'Fang_expedition_DetailHeader_C_SetFangData::UseAnimation' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, TargetImage) == 0x000018, "Member 'Fang_expedition_DetailHeader_C_SetFangData::TargetImage' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, FindIndex) == 0x000020, "Member 'Fang_expedition_DetailHeader_C_SetFangData::FindIndex' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, LoopIndex) == 0x000024, "Member 'Fang_expedition_DetailHeader_C_SetFangData::LoopIndex' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, TargetId) == 0x000028, "Member 'Fang_expedition_DetailHeader_C_SetFangData::TargetId' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, ImageArray) == 0x000038, "Member 'Fang_expedition_DetailHeader_C_SetFangData::ImageArray' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, LastIndex) == 0x000048, "Member 'Fang_expedition_DetailHeader_C_SetFangData::LastIndex' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, Temp_int_Variable) == 0x00004C, "Member 'Fang_expedition_DetailHeader_C_SetFangData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_Add_IntInt_ReturnValue) == 0x000050, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, Temp_int_Variable_1) == 0x000054, "Member 'Fang_expedition_DetailHeader_C_SetFangData::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_Add_IntInt_ReturnValue_1) == 0x000058, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, Temp_bool_Variable) == 0x00005C, "Member 'Fang_expedition_DetailHeader_C_SetFangData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_Not_PreBool_ReturnValue) == 0x00005D, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, K2Node_CreateDelegate_OutputDelegate) == 0x000060, "Member 'Fang_expedition_DetailHeader_C_SetFangData::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_Array_Get_Item) == 0x000070, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_Array_LastIndex_ReturnValue) == 0x000078, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, K2Node_MakeArray_Array) == 0x000080, "Member 'Fang_expedition_DetailHeader_C_SetFangData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_Array_Length_ReturnValue) == 0x000090, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000094, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_Array_Length_ReturnValue_1) == 0x000098, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00009C, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000A0, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_BooleanAND_ReturnValue) == 0x0000A4, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000A5, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_BooleanAND_ReturnValue_1) == 0x0000A6, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_Array_Get_Item_1) == 0x0000A8, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0000B0, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_Array_LastIndex_ReturnValue_1) == 0x0000B4, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_Array_LastIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x0000B8, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_Array_Length_ReturnValue_2) == 0x0000BC, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_Array_Length_ReturnValue_3) == 0x0000C0, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_Greater_IntInt_ReturnValue) == 0x0000C4, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_Array_LastIndex_ReturnValue_2) == 0x0000C8, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_Array_LastIndex_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000CC, "Member 'Fang_expedition_DetailHeader_C_SetFangData::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, Temp_int_Variable_2) == 0x0000DC, "Member 'Fang_expedition_DetailHeader_C_SetFangData::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, Temp_int_Variable_3) == 0x0000E0, "Member 'Fang_expedition_DetailHeader_C_SetFangData::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_Array_Get_Item_2) == 0x0000E8, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_Array_Get_Item_3) == 0x0000F0, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x0000F8, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000FC, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_LessEqual_IntInt_ReturnValue_3) == 0x000100, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_LessEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_Add_IntInt_ReturnValue_3) == 0x000104, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_Array_LastIndex_ReturnValue_3) == 0x000108, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_Array_LastIndex_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_Array_Length_ReturnValue_4) == 0x00010C, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_Array_Length_ReturnValue_5) == 0x000110, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_Array_Length_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000114, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, K2Node_CreateDelegate_OutputDelegate_2) == 0x000118, "Member 'Fang_expedition_DetailHeader_C_SetFangData::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_Array_Get_Item_4) == 0x000128, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, K2Node_MakeArray_Array_1) == 0x000130, "Member 'Fang_expedition_DetailHeader_C_SetFangData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000140, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_Array_Get_Item_5) == 0x000148, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000150, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_Array_LastIndex_ReturnValue_4) == 0x000154, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_Array_LastIndex_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_Min_ReturnValue) == 0x000158, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_Min_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetFangData, CallFunc_Array_LastIndex_ReturnValue_5) == 0x00015C, "Member 'Fang_expedition_DetailHeader_C_SetFangData::CallFunc_Array_LastIndex_ReturnValue_5' has a wrong offset!");

// Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.UpdateFangTexture
// 0x0028 (0x0028 - 0x0000)
struct Fang_expedition_DetailHeader_C_UpdateFangTexture final
{
public:
	class UTexture2D*                             Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E97[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_DetailFangImage_C*     TargetImage;                                       // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E98[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DetailHeader_C_UpdateFangTexture) == 0x000008, "Wrong alignment on Fang_expedition_DetailHeader_C_UpdateFangTexture");
static_assert(sizeof(Fang_expedition_DetailHeader_C_UpdateFangTexture) == 0x000028, "Wrong size on Fang_expedition_DetailHeader_C_UpdateFangTexture");
static_assert(offsetof(Fang_expedition_DetailHeader_C_UpdateFangTexture, Texture) == 0x000000, "Member 'Fang_expedition_DetailHeader_C_UpdateFangTexture::Texture' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_UpdateFangTexture, Param_Index) == 0x000008, "Member 'Fang_expedition_DetailHeader_C_UpdateFangTexture::Param_Index' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_UpdateFangTexture, TargetImage) == 0x000010, "Member 'Fang_expedition_DetailHeader_C_UpdateFangTexture::TargetImage' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_UpdateFangTexture, K2Node_SwitchInteger_CmpSuccess) == 0x000018, "Member 'Fang_expedition_DetailHeader_C_UpdateFangTexture::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_UpdateFangTexture, CallFunc_GetChildAt_ReturnValue) == 0x000020, "Member 'Fang_expedition_DetailHeader_C_UpdateFangTexture::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.IconAnimationStop
// 0x0048 (0x0048 - 0x0000)
struct Fang_expedition_DetailHeader_C_IconAnimationStop final
{
public:
	TArray<class UFang_expedition_DetailFangImage_C*> IconList;                                          // 0x0000(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         LoopEnd;                                           // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E99[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_DetailFangImage_C*     CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFang_expedition_DetailFangImage_C*     CallFunc_Array_Get_Item_1;                         // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFang_expedition_DetailFangImage_C*> K2Node_MakeArray_Array;                            // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_DetailHeader_C_IconAnimationStop) == 0x000008, "Wrong alignment on Fang_expedition_DetailHeader_C_IconAnimationStop");
static_assert(sizeof(Fang_expedition_DetailHeader_C_IconAnimationStop) == 0x000048, "Wrong size on Fang_expedition_DetailHeader_C_IconAnimationStop");
static_assert(offsetof(Fang_expedition_DetailHeader_C_IconAnimationStop, IconList) == 0x000000, "Member 'Fang_expedition_DetailHeader_C_IconAnimationStop::IconList' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_IconAnimationStop, LoopEnd) == 0x000010, "Member 'Fang_expedition_DetailHeader_C_IconAnimationStop::LoopEnd' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_IconAnimationStop, Temp_int_Variable) == 0x000014, "Member 'Fang_expedition_DetailHeader_C_IconAnimationStop::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_IconAnimationStop, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'Fang_expedition_DetailHeader_C_IconAnimationStop::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_IconAnimationStop, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00001C, "Member 'Fang_expedition_DetailHeader_C_IconAnimationStop::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_IconAnimationStop, CallFunc_Array_Get_Item) == 0x000020, "Member 'Fang_expedition_DetailHeader_C_IconAnimationStop::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_IconAnimationStop, CallFunc_Array_Get_Item_1) == 0x000028, "Member 'Fang_expedition_DetailHeader_C_IconAnimationStop::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_IconAnimationStop, K2Node_MakeArray_Array) == 0x000030, "Member 'Fang_expedition_DetailHeader_C_IconAnimationStop::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_IconAnimationStop, CallFunc_Array_LastIndex_ReturnValue) == 0x000040, "Member 'Fang_expedition_DetailHeader_C_IconAnimationStop::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_IconAnimationStop, CallFunc_Greater_IntInt_ReturnValue) == 0x000044, "Member 'Fang_expedition_DetailHeader_C_IconAnimationStop::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.UpdateFangData
// 0x0280 (0x0280 - 0x0000)
struct Fang_expedition_DetailHeader_C_UpdateFangData final
{
public:
	int32                                         LoopIndex;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LastIndex;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFang_expedition_DetailFangImage_C*> ImageArray;                                        // 0x0008(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           CallFunc_FindCharacterEquipment_OutResult;         // 0x0028(0x0118)()
	bool                                          CallFunc_FindCharacterEquipment_ReturnValue;       // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E9A[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFang_expedition_DetailFangImage_C*     CallFunc_Array_Get_Item;                           // 0x0148(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E9B[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_ItemIconData                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x0170(0x00C8)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E9C[0x7];                                     // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0240(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E9D[0x7];                                     // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UFang_expedition_DetailFangImage_C*> K2Node_MakeArray_Array;                            // 0x0250(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x0260(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E9E[0x4];                                     // 0x026C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_2;                 // 0x0270(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E9F[0x3];                                     // 0x0279(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x027C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Fang_expedition_DetailHeader_C_UpdateFangData) == 0x000008, "Wrong alignment on Fang_expedition_DetailHeader_C_UpdateFangData");
static_assert(sizeof(Fang_expedition_DetailHeader_C_UpdateFangData) == 0x000280, "Wrong size on Fang_expedition_DetailHeader_C_UpdateFangData");
static_assert(offsetof(Fang_expedition_DetailHeader_C_UpdateFangData, LoopIndex) == 0x000000, "Member 'Fang_expedition_DetailHeader_C_UpdateFangData::LoopIndex' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_UpdateFangData, LastIndex) == 0x000004, "Member 'Fang_expedition_DetailHeader_C_UpdateFangData::LastIndex' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_UpdateFangData, ImageArray) == 0x000008, "Member 'Fang_expedition_DetailHeader_C_UpdateFangData::ImageArray' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_UpdateFangData, Temp_int_Variable) == 0x000018, "Member 'Fang_expedition_DetailHeader_C_UpdateFangData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_UpdateFangData, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'Fang_expedition_DetailHeader_C_UpdateFangData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_UpdateFangData, CallFunc_Array_LastIndex_ReturnValue) == 0x000020, "Member 'Fang_expedition_DetailHeader_C_UpdateFangData::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_UpdateFangData, CallFunc_Add_IntInt_ReturnValue_1) == 0x000024, "Member 'Fang_expedition_DetailHeader_C_UpdateFangData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_UpdateFangData, CallFunc_FindCharacterEquipment_OutResult) == 0x000028, "Member 'Fang_expedition_DetailHeader_C_UpdateFangData::CallFunc_FindCharacterEquipment_OutResult' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_UpdateFangData, CallFunc_FindCharacterEquipment_ReturnValue) == 0x000140, "Member 'Fang_expedition_DetailHeader_C_UpdateFangData::CallFunc_FindCharacterEquipment_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_UpdateFangData, CallFunc_Array_Get_Item) == 0x000148, "Member 'Fang_expedition_DetailHeader_C_UpdateFangData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_UpdateFangData, CallFunc_Conv_IntToString_ReturnValue) == 0x000150, "Member 'Fang_expedition_DetailHeader_C_UpdateFangData::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_UpdateFangData, CallFunc_Conv_StringToName_ReturnValue) == 0x000160, "Member 'Fang_expedition_DetailHeader_C_UpdateFangData::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_UpdateFangData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000168, "Member 'Fang_expedition_DetailHeader_C_UpdateFangData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_UpdateFangData, CallFunc_GetDataTableRowFromName_OutRow) == 0x000170, "Member 'Fang_expedition_DetailHeader_C_UpdateFangData::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_UpdateFangData, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000238, "Member 'Fang_expedition_DetailHeader_C_UpdateFangData::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_UpdateFangData, CallFunc_GetChildAt_ReturnValue) == 0x000240, "Member 'Fang_expedition_DetailHeader_C_UpdateFangData::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_UpdateFangData, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000248, "Member 'Fang_expedition_DetailHeader_C_UpdateFangData::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_UpdateFangData, K2Node_MakeArray_Array) == 0x000250, "Member 'Fang_expedition_DetailHeader_C_UpdateFangData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_UpdateFangData, CallFunc_GetChildAt_ReturnValue_1) == 0x000260, "Member 'Fang_expedition_DetailHeader_C_UpdateFangData::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_UpdateFangData, Temp_int_Variable_1) == 0x000268, "Member 'Fang_expedition_DetailHeader_C_UpdateFangData::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_UpdateFangData, CallFunc_GetChildAt_ReturnValue_2) == 0x000270, "Member 'Fang_expedition_DetailHeader_C_UpdateFangData::CallFunc_GetChildAt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_UpdateFangData, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000278, "Member 'Fang_expedition_DetailHeader_C_UpdateFangData::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Fang_expedition_DetailHeader_C_UpdateFangData, CallFunc_Add_IntInt_ReturnValue_2) == 0x00027C, "Member 'Fang_expedition_DetailHeader_C_UpdateFangData::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");

// Function Fang_expedition_DetailHeader.Fang_expedition_DetailHeader_C.SetCloseBtnVisible
// 0x0001 (0x0001 - 0x0000)
struct Fang_expedition_DetailHeader_C_SetCloseBtnVisible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Fang_expedition_DetailHeader_C_SetCloseBtnVisible) == 0x000001, "Wrong alignment on Fang_expedition_DetailHeader_C_SetCloseBtnVisible");
static_assert(sizeof(Fang_expedition_DetailHeader_C_SetCloseBtnVisible) == 0x000001, "Wrong size on Fang_expedition_DetailHeader_C_SetCloseBtnVisible");
static_assert(offsetof(Fang_expedition_DetailHeader_C_SetCloseBtnVisible, Visible) == 0x000000, "Member 'Fang_expedition_DetailHeader_C_SetCloseBtnVisible::Visible' has a wrong offset!");

}

