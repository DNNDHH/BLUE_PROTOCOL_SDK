#pragma once

 

// Package: RankingMenu_List

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function RankingMenu_List.RankingMenu_List_C.Set Solo Ranking List
// 0x00B0 (0x00B0 - 0x0000)
struct RankingMenu_List_C_Set_Solo_Ranking_List final
{
public:
	TArray<struct FRankingData>                   InRankingList;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESBClassType                                  InClassType;                                       // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9088[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InLastIndex;                                       // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsTimeAttack;                                    // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Active;                                            // 0x0019(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsActive;                                          // 0x001A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9089[0x1];                                     // 0x001B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         NewLocalVar_0;                                     // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LastIndex;                                         // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_908A[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue_1;            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_908B[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_908C[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISBOnlinePlayerState>  K2Node_DynamicCast_AsSBOnline_Player_State;        // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_908D[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_908E[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue_2;            // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URankingMenu_Player_C*                  CallFunc_Create_ReturnValue;                       // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_908F[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x009E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9090[0x1];                                     // 0x009F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9091[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RankingMenu_List_C_Set_Solo_Ranking_List) == 0x000008, "Wrong alignment on RankingMenu_List_C_Set_Solo_Ranking_List");
static_assert(sizeof(RankingMenu_List_C_Set_Solo_Ranking_List) == 0x0000B0, "Wrong size on RankingMenu_List_C_Set_Solo_Ranking_List");
static_assert(offsetof(RankingMenu_List_C_Set_Solo_Ranking_List, InRankingList) == 0x000000, "Member 'RankingMenu_List_C_Set_Solo_Ranking_List::InRankingList' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_Set_Solo_Ranking_List, InClassType) == 0x000010, "Member 'RankingMenu_List_C_Set_Solo_Ranking_List::InClassType' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_Set_Solo_Ranking_List, InLastIndex) == 0x000014, "Member 'RankingMenu_List_C_Set_Solo_Ranking_List::InLastIndex' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_Set_Solo_Ranking_List, InIsTimeAttack) == 0x000018, "Member 'RankingMenu_List_C_Set_Solo_Ranking_List::InIsTimeAttack' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_Set_Solo_Ranking_List, Active) == 0x000019, "Member 'RankingMenu_List_C_Set_Solo_Ranking_List::Active' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_Set_Solo_Ranking_List, IsActive) == 0x00001A, "Member 'RankingMenu_List_C_Set_Solo_Ranking_List::IsActive' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_Set_Solo_Ranking_List, NewLocalVar_0) == 0x00001C, "Member 'RankingMenu_List_C_Set_Solo_Ranking_List::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_Set_Solo_Ranking_List, LastIndex) == 0x000020, "Member 'RankingMenu_List_C_Set_Solo_Ranking_List::LastIndex' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_Set_Solo_Ranking_List, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000024, "Member 'RankingMenu_List_C_Set_Solo_Ranking_List::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_Set_Solo_Ranking_List, CallFunc_Array_LastIndex_ReturnValue) == 0x000028, "Member 'RankingMenu_List_C_Set_Solo_Ranking_List::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_Set_Solo_Ranking_List, Temp_int_Variable) == 0x00002C, "Member 'RankingMenu_List_C_Set_Solo_Ranking_List::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_Set_Solo_Ranking_List, CallFunc_Array_LastIndex_ReturnValue_1) == 0x000030, "Member 'RankingMenu_List_C_Set_Solo_Ranking_List::CallFunc_Array_LastIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_Set_Solo_Ranking_List, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000034, "Member 'RankingMenu_List_C_Set_Solo_Ranking_List::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_Set_Solo_Ranking_List, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'RankingMenu_List_C_Set_Solo_Ranking_List::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_Set_Solo_Ranking_List, Temp_string_Variable) == 0x000040, "Member 'RankingMenu_List_C_Set_Solo_Ranking_List::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_Set_Solo_Ranking_List, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000050, "Member 'RankingMenu_List_C_Set_Solo_Ranking_List::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_Set_Solo_Ranking_List, K2Node_DynamicCast_AsSBOnline_Player_State) == 0x000058, "Member 'RankingMenu_List_C_Set_Solo_Ranking_List::K2Node_DynamicCast_AsSBOnline_Player_State' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_Set_Solo_Ranking_List, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'RankingMenu_List_C_Set_Solo_Ranking_List::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_Set_Solo_Ranking_List, CallFunc_GetCharacterId_ReturnValue) == 0x000070, "Member 'RankingMenu_List_C_Set_Solo_Ranking_List::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_Set_Solo_Ranking_List, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000080, "Member 'RankingMenu_List_C_Set_Solo_Ranking_List::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_Set_Solo_Ranking_List, CallFunc_Array_LastIndex_ReturnValue_2) == 0x000084, "Member 'RankingMenu_List_C_Set_Solo_Ranking_List::CallFunc_Array_LastIndex_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_Set_Solo_Ranking_List, CallFunc_Create_ReturnValue) == 0x000088, "Member 'RankingMenu_List_C_Set_Solo_Ranking_List::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_Set_Solo_Ranking_List, CallFunc_Less_IntInt_ReturnValue) == 0x000090, "Member 'RankingMenu_List_C_Set_Solo_Ranking_List::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_Set_Solo_Ranking_List, Temp_int_Variable_1) == 0x000094, "Member 'RankingMenu_List_C_Set_Solo_Ranking_List::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_Set_Solo_Ranking_List, CallFunc_Array_Add_ReturnValue) == 0x000098, "Member 'RankingMenu_List_C_Set_Solo_Ranking_List::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_Set_Solo_Ranking_List, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x00009C, "Member 'RankingMenu_List_C_Set_Solo_Ranking_List::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_Set_Solo_Ranking_List, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00009D, "Member 'RankingMenu_List_C_Set_Solo_Ranking_List::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_Set_Solo_Ranking_List, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x00009E, "Member 'RankingMenu_List_C_Set_Solo_Ranking_List::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_Set_Solo_Ranking_List, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000A0, "Member 'RankingMenu_List_C_Set_Solo_Ranking_List::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_Set_Solo_Ranking_List, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x0000A8, "Member 'RankingMenu_List_C_Set_Solo_Ranking_List::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");

// Function RankingMenu_List.RankingMenu_List_C.ChangePageSoloRankingList
// 0x0048 (0x0048 - 0x0000)
struct RankingMenu_List_C_ChangePageSoloRankingList final
{
public:
	int32                                         TopIndex;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxNum;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  ClassType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9092[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LastIndex;                                         // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9093[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9094[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class URankingMenu_Player_C*                  CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9095[0x2];                                     // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RankingMenu_List_C_ChangePageSoloRankingList) == 0x000008, "Wrong alignment on RankingMenu_List_C_ChangePageSoloRankingList");
static_assert(sizeof(RankingMenu_List_C_ChangePageSoloRankingList) == 0x000048, "Wrong size on RankingMenu_List_C_ChangePageSoloRankingList");
static_assert(offsetof(RankingMenu_List_C_ChangePageSoloRankingList, TopIndex) == 0x000000, "Member 'RankingMenu_List_C_ChangePageSoloRankingList::TopIndex' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_ChangePageSoloRankingList, MaxNum) == 0x000004, "Member 'RankingMenu_List_C_ChangePageSoloRankingList::MaxNum' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_ChangePageSoloRankingList, ClassType) == 0x000008, "Member 'RankingMenu_List_C_ChangePageSoloRankingList::ClassType' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_ChangePageSoloRankingList, LastIndex) == 0x00000C, "Member 'RankingMenu_List_C_ChangePageSoloRankingList::LastIndex' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_ChangePageSoloRankingList, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000010, "Member 'RankingMenu_List_C_ChangePageSoloRankingList::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_ChangePageSoloRankingList, CallFunc_Subtract_IntInt_ReturnValue) == 0x000014, "Member 'RankingMenu_List_C_ChangePageSoloRankingList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_ChangePageSoloRankingList, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'RankingMenu_List_C_ChangePageSoloRankingList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_ChangePageSoloRankingList, CallFunc_Create_ReturnValue) == 0x000020, "Member 'RankingMenu_List_C_ChangePageSoloRankingList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_ChangePageSoloRankingList, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000028, "Member 'RankingMenu_List_C_ChangePageSoloRankingList::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_ChangePageSoloRankingList, Temp_int_Variable) == 0x000030, "Member 'RankingMenu_List_C_ChangePageSoloRankingList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_ChangePageSoloRankingList, CallFunc_Add_IntInt_ReturnValue_1) == 0x000034, "Member 'RankingMenu_List_C_ChangePageSoloRankingList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_ChangePageSoloRankingList, CallFunc_Array_LastIndex_ReturnValue) == 0x000038, "Member 'RankingMenu_List_C_ChangePageSoloRankingList::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_ChangePageSoloRankingList, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00003C, "Member 'RankingMenu_List_C_ChangePageSoloRankingList::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_ChangePageSoloRankingList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00003D, "Member 'RankingMenu_List_C_ChangePageSoloRankingList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RankingMenu_List_C_ChangePageSoloRankingList, CallFunc_Add_IntInt_ReturnValue_2) == 0x000040, "Member 'RankingMenu_List_C_ChangePageSoloRankingList::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");

}

