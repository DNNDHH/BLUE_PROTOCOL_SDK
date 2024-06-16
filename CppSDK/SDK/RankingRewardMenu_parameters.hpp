#pragma once

 

// Package: RankingRewardMenu

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function RankingRewardMenu.RankingRewardMenu_C.ExecuteUbergraph_RankingRewardMenu
// 0x0028 (0x0028 - 0x0000)
struct RankingRewardMenu_C_ExecuteUbergraph_RankingRewardMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RankingRewardMenu_C_ExecuteUbergraph_RankingRewardMenu) == 0x000008, "Wrong alignment on RankingRewardMenu_C_ExecuteUbergraph_RankingRewardMenu");
static_assert(sizeof(RankingRewardMenu_C_ExecuteUbergraph_RankingRewardMenu) == 0x000028, "Wrong size on RankingRewardMenu_C_ExecuteUbergraph_RankingRewardMenu");
static_assert(offsetof(RankingRewardMenu_C_ExecuteUbergraph_RankingRewardMenu, EntryPoint) == 0x000000, "Member 'RankingRewardMenu_C_ExecuteUbergraph_RankingRewardMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_ExecuteUbergraph_RankingRewardMenu, CallFunc_PlaySE_ReturnValue) == 0x000004, "Member 'RankingRewardMenu_C_ExecuteUbergraph_RankingRewardMenu::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_ExecuteUbergraph_RankingRewardMenu, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'RankingRewardMenu_C_ExecuteUbergraph_RankingRewardMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_ExecuteUbergraph_RankingRewardMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'RankingRewardMenu_C_ExecuteUbergraph_RankingRewardMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_ExecuteUbergraph_RankingRewardMenu, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'RankingRewardMenu_C_ExecuteUbergraph_RankingRewardMenu::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function RankingRewardMenu.RankingRewardMenu_C.SetRankingRewardData
// 0x02A0 (0x02A0 - 0x0000)
struct RankingRewardMenu_C_SetRankingRewardData final
{
public:
	struct FRankingHistoryData                    RankingHistoryData;                                // 0x0000(0x00A8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESBClassType                                  InClassType;                                       // 0x00A8(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsTotallingEnd;                                    // 0x00A9(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8ABC[0x2];                                     // 0x00AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InMyRank;                                          // 0x00AC(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRankingHistoryData                    RankingData;                                       // 0x00B0(0x00A8)(Edit, BlueprintVisible)
	bool                                          TotallingEnd;                                      // 0x0158(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8ABD[0x3];                                     // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MyRank;                                            // 0x015C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRankingRewardData>             MasterDataList;                                    // 0x0160(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8ABE[0x4];                                     // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8ABF[0x2];                                     // 0x018A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AC0[0x3];                                     // 0x0191(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8AC1[0x4];                                     // 0x019C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_GetEventTermEndTime_OutEndTime;           // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEventTermEndTime_ReturnValue;          // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AC2[0x7];                                     // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01B0(0x0018)()
	ESBDateTimeTextRemainTimeFlag                 CallFunc_SetDateTime_ReturnValue;                  // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8AC3[0x3];                                     // 0x01C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x01D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x01F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8AC4[0x4];                                     // 0x0204(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0208(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0218(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0228(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class URankingRewardItem_C*                   CallFunc_TryGetItem_RankingRewardItem;             // 0x0238(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AC5[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRankingRewardData                     CallFunc_Array_Get_Item;                           // 0x0248(0x0030)()
	int32                                         K2Node_Select_Default;                             // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x027C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x027D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AC6[0x2];                                     // 0x027E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0284(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0285(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_1;                           // 0x0286(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0287(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRankingRewardData>             CallFunc_FindRankingRewardDataList_ReturnValue;    // 0x0290(0x0010)(ConstParm, ReferenceParm)
};
static_assert(alignof(RankingRewardMenu_C_SetRankingRewardData) == 0x000008, "Wrong alignment on RankingRewardMenu_C_SetRankingRewardData");
static_assert(sizeof(RankingRewardMenu_C_SetRankingRewardData) == 0x0002A0, "Wrong size on RankingRewardMenu_C_SetRankingRewardData");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, RankingHistoryData) == 0x000000, "Member 'RankingRewardMenu_C_SetRankingRewardData::RankingHistoryData' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, InClassType) == 0x0000A8, "Member 'RankingRewardMenu_C_SetRankingRewardData::InClassType' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, IsTotallingEnd) == 0x0000A9, "Member 'RankingRewardMenu_C_SetRankingRewardData::IsTotallingEnd' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, InMyRank) == 0x0000AC, "Member 'RankingRewardMenu_C_SetRankingRewardData::InMyRank' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, RankingData) == 0x0000B0, "Member 'RankingRewardMenu_C_SetRankingRewardData::RankingData' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, TotallingEnd) == 0x000158, "Member 'RankingRewardMenu_C_SetRankingRewardData::TotallingEnd' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, MyRank) == 0x00015C, "Member 'RankingRewardMenu_C_SetRankingRewardData::MyRank' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, MasterDataList) == 0x000160, "Member 'RankingRewardMenu_C_SetRankingRewardData::MasterDataList' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, Temp_int_Variable) == 0x000170, "Member 'RankingRewardMenu_C_SetRankingRewardData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000178, "Member 'RankingRewardMenu_C_SetRankingRewardData::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, Temp_bool_Variable) == 0x000188, "Member 'RankingRewardMenu_C_SetRankingRewardData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, Temp_bool_Variable_1) == 0x000189, "Member 'RankingRewardMenu_C_SetRankingRewardData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, CallFunc_Array_Length_ReturnValue) == 0x00018C, "Member 'RankingRewardMenu_C_SetRankingRewardData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, CallFunc_Greater_IntInt_ReturnValue) == 0x000190, "Member 'RankingRewardMenu_C_SetRankingRewardData::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, Temp_int_Array_Index_Variable) == 0x000194, "Member 'RankingRewardMenu_C_SetRankingRewardData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, Temp_int_Variable_1) == 0x000198, "Member 'RankingRewardMenu_C_SetRankingRewardData::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, CallFunc_GetEventTermEndTime_OutEndTime) == 0x0001A0, "Member 'RankingRewardMenu_C_SetRankingRewardData::CallFunc_GetEventTermEndTime_OutEndTime' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, CallFunc_GetEventTermEndTime_ReturnValue) == 0x0001A8, "Member 'RankingRewardMenu_C_SetRankingRewardData::CallFunc_GetEventTermEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, CallFunc_Conv_StringToText_ReturnValue) == 0x0001B0, "Member 'RankingRewardMenu_C_SetRankingRewardData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, CallFunc_SetDateTime_ReturnValue) == 0x0001C8, "Member 'RankingRewardMenu_C_SetRankingRewardData::CallFunc_SetDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, Temp_int_Loop_Counter_Variable) == 0x0001CC, "Member 'RankingRewardMenu_C_SetRankingRewardData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, CallFunc_Conv_StringToName_ReturnValue) == 0x0001D0, "Member 'RankingRewardMenu_C_SetRankingRewardData::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, CallFunc_Concat_StrStr_ReturnValue) == 0x0001D8, "Member 'RankingRewardMenu_C_SetRankingRewardData::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, CallFunc_Conv_StringToName_ReturnValue_1) == 0x0001E8, "Member 'RankingRewardMenu_C_SetRankingRewardData::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0001F0, "Member 'RankingRewardMenu_C_SetRankingRewardData::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, CallFunc_Add_IntInt_ReturnValue) == 0x000200, "Member 'RankingRewardMenu_C_SetRankingRewardData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000208, "Member 'RankingRewardMenu_C_SetRankingRewardData::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, CallFunc_Concat_StrStr_ReturnValue_3) == 0x000218, "Member 'RankingRewardMenu_C_SetRankingRewardData::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, CallFunc_Concat_StrStr_ReturnValue_4) == 0x000228, "Member 'RankingRewardMenu_C_SetRankingRewardData::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, CallFunc_TryGetItem_RankingRewardItem) == 0x000238, "Member 'RankingRewardMenu_C_SetRankingRewardData::CallFunc_TryGetItem_RankingRewardItem' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, Temp_bool_Variable_2) == 0x000240, "Member 'RankingRewardMenu_C_SetRankingRewardData::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, CallFunc_Array_Get_Item) == 0x000248, "Member 'RankingRewardMenu_C_SetRankingRewardData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, K2Node_Select_Default) == 0x000278, "Member 'RankingRewardMenu_C_SetRankingRewardData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00027C, "Member 'RankingRewardMenu_C_SetRankingRewardData::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00027D, "Member 'RankingRewardMenu_C_SetRankingRewardData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, CallFunc_Array_Length_ReturnValue_1) == 0x000280, "Member 'RankingRewardMenu_C_SetRankingRewardData::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, CallFunc_BooleanAND_ReturnValue) == 0x000284, "Member 'RankingRewardMenu_C_SetRankingRewardData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, CallFunc_Less_IntInt_ReturnValue) == 0x000285, "Member 'RankingRewardMenu_C_SetRankingRewardData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, K2Node_Select_Default_1) == 0x000286, "Member 'RankingRewardMenu_C_SetRankingRewardData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, CallFunc_GetMasterDataManager_IsValid) == 0x000287, "Member 'RankingRewardMenu_C_SetRankingRewardData::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, CallFunc_GetMasterDataManager_ReturnValue) == 0x000288, "Member 'RankingRewardMenu_C_SetRankingRewardData::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_SetRankingRewardData, CallFunc_FindRankingRewardDataList_ReturnValue) == 0x000290, "Member 'RankingRewardMenu_C_SetRankingRewardData::CallFunc_FindRankingRewardDataList_ReturnValue' has a wrong offset!");

// Function RankingRewardMenu.RankingRewardMenu_C.ListInitialize
// 0x0020 (0x0020 - 0x0000)
struct RankingRewardMenu_C_ListInitialize final
{
public:
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8AC7[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8AC8[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RankingRewardMenu_C_ListInitialize) == 0x000008, "Wrong alignment on RankingRewardMenu_C_ListInitialize");
static_assert(sizeof(RankingRewardMenu_C_ListInitialize) == 0x000020, "Wrong size on RankingRewardMenu_C_ListInitialize");
static_assert(offsetof(RankingRewardMenu_C_ListInitialize, CallFunc_GetChildrenCount_ReturnValue) == 0x000000, "Member 'RankingRewardMenu_C_ListInitialize::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_ListInitialize, Temp_int_Variable) == 0x000004, "Member 'RankingRewardMenu_C_ListInitialize::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_ListInitialize, CallFunc_Subtract_IntInt_ReturnValue) == 0x000008, "Member 'RankingRewardMenu_C_ListInitialize::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_ListInitialize, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'RankingRewardMenu_C_ListInitialize::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_ListInitialize, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000018, "Member 'RankingRewardMenu_C_ListInitialize::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_ListInitialize, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'RankingRewardMenu_C_ListInitialize::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function RankingRewardMenu.RankingRewardMenu_C.TryGetItem
// 0x0058 (0x0058 - 0x0000)
struct RankingRewardMenu_C_TryGetItem final
{
public:
	class URankingRewardItem_C*                   Param_RankingRewardItem;                           // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URankingRewardItem_C*                   Item;                                              // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URankingRewardItem_C*                   CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8AC9[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8ACA[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URankingRewardItem_C*                   K2Node_DynamicCast_AsRanking_Reward_Item;          // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RankingRewardMenu_C_TryGetItem) == 0x000008, "Wrong alignment on RankingRewardMenu_C_TryGetItem");
static_assert(sizeof(RankingRewardMenu_C_TryGetItem) == 0x000058, "Wrong size on RankingRewardMenu_C_TryGetItem");
static_assert(offsetof(RankingRewardMenu_C_TryGetItem, Param_RankingRewardItem) == 0x000000, "Member 'RankingRewardMenu_C_TryGetItem::Param_RankingRewardItem' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_TryGetItem, Item) == 0x000008, "Member 'RankingRewardMenu_C_TryGetItem::Item' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_TryGetItem, Temp_int_Variable) == 0x000010, "Member 'RankingRewardMenu_C_TryGetItem::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_TryGetItem, Temp_int_Variable_1) == 0x000014, "Member 'RankingRewardMenu_C_TryGetItem::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_TryGetItem, CallFunc_GetChildrenCount_ReturnValue) == 0x000018, "Member 'RankingRewardMenu_C_TryGetItem::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_TryGetItem, CallFunc_Subtract_IntInt_ReturnValue) == 0x00001C, "Member 'RankingRewardMenu_C_TryGetItem::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_TryGetItem, CallFunc_Create_ReturnValue) == 0x000020, "Member 'RankingRewardMenu_C_TryGetItem::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_TryGetItem, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'RankingRewardMenu_C_TryGetItem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_TryGetItem, CallFunc_AddChild_ReturnValue) == 0x000030, "Member 'RankingRewardMenu_C_TryGetItem::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_TryGetItem, CallFunc_Greater_IntInt_ReturnValue) == 0x000038, "Member 'RankingRewardMenu_C_TryGetItem::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_TryGetItem, CallFunc_Add_IntInt_ReturnValue_1) == 0x00003C, "Member 'RankingRewardMenu_C_TryGetItem::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_TryGetItem, CallFunc_GetChildAt_ReturnValue) == 0x000040, "Member 'RankingRewardMenu_C_TryGetItem::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_TryGetItem, K2Node_DynamicCast_AsRanking_Reward_Item) == 0x000048, "Member 'RankingRewardMenu_C_TryGetItem::K2Node_DynamicCast_AsRanking_Reward_Item' has a wrong offset!");
static_assert(offsetof(RankingRewardMenu_C_TryGetItem, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'RankingRewardMenu_C_TryGetItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

