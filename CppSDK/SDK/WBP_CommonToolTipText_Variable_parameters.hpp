#pragma once

 

// Package: WBP_CommonToolTipText_Variable

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.ExecuteUbergraph_WBP_CommonToolTipText_Variable
// 0x0068 (0x0068 - 0x0000)
struct WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C94[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_InText;                         // 0x0008(0x0018)()
	class FText                                   K2Node_CustomEvent_Text;                           // 0x0020(0x0018)()
	struct FDateTime                              K2Node_CustomEvent_DateTime;                       // 0x0038(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bHideIfMinValue;                // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C95[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_DateTimeMinValue_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DateTimeDateTime_ReturnValue;  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C96[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              K2Node_CustomEvent_InDateTime;                     // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable) == 0x000008, "Wrong alignment on WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable");
static_assert(sizeof(WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable) == 0x000068, "Wrong size on WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable, EntryPoint) == 0x000000, "Member 'WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000005, "Member 'WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable, Temp_bool_Variable) == 0x000006, "Member 'WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable, K2Node_CustomEvent_InText) == 0x000008, "Member 'WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable::K2Node_CustomEvent_InText' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable, K2Node_CustomEvent_Text) == 0x000020, "Member 'WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable::K2Node_CustomEvent_Text' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable, K2Node_CustomEvent_DateTime) == 0x000038, "Member 'WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable::K2Node_CustomEvent_DateTime' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable, K2Node_CustomEvent_bHideIfMinValue) == 0x000040, "Member 'WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable::K2Node_CustomEvent_bHideIfMinValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable, CallFunc_DateTimeMinValue_ReturnValue) == 0x000048, "Member 'WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable::CallFunc_DateTimeMinValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable, CallFunc_EqualEqual_DateTimeDateTime_ReturnValue) == 0x000050, "Member 'WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable::CallFunc_EqualEqual_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable, K2Node_CustomEvent_InDateTime) == 0x000058, "Member 'WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable::K2Node_CustomEvent_InDateTime' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable, CallFunc_BooleanAND_ReturnValue) == 0x000060, "Member 'WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable, CallFunc_Not_PreBool_ReturnValue) == 0x000061, "Member 'WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable, K2Node_Select_Default) == 0x000062, "Member 'WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable::K2Node_Select_Default' has a wrong offset!");

// Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetLimitTimer
// 0x0008 (0x0008 - 0x0000)
struct WBP_CommonToolTipText_Variable_C_SetLimitTimer final
{
public:
	struct FDateTime                              InDateTime;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CommonToolTipText_Variable_C_SetLimitTimer) == 0x000008, "Wrong alignment on WBP_CommonToolTipText_Variable_C_SetLimitTimer");
static_assert(sizeof(WBP_CommonToolTipText_Variable_C_SetLimitTimer) == 0x000008, "Wrong size on WBP_CommonToolTipText_Variable_C_SetLimitTimer");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_SetLimitTimer, InDateTime) == 0x000000, "Member 'WBP_CommonToolTipText_Variable_C_SetLimitTimer::InDateTime' has a wrong offset!");

// Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetTextAndDateTime
// 0x0028 (0x0028 - 0x0000)
struct WBP_CommonToolTipText_Variable_C_SetTextAndDateTime final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FDateTime                              DateTime;                                          // 0x0018(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                          bHideIfMinValue;                                   // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CommonToolTipText_Variable_C_SetTextAndDateTime) == 0x000008, "Wrong alignment on WBP_CommonToolTipText_Variable_C_SetTextAndDateTime");
static_assert(sizeof(WBP_CommonToolTipText_Variable_C_SetTextAndDateTime) == 0x000028, "Wrong size on WBP_CommonToolTipText_Variable_C_SetTextAndDateTime");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_SetTextAndDateTime, Text) == 0x000000, "Member 'WBP_CommonToolTipText_Variable_C_SetTextAndDateTime::Text' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_SetTextAndDateTime, DateTime) == 0x000018, "Member 'WBP_CommonToolTipText_Variable_C_SetTextAndDateTime::DateTime' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_SetTextAndDateTime, bHideIfMinValue) == 0x000020, "Member 'WBP_CommonToolTipText_Variable_C_SetTextAndDateTime::bHideIfMinValue' has a wrong offset!");

// Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetText
// 0x0018 (0x0018 - 0x0000)
struct WBP_CommonToolTipText_Variable_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_CommonToolTipText_Variable_C_SetText) == 0x000008, "Wrong alignment on WBP_CommonToolTipText_Variable_C_SetText");
static_assert(sizeof(WBP_CommonToolTipText_Variable_C_SetText) == 0x000018, "Wrong size on WBP_CommonToolTipText_Variable_C_SetText");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_SetText, InText) == 0x000000, "Member 'WBP_CommonToolTipText_Variable_C_SetText::InText' has a wrong offset!");

// Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.Set Emotion
// 0x0020 (0x0020 - 0x0000)
struct WBP_CommonToolTipText_Variable_C_Set_Emotion final
{
public:
	class FName                                   InId;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0008(0x0018)()
};
static_assert(alignof(WBP_CommonToolTipText_Variable_C_Set_Emotion) == 0x000008, "Wrong alignment on WBP_CommonToolTipText_Variable_C_Set_Emotion");
static_assert(sizeof(WBP_CommonToolTipText_Variable_C_Set_Emotion) == 0x000020, "Wrong size on WBP_CommonToolTipText_Variable_C_Set_Emotion");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_Set_Emotion, InId) == 0x000000, "Member 'WBP_CommonToolTipText_Variable_C_Set_Emotion::InId' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_Set_Emotion, CallFunc_Conv_NameToText_ReturnValue) == 0x000008, "Member 'WBP_CommonToolTipText_Variable_C_Set_Emotion::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");

// Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetWeaponSkin
// 0x0148 (0x0148 - 0x0000)
struct WBP_CommonToolTipText_Variable_C_SetWeaponSkin final
{
public:
	int32                                         InWeaponSkinId;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsTermLimited;                                   // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C97[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              InExpiryDateTime;                                  // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              LocalExpiryDateTime;                               // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsTermLimited;                                // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C98[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalWeaponSkinUniqueId;                           // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         LocalWeaponSkinId;                                 // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0037(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindItemMaster_bIsValid;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C99[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_FindItemMaster_ItemMaster;                // 0x0040(0x00D0)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C9A[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetItemText_ReturnValue;                  // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0128(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_CommonToolTipText_Variable_C_SetWeaponSkin) == 0x000008, "Wrong alignment on WBP_CommonToolTipText_Variable_C_SetWeaponSkin");
static_assert(sizeof(WBP_CommonToolTipText_Variable_C_SetWeaponSkin) == 0x000148, "Wrong size on WBP_CommonToolTipText_Variable_C_SetWeaponSkin");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_SetWeaponSkin, InWeaponSkinId) == 0x000000, "Member 'WBP_CommonToolTipText_Variable_C_SetWeaponSkin::InWeaponSkinId' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_SetWeaponSkin, InIsTermLimited) == 0x000004, "Member 'WBP_CommonToolTipText_Variable_C_SetWeaponSkin::InIsTermLimited' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_SetWeaponSkin, InExpiryDateTime) == 0x000008, "Member 'WBP_CommonToolTipText_Variable_C_SetWeaponSkin::InExpiryDateTime' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_SetWeaponSkin, LocalExpiryDateTime) == 0x000010, "Member 'WBP_CommonToolTipText_Variable_C_SetWeaponSkin::LocalExpiryDateTime' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_SetWeaponSkin, LocalIsTermLimited) == 0x000018, "Member 'WBP_CommonToolTipText_Variable_C_SetWeaponSkin::LocalIsTermLimited' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_SetWeaponSkin, LocalWeaponSkinUniqueId) == 0x000020, "Member 'WBP_CommonToolTipText_Variable_C_SetWeaponSkin::LocalWeaponSkinUniqueId' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_SetWeaponSkin, LocalWeaponSkinId) == 0x000030, "Member 'WBP_CommonToolTipText_Variable_C_SetWeaponSkin::LocalWeaponSkinId' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_SetWeaponSkin, Temp_byte_Variable) == 0x000034, "Member 'WBP_CommonToolTipText_Variable_C_SetWeaponSkin::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_SetWeaponSkin, Temp_byte_Variable_1) == 0x000035, "Member 'WBP_CommonToolTipText_Variable_C_SetWeaponSkin::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_SetWeaponSkin, Temp_bool_Variable) == 0x000036, "Member 'WBP_CommonToolTipText_Variable_C_SetWeaponSkin::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_SetWeaponSkin, K2Node_Select_Default) == 0x000037, "Member 'WBP_CommonToolTipText_Variable_C_SetWeaponSkin::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_SetWeaponSkin, CallFunc_FindItemMaster_bIsValid) == 0x000038, "Member 'WBP_CommonToolTipText_Variable_C_SetWeaponSkin::CallFunc_FindItemMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_SetWeaponSkin, CallFunc_FindItemMaster_ItemMaster) == 0x000040, "Member 'WBP_CommonToolTipText_Variable_C_SetWeaponSkin::CallFunc_FindItemMaster_ItemMaster' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_SetWeaponSkin, CallFunc_IsValid_ReturnValue) == 0x000110, "Member 'WBP_CommonToolTipText_Variable_C_SetWeaponSkin::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_SetWeaponSkin, CallFunc_GetItemText_ReturnValue) == 0x000118, "Member 'WBP_CommonToolTipText_Variable_C_SetWeaponSkin::CallFunc_GetItemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_SetWeaponSkin, CallFunc_Conv_StringToText_ReturnValue) == 0x000128, "Member 'WBP_CommonToolTipText_Variable_C_SetWeaponSkin::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_SetWeaponSkin, CallFunc_IsValid_ReturnValue_1) == 0x000140, "Member 'WBP_CommonToolTipText_Variable_C_SetWeaponSkin::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetRecipeDateTime
// 0x0030 (0x0030 - 0x0000)
struct WBP_CommonToolTipText_Variable_C_SetRecipeDateTime final
{
public:
	struct FDateTime                              DateTime;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(WBP_CommonToolTipText_Variable_C_SetRecipeDateTime) == 0x000008, "Wrong alignment on WBP_CommonToolTipText_Variable_C_SetRecipeDateTime");
static_assert(sizeof(WBP_CommonToolTipText_Variable_C_SetRecipeDateTime) == 0x000030, "Wrong size on WBP_CommonToolTipText_Variable_C_SetRecipeDateTime");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_SetRecipeDateTime, DateTime) == 0x000000, "Member 'WBP_CommonToolTipText_Variable_C_SetRecipeDateTime::DateTime' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_SetRecipeDateTime, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'WBP_CommonToolTipText_Variable_C_SetRecipeDateTime::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_SetRecipeDateTime, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'WBP_CommonToolTipText_Variable_C_SetRecipeDateTime::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetAdventureBoardBosstDateTime
// 0x0038 (0x0038 - 0x0000)
struct WBP_CommonToolTipText_Variable_C_SetAdventureBoardBosstDateTime final
{
public:
	bool                                          InLimited;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9C9B[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              InDateTime;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(WBP_CommonToolTipText_Variable_C_SetAdventureBoardBosstDateTime) == 0x000008, "Wrong alignment on WBP_CommonToolTipText_Variable_C_SetAdventureBoardBosstDateTime");
static_assert(sizeof(WBP_CommonToolTipText_Variable_C_SetAdventureBoardBosstDateTime) == 0x000038, "Wrong size on WBP_CommonToolTipText_Variable_C_SetAdventureBoardBosstDateTime");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_SetAdventureBoardBosstDateTime, InLimited) == 0x000000, "Member 'WBP_CommonToolTipText_Variable_C_SetAdventureBoardBosstDateTime::InLimited' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_SetAdventureBoardBosstDateTime, InDateTime) == 0x000008, "Member 'WBP_CommonToolTipText_Variable_C_SetAdventureBoardBosstDateTime::InDateTime' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_SetAdventureBoardBosstDateTime, CallFunc_GetTextFromAsset_ReturnValue) == 0x000010, "Member 'WBP_CommonToolTipText_Variable_C_SetAdventureBoardBosstDateTime::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_SetAdventureBoardBosstDateTime, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'WBP_CommonToolTipText_Variable_C_SetAdventureBoardBosstDateTime::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetCommunicationSettingMenuAchievement
// 0x0008 (0x0008 - 0x0000)
struct WBP_CommonToolTipText_Variable_C_SetCommunicationSettingMenuAchievement final
{
public:
	struct FDateTime                              InDateTime;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CommonToolTipText_Variable_C_SetCommunicationSettingMenuAchievement) == 0x000008, "Wrong alignment on WBP_CommonToolTipText_Variable_C_SetCommunicationSettingMenuAchievement");
static_assert(sizeof(WBP_CommonToolTipText_Variable_C_SetCommunicationSettingMenuAchievement) == 0x000008, "Wrong size on WBP_CommonToolTipText_Variable_C_SetCommunicationSettingMenuAchievement");
static_assert(offsetof(WBP_CommonToolTipText_Variable_C_SetCommunicationSettingMenuAchievement, InDateTime) == 0x000000, "Member 'WBP_CommonToolTipText_Variable_C_SetCommunicationSettingMenuAchievement::InDateTime' has a wrong offset!");

}

