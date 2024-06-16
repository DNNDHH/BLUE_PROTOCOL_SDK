#pragma once

 

// Package: GuildEntryItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function GuildEntryItem.GuildEntryItem_C.OnClicked_GuildEntry__DelegateSignature
// 0x00E8 (0x00E8 - 0x0000)
struct GuildEntryItem_C_OnClicked_GuildEntry__DelegateSignature final
{
public:
	struct FGuildEntryData                        GuildEntry;                                        // 0x0000(0x00E0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UGuildEntryItem_C*                      SelectedBtn;                                       // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildEntryItem_C_OnClicked_GuildEntry__DelegateSignature) == 0x000008, "Wrong alignment on GuildEntryItem_C_OnClicked_GuildEntry__DelegateSignature");
static_assert(sizeof(GuildEntryItem_C_OnClicked_GuildEntry__DelegateSignature) == 0x0000E8, "Wrong size on GuildEntryItem_C_OnClicked_GuildEntry__DelegateSignature");
static_assert(offsetof(GuildEntryItem_C_OnClicked_GuildEntry__DelegateSignature, GuildEntry) == 0x000000, "Member 'GuildEntryItem_C_OnClicked_GuildEntry__DelegateSignature::GuildEntry' has a wrong offset!");
static_assert(offsetof(GuildEntryItem_C_OnClicked_GuildEntry__DelegateSignature, SelectedBtn) == 0x0000E0, "Member 'GuildEntryItem_C_OnClicked_GuildEntry__DelegateSignature::SelectedBtn' has a wrong offset!");

// Function GuildEntryItem.GuildEntryItem_C.ExecuteUbergraph_GuildEntryItem
// 0x0108 (0x0108 - 0x0000)
struct GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckXboxPrivacyTypePure_IsUGC;           // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyTypePure_IsRestrict;      // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AE8[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0008(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6AE9[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRestrictText_ReturnValue_1;            // 0x0028(0x0018)()
	class FText                                   CallFunc_GetRestrictText_ReturnValue_2;            // 0x0040(0x0018)()
	bool                                          Temp_bool_Variable_2;                              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AEA[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0060(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0078(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0090(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x00A8(0x0018)()
	bool                                          CallFunc_CheckXboxPrivacyTypePure_IsUGC_1;         // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyTypePure_IsRestrict_1;    // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyTypePure_IsUGC_2;         // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyTypePure_IsRestrict_2;    // 0x00C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6AEB[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_1;                           // 0x00C8(0x0018)()
	class FText                                   K2Node_Select_Default_2;                           // 0x00E0(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem) == 0x000008, "Wrong alignment on GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem");
static_assert(sizeof(GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem) == 0x000108, "Wrong size on GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem");
static_assert(offsetof(GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem, EntryPoint) == 0x000000, "Member 'GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem, CallFunc_CheckXboxPrivacyTypePure_IsUGC) == 0x000005, "Member 'GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem::CallFunc_CheckXboxPrivacyTypePure_IsUGC' has a wrong offset!");
static_assert(offsetof(GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem, CallFunc_CheckXboxPrivacyTypePure_IsRestrict) == 0x000006, "Member 'GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem::CallFunc_CheckXboxPrivacyTypePure_IsRestrict' has a wrong offset!");
static_assert(offsetof(GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem, CallFunc_GetRestrictText_ReturnValue) == 0x000008, "Member 'GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem, Temp_bool_Variable) == 0x000020, "Member 'GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem, Temp_bool_Variable_1) == 0x000021, "Member 'GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000022, "Member 'GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000023, "Member 'GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem, CallFunc_GetRestrictText_ReturnValue_1) == 0x000028, "Member 'GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem::CallFunc_GetRestrictText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem, CallFunc_GetRestrictText_ReturnValue_2) == 0x000040, "Member 'GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem::CallFunc_GetRestrictText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem, Temp_bool_Variable_2) == 0x000058, "Member 'GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem, CallFunc_Conv_StringToText_ReturnValue) == 0x000060, "Member 'GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000078, "Member 'GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem, K2Node_Select_Default) == 0x000090, "Member 'GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0000A8, "Member 'GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem, CallFunc_CheckXboxPrivacyTypePure_IsUGC_1) == 0x0000C0, "Member 'GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem::CallFunc_CheckXboxPrivacyTypePure_IsUGC_1' has a wrong offset!");
static_assert(offsetof(GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem, CallFunc_CheckXboxPrivacyTypePure_IsRestrict_1) == 0x0000C1, "Member 'GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem::CallFunc_CheckXboxPrivacyTypePure_IsRestrict_1' has a wrong offset!");
static_assert(offsetof(GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem, CallFunc_CheckXboxPrivacyTypePure_IsUGC_2) == 0x0000C2, "Member 'GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem::CallFunc_CheckXboxPrivacyTypePure_IsUGC_2' has a wrong offset!");
static_assert(offsetof(GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem, CallFunc_CheckXboxPrivacyTypePure_IsRestrict_2) == 0x0000C3, "Member 'GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem::CallFunc_CheckXboxPrivacyTypePure_IsRestrict_2' has a wrong offset!");
static_assert(offsetof(GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem, K2Node_Select_Default_1) == 0x0000C8, "Member 'GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem, K2Node_Select_Default_2) == 0x0000E0, "Member 'GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem, CallFunc_Conv_TextToString_ReturnValue) == 0x0000F8, "Member 'GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

}

