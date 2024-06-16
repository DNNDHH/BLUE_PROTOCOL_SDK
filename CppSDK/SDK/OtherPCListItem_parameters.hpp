#pragma once

 

// Package: OtherPCListItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function OtherPCListItem.OtherPCListItem_C.OnClick__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct OtherPCListItem_C_OnClick__DelegateSignature final
{
public:
	int32                                         ListIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OtherPCListItem_C_OnClick__DelegateSignature) == 0x000004, "Wrong alignment on OtherPCListItem_C_OnClick__DelegateSignature");
static_assert(sizeof(OtherPCListItem_C_OnClick__DelegateSignature) == 0x000004, "Wrong size on OtherPCListItem_C_OnClick__DelegateSignature");
static_assert(offsetof(OtherPCListItem_C_OnClick__DelegateSignature, ListIndex) == 0x000000, "Member 'OtherPCListItem_C_OnClick__DelegateSignature::ListIndex' has a wrong offset!");

// Function OtherPCListItem.OtherPCListItem_C.ExecuteUbergraph_OtherPCListItem
// 0x0058 (0x0058 - 0x0000)
struct OtherPCListItem_C_ExecuteUbergraph_OtherPCListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C4D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
};
static_assert(alignof(OtherPCListItem_C_ExecuteUbergraph_OtherPCListItem) == 0x000008, "Wrong alignment on OtherPCListItem_C_ExecuteUbergraph_OtherPCListItem");
static_assert(sizeof(OtherPCListItem_C_ExecuteUbergraph_OtherPCListItem) == 0x000058, "Wrong size on OtherPCListItem_C_ExecuteUbergraph_OtherPCListItem");
static_assert(offsetof(OtherPCListItem_C_ExecuteUbergraph_OtherPCListItem, EntryPoint) == 0x000000, "Member 'OtherPCListItem_C_ExecuteUbergraph_OtherPCListItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(OtherPCListItem_C_ExecuteUbergraph_OtherPCListItem, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'OtherPCListItem_C_ExecuteUbergraph_OtherPCListItem::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(OtherPCListItem_C_ExecuteUbergraph_OtherPCListItem, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'OtherPCListItem_C_ExecuteUbergraph_OtherPCListItem::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function OtherPCListItem.OtherPCListItem_C.Set Info
// 0x00B8 (0x00B8 - 0x0000)
struct OtherPCListItem_C_Set_Info final
{
public:
	class FString                                 Param_Name;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESBTensionTagType                             TensionTag;                                        // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C4E[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         OtherPlayerState;                                  // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBPlatformInfo                        CallFunc_GetPlatformInfo_ReturnValue;              // 0x0048(0x0020)()
	class FString                                 CallFunc_GetCharacterId_ReturnValue_1;             // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckXboxPrivacyTypePure_IsUGC;           // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckXboxPrivacyTypePure_IsRestrict;      // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C4F[0x2];                                     // 0x007A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x007C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C50[0x2];                                     // 0x0086(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetRestrictText_ReturnValue;              // 0x0088(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x00A0(0x0018)()
};
static_assert(alignof(OtherPCListItem_C_Set_Info) == 0x000008, "Wrong alignment on OtherPCListItem_C_Set_Info");
static_assert(sizeof(OtherPCListItem_C_Set_Info) == 0x0000B8, "Wrong size on OtherPCListItem_C_Set_Info");
static_assert(offsetof(OtherPCListItem_C_Set_Info, Param_Name) == 0x000000, "Member 'OtherPCListItem_C_Set_Info::Param_Name' has a wrong offset!");
static_assert(offsetof(OtherPCListItem_C_Set_Info, TensionTag) == 0x000010, "Member 'OtherPCListItem_C_Set_Info::TensionTag' has a wrong offset!");
static_assert(offsetof(OtherPCListItem_C_Set_Info, OtherPlayerState) == 0x000018, "Member 'OtherPCListItem_C_Set_Info::OtherPlayerState' has a wrong offset!");
static_assert(offsetof(OtherPCListItem_C_Set_Info, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'OtherPCListItem_C_Set_Info::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListItem_C_Set_Info, CallFunc_GetCharacterId_ReturnValue) == 0x000038, "Member 'OtherPCListItem_C_Set_Info::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListItem_C_Set_Info, CallFunc_GetPlatformInfo_ReturnValue) == 0x000048, "Member 'OtherPCListItem_C_Set_Info::CallFunc_GetPlatformInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListItem_C_Set_Info, CallFunc_GetCharacterId_ReturnValue_1) == 0x000068, "Member 'OtherPCListItem_C_Set_Info::CallFunc_GetCharacterId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OtherPCListItem_C_Set_Info, CallFunc_CheckXboxPrivacyTypePure_IsUGC) == 0x000078, "Member 'OtherPCListItem_C_Set_Info::CallFunc_CheckXboxPrivacyTypePure_IsUGC' has a wrong offset!");
static_assert(offsetof(OtherPCListItem_C_Set_Info, CallFunc_CheckXboxPrivacyTypePure_IsRestrict) == 0x000079, "Member 'OtherPCListItem_C_Set_Info::CallFunc_CheckXboxPrivacyTypePure_IsRestrict' has a wrong offset!");
static_assert(offsetof(OtherPCListItem_C_Set_Info, CallFunc_Conv_StringToName_ReturnValue) == 0x00007C, "Member 'OtherPCListItem_C_Set_Info::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListItem_C_Set_Info, CallFunc_MakeLiteralByte_ReturnValue) == 0x000084, "Member 'OtherPCListItem_C_Set_Info::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListItem_C_Set_Info, Temp_bool_Variable) == 0x000085, "Member 'OtherPCListItem_C_Set_Info::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(OtherPCListItem_C_Set_Info, CallFunc_GetRestrictText_ReturnValue) == 0x000088, "Member 'OtherPCListItem_C_Set_Info::CallFunc_GetRestrictText_ReturnValue' has a wrong offset!");
static_assert(offsetof(OtherPCListItem_C_Set_Info, K2Node_Select_Default) == 0x0000A0, "Member 'OtherPCListItem_C_Set_Info::K2Node_Select_Default' has a wrong offset!");

// Function OtherPCListItem.OtherPCListItem_C.SetEnable
// 0x0001 (0x0001 - 0x0000)
struct OtherPCListItem_C_SetEnable final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OtherPCListItem_C_SetEnable) == 0x000001, "Wrong alignment on OtherPCListItem_C_SetEnable");
static_assert(sizeof(OtherPCListItem_C_SetEnable) == 0x000001, "Wrong size on OtherPCListItem_C_SetEnable");
static_assert(offsetof(OtherPCListItem_C_SetEnable, bEnable) == 0x000000, "Member 'OtherPCListItem_C_SetEnable::bEnable' has a wrong offset!");

// Function OtherPCListItem.OtherPCListItem_C.GetPlayerState
// 0x0008 (0x0008 - 0x0000)
struct OtherPCListItem_C_GetPlayerState final
{
public:
	class ASBPlayerState*                         OutPlayerState;                                    // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OtherPCListItem_C_GetPlayerState) == 0x000008, "Wrong alignment on OtherPCListItem_C_GetPlayerState");
static_assert(sizeof(OtherPCListItem_C_GetPlayerState) == 0x000008, "Wrong size on OtherPCListItem_C_GetPlayerState");
static_assert(offsetof(OtherPCListItem_C_GetPlayerState, OutPlayerState) == 0x000000, "Member 'OtherPCListItem_C_GetPlayerState::OutPlayerState' has a wrong offset!");

}

