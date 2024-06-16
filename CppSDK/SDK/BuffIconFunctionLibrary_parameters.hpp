#pragma once

 

// Package: BuffIconFunctionLibrary

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "BuffIconAssetData_structs.hpp"


namespace SDK::Params
{

// Function BuffIconFunctionLibrary.BuffIconFunctionLibrary_C.FindIconAssetData
// 0x00A0 (0x00A0 - 0x0000)
struct BuffIconFunctionLibrary_C_FindIconAssetData final
{
public:
	ESBStatusAilmentIconType                      IconType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLarge;                                            // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8967[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Texture;                                           // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFind;                                            // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8968[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   TextId;                                            // 0x001C(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBuff;                                             // 0x0024(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBStatusAilmentPlateType                     Type;                                              // 0x0025(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8969[0x2];                                     // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             Table;                                             // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_896A[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0040(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0054(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_896B[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FBuffIconAssetData                     CallFunc_GetDataTableRowFromName_OutRow;           // 0x0060(0x0028)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_896C[0x6];                                     // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BuffIconFunctionLibrary_C_FindIconAssetData) == 0x000008, "Wrong alignment on BuffIconFunctionLibrary_C_FindIconAssetData");
static_assert(sizeof(BuffIconFunctionLibrary_C_FindIconAssetData) == 0x0000A0, "Wrong size on BuffIconFunctionLibrary_C_FindIconAssetData");
static_assert(offsetof(BuffIconFunctionLibrary_C_FindIconAssetData, IconType) == 0x000000, "Member 'BuffIconFunctionLibrary_C_FindIconAssetData::IconType' has a wrong offset!");
static_assert(offsetof(BuffIconFunctionLibrary_C_FindIconAssetData, bLarge) == 0x000001, "Member 'BuffIconFunctionLibrary_C_FindIconAssetData::bLarge' has a wrong offset!");
static_assert(offsetof(BuffIconFunctionLibrary_C_FindIconAssetData, __WorldContext) == 0x000008, "Member 'BuffIconFunctionLibrary_C_FindIconAssetData::__WorldContext' has a wrong offset!");
static_assert(offsetof(BuffIconFunctionLibrary_C_FindIconAssetData, Texture) == 0x000010, "Member 'BuffIconFunctionLibrary_C_FindIconAssetData::Texture' has a wrong offset!");
static_assert(offsetof(BuffIconFunctionLibrary_C_FindIconAssetData, IsFind) == 0x000018, "Member 'BuffIconFunctionLibrary_C_FindIconAssetData::IsFind' has a wrong offset!");
static_assert(offsetof(BuffIconFunctionLibrary_C_FindIconAssetData, TextId) == 0x00001C, "Member 'BuffIconFunctionLibrary_C_FindIconAssetData::TextId' has a wrong offset!");
static_assert(offsetof(BuffIconFunctionLibrary_C_FindIconAssetData, bBuff) == 0x000024, "Member 'BuffIconFunctionLibrary_C_FindIconAssetData::bBuff' has a wrong offset!");
static_assert(offsetof(BuffIconFunctionLibrary_C_FindIconAssetData, Type) == 0x000025, "Member 'BuffIconFunctionLibrary_C_FindIconAssetData::Type' has a wrong offset!");
static_assert(offsetof(BuffIconFunctionLibrary_C_FindIconAssetData, Table) == 0x000028, "Member 'BuffIconFunctionLibrary_C_FindIconAssetData::Table' has a wrong offset!");
static_assert(offsetof(BuffIconFunctionLibrary_C_FindIconAssetData, Temp_int_Array_Index_Variable) == 0x000030, "Member 'BuffIconFunctionLibrary_C_FindIconAssetData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BuffIconFunctionLibrary_C_FindIconAssetData, Temp_int_Loop_Counter_Variable) == 0x000034, "Member 'BuffIconFunctionLibrary_C_FindIconAssetData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BuffIconFunctionLibrary_C_FindIconAssetData, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'BuffIconFunctionLibrary_C_FindIconAssetData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BuffIconFunctionLibrary_C_FindIconAssetData, Temp_bool_Variable) == 0x00003C, "Member 'BuffIconFunctionLibrary_C_FindIconAssetData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BuffIconFunctionLibrary_C_FindIconAssetData, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000040, "Member 'BuffIconFunctionLibrary_C_FindIconAssetData::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(BuffIconFunctionLibrary_C_FindIconAssetData, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'BuffIconFunctionLibrary_C_FindIconAssetData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BuffIconFunctionLibrary_C_FindIconAssetData, CallFunc_Array_Get_Item) == 0x000054, "Member 'BuffIconFunctionLibrary_C_FindIconAssetData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BuffIconFunctionLibrary_C_FindIconAssetData, CallFunc_Less_IntInt_ReturnValue) == 0x00005C, "Member 'BuffIconFunctionLibrary_C_FindIconAssetData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BuffIconFunctionLibrary_C_FindIconAssetData, CallFunc_GetDataTableRowFromName_OutRow) == 0x000060, "Member 'BuffIconFunctionLibrary_C_FindIconAssetData::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BuffIconFunctionLibrary_C_FindIconAssetData, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000088, "Member 'BuffIconFunctionLibrary_C_FindIconAssetData::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BuffIconFunctionLibrary_C_FindIconAssetData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000089, "Member 'BuffIconFunctionLibrary_C_FindIconAssetData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BuffIconFunctionLibrary_C_FindIconAssetData, K2Node_Select_Default) == 0x000090, "Member 'BuffIconFunctionLibrary_C_FindIconAssetData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BuffIconFunctionLibrary_C_FindIconAssetData, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000098, "Member 'BuffIconFunctionLibrary_C_FindIconAssetData::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BuffIconFunctionLibrary_C_FindIconAssetData, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000099, "Member 'BuffIconFunctionLibrary_C_FindIconAssetData::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");

}

