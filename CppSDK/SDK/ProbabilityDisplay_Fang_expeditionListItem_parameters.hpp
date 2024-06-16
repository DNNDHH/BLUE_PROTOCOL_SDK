#pragma once

 

// Package: ProbabilityDisplay_Fang_expeditionListItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ProbabilityDisplay_Fang_expeditionListItem.ProbabilityDisplay_Fang_expeditionListItem_C.SetData
// 0x02C0 (0x02C0 - 0x0000)
struct ProbabilityDisplay_Fang_expeditionListItem_C_SetData final
{
public:
	int32                                         FangCount;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBFang_expeditionRandomRewardData     Data;                                              // 0x0004(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	int32                                         LotGroupId;                                        // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 LotItemStr;                                        // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         BaseWeight;                                        // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81BD[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UImage*>                         IconArray;                                         // 0x0040(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                          Temp_bool_Variable;                                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81BE[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81BF[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0060(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81C0[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81C1[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Right_ReturnValue;                        // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue_1;                    // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0118(0x0018)()
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBImagineCategoryType                        Temp_byte_Variable;                                // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81C2[0x3];                                     // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 CallFunc_Array_Get_Item;                           // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81C3[0x3];                                     // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 CallFunc_Array_Get_Item_1;                         // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UImage*>                         K2Node_MakeArray_Array;                            // 0x0158(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Min_ReturnValue;                          // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81C4[0x7];                                     // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRewardItemNameAndType2_OutName;        // 0x0178(0x0018)()
	class FText                                   CallFunc_GetRewardItemNameAndType2_OutType;        // 0x0190(0x0018)()
	bool                                          CallFunc_GetRewardItemNameAndType2_OutNoName;      // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindRewardLotteryGroupsMaster_bIsValid;   // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81C5[0x6];                                     // 0x01AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterRewardLotteryGroups           CallFunc_FindRewardLotteryGroupsMaster_RewardLotteryGroupsMaster; // 0x01B0(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x01C8(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindMasterImagineData_IsExists;           // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81C6[0x6];                                     // 0x01E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindMasterImagineData_ReturnValue;        // 0x01E8(0x00B0)()
	class FString                                 CallFunc_GetRewardItemTypeName_ReturnValue;        // 0x0298(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_1;                           // 0x02A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData) == 0x000008, "Wrong alignment on ProbabilityDisplay_Fang_expeditionListItem_C_SetData");
static_assert(sizeof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData) == 0x0002C0, "Wrong size on ProbabilityDisplay_Fang_expeditionListItem_C_SetData");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, FangCount) == 0x000000, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::FangCount' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, Data) == 0x000004, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::Data' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, LotGroupId) == 0x000024, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::LotGroupId' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, LotItemStr) == 0x000028, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::LotItemStr' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, BaseWeight) == 0x000038, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::BaseWeight' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, IconArray) == 0x000040, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::IconArray' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, Temp_bool_Variable) == 0x000050, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, Temp_int_Variable) == 0x000054, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_Add_IntInt_ReturnValue) == 0x000058, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_Conv_StringToText_ReturnValue) == 0x000060, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000078, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000088, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_GetMasterDataManager_IsValid) == 0x000098, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000A0, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000A8, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_Percent_IntInt_ReturnValue) == 0x0000B8, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_Divide_IntInt_ReturnValue) == 0x0000BC, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000C0, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_Conv_IntToString_ReturnValue) == 0x0000C8, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_Conv_IntToString_ReturnValue_1) == 0x0000D8, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_Replace_ReturnValue) == 0x0000E8, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_Right_ReturnValue) == 0x0000F8, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_Right_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_Replace_ReturnValue_1) == 0x000108, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_Replace_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000118, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000130, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_FTrunc_ReturnValue) == 0x000134, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, Temp_int_Variable_1) == 0x000138, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, Temp_byte_Variable) == 0x00013C, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_Array_Get_Item) == 0x000140, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000148, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_Add_IntInt_ReturnValue_2) == 0x00014C, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_Array_Get_Item_1) == 0x000150, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, K2Node_MakeArray_Array) == 0x000158, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_Subtract_IntInt_ReturnValue) == 0x000168, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_Min_ReturnValue) == 0x00016C, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_Min_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000170, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_GetRewardItemNameAndType2_OutName) == 0x000178, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_GetRewardItemNameAndType2_OutName' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_GetRewardItemNameAndType2_OutType) == 0x000190, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_GetRewardItemNameAndType2_OutType' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_GetRewardItemNameAndType2_OutNoName) == 0x0001A8, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_GetRewardItemNameAndType2_OutNoName' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_FindRewardLotteryGroupsMaster_bIsValid) == 0x0001A9, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_FindRewardLotteryGroupsMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_FindRewardLotteryGroupsMaster_RewardLotteryGroupsMaster) == 0x0001B0, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_FindRewardLotteryGroupsMaster_RewardLotteryGroupsMaster' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, K2Node_Select_Default) == 0x0001C8, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001E0, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_FindMasterImagineData_IsExists) == 0x0001E1, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_FindMasterImagineData_IsExists' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_FindMasterImagineData_ReturnValue) == 0x0001E8, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_FindMasterImagineData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_GetRewardItemTypeName_ReturnValue) == 0x000298, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_GetRewardItemTypeName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, K2Node_Select_Default_1) == 0x0002A8, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_Fang_expeditionListItem_C_SetData, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0002B8, "Member 'ProbabilityDisplay_Fang_expeditionListItem_C_SetData::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

}

