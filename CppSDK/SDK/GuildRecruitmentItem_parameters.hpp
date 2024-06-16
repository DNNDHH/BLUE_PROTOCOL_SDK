#pragma once

 

// Package: GuildRecruitmentItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function GuildRecruitmentItem.GuildRecruitmentItem_C.OnClicked_GuildEntry__DelegateSignature
// 0x00E0 (0x00E0 - 0x0000)
struct GuildRecruitmentItem_C_OnClicked_GuildEntry__DelegateSignature final
{
public:
	struct FGuildEntryData                        GuildEntry;                                        // 0x0000(0x00E0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GuildRecruitmentItem_C_OnClicked_GuildEntry__DelegateSignature) == 0x000008, "Wrong alignment on GuildRecruitmentItem_C_OnClicked_GuildEntry__DelegateSignature");
static_assert(sizeof(GuildRecruitmentItem_C_OnClicked_GuildEntry__DelegateSignature) == 0x0000E0, "Wrong size on GuildRecruitmentItem_C_OnClicked_GuildEntry__DelegateSignature");
static_assert(offsetof(GuildRecruitmentItem_C_OnClicked_GuildEntry__DelegateSignature, GuildEntry) == 0x000000, "Member 'GuildRecruitmentItem_C_OnClicked_GuildEntry__DelegateSignature::GuildEntry' has a wrong offset!");

// Function GuildRecruitmentItem.GuildRecruitmentItem_C.ExecuteUbergraph_GuildRecruitmentItem
// 0x0100 (0x0100 - 0x0000)
struct GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0008(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8EC5[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRestrictText_ReturnValue_1;            // 0x0028(0x0018)()
	class FText                                   CallFunc_GetRestrictText_ReturnValue_2;            // 0x0040(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0058(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0070(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0088(0x0018)()
	bool                                          CallFunc_CheckXboxPrivacyType_IsUGC;               // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyType_IsRestrict;          // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyTypePure_IsUGC;           // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyTypePure_IsRestrict;      // 0x00A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EC6[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x00A8(0x0018)()
	class FText                                   K2Node_Select_Default_1;                           // 0x00C0(0x0018)()
	class FText                                   K2Node_Select_Default_2;                           // 0x00D8(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem) == 0x000008, "Wrong alignment on GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem");
static_assert(sizeof(GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem) == 0x000100, "Wrong size on GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem");
static_assert(offsetof(GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem, EntryPoint) == 0x000000, "Member 'GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem, Temp_bool_Variable) == 0x000004, "Member 'GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem, CallFunc_MakeLiteralByte_ReturnValue) == 0x000005, "Member 'GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem, Temp_bool_Variable_1) == 0x000006, "Member 'GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem, Temp_bool_Variable_2) == 0x000007, "Member 'GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem, CallFunc_GetRestrictText_ReturnValue) == 0x000008, "Member 'GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000020, "Member 'GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000021, "Member 'GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem, CallFunc_GetRestrictText_ReturnValue_1) == 0x000028, "Member 'GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem::CallFunc_GetRestrictText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem, CallFunc_GetRestrictText_ReturnValue_2) == 0x000040, "Member 'GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem::CallFunc_GetRestrictText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem, CallFunc_Conv_StringToText_ReturnValue) == 0x000058, "Member 'GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000070, "Member 'GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000088, "Member 'GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem, CallFunc_CheckXboxPrivacyType_IsUGC) == 0x0000A0, "Member 'GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem::CallFunc_CheckXboxPrivacyType_IsUGC' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem, CallFunc_CheckXboxPrivacyType_IsRestrict) == 0x0000A1, "Member 'GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem::CallFunc_CheckXboxPrivacyType_IsRestrict' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem, CallFunc_CheckXboxPrivacyTypePure_IsUGC) == 0x0000A2, "Member 'GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem::CallFunc_CheckXboxPrivacyTypePure_IsUGC' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem, CallFunc_CheckXboxPrivacyTypePure_IsRestrict) == 0x0000A3, "Member 'GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem::CallFunc_CheckXboxPrivacyTypePure_IsRestrict' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem, K2Node_Select_Default) == 0x0000A8, "Member 'GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem, K2Node_Select_Default_1) == 0x0000C0, "Member 'GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem, K2Node_Select_Default_2) == 0x0000D8, "Member 'GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem, CallFunc_Conv_TextToString_ReturnValue) == 0x0000F0, "Member 'GuildRecruitmentItem_C_ExecuteUbergraph_GuildRecruitmentItem::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

}

